#!/usr/bin/swift

import Foundation

let SourceRoot = "/Applications/Xcode.app"
let DestinationPath = "Xcode-Headers"
let ImportHeaderFilename = "Xcode-Headers.h"

let ClassDumpCommand = "class-dump"

let targetExtensions = [ "dylib", "framework", "xcplugin", "ideplugin", "dvtplugin", "gtplugin" ]

// MARK:

var allCreatedFilenames = [String]()
let fileManager = NSFileManager.defaultManager()

let group = dispatch_group_create()
let queue = dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_BACKGROUND, 0)

func dispatchAsync(block:()->()) {
    
    dispatch_group_async(group, queue, block)
}

func dispatchWait() {
    
    dispatch_group_wait(group, DISPATCH_TIME_FOREVER)
}

func createHeader(#sourcePath: String) {
    
    let createFilename = makeHeaderFilenameBy(sourcePath: sourcePath)
    
    let inputTargetPath = escapePath(sourcePath)
    let outputHeaderFilepath = escapePath(makeDestinationPathWith(filename: createFilename))
    
    let command = "\(ClassDumpCommand) \(inputTargetPath) > \(outputHeaderFilepath)"

    println(command)
    system(command)
    
    allCreatedFilenames += [createFilename]
}

func createImportHeader() {
	
	let quoteWord = "\""
	let lines = allCreatedFilenames.map { "#import \(quoteWord)\($0)\(quoteWord)\n" }
	
	let content = reduce(lines, "", +)
	let contentFilename = makeDestinationPathWith(filename: ImportHeaderFilename)
	
	content.writeToFile(contentFilename, atomically: true, encoding: NSUTF8StringEncoding, error: nil)
}

func escapePath(path: String) -> String {
    
    let quoteWord = "\""
    let escapedPath = path.stringByReplacingOccurrencesOfString("\(quoteWord)", withString: "\(quoteWord)", options: NSStringCompareOptions.LiteralSearch, range: nil)
    
    return "\(quoteWord)\(escapedPath)\(quoteWord)"
}

func getExtension(#path: String) -> String? {
    
    let pathString = path as NSString
    let pathExtension = pathString.pathExtension
    
    return countElements(pathExtension) > 0 ? pathExtension : nil
}

func isTargetExtension(#path:String) -> Bool {
    
    if let extname = getExtension(path: path) {

        return find(targetExtensions, extname) != nil
    }
    else {
        
        return false
    }
}

func makeHeaderFilenameBy(#sourcePath: String) -> String {

    let pickupName = { () -> String in
        
        let path = sourcePath
        
        if path.hasPrefix(SourceRoot) {
            
            let startIndex = advance(path.startIndex, countElements(SourceRoot) + 1)

            return path.substringFromIndex(startIndex)
        }
        else {
            
            return path
        }
    }
    
    let normalizedName = { () -> String in
        
        pickupName().stringByReplacingOccurrencesOfString("/", withString: "-", options: .LiteralSearch, range: nil)
    }
    
    return normalizedName() + ".h"
}

func makeDestinationPathWith(#filename: String) -> String {
	
	return "\(DestinationPath)/\(filename)"
}

func makeHeaderFilepathBy(#sourcePath: String) -> String {
    
    let headerFilename = makeHeaderFilenameBy(sourcePath: sourcePath)
    let headerPath = makeDestinationPathWith(filename: headerFilename)
    
    return headerPath
}

func isDirectory(#path: String) -> Bool {
    
    var isDirectory = ObjCBool(false)
    let isExists = fileManager.fileExistsAtPath(path, isDirectory: &isDirectory)
    
    return isExists && isDirectory
}

func getContentsOf(#path: String) -> [String] {
    
    if isDirectory(path: path) {
        
        return fileManager.contentsOfDirectoryAtPath(path, error: nil) as [String]
    }
    else {
        
        return []
    }
}

func generateHeaders(#path: String) {
    
    if isTargetExtension(path: path) {
        
        println("DEBUG: \(path)")
        dispatchAsync {
            
            createHeader(sourcePath: path)
        }
    }
    else {
    
        let contents = getContentsOf(path: path)
            
        for content in contents {
            
            generateHeaders(path: path.stringByAppendingPathComponent(content))
        }
    }
}

func prepareDestinationPath() {
    
    let path = DestinationPath
    
    if !isDirectory(path: path) {
        
        if !fileManager.createDirectoryAtPath(path, withIntermediateDirectories: true, attributes: nil, error: nil) {
            
            fatalError("failed to create a directory for destination.")
        }
    }
}

println("Start generating...")

prepareDestinationPath()
generateHeaders(path: SourceRoot)

dispatchWait()

createImportHeader()

println("Done.")

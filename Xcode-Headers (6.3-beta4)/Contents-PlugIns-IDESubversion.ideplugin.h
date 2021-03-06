//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark -

//
// File: /Applications/Xcode.app/Contents/PlugIns/IDESubversion.ideplugin/Contents/MacOS/IDESubversion
// UUID: 053510E2-0B4D-37D0-8B1A-5AF5FCE36859
//
//                           Arch: x86_64
//                Current version: 6751.0.0
//          Compatibility version: 1.0.0
//                 Source version: 6751.0.0.0.0
//       Minimum Mac OS X version: 10.9.0
//                    SDK version: 10.10.0
//
// Objective-C Garbage Collection: Unsupported
//

@protocol IDESourceControlProtocol <NSObject>
- (IDESourceControlOperation *)operationForRequest:(IDESourceControlRequest *)arg1;
- (BOOL)authenticationRequiredForRequest:(IDESourceControlRequest *)arg1;
@end

@protocol NSObject
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;
@property(readonly) unsigned long long hash;
- (struct _NSZone *)zone;
- (unsigned long long)retainCount;
- (id)autorelease;
- (oneway void)release;
- (id)retain;
- (BOOL)respondsToSelector:(SEL)arg1;
- (BOOL)conformsToProtocol:(Protocol *)arg1;
- (BOOL)isMemberOfClass:(Class)arg1;
- (BOOL)isKindOfClass:(Class)arg1;
- (BOOL)isProxy;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2;
- (id)performSelector:(SEL)arg1;
- (id)self;
- (Class)class;
- (BOOL)isEqual:(id)arg1;

@optional
@property(readonly, copy) NSString *debugDescription;
@end

@interface SVNController : NSObject <IDESourceControlProtocol>
{
}

- (id)operationForRequest:(id)arg1;
- (BOOL)authenticationRequiredForRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface SVNOperation : IDESourceControlTaskOperation
{
}

- (int)statusValueForRepositoryStringValue:(id)arg1;
- (int)statusValueForWorkingCopyStringValue:(id)arg1 isCopied:(BOOL)arg2;
- (unsigned long long)propertyStatusValueForWorkingCopyStringValue:(id)arg1;
- (id)defaultArguments;
- (void)sanitizeFilenames;
- (id)pathFromErrorMessage:(id)arg1;
- (id)errorFromErrorMessage:(id)arg1;
- (id)initWithRequest:(id)arg1;

@end

@interface SVNAddOperation : SVNOperation
{
}

- (id)initWithRequest:(id)arg1;

@end

@interface SVNBlameOperation : SVNOperation
{
    NSDateFormatter *_formatter;
}

- (void).cxx_destruct;
- (void)parseData;
- (id)initWithRequest:(id)arg1;

@end

@interface SVNCommitOperation : SVNOperation
{
}

- (void)parseData;
- (id)initWithRequest:(id)arg1;

@end

@interface SVNCurrentBranchOperation : SVNOperation
{
}

- (void)parseData;
- (id)initWithRequest:(id)arg1;

@end

@interface SVNCopyOperation : SVNOperation
{
}

- (id)initWithRequest:(id)arg1;

@end

@interface SVNMakeDirectoryOperation : SVNOperation
{
}

- (id)initWithRequest:(id)arg1;

@end

@interface SVNMergeOperation : SVNOperation
{
}

- (id)initWithRequest:(id)arg1;

@end

@interface SVNMoveOperation : SVNOperation
{
}

- (id)initWithRequest:(id)arg1;

@end

@interface SVNRemoveOperation : SVNOperation
{
}

- (id)initWithRequest:(id)arg1;

@end

@interface SVNResolveOperation : SVNOperation
{
}

- (id)initWithRequest:(id)arg1;

@end

@interface SVNRevertOperation : SVNOperation
{
}

- (id)initWithRequest:(id)arg1;

@end

@interface SVNPropSetOperation : SVNOperation
{
}

- (id)initWithRequest:(id)arg1;

@end

@interface SVNPropDelOperation : SVNOperation
{
}

- (id)initWithRequest:(id)arg1;

@end

@interface SVNPropGetOperation : SVNOperation
{
}

- (void)parseData;
- (id)initWithRequest:(id)arg1;

@end

@interface SVNIgnoreOperation : IDESourceControlOperation
{
    NSOperationQueue *_operationQueue;
}

@property(retain) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (void).cxx_destruct;
- (void)main;

@end

@interface SVNStatusOperation : SVNOperation
{
}

+ (void)setupFilePath:(id)arg1 asUnversionedWithDictionary:(id)arg2;
- (void)parseData;
- (id)initWithRequest:(id)arg1;

@end

@interface SVNSwitchOperation : SVNOperation
{
}

- (id)initWithRequest:(id)arg1;

@end

@interface SVNUpdateOperation : SVNOperation
{
}

- (id)initWithRequest:(id)arg1;

@end

@interface SVNDiffOperation : SVNOperation
{
}

- (void)parseData;
- (id)initWithRequest:(id)arg1;

@end

@interface SVNExportFileOperation : SVNOperation
{
    DVTFilePath *_exportedFilePath;
}

- (void).cxx_destruct;
- (void)parseData;
- (id)initWithRequest:(id)arg1;

@end

@interface SVNUpgradeOperation : IDESourceControlOperation
{
    NSOperationQueue *_operationQueue;
}

@property(retain) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (void).cxx_destruct;
- (void)main;

@end

@interface SVNUpgradeFilesOperation : SVNOperation
{
}

- (id)initWithRequest:(id)arg1;

@end

@interface SVNCleanUpOperation : SVNOperation
{
}

- (id)initWithRequest:(id)arg1;

@end

@interface SVNListOperation : SVNOperation
{
}

- (void)parseData;
- (id)initWithRequest:(id)arg1;

@end

@interface SVNCheckoutOperation : IDESourceControlOperation
{
    NSOperationQueue *_operationQueue;
}

@property(retain) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (void).cxx_destruct;
- (void)main;

@end

@interface SVNCheckoutFilesOperation : SVNOperation
{
}

- (void)parseData;
- (id)initWithRequest:(id)arg1;

@end

@interface SVNInfoOperation : SVNOperation
{
    NSDateFormatter *_formatter;
}

- (void).cxx_destruct;
- (void)parseData;
- (id)initWithRequest:(id)arg1;

@end

@interface SVNLogOperation : SVNOperation
{
    NSDateFormatter *_formatter;
}

- (void).cxx_destruct;
- (void)parseData;
- (unsigned long long)statusValueForRepositoryShortStringValue:(id)arg1;
- (id)initWithRequest:(id)arg1;

@end

@interface SVNImportOperation : SVNOperation
{
}

- (id)initWithRequest:(id)arg1;

@end


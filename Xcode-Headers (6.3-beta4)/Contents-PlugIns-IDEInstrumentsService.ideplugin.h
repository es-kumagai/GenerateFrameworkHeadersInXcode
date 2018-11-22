//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark -

//
// File: /Applications/Xcode.app/Contents/PlugIns/IDEInstrumentsService.ideplugin/Contents/MacOS/IDEInstrumentsService
// UUID: CDE1D468-655A-32C6-A315-168432E9873D
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
//                       Run path: @loader_path/../../../
//                               = /Applications/Xcode.app/Contents/PlugIns
//

@protocol IDEAnalysisToolService <NSObject>
+ (IDEAnalysisTool *)analysisToolWithIdentifier:(NSString *)arg1 platformIdentifier:(NSString *)arg2;
+ (NSArray *)analysisToolsForPlatformIdentifier:(NSString *)arg1;
@property(retain) IDELaunchParametersSnapshot *launchParameters;
@property(copy) IDERunDestination *runDestination;
@property(copy) DVTFilePath *runnableBuildProductPath;
@property(copy) DVTFilePath *runnableLocation;
@property(retain) IDEAnalysisTool *analysisTool;
- (IDEProfileOperation *)operationWithWorkingDirectory:(DVTFilePath *)arg1 workspaceFilePath:(DVTFilePath *)arg2 projectFilePath:(DVTFilePath *)arg3 outError:(id *)arg4;
- (void)setAttachRunnablePID:(int)arg1 applicationName:(NSString *)arg2;
- (id)initWithRunnableUTIType:(DVTFileDataType *)arg1;
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

@interface XRXcodeAnalysisService : NSObject <IDEAnalysisToolService>
{
    DVTFileDataType *_runnableUTIType;
    id _runnableLocation;
    DVTFilePath *_runnableBuildProductPath;
    IDERunDestination *_runDestination;
    int _pidForAttaching;
    NSString *_appNameForAttaching;
    IDEAnalysisTool *_currentTool;
    NSMutableDictionary *_currentToolForPlatformDict;
    IDEAnalysisTool *_analysisTool;
    IDELaunchParametersSnapshot *_launchParameters;
}

+ (id)_apppleInternalTemplatesPath;
+ (id)_homePrefsTemplatesPath;
+ (id)_instrumentsAppTemplatesPath;
+ (id)_platformsPath;
+ (id)_developerAppsPath;
+ (id)_analysisToolsForPlugin:(id)arg1 platform:(id)arg2;
+ (id)_analysisToolsForPlatform:(id)arg1;
+ (id)_analysisToolsDictForAllPlatforms;
+ (id)_analysisToolsAtPath:(id)arg1 type:(int)arg2;
+ (id)sharedPlatformToAnalysisToolsMap;
+ (id)_sharedGraphicsDetectiveTool;
+ (id)_anyPlatformID;
+ (id)_graphicsPerformanceDetectivePath;
+ (id)analysisToolWithIdentifier:(id)arg1 platformIdentifier:(id)arg2;
+ (id)analysisToolsForPlatformIdentifier:(id)arg1;
+ (void)addUniqueTools:(id)arg1 toArray:(id)arg2;
@property(copy) DVTFilePath *runnableLocation; // @synthesize runnableLocation=_runnableLocation;
@property(copy) DVTFilePath *runnableBuildProductPath; // @synthesize runnableBuildProductPath=_runnableBuildProductPath;
@property(copy) IDERunDestination *runDestination; // @synthesize runDestination=_runDestination;
@property(retain) IDELaunchParametersSnapshot *launchParameters; // @synthesize launchParameters=_launchParameters;
- (void).cxx_destruct;
- (void)setAttachRunnablePID:(int)arg1 applicationName:(id)arg2;
- (id)operationWithWorkingDirectory:(id)arg1 workspaceFilePath:(id)arg2 projectFilePath:(id)arg3 outError:(id *)arg4;
- (CDUnknownBlockType)_operationBlockWithWorkingDirectory:(id)arg1 workspaceFilePath:(id)arg2 projectFilePath:(id)arg3;
- (void)_launch:(id)arg1 WithConfigFile:(id)arg2;
- (id)_analysisAppPathForType:(int)arg1;
- (id)_instrumentsPath;
@property(retain) IDEAnalysisTool *analysisTool; // @synthesize analysisTool=_analysisTool;
- (id)_currentToolForPlatformDict;
- (id)_currentPlatformIdentifier;
- (id)initWithRunnableUTIType:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

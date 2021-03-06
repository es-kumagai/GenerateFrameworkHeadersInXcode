//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark -

//
// File: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
// UUID: BD623E27-FF1A-3B4B-8B2A-1497F36A8694
//
//                           Arch: x86_64
//                Current version: 291.0.0
//          Compatibility version: 1.0.0
//                 Source version: 291.0.0.0.0
//            Minimum iOS version: 8.2.0
//                    SDK version: 8.2.0
//
// Objective-C Garbage Collection: Unsupported
//

@protocol CLLocationManagerDelegate <NSObject>

@optional
- (void)locationManager:(CLLocationManager *)arg1 didVisit:(CLVisit *)arg2;
- (void)locationManager:(CLLocationManager *)arg1 didFinishDeferredUpdatesWithError:(NSError *)arg2;
- (void)locationManagerDidResumeLocationUpdates:(CLLocationManager *)arg1;
- (void)locationManagerDidPauseLocationUpdates:(CLLocationManager *)arg1;
- (void)locationManager:(CLLocationManager *)arg1 didStartMonitoringForRegion:(CLRegion *)arg2;
- (void)locationManager:(CLLocationManager *)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(CLLocationManager *)arg1 monitoringDidFailForRegion:(CLRegion *)arg2 withError:(NSError *)arg3;
- (void)locationManager:(CLLocationManager *)arg1 didFailWithError:(NSError *)arg2;
- (void)locationManager:(CLLocationManager *)arg1 didExitRegion:(CLRegion *)arg2;
- (void)locationManager:(CLLocationManager *)arg1 didEnterRegion:(CLRegion *)arg2;
- (void)locationManager:(CLLocationManager *)arg1 rangingBeaconsDidFailForRegion:(CLBeaconRegion *)arg2 withError:(NSError *)arg3;
- (void)locationManager:(CLLocationManager *)arg1 didRangeBeacons:(NSArray *)arg2 inRegion:(CLBeaconRegion *)arg3;
- (void)locationManager:(CLLocationManager *)arg1 didDetermineState:(long long)arg2 forRegion:(CLRegion *)arg3;
- (_Bool)locationManagerShouldDisplayHeadingCalibration:(CLLocationManager *)arg1;
- (void)locationManager:(CLLocationManager *)arg1 didUpdateHeading:(CLHeading *)arg2;
- (void)locationManager:(CLLocationManager *)arg1 didUpdateLocations:(NSArray *)arg2;
- (void)locationManager:(CLLocationManager *)arg1 didUpdateToLocation:(CLLocation *)arg2 fromLocation:(CLLocation *)arg3;
@end

@protocol CalDateRangeProtocol <NSObject>
- (NSDate *)endDate;
- (NSDate *)startDate;
@end

@protocol CalLogFormatter <NSObject>
- (NSString *)newFormattedString:(CalLogEnvelope *)arg1;
@end

@protocol CalLogWriter <NSObject>
@property(retain, nonatomic) id <CalLogFormatter> formatter;
- (_Bool)flush;
- (void)write:(CalLogEnvelope *)arg1;
- (id)initWithParameters:(NSDictionary *)arg1;
@end

@protocol NSCoding
- (id)initWithCoder:(NSCoder *)arg1;
- (void)encodeWithCoder:(NSCoder *)arg1;
@end

@protocol NSCopying
- (id)copyWithZone:(struct _NSZone *)arg1;
@end

@protocol NSMutableCopying
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
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
- (_Bool)respondsToSelector:(SEL)arg1;
- (_Bool)conformsToProtocol:(Protocol *)arg1;
- (_Bool)isMemberOfClass:(Class)arg1;
- (_Bool)isKindOfClass:(Class)arg1;
- (_Bool)isProxy;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2;
- (id)performSelector:(SEL)arg1;
- (id)self;
- (Class)class;
- (_Bool)isEqual:(id)arg1;

@optional
@property(readonly, copy) NSString *debugDescription;
@end

@protocol NSSecureCoding <NSCoding>
+ (_Bool)supportsSecureCoding;
@end

@interface CaliCalendarPRODID : NSObject
{
}

+ (id)copyString;

@end

@interface CalDescriptionBuilder : NSObject
{
    NSMutableDictionary *_descriptionUnderConstruction;
    NSString *_superclassDescription;
    _Bool _sortedByKey;
    NSString *_keyDelimiter;
}

@property(copy, nonatomic) NSString *keyDelimiter; // @synthesize keyDelimiter=_keyDelimiter;
@property(nonatomic) _Bool sortedByKey; // @synthesize sortedByKey=_sortedByKey;
@property(copy, nonatomic) NSString *superclassDescription; // @synthesize superclassDescription=_superclassDescription;
@property(retain, nonatomic) NSMutableDictionary *descriptionUnderConstruction; // @synthesize descriptionUnderConstruction=_descriptionUnderConstruction;
- (void).cxx_destruct;
- (id)build;
- (void)setKey:(id)arg1 withDispatchSource:(id)arg2;
- (void)setKey:(id)arg1 withDispatchQueue:(id)arg2;
- (void)setKey:(id)arg1 withTimeInterval:(double)arg2;
- (void)setKey:(id)arg1 withSize:(unsigned long long)arg2;
- (void)setKey:(id)arg1 withSelector:(SEL)arg2;
- (void)setKey:(id)arg1 withProcessID:(int)arg2;
- (void)setKey:(id)arg1 withPointerAddress:(const void *)arg2;
- (void)setKey:(id)arg1 withMachPort:(unsigned int)arg2;
- (void)setKey:(id)arg1 withClass:(Class)arg2;
- (void)setKey:(id)arg1 withUnsignedShort:(unsigned short)arg2;
- (void)setKey:(id)arg1 withUnsignedLongLong:(unsigned long long)arg2;
- (void)setKey:(id)arg1 withUnsignedLong:(unsigned long long)arg2;
- (void)setKey:(id)arg1 withUnsignedInteger:(unsigned long long)arg2;
- (void)setKey:(id)arg1 withUnsignedInt:(unsigned int)arg2;
- (void)setKey:(id)arg1 withUnsignedChar:(unsigned char)arg2;
- (void)setKey:(id)arg1 withShort:(short)arg2;
- (void)setKey:(id)arg1 withLongLong:(long long)arg2;
- (void)setKey:(id)arg1 withLong:(long long)arg2;
- (void)setKey:(id)arg1 withInteger:(long long)arg2;
- (void)setKey:(id)arg1 withInt:(int)arg2;
- (void)setKey:(id)arg1 withFloat:(float)arg2;
- (void)setKey:(id)arg1 withDouble:(double)arg2;
- (void)setKey:(id)arg1 withCharArray:(const char *)arg2;
- (void)setKey:(id)arg1 withChar:(BOOL)arg2;
- (void)setKey:(id)arg1 withBoolean:(_Bool)arg2;
- (void)setKey:(id)arg1 withString:(id)arg2;
- (void)setKey:(id)arg1 withSet:(id)arg2;
- (void)setKey:(id)arg1 withObject:(id)arg2;
- (void)setKey:(id)arg1 withEnumNumericalValue:(long long)arg2 andStringValue:(id)arg3;
- (void)setKey:(id)arg1 withDictionary:(id)arg2;
- (void)setKey:(id)arg1 withDate:(id)arg2;
- (void)setKey:(id)arg1 withArray:(id)arg2;
- (id)description;
- (id)initWithSuperclassDescription:(id)arg1;
- (id)init;

@end

@interface CalFoundationPreferences : NSObject
{
    CalPreferences *_preferences;
}

+ (id)shared;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *logSimpleConfiguration;
@property(readonly, nonatomic) NSString *logFilePath;
@property(readonly, nonatomic) _Bool logEmitUserNotifications;
@property(readonly, nonatomic) _Bool logAutoFlush;
- (id)init;

@end

@interface CalStopwatch : NSObject
{
    _Bool _isRunning;
    unsigned long long _lastStartTime;
    unsigned long long _elapsedTime;
    _Bool _hasValidElapsedTime;
    NSMutableDictionary *_events;
}

- (void).cxx_destruct;
- (double)markEventEnd:(id)arg1;
- (double)markEventSplit:(id)arg1;
- (void)markEventStart:(id)arg1;
- (id)elapsedTimeAsString:(int)arg1;
- (unsigned long long)elapsedTimeAsNumber:(int)arg1;
- (unsigned long long)elapsedTimeInNanoseconds;
- (void)reset;
- (void)stop;
- (void)start;
- (id)description;
- (id)init;

@end

@interface CalLogFileWriter : CalLogWriter
{
    NSString *_path;
    int _fileDescriptor;
    _Bool _fileDescriptorIsValid;
}

@property(nonatomic) _Bool fileDescriptorIsValid; // @synthesize fileDescriptorIsValid=_fileDescriptorIsValid;
@property(nonatomic) int fileDescriptor; // @synthesize fileDescriptor=_fileDescriptor;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (void)write:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithParameters:(id)arg1;

@end

@interface CalTimeIntervalLocalization : NSObject
{
}

+ (id)_localizedStringWithTimeString:(id)arg1 rawDuration:(double)arg2 options:(unsigned long long)arg3;
+ (id)_stringWithDurations:(id)arg1 timeUnits:(id)arg2;
+ (void)_calculateDurations:(id)arg1 timeUnits:(id)arg2 forDuration:(double)arg3 allDay:(_Bool)arg4 dayDuration:(id *)arg5 hourDuration:(id *)arg6 minuteDuration:(id *)arg7 secondDuration:(id *)arg8 abbreviate:(_Bool)arg9;
+ (void)_calculateDurations:(id)arg1 timeUnits:(id)arg2 forDuration:(double)arg3 allDay:(_Bool)arg4 abbreviate:(_Bool)arg5;
+ (id)_localizedTimeStringForAllDayEventDuration:(double)arg1 includeAlert:(_Bool)arg2;
+ (id)_localizedTimeStringForTimedEventDuration:(double)arg1 abbreviate:(_Bool)arg2;
+ (id)localizedStringForInterval:(double)arg1 withOptions:(unsigned long long)arg2;

@end

@interface CalLimitingQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_source;
}

- (void).cxx_destruct;
- (id)queue;
- (void)executeBlock;
- (id)initWithQueue:(id)arg1 andBlock:(CDUnknownBlockType)arg2;

@end

@interface CalLogNSLogWriter : CalLogWriter
{
}

- (void)write:(id)arg1;

@end

@interface CalLogUserNotificationWriter : CalLogWriter
{
}

- (void)write:(id)arg1;

@end

@interface CalAccumulatingQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_tags;
    NSMutableDictionary *_context;
    CDUnknownBlockType _block;
    float _delay;
}

- (void).cxx_destruct;
- (void)updateTagsAndExecuteBlock:(id)arg1 withContext:(id)arg2;
- (void)updateTagsAndExecuteBlock:(id)arg1;
- (_Bool)_hasQueuedUpBlock;
- (id)initWithQueue:(id)arg1 andBlock:(CDUnknownBlockType)arg2 delay:(float)arg3;
- (id)initWithQueue:(id)arg1 andBlock:(CDUnknownBlockType)arg2;

@end

@interface CalLogConfiguration : NSObject
{
    NSString *_name;
    NSMutableArray *_nodes;
}

@property(retain, nonatomic) NSMutableArray *nodes; // @synthesize nodes=_nodes;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)parseWriterDefinition:(id)arg1;
- (id)parseFilterDefinition:(id)arg1;
- (id)parseNodeDefinition:(id)arg1;
- (void)parseConfigurationDefinition:(id)arg1;
- (id)description;
- (id)initWithSimpleDefinition:(id)arg1;
- (id)initWithDetailedDefinition:(id)arg1;
- (id)init;

@end

@interface CalLogEnvelope : NSObject
{
    NSString *_logName;
    int _level;
    NSString *_message;
    int _processID;
    NSString *_processName;
    unsigned int _machPort;
    double _timestamp;
    NSString *_function;
}

@property(retain, nonatomic) NSString *function; // @synthesize function=_function;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) unsigned int machPort; // @synthesize machPort=_machPort;
@property(retain, nonatomic) NSString *processName; // @synthesize processName=_processName;
@property(nonatomic) int processID; // @synthesize processID=_processID;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) int level; // @synthesize level=_level;
@property(retain, nonatomic) NSString *logName; // @synthesize logName=_logName;
- (void).cxx_destruct;
- (id)description;
- (id)initWithLogName:(id)arg1 level:(int)arg2 message:(id)arg3;
- (id)init;

@end

@interface CalDefaults : NSObject
{
}

+ (id)thisProcess;
+ (id)shared;
+ (void)initialize;

@end

@interface CalLogFilter : NSObject
{
    int _minimumLevel;
    NSArray *_includes;
    NSArray *_excludes;
    NSArray *_includesAsRegexes;
    NSArray *_excludesAsRegexes;
    NSSet *_includesRegardlessOfLevel;
}

@property(copy, nonatomic) NSSet *includesRegardlessOfLevel; // @synthesize includesRegardlessOfLevel=_includesRegardlessOfLevel;
@property(retain, nonatomic) NSArray *excludesAsRegexes; // @synthesize excludesAsRegexes=_excludesAsRegexes;
@property(retain, nonatomic) NSArray *includesAsRegexes; // @synthesize includesAsRegexes=_includesAsRegexes;
@property(copy, nonatomic) NSArray *excludes; // @synthesize excludes=_excludes;
@property(copy, nonatomic) NSArray *includes; // @synthesize includes=_includes;
@property(nonatomic) int minimumLevel; // @synthesize minimumLevel=_minimumLevel;
- (void).cxx_destruct;
- (_Bool)proceedProcessingEnvelope:(id)arg1;
- (id)generateRegexesForPatterns:(id)arg1;
- (id)description;
- (id)init;

@end

@interface CalLogMaster : NSObject
{
    NSArray *_topLevelNodes;
    CalLogNode *_aslNode;
    CalLogNode *_rootConfigurationNode;
    CalLogNode *_standardOutNode;
    CalLogNode *_userNotificationNode;
    NSObject<OS_dispatch_group> *_dispatchGroup;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    int _notificationRegistrationToken;
    _Bool _hasValidNotificationRegistrationToken;
    _Bool _autoFlush;
}

+ (id)sharedLogMaster;
@property(nonatomic) _Bool autoFlush; // @synthesize autoFlush=_autoFlush;
@property(nonatomic) _Bool hasValidNotificationRegistrationToken; // @synthesize hasValidNotificationRegistrationToken=_hasValidNotificationRegistrationToken;
@property(nonatomic) int notificationRegistrationToken; // @synthesize notificationRegistrationToken=_notificationRegistrationToken;
@property(retain, nonatomic) CalLogNode *userNotificationNode; // @synthesize userNotificationNode=_userNotificationNode;
@property(retain, nonatomic) CalLogNode *rootConfigurationNode; // @synthesize rootConfigurationNode=_rootConfigurationNode;
@property(retain, nonatomic) CalLogNode *standardOutNode; // @synthesize standardOutNode=_standardOutNode;
@property(retain, nonatomic) CalLogNode *aslNode; // @synthesize aslNode=_aslNode;
@property(retain, nonatomic) NSArray *topLevelNodes; // @synthesize topLevelNodes=_topLevelNodes;
- (void).cxx_destruct;
- (void)processEnvelope:(id)arg1;
- (_Bool)flush;
- (id)findWhiteList;
- (int)findMinimumLevel;
- (void)registerForConfigUpdateNotifications;
- (void)reloadTopLevelNodes;
- (id)copyLegacyLoggingDefaultsConvertedToNamespaces;
- (void)configureRootConfigurationNode;
- (void)configureUserNotificationNode;
- (void)configureStandardOutNode;
- (void)configureASLNode;
- (void)loadPreferredConfiguration;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

@interface CalLogNode : NSObject
{
    NSMutableArray *_subnodes;
    NSObject<OS_dispatch_group> *_dispatchGroup;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CalLogFilter *_filter;
    id <CalLogWriter> _writer;
    NSMutableArray *_accumulator;
    unsigned long long _accumulatorBufferSize;
}

@property(retain, nonatomic) id <CalLogWriter> writer; // @synthesize writer=_writer;
@property(nonatomic) unsigned long long accumulatorBufferSize; // @synthesize accumulatorBufferSize=_accumulatorBufferSize;
@property(retain, nonatomic) NSMutableArray *accumulator; // @synthesize accumulator=_accumulator;
@property(retain, nonatomic) CalLogFilter *filter; // @synthesize filter=_filter;
@property(retain, nonatomic) NSMutableArray *subnodes; // @synthesize subnodes=_subnodes;
- (void).cxx_destruct;
- (void)processEnvelope:(id)arg1;
- (int)minimumLevelOfNodeTree;
- (id)allSubnodes;
- (void)removeSubnode:(id)arg1;
- (void)addSubnode:(id)arg1;
- (_Bool)flush;
- (void)flushAccumulator;
- (void)clearAccumulator;
- (id)init;

@end

@interface CalLogBasicTextFormatter : NSObject <CalLogFormatter>
{
    _Bool _includeFunction;
    _Bool _includeLevel;
    _Bool _includeLogName;
    _Bool _includeMessage;
    _Bool _includeProcessID;
    _Bool _includeProcessName;
    _Bool _includeMachPort;
    _Bool _includeTimestamp;
    _Bool _includeEnvelopePartNames;
    _Bool _useTinyEnvelopePartNames;
    _Bool _useCompactForm;
    _Bool _usePrettyTimestamp;
    NSDateFormatter *_dateFormatter;
}

@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(nonatomic) _Bool usePrettyTimestamp; // @synthesize usePrettyTimestamp=_usePrettyTimestamp;
@property(nonatomic) _Bool useCompactForm; // @synthesize useCompactForm=_useCompactForm;
@property(nonatomic) _Bool useTinyEnvelopePartNames; // @synthesize useTinyEnvelopePartNames=_useTinyEnvelopePartNames;
@property(nonatomic) _Bool includeEnvelopePartNames; // @synthesize includeEnvelopePartNames=_includeEnvelopePartNames;
@property(nonatomic) _Bool includeTimestamp; // @synthesize includeTimestamp=_includeTimestamp;
@property(nonatomic) _Bool includeMachPort; // @synthesize includeMachPort=_includeMachPort;
@property(nonatomic) _Bool includeProcessName; // @synthesize includeProcessName=_includeProcessName;
@property(nonatomic) _Bool includeProcessID; // @synthesize includeProcessID=_includeProcessID;
@property(nonatomic) _Bool includeMessage; // @synthesize includeMessage=_includeMessage;
@property(nonatomic) _Bool includeLogName; // @synthesize includeLogName=_includeLogName;
@property(nonatomic) _Bool includeLevel; // @synthesize includeLevel=_includeLevel;
@property(nonatomic) _Bool includeFunction; // @synthesize includeFunction=_includeFunction;
- (void).cxx_destruct;
- (id)newFormattedString:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface CalFileSensor : NSObject
{
    NSString *_path;
    int _type;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_source;
    CDUnknownBlockType _eventBlock;
    _Bool _started;
}

+ (id)copyFileSensorTypeAsString:(int)arg1;
+ (unsigned long long)_maskForFileSensorType:(int)arg1;
@property(nonatomic) _Bool started; // @synthesize started=_started;
@property(copy, nonatomic) CDUnknownBlockType eventBlock; // @synthesize eventBlock=_eventBlock;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (void)stop;
- (void)start;
- (id)description;
- (void)dealloc;
- (id)initWithPath:(id)arg1 andType:(int)arg2;
- (id)init;

@end

@interface CalSignalSensor : NSObject
{
    NSObject<OS_dispatch_source> *_signalSource;
    int _signal;
    CDUnknownBlockType _fireBlock;
}

@property(copy, nonatomic) CDUnknownBlockType fireBlock; // @synthesize fireBlock=_fireBlock;
@property(nonatomic) int signal; // @synthesize signal=_signal;
- (void).cxx_destruct;
- (void)_shutDownSource;
- (void)stopSensor;
- (void)startSensor;
- (id)description;
- (void)dealloc;
- (id)initWithSignal:(int)arg1;

@end

@interface CalLogXMLFormatter : NSObject <CalLogFormatter>
{
    _Bool _shouldPrettyPrint;
    _Bool _useTinyElementNames;
}

@property(nonatomic) _Bool useTinyElementNames; // @synthesize useTinyElementNames=_useTinyElementNames;
@property(nonatomic) _Bool shouldPrettyPrint; // @synthesize shouldPrettyPrint=_shouldPrettyPrint;
- (id)newFormattedString:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface CalLogWriter : NSObject <CalLogWriter>
{
    id <CalLogFormatter> _formatter;
}

@property(retain, nonatomic) id <CalLogFormatter> formatter; // @synthesize formatter=_formatter;
- (void).cxx_destruct;
- (_Bool)flush;
- (void)write:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithParameters:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface CalMessageTracer : NSObject
{
}

+ (void)logError:(id)arg1 message:(id)arg2 domain:(id)arg3;
+ (void)logError:(id)arg1 message:(id)arg2 domain:(id)arg3 uid:(id)arg4;
+ (void)logException:(id)arg1 message:(id)arg2 domain:(id)arg3;
+ (void)log:(id)arg1 domain:(id)arg2 signature:(id)arg3 result:(int)arg4;
+ (void)log:(id)arg1 domain:(id)arg2 signature:(id)arg3 result:(int)arg4 value:(id)arg5;
+ (void)log:(id)arg1 domain:(id)arg2 signature:(id)arg3 result:(int)arg4 value:(id)arg5 summarize:(_Bool)arg6;
+ (void)log:(id)arg1 domain:(id)arg2 signature:(id)arg3 result:(int)arg4 value:(id)arg5 value2:(id)arg6 uid:(id)arg7;
+ (void)log:(id)arg1 domain:(id)arg2 signature:(id)arg3 result:(int)arg4 value:(id)arg5 value2:(id)arg6 value3:(id)arg7 uid:(id)arg8 uid2:(id)arg9 wakeState:(id)arg10;
+ (void)log:(id)arg1 domain:(id)arg2 signature:(id)arg3 signature2:(id)arg4 summarize:(_Bool)arg5;
+ (void)log:(id)arg1 domain:(id)arg2 signature:(id)arg3 summarize:(_Bool)arg4;
+ (void)log:(id)arg1 domain:(id)arg2 summarize:(_Bool)arg3;
+ (void)traceWithDomain:(id)arg1 value:(id)arg2 summarize:(_Bool)arg3;
+ (void)traceWithDomain:(id)arg1 signature:(id)arg2 summarize:(_Bool)arg3;
+ (void)traceWithDomain:(id)arg1 signature:(id)arg2 result:(int)arg3;
+ (void)traceWithDomain:(id)arg1 signature:(id)arg2 signature2:(id)arg3 summarize:(_Bool)arg4;
+ (void)log:(id)arg1 domain:(id)arg2 signature:(id)arg3 signature2:(id)arg4 result:(int)arg5 value:(id)arg6 value2:(id)arg7 value3:(id)arg8 uid:(id)arg9 uid2:(id)arg10 wakeState:(id)arg11 summarize:(_Bool)arg12;

@end

@interface CalMemorySensor : NSObject
{
    unsigned long long _interval;
    NSObject<OS_dispatch_source> *_timer;
    unsigned long long _usage;
    CDUnknownBlockType _fireBlock;
}

@property(copy, nonatomic) CDUnknownBlockType fireBlock; // @synthesize fireBlock=_fireBlock;
@property(readonly, nonatomic) unsigned long long usage; // @synthesize usage=_usage;
- (void).cxx_destruct;
- (void)dealloc;
- (void)defaultMessageTraceForApp:(id)arg1;
- (void)_monitorMemory;
- (void)stopMonitoringMemory;
- (void)startMonitoringMemory;
- (void)_setupTimer;
- (id)init;
- (id)initWithMonitorInterval:(unsigned long long)arg1;

@end

@interface CalWellKnownPaths : NSObject
{
}

+ (id)calendarClientIdConflictsPath;
+ (id)calendarSyncChangesPath;
+ (id)eventsPendingChangesPath;
+ (id)temporaryFilesPath;
+ (id)calendarCachePath;
+ (id)calendarsFolderPath;
+ (id)mailInvitationDropPath;
+ (id)calendarFileHandlerPath;
+ (_Bool)checkOrCreatePath:(id)arg1;
+ (void)resetPaths;
+ (id)realHomeDirectoryPath;
+ (void)initialize;

@end

@interface CalPreferences : NSObject
{
    NSString *_domain;
    NSMutableSet *_registeredNotificationsToReflect;
}

- (void).cxx_destruct;
- (void)_preferenceChangedInternally:(id)arg1;
- (void)_preferenceChangedExternally:(id)arg1;
- (void)_synchronizePreferences;
- (void)setValueForPreference:(id)arg1 value:(id)arg2 notificationName:(id)arg3;
- (id)getValueForPreference:(id)arg1 expectedClass:(Class)arg2;
- (void)setBooleanPreference:(id)arg1 value:(_Bool)arg2 notificationName:(id)arg3;
- (_Bool)getBooleanPreference:(id)arg1 defaultValue:(_Bool)arg2;
- (void)unregisterReflectionForPreferenceWithNotificationName:(id)arg1;
- (void)registerReflectionForPreferenceWithNotificationName:(id)arg1;
- (void)dealloc;
- (id)initWithDomain:(id)arg1;
- (id)init;

@end

@interface CalDateRange : NSObject <NSCopying, CalDateRangeProtocol, NSSecureCoding>
{
    NSDate *_startDate;
    NSDate *_endDate;
}

+ (_Bool)supportsSecureCoding;
+ (id)rangeByExpandingRange:(id)arg1 direction:(long long)arg2 duration:(double)arg3;
+ (id)rangeByExpandingRange:(id)arg1 direction:(long long)arg2 multiplier:(unsigned long long)arg3;
+ (id)rangeWithRange:(id)arg1;
+ (id)rangeWithStartDate:(id)arg1 duration:(double)arg2;
+ (id)rangeWithStartDate:(id)arg1 endDate:(id)arg2;
@property(retain) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain) NSDate *startDate; // @synthesize startDate=_startDate;
- (void).cxx_destruct;
- (id)midnightsForRangeInTimeZoneString:(id)arg1;
- (id)_calculateMidnightsInCalendar:(id)arg1;
- (id)midpoint;
- (id)briefDescription;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)subtractRange:(id)arg1;
- (id)unionRange:(id)arg1;
- (id)intersectionWithRange:(id)arg1;
- (_Bool)intersectsRangeWithStartDate:(id)arg1 endDate:(id)arg2 allowSinglePointIntersection:(_Bool)arg3;
- (_Bool)intersectsRange:(id)arg1 allowSinglePointIntersection:(_Bool)arg2;
- (_Bool)intersectsRange:(id)arg1;
- (_Bool)containsRange:(id)arg1;
- (_Bool)containsDate:(id)arg1;
- (void)setStartDate:(id)arg1 duration:(double)arg2;
- (void)setStartDate:(id)arg1 endDate:(id)arg2;
- (void)setDuration:(double)arg1;
@property(readonly, nonatomic) double duration;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isValid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithStartDate:(id)arg1 duration:(double)arg2;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

@interface CalDisjointDateRange : NSObject <NSCopying, NSSecureCoding>
{
    NSMutableSet *_distinctRanges;
}

+ (_Bool)supportsSecureCoding;
+ (id)disjointRangeWithSingleRange:(id)arg1;
+ (id)disjointRangeWithDistinctRanges:(id)arg1;
@property(copy, nonatomic) NSMutableSet *distinctRanges; // @synthesize distinctRanges=_distinctRanges;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)subtractDisjointRange:(id)arg1;
- (id)subtractRange:(id)arg1;
- (id)addDisjointRange:(id)arg1;
- (id)addRange:(id)arg1;
- (_Bool)containsRange:(id)arg1;
- (_Bool)containsDate:(id)arg1;
- (double)totalDuration;
- (id)sortedDistinctRanges;
- (id)initWithDistinctRanges:(id)arg1;

@end

@interface CalLogASLWriter : CalLogWriter
{
    struct __asl_object_s *log_client;
}

+ (id)aslNamespaces;
- (void)write:(id)arg1;
- (int)aslLevelForLogLevel:(int)arg1;
- (void)_configureASLNamespaces;
- (void)_configureASLClient;
- (void)dealloc;
- (id)initWithParameters:(id)arg1;

@end

@interface CalMeCard : NSObject <NSSecureCoding>
{
    NSString *_displayName;
    NSArray *_emailAddresses;
    NSString *_uniqueID;
    long long _version;
}

+ (id)cardFromPath:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property long long version; // @synthesize version=_version;
@property(readonly, retain) NSString *uniqueID; // @synthesize uniqueID=_uniqueID;
@property(readonly, retain) NSArray *emailAddresses; // @synthesize emailAddresses=_emailAddresses;
@property(readonly, retain) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;
- (id)description;
- (_Bool)writeToPath:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToMeCard:(id)arg1;
- (id)preferredEmailAddress;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisplayName:(id)arg1 emailAddresses:(id)arg2 uniqueID:(id)arg3;

@end

@interface CalNWideQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

- (void).cxx_destruct;
- (void)executeBlock:(CDUnknownBlockType)arg1;
- (id)initWithSerialQueue:(id)arg1 andWidth:(unsigned long long)arg2;

@end

@interface CalLocation : NSObject <NSSecureCoding>
{
    CLLocation *_location;
    NSString *_address;
    NSString *_title;
    NSString *_displayName;
    NSString *_abURLString;
    CLPlacemark *_placemark;
    _Bool _isCurrentLocation;
    double _radius;
    NSString *_routeType;
    int _type;
}

+ (long long)routingModeEnumForCalRouteType:(id)arg1;
+ (id)routeTypeStringForCalLocationRoutingMode:(long long)arg1;
+ (id)fullDisplayStringWithTitle:(id)arg1 address:(id)arg2;
+ (id)coordinatesFromGeoURLString:(id)arg1;
+ (id)geoURLStringFromCoordinates:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(copy) NSString *routeType; // @synthesize routeType=_routeType;
@property int type; // @synthesize type=_type;
@property(retain) CLPlacemark *placemark; // @synthesize placemark=_placemark;
@property(copy) NSString *abURLString; // @synthesize abURLString=_abURLString;
@property(copy) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy) NSString *title; // @synthesize title=_title;
@property(copy) NSString *address; // @synthesize address=_address;
- (void).cxx_destruct;
- (id)geoURLString;
- (id)fullTitleAndAddressString;
- (id)displayString;
@property(readonly, nonatomic) _Bool isCurrentLocation;
- (id)description;
- (double)distanceFromLocation:(id)arg1;
- (id)typeString;
@property(nonatomic) double radius; // @synthesize radius=_radius;
@property(copy, nonatomic) CLLocation *location;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

@interface CalRoute : NSObject <NSSecureCoding>
{
    CalLocation *_start;
    CalLocation *_end;
    double _duration;
    NSString *_route;
}

+ (_Bool)supportsSecureCoding;
@property(copy) NSString *route; // @synthesize route=_route;
@property double duration; // @synthesize duration=_duration;
@property(retain) CalLocation *end; // @synthesize end=_end;
@property(retain) CalLocation *start; // @synthesize start=_start;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;

@end

@interface CalLocationManager : NSObject
{
}

+ (void)_loadMapKit;
+ (void)strictGeocodeString:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
+ (void)placemarkForAddress:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
+ (void)placemarkForLocation:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
+ (void)currentLocationWithCompletionBlock:(CDUnknownBlockType)arg1;

@end

@interface CalLocationManagerDelegate : NSObject <CLLocationManagerDelegate>
{
    NSObject<OS_dispatch_source> *_timer;
    NSObject<OS_dispatch_queue> *_queue;
    CLLocation *_currentLocation;
    CDUnknownBlockType _completionBlock;
    _Bool _didFinish;
}

@property _Bool didFinish; // @synthesize didFinish=_didFinish;
@property(copy) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain) CLLocation *currentLocation; // @synthesize currentLocation=_currentLocation;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didFinishLocationLookupWithLocation:(id)arg1 error:(id)arg2;
- (void)timeout;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3;
- (void)stopTimer;
- (void)startTimer;
- (id)initWithQueue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface NSObject (CalClassAdditions)
- (void)performBlockOnMainThreadSynchronously:(CDUnknownBlockType)arg1;
- (_Bool)isNull;
- (id)CalClassName;
@end

@interface NSCache (CalClassAdditions_NSCache)
- (id)CALobjectForKey:(id)arg1 calculatedWithBlock:(CDUnknownBlockType)arg2;
@end

@interface NSDate (CalClassAdditions)
+ (id)nextRoundedHour;
+ (id)dateWithDatePartFromDate:(id)arg1 timePartFromDate:(id)arg2 inCalendar:(id)arg3;
+ (id)CalDateForEndOfTomorrow;
+ (id)CalDateForBeginningOfTomorrow;
+ (id)_tomorrowComponents;
+ (id)CalDateForEndOfToday;
+ (id)CalDateForBeginningOfToday;
+ (id)_todayComponents;
+ (id)_nowComponents;
+ (id)CalDateForNow;
- (id)timeStringAlwaysIncludeMinutes:(_Bool)arg1;
- (id)_stringWithUseAbbreviatedFormats:(_Bool)arg1 lowerCase:(_Bool)arg2;
- (id)localizedRelativeDateStringShortened:(_Bool)arg1;
- (id)localizedWeekNumber;
- (id)localizedDateStringWithTemplate:(id)arg1;
- (id)localizedWeekdayMonthDayStringShortened:(_Bool)arg1;
- (id)localizedWeekdayMonthYearStringShortened:(_Bool)arg1;
- (id)localizedWeekdayMonthDayYearStringShortened:(_Bool)arg1;
- (id)localizedYearMonthAndDayStringShortened:(_Bool)arg1;
- (id)localizedMonthAndDayStringShortened:(_Bool)arg1;
- (id)localizedMonthAndYearStringShortened:(_Bool)arg1;
- (id)localizedMonthShortened:(_Bool)arg1;
- (void)printComparisonToDate:(id)arg1;
- (id)dateRoundedToStartOfNextDayInCalendar:(id)arg1;
- (id)dateRoundedToHourOnSameDayInCalendar:(id)arg1;
- (id)dateRoundedToNearestFifteenMinutesInCalendar:(id)arg1;
- (_Bool)isTodayInCalendar:(id)arg1;
- (_Bool)isAfterOrSameDayAsDate:(id)arg1 inCalendar:(id)arg2;
- (_Bool)isBeforeOrSameDayAsDate:(id)arg1 inCalendar:(id)arg2;
- (_Bool)isBeforeDayForDate:(id)arg1 inCalendar:(id)arg2;
- (_Bool)isEqualToDateIgnoringTimeComponents:(id)arg1 inCalendar:(id)arg2;
- (_Bool)isSameYearAsDate:(id)arg1 inCalendar:(id)arg2;
- (_Bool)isSameMonthAsDate:(id)arg1 inCalendar:(id)arg2;
- (_Bool)isSameDayAsDate:(id)arg1 inCalendar:(id)arg2;
- (long long)compareDateIgnoringTimeComponents:(id)arg1 inCalendar:(id)arg2;
- (_Bool)isBeforeDate:(id)arg1;
- (_Bool)isAfterDate:(id)arg1;
- (id)roundToCurrentYearInCalendar:(id)arg1;
- (id)roundToCurrentMonthInCalendar:(id)arg1;
- (id)roundToCurrentMondayInCalendar:(id)arg1;
- (id)roundToCurrentWeekInCalendar:(id)arg1 withFirstWeekdayIndex:(long long)arg2;
- (id)roundToCurrentDayInCalendar:(id)arg1;
- (id)roundSecondsDownInCalendar:(id)arg1;
- (id)dateByAddingYears:(long long)arg1 inCalendar:(id)arg2;
- (id)dateByAddingMonths:(long long)arg1 inCalendar:(id)arg2;
- (id)dateByAddingWeeks:(long long)arg1 inCalendar:(id)arg2;
- (id)dateByAddingDays:(long long)arg1 inCalendar:(id)arg2;
- (id)dateByAddingHours:(long long)arg1 inCalendar:(id)arg2;
- (id)dateByAddingMinutes:(long long)arg1 inCalendar:(id)arg2;
- (id)dateRemovingTimeComponentsInCalendar:(id)arg1;
- (long long)secondInCalendar:(id)arg1;
- (long long)minuteInCalendar:(id)arg1;
- (long long)hourInCalendar:(id)arg1;
- (long long)weekdayInCalendar:(id)arg1;
- (long long)dayInCalendar:(id)arg1;
- (long long)weekInCalendar:(id)arg1;
- (long long)monthInCalendar:(id)arg1;
- (long long)yearInCalendar:(id)arg1;
- (id)dateOnlyByTranslatingFrom:(id)arg1 toCalendar:(id)arg2;
- (id)timeOnlyComponentsInCalendar:(id)arg1;
- (id)dateOnlyComponentsInCalendar:(id)arg1;
- (id)allComponentsInCalendar:(id)arg1;
- (_Bool)CalIsAfterOrSameAsDate:(id)arg1;
- (_Bool)CalIsAfterDate:(id)arg1;
- (_Bool)CalIsBeforeOrSameAsDate:(id)arg1;
- (_Bool)CalIsBeforeDate:(id)arg1;
- (_Bool)CalIsBetweenStartDate:(id)arg1 endDate:(id)arg2;
@end

@interface NSDate (EventAdditions)
+ (long long)daysSpannedFromStartDate:(id)arg1 toEndDate:(id)arg2 allDay:(_Bool)arg3 inCalendar:(id)arg4;
@end

@interface NSString (CalClassAdditions)
+ (id)stringWithFileSystemRepresentation:(const char *)arg1;
+ (id)stringWithContentsOfFile:(id)arg1 usingEncoding:(unsigned long long)arg2;
+ (id)ellipsisString;
+ (id)_phoneURLScheme;
- (id)stringByReplacingCharactersInSet:(id)arg1 withString:(id)arg2;
- (id)stringByRemovingCharactersInSet:(id)arg1;
- (id)stringByTrimmingWhitespaceAndRemovingNewlines;
- (id)CalSafeHFSPathComponentName;
- (id)appendSlashIfNeeded;
- (id)removeSlashIfNeeded;
- (id)safeFilename;
- (id)searchAndReplaceString:(id)arg1 withString:(id)arg2;
- (id)unquote;
- (id)quote;
- (id)trimWhiteSpace;
- (id)trimCommas;
- (id)trimFirstComma;
- (id)trimFinalComma;
- (id)trimChar:(unsigned short)arg1;
- (id)trimFirstChar:(unsigned short)arg1;
- (id)trimFinalChar:(unsigned short)arg1;
- (_Bool)isPathToICalTruthFile;
- (_Bool)isPathToICalBookmark;
- (_Bool)isPathToBackupFile;
- (_Bool)isPathToICalData;
- (_Bool)isPathToVCalData;
- (_Bool)isPathToAppleScript;
- (id)stringByDecodingSlashes;
- (id)stringByEncodingSlashes;
- (_Bool)isEqualAsURL:(id)arg1;
- (id)CalAddressComment;
- (id)CalUncommentedAddress;
- (id)_phoneNumberDetector;
- (id)phoneURL;
- (_Bool)isPhoneNumber;
- (id)radarLink;
- (_Bool)isAddressBookURL;
- (_Bool)isMailURL;
- (id)stringRemovingMailto;
- (id)stringAddingMailto;
- (id)hostFromEmail;
- (id)userFromEmail;
- (_Bool)resemblesEmailAddress;
- (_Bool)hasMailto;
- (_Bool)isEqualToStringCaseInsensitive:(id)arg1;
- (_Bool)containsCaseAndDiacriticInsensitive:(id)arg1;
- (_Bool)containsCaseInsensitive:(id)arg1;
- (_Bool)hasSuffixCaseInsensitive:(id)arg1;
- (_Bool)hasPrefixCaseInsensitive:(id)arg1;
- (id)stringByRemovingLastPathComponent;
- (id)stringByURLUnescapingAllReservedCharacters;
- (id)stringByURLEscapingAllReservedCharacters;
- (id)stringByURLQuotingPaths;
- (id)stringByURLQuoting;
- (id)stringByURLUnquoting;
@end

@interface NSMutableString (CalClassAdditions)
- (void)searchAndReplaceInString:(id)arg1 withString:(id)arg2;
- (void)replaceOccurrencesOfString:(id)arg1 withString:(id)arg2;
@end

@interface NSString (CalWellKnownPaths)
- (id)stringByExpandingTildeToNonSandboxHome;
@end

@interface NSDictionary (CalClassAdditions)
- (id)CalMutableRecursiveCopy;
- (id)filteredDictionaryPassingTest:(CDUnknownBlockType)arg1;
- (_Bool)CalHasKeyIn:(id)arg1;
- (id)mutableCopyWithElementsCopy;
@end

@interface NSMutableDictionary (CalClassAdditions)
- (id)CALsafeObjectForKey:(id)arg1 calculatedWithBlock:(CDUnknownBlockType)arg2;
@end

@interface NSSet (CalClassAdditions)
+ (id)intersectionOfSet:(id)arg1 withSet:(id)arg2;
- (id)CalMutableRecursiveCopy;
- (id)allObjectsWithClass:(Class)arg1;
@end

@interface NSArray (CalClassAdditions)
+ (id)arrayOfSetsBySplitting:(id)arg1 batchSize:(unsigned long long)arg2;
- (id)CalMutableRecursiveCopy;
- (_Bool)CalContainsObjectIdenticalTo:(id)arg1;
- (id)allObjectsWithClass:(Class)arg1;
@end

@interface NSMutableArray (CalClassAdditions)
+ (id)nonRetainingArray;
- (void)removeAllObjectsWithClass:(Class)arg1;
@end

@interface NSURL (CalClassAdditions)
+ (id)davCompatibleFilenameForFilename:(id)arg1;
+ (id)URLWithAddressBookUID:(id)arg1;
- (id)hostWithoutWWW;
- (_Bool)isEqualToURLIgnoringScheme:(id)arg1;
- (_Bool)compareToLocalURL:(id)arg1;
- (_Bool)compareToLocalString:(id)arg1;
- (_Bool)isOnRemoteFileSystem;
- (id)unquotedPassword;
- (id)pathDecodedAndWithoutTrailingSlashRemoved;
- (id)pathWithoutTrailingRemovingSlash;
- (_Bool)isEqualToURL:(id)arg1;
- (id)serverURL;
- (id)initWithScheme:(id)arg1 host:(id)arg2 port:(int)arg3 path:(id)arg4;
- (id)lastPathComponent;
- (id)URLWithUsername:(id)arg1 withPassword:(id)arg2;
- (id)queryParameters;
- (id)initWithCalDirtyString:(id)arg1;
@end

@interface NSDateComponents (CalClassAdditions)
+ (id)componentForYears:(long long)arg1;
+ (id)componentForMonths:(long long)arg1;
+ (id)componentForWeeks:(long long)arg1;
+ (id)componentForDays:(long long)arg1;
+ (id)componentForHours:(long long)arg1;
+ (id)componentForMinutes:(long long)arg1;
- (_Bool)isSameYearAsComponents:(id)arg1;
- (_Bool)isSameMonthAsComponents:(id)arg1;
- (_Bool)isSameDayAsComponents:(id)arg1;
- (id)representedDate;
@end

@interface NSCalendar (CalClassAdditions)
+ (id)overlayCalendarForCalendarIdentifier:(id)arg1 timezone:(id)arg2;
+ (id)CalCalendarWithUnsanitizedCalendarIdentifier:(id)arg1;
+ (id)sharedAutoupdatingCurrentCalendar;
+ (id)CalGregorianCalendarForTimeZone:(id)arg1;
+ (id)CalGregorianGMTCalendar;
- (id)CalOccurrencesForBirthday:(id)arg1 inDateRange:(id)arg2;
- (id)CalDateFromComponents:(id)arg1 inTimeZone:(id)arg2;
- (_Bool)dateIsFirstOfYear:(id)arg1;
- (_Bool)dateIsFirstOfMonth:(id)arg1;
- (long long)daysInMonthContainingDate:(id)arg1;
- (long long)calendarDaysFromDate:(id)arg1 toDate:(id)arg2;
- (id)dateBySanityCheckingDateRoundedToDay:(id)arg1;
- (long long)secondsInDay;
- (long long)secondsInMinute;
- (long long)minutesInHour;
- (long long)hoursInDay;
- (long long)daysInWeek;
- (long long)monthsInYearForDate:(id)arg1;
@end

@interface NSTimeZone (CalClassAdditions)
- (_Bool)isUTC;
- (_Bool)isEquivalentTo:(id)arg1;
- (id)descriptionForDate:(id)arg1;
@end

@interface NSDateFormatter (CalClassAdditions)
+ (id)CalSharedDateFormatter;
@end


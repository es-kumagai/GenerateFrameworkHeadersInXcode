//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark -

//
// File: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SyncedDefaults.framework/SyncedDefaults
// UUID: A1444711-1538-3278-9723-8B0AE449BE64
//
//                           Arch: x86_64
//                Current version: 1.0.0
//          Compatibility version: 1.0.0
//                 Source version: 207.2.0.0.0
//            Minimum iOS version: 8.2.0
//                    SDK version: 8.2.0
//
// Objective-C Garbage Collection: Unsupported
//

__attribute__((visibility("hidden")))
@interface SYDClient : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_connection;
    NSString *_bundleIdentifier;
    NSString *_storeIdentifier;
    _Bool _additionalSource;
}

- (void)sendMessageWithName:(id)arg1 userInfo:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (void)sendMessageWithName:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (id)sendMessageWithName:(id)arg1 userInfo:(id)arg2;
- (void)sendMessageWithName:(id)arg1;
- (void)_sendMessage:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)_sendMessageNoReply:(id)arg1;
- (id)_sendMessageWithReplySync:(id)arg1;
- (id)_newMessageWithName:(id)arg1 userInfo:(id)arg2;
- (void)shutdown;
- (void)_resetConnection;
- (void)_createConnectionIfNecessary;
- (void)finalize;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 bundleIdentifier:(struct __CFString *)arg2 storeIdentifier:(struct __CFString *)arg3;
- (id)initWithQueue:(id)arg1 bundleIdentifier:(struct __CFString *)arg2 storeIdentifier:(struct __CFString *)arg3 additionalSource:(_Bool)arg4;

@end

@interface SYDRemotePreferencesSource : NSObject
{
    long long _generationCount;
    long long _lastGenerationFromDisk;
    struct __CFString *preferenceID;
    struct __CFURL *urlOnDisk;
    struct __CFDictionary *cache;
    long long storageChangeCount;
    long long initialSyncChangeCount;
    unsigned char isInitialSync;
    struct __CFSet *dirtyKeys;
    struct __CFDictionary *configurationDictionary;
    NSMutableDictionary *externalChanges;
    SYDClient *client;
    CDUnknownBlockType registrationBlock;
    NSObject<OS_dispatch_queue> *registrationQueue;
    NSObject<OS_dispatch_queue> *_protectionQueue;
    NSObject<OS_dispatch_source> *_memoryWarningSource;
    double _lastAccess;
    _Bool _forceNextSynchronization;
}

+ (id)SYDRemotePreferencesSourceConfigurationDidChangeNotification;
+ (id)SYDRemotePreferencesSourceDidChangeNotification;
+ (void)initialize;
+ (void)migrateSyncedDefaultsForBundleIdentifier:(id)arg1;
+ (void)noteAccountChanges:(id)arg1;
+ (void)resetAllApplicationsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)serverSideDebugDescription;
- (void)_didReceiveMemoryWarning;
- (void)_createMemoryWarningSource;
- (id)_warningSource;
- (void)updateConfiguration;
- (void)unregisterForSynchronizedDefaults;
- (void)registerForSynchronizedDefaults;
- (long long)generationCount;
- (struct __CFDictionary *)copyDictionary;
- (struct __CFArray *)copyKeyList;
- (void)discardExternalChangesForChangeCount:(long long)arg1;
- (id)copyExternalChangesWithChangeCount:(long long *)arg1;
- (unsigned char)hasExternalChanges;
- (unsigned char)isInitialSync;
- (unsigned char)_synchronizeForced:(unsigned char)arg1;
- (unsigned char)synchronizeForced:(unsigned char)arg1;
- (unsigned char)synchronize;
- (void)synchronizationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)scheduleRemoteSynchronization;
- (void)_cachePlistFromDisk;
- (void)setValue:(void *)arg1 forKey:(struct __CFString *)arg2;
- (void *)getValueForKey:(struct __CFString *)arg1;
- (void)_forceRegistrationNow;
- (void)finalize;
- (void)dealloc;
- (id)initWithApplicationID:(struct __CFString *)arg1 storeID:(struct __CFString *)arg2 shared:(_Bool)arg3 additionalSource:(_Bool)arg4;
- (id)initWithApplicationID:(struct __CFString *)arg1 storeID:(struct __CFString *)arg2 shared:(_Bool)arg3;
- (id)initWithApplicationID:(struct __CFString *)arg1 shared:(_Bool)arg2;
- (long long)maximumTotalDataLength;
- (long long)maximumDataLengthPerKey;
- (long long)maximumKeyLength;
- (long long)maximumKeyCount;
- (long long)configurationValueForKey:(struct __CFString *)arg1;
- (struct __CFDictionary *)copyConfigurationDictionary;
- (void)_storeConfiguration:(struct __CFDictionary *)arg1;

@end

__attribute__((visibility("hidden")))
@interface SYDJournal : NSObject
{
    NSMutableDictionary *store;
    NSMutableDictionary *journal;
    _Bool readonly;
}

- (id)description;
- (_Bool)removeChangesUntilChangeCount:(long long)arg1;
- (void)addChange:(int)arg1 forKey:(id)arg2 changeCount:(long long)arg3;
- (long long)maximumChangeCount;
- (id)changesSinceChangeCount:(long long)arg1;
- (int)changeSinceChangeCount:(long long)arg1 forKey:(id)arg2;
- (id)initWithMutableStore:(id)arg1;
- (id)initWithStore:(id)arg1;
- (void)dealloc;
- (id)init;

@end

@interface NSUbiquitousKeyValueStore (SYDDebug)
- (void)_printDebugDescription;
@end


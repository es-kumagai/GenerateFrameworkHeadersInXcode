//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct in_addr {
    unsigned int _field1;
};

struct sockaddr_in {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    struct in_addr _field4;
    char _field5[8];
};

#pragma mark -

//
// File: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
// UUID: 38D19F57-7C76-3B1A-B45A-D269FBADD4E9
//
//                           Arch: x86_64
//                Current version: 800.0.0
//          Compatibility version: 1.0.0
//                 Source version: 58.0.0.0.0
//            Minimum iOS version: 8.2.0
//                    SDK version: 8.2.0
//
// Objective-C Garbage Collection: Unsupported
//

@protocol CUTPowerMonitorDelegate <NSObject>

@optional
- (void)cutPowerMonitorSystemHasPoweredOn:(CUTPowerMonitor *)arg1;
- (void)cutPowerMonitorBatteryConnectedStateDidChange:(CUTPowerMonitor *)arg1;
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

@interface CUTWeakReference : NSObject
{
    id _object;
    unsigned long long _objectAddress;
}

+ (id)weakRefWithObject:(id)arg1;
- (id)object;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;

@end

@interface CUTNetworkInterfaceListener : NSObject
{
    void *_dynamicStore;
    NSHashTable *_delegateMap;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    int _wifiState;
    int _cellState;
    NSSet *_IPv6Addresses;
    NSSet *_IPv4Addresses;
}

+ (id)sharedInstance;
@property(readonly, retain, nonatomic) NSSet *IPv4Addresses; // @synthesize IPv4Addresses=_IPv4Addresses;
@property(readonly, retain, nonatomic) NSSet *IPv6Addresses; // @synthesize IPv6Addresses=_IPv6Addresses;
@property(readonly, nonatomic) int cellState; // @synthesize cellState=_cellState;
@property(readonly, nonatomic) int wifiState; // @synthesize wifiState=_wifiState;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (void)_notifyDelegatesOfAddressChange:(id)arg1 isIPv6:(_Bool)arg2;
- (void)_notifyDelegatesOfCellChange:(int)arg1;
- (void)_notifyDelegatesOfWifiChange:(int)arg1;
- (void)_handleNetworkChange:(id)arg1;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)allocWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

@interface CUTPowerAssertion : NSObject
{
    unsigned int _assertion;
    NSString *_identifier;
    NSArray *_stack;
}

- (id)description;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 timeout:(double)arg2;

@end

@interface CUTTelephonyManager : NSObject
{
    _Bool _registered;
    NSRecursiveLock *_lock;
    NSMutableSet *_disableFastDormancyTokens;
    void *__suspendDormancyAssertion;
}

+ (id)sharedInstance;
@property(nonatomic) void *_suspendDormancyAssertion; // @synthesize _suspendDormancyAssertion=__suspendDormancyAssertion;
@property(nonatomic) _Bool registered; // @synthesize registered=_registered;
@property(retain, nonatomic) NSMutableSet *disableFastDormancyTokens; // @synthesize disableFastDormancyTokens=_disableFastDormancyTokens;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
- (void)removeFastDormancyDisableToken:(id)arg1;
- (void)addFastDormancyDisableToken:(id)arg1;
- (_Bool)disableFastDormancy;
- (void)_adjustFastDormancyTokens;
- (void)__adjustFastDormancyTokens;
- (void)_setFastDormancySuspended:(_Bool)arg1;
- (void)dealloc;
- (id)init;

@end

@interface CUTReachability : NSObject
{
    _Bool localWiFiRef;
    struct __SCNetworkReachability *reachabilityRef;
}

+ (id)reachabilityForLocalWiFi;
+ (id)reachabilityForInternetConnection;
+ (id)reachabilityWithAddress:(const struct sockaddr_in *)arg1;
+ (id)reachabilityWithHostName:(id)arg1;
- (long long)currentReachabilityStatus;
- (_Bool)connectionRequired;
- (long long)networkStatusForFlags:(unsigned int)arg1;
- (long long)localWiFiStatusForFlags:(unsigned int)arg1;
- (void)dealloc;

@end

@interface CUTWiFiManager : NSObject <CUTPowerMonitorDelegate>
{
    _Bool _shouldAutoAssociateAsForeground;
    _Bool _isHostingHotSpot;
    _Bool _isWifiEnabled;
    _Bool _isWakeOnWiFiEnabled;
    _Bool _isWakeOnWiFiSupported;
    int _linkToken;
    NSMutableSet *_wiFiAutoAssociationTokens;
    NSRecursiveLock *_lock;
    NSHashTable *_delegateMap;
    NSHashTable *_wowClients;
    void *_currentNetwork;
    void *_wifiManager;
    void *_wifiDevice;
    void *_dynamicStore;
    NSDictionary *_lastWiFiPowerInfo;
    NSThread *_wifiThread;
    struct __CFRunLoopSource *_runLoopSource;
    NSRunLoop *_wifiRunLoop;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSRunLoop *wifiRunLoop; // @synthesize wifiRunLoop=_wifiRunLoop;
@property(nonatomic) struct __CFRunLoopSource *runLoopSource; // @synthesize runLoopSource=_runLoopSource;
@property(retain, nonatomic) NSThread *wifiThread; // @synthesize wifiThread=_wifiThread;
@property(copy, nonatomic) NSDictionary *lastWiFiPowerInfo; // @synthesize lastWiFiPowerInfo=_lastWiFiPowerInfo;
@property(nonatomic) void *dynamicStore; // @synthesize dynamicStore=_dynamicStore;
@property(nonatomic) void *wifiDevice; // @synthesize wifiDevice=_wifiDevice;
@property(nonatomic) void *wifiManager; // @synthesize wifiManager=_wifiManager;
@property(nonatomic) int linkToken; // @synthesize linkToken=_linkToken;
@property(nonatomic) void *currentNetwork; // @synthesize currentNetwork=_currentNetwork;
@property(retain, nonatomic) NSHashTable *wowClients; // @synthesize wowClients=_wowClients;
@property(retain, nonatomic) NSHashTable *delegateMap; // @synthesize delegateMap=_delegateMap;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableSet *wiFiAutoAssociationTokens; // @synthesize wiFiAutoAssociationTokens=_wiFiAutoAssociationTokens;
@property(readonly, nonatomic) _Bool isWoWSupported; // @synthesize isWoWSupported=_isWakeOnWiFiSupported;
@property(nonatomic) _Bool autoAssociateWiFiAsForegroundClient; // @synthesize autoAssociateWiFiAsForegroundClient=_shouldAutoAssociateAsForeground;
@property(readonly, nonatomic) _Bool isWoWEnabled; // @synthesize isWoWEnabled=_isWakeOnWiFiEnabled;
- (void)showNetworkOptions;
- (void)removeWiFiAutoAssociationClientToken:(id)arg1;
- (void)addWiFiAutoAssociationClientToken:(id)arg1;
- (_Bool)hasWiFiAutoAssociationClientToken:(id)arg1;
@property(readonly, nonatomic) _Bool autoAssociateWiFi;
- (void)_adjustWiFiAutoAssociation;
- (void)_adjustWiFiAutoAssociationLocked;
@property(readonly, nonatomic) _Bool isWiFiCaptive;
- (_Bool)_isPrimaryCellular;
@property(readonly, retain, nonatomic) NSString *currentSSID;
- (void)currentWiFiNetworkPowerUsageWithCompletion:(CDUnknownBlockType)arg1;
- (double)_wifiMeasurementErrorForInterval:(double)arg1;
@property(readonly, nonatomic) _Bool isWiFiEnabled; // @synthesize isWiFiEnabled=_isWifiEnabled;
- (void)_updateIsWiFiEnabled;
- (void)_updateIsWiFiAssociatedAsync:(_Bool)arg1;
@property(readonly, nonatomic) _Bool isWiFiAssociated;
@property(readonly, retain, nonatomic) NSNumber *wiFiScaledRate;
@property(readonly, retain, nonatomic) NSNumber *wiFiScaledRSSI;
@property(readonly, retain, nonatomic) NSNumber *wiFiSignalStrength;
@property(readonly, nonatomic) _Bool willTryToSearchForWiFiNetwork;
@property(readonly, nonatomic) _Bool willTryToAutoAssociateWiFiNetwork;
@property(readonly, nonatomic) _Bool isHostingWiFiHotSpot; // @synthesize isHostingWiFiHotSpot=_isHostingHotSpot;
- (void)_createDynamicStore;
- (void)_createWiFiManager;
- (void)_adjustWoWState;
- (_Bool)hasWoWClient:(id)arg1;
- (void)removeWoWClient:(id)arg1;
- (void)addWoWClient:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface CUTFileCopier : NSObject
{
    _Bool _shouldCancel;
    _Bool _didErrorOccur;
    _Bool _inProgress;
    unsigned int _operation;
    id <CUTFileCopierDelegate> _delegate;
    NSURL *_inputURL;
    NSURL *_outputURL;
    id _identifier;
    void *_BOMCopier;
}

@property void *_BOMCopier; // @synthesize _BOMCopier;
@property unsigned int operation; // @synthesize operation=_operation;
@property _Bool inProgress; // @synthesize inProgress=_inProgress;
@property(readonly, nonatomic) _Bool didErrorOccur; // @synthesize didErrorOccur=_didErrorOccur;
@property(readonly, nonatomic) _Bool wasCancelled; // @synthesize wasCancelled=_shouldCancel;
@property(readonly) id identifier; // @synthesize identifier=_identifier;
@property(readonly) NSURL *outputURL; // @synthesize outputURL=_outputURL;
@property(readonly) NSURL *inputURL; // @synthesize inputURL=_inputURL;
@property id <CUTFileCopierDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_worker_doCopy;
- (void)_main_copierFinishedWithResult:(id)arg1;
- (void)cleanup;
- (void)cancel;
- (void)start;
- (void)_fillOutputURLFromInputURL;
- (id)_temporaryCopierPath;
- (void)dealloc;
- (id)initWithInputURL:(id)arg1 outputURL:(id)arg2 identifier:(id)arg3 operation:(unsigned int)arg4 delegate:(id)arg5;

@end

@interface CUTPowerMonitor : NSObject
{
    CUTWeakReference *_iokitDelegate;
    struct __CFRunLoopSource *_batteryRunLoopSource;
    struct IONotificationPort *_batteryIONotifyPort;
    unsigned int _batteryNotificationRef;
    unsigned int _pmConnection;
    struct IONotificationPort *_pmPort;
    unsigned int _pmNotifier;
    NSMutableArray *_delegates;
    double _currentLevel;
    _Bool _isExternalPowerConnected;
}

+ (id)sharedInstance;
- (void)setExternalPowerConnected:(_Bool)arg1;
@property(nonatomic) double currentLevel; // @synthesize currentLevel=_currentLevel;
@property(readonly, nonatomic) double batteryPercentRemaining;
@property(nonatomic) _Bool isExternalPowerConnected; // @synthesize isExternalPowerConnected=_isExternalPowerConnected;
- (void)updateBatteryConnectedStateWithBatteryEntry:(unsigned int)arg1;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (_Bool)_updateBatteryConnectedStateWithBatteryEntry:(unsigned int)arg1;
- (void)updateBatteryLevelWithBatteryEntry:(unsigned int)arg1;
- (void)dealloc;
- (id)init;
- (void)_handlePowerChangedNotificationWithMessageType:(unsigned int)arg1 notificationID:(void *)arg2;

@end

@interface NSString (CUTAdditions)
+ (id)cutStringGUID;
- (id)cutStringByResolvingAndStandardizingPath;
@end

@interface NSArray (CUTAdditions)
- (id)cutFirstObject;
@end

@interface NSFileManager (CUTAdditions)
- (id)cutRandomTemporaryPathWithFileName:(id)arg1;
- (id)cutUniqueFilename:(id)arg1 atPath:(id)arg2 ofType:(id)arg3;
- (id)cutCreateUniqueDirectoryWithName:(id)arg1 atPath:(id)arg2 ofType:(id)arg3;
- (_Bool)_cutIsPathOnMissingVolume:(id)arg1;
@end

@interface NSData (CUTAdditions)
- (id)_CUTCopyGzippedData;
- (id)_CUTOptionallyDecompressData;
- (id)_CUTDecompressData;
- (id)_CUTStringFromBaseData;
@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Typedef'd Structures

typedef struct {
    _Bool _field1;
    _Bool _field2;
    _Bool _field3;
    _Bool _field4;
} CDStruct_8024420c;

#pragma mark -

//
// File: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/BluetoothManager.framework/BluetoothManager
// UUID: BB4A25C7-619E-359C-AAAF-BA18372029AB
//
//                           Arch: x86_64
//                Current version: 1.0.0
//          Compatibility version: 1.0.0
//                 Source version: 127.0.0.0.0
//            Minimum iOS version: 8.2.0
//                    SDK version: 8.2.0
//
// Objective-C Garbage Collection: Unsupported
//

@interface BluetoothDevice : NSObject
{
    NSString *_name;
    NSString *_address;
    struct BTDeviceImpl *_device;
}

- (void)setSyncGroup:(int)arg1 enabled:(_Bool)arg2;
- (id)syncGroups;
- (void)setSyncSettings:(CDStruct_8024420c)arg1;
- (CDStruct_8024420c)syncSettings;
- (void)endVoiceCommand;
- (void)startVoiceCommand;
- (void)unpair;
- (void)acceptSSP:(long long)arg1;
- (void)setPIN:(id)arg1;
- (void)disconnect;
- (void)connectWithServices:(unsigned int)arg1;
- (void)connect;
- (void)setServiceSetting:(unsigned int)arg1 key:(id)arg2 value:(id)arg3;
- (id)getServiceSetting:(unsigned int)arg1 key:(id)arg2;
- (_Bool)isServiceSupported:(unsigned int)arg1;
- (_Bool)isAccessory;
- (int)batteryLevel;
- (_Bool)supportsBatteryLevel;
- (unsigned long long)connectedServicesCount;
- (unsigned long long)connectedServices;
- (_Bool)connected;
- (_Bool)cloudPaired;
- (_Bool)paired;
- (id)scoUID;
- (id)description;
- (unsigned int)minorClass;
- (unsigned int)majorClass;
- (int)type;
- (id)address;
- (id)name;
- (_Bool)_isNameCached;
- (void)_clearName;
- (void)setDevice:(struct BTDeviceImpl *)arg1;
- (struct BTDeviceImpl *)device;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithDevice:(struct BTDeviceImpl *)arg1 address:(id)arg2;

@end

@interface BluetoothManager : NSObject
{
    struct BTLocalDeviceImpl *_localDevice;
    struct BTSessionImpl *_session;
    int _available;
    _Bool _audioConnected;
    _Bool _scanningEnabled;
    _Bool _scanningInProgress;
    unsigned int _scanningServiceMask;
    struct BTDiscoveryAgentImpl *_discoveryAgent;
    struct BTPairingAgentImpl *_pairingAgent;
    struct BTAccessoryManagerImpl *_accessoryManager;
    NSMutableDictionary *_btAddrDict;
    NSMutableDictionary *_btDeviceDict;
}

+ (int)lastInitError;
+ (id)sharedInstance;
+ (void)setSharedInstanceQueue:(id)arg1;
- (void)enableTestMode;
- (_Bool)isServiceSupported:(unsigned int)arg1;
- (void)endVoiceCommand:(id)arg1;
- (void)startVoiceCommand:(id)arg1;
- (void)setAudioConnected:(_Bool)arg1;
- (_Bool)audioConnected;
- (void)_connectabilityChanged;
- (void)_connectedStatusChanged;
- (_Bool)connected;
- (_Bool)_onlySensorsConnected;
- (id)connectedDevices;
- (id)connectingDevices;
- (void)setConnectable:(_Bool)arg1;
- (_Bool)connectable;
- (void)connectDevice:(id)arg1;
- (void)connectDevice:(id)arg1 withServices:(unsigned int)arg2;
- (id)localAddress;
- (void)acceptSSP:(long long)arg1 forDevice:(id)arg2;
- (void)setPincode:(id)arg1 forDevice:(id)arg2;
- (id)pairedDevices;
- (void)unpairDevice:(id)arg1;
- (void)cancelPairing;
- (void)setDevicePairingEnabled:(_Bool)arg1;
- (_Bool)devicePairingEnabled;
- (void)setDiscoverable:(_Bool)arg1;
- (_Bool)isDiscoverable;
- (void)_advertisingChanged;
- (void)_discoveryStateChanged;
- (void)_setScanState:(int)arg1;
- (void)_restartScan;
- (void)setDeviceScanningEnabled:(_Bool)arg1;
- (void)scanForConnectableDevices:(unsigned int)arg1;
- (void)scanForServices:(unsigned int)arg1;
- (void)_scanForServices:(unsigned int)arg1 withMode:(int)arg2;
- (void)resetDeviceScanning;
- (_Bool)deviceScanningInProgress;
- (_Bool)deviceScanningEnabled;
- (_Bool)wasDeviceDiscovered:(id)arg1;
- (void)_removeDevice:(id)arg1;
- (id)addDeviceIfNeeded:(struct BTDeviceImpl *)arg1;
- (_Bool)isAnyoneAdvertising;
- (_Bool)isAnyoneScanning;
- (void)_powerChanged;
- (_Bool)setEnabled:(_Bool)arg1;
- (_Bool)setPowered:(_Bool)arg1;
- (_Bool)enabled;
- (_Bool)powered;
- (int)powerState;
- (void)showPowerPrompt;
- (void)postNotificationName:(id)arg1 object:(id)arg2 error:(id)arg3;
- (void)postNotificationName:(id)arg1 object:(id)arg2;
- (void)postNotification:(id)arg1;
- (void)_postNotification:(id)arg1;
- (void)_postNotificationWithArray:(id)arg1;
- (void)dealloc;
- (void)_cleanup;
- (_Bool)_setup:(struct BTSessionImpl *)arg1;
- (_Bool)_attach:(id)arg1;
- (id)init;
- (_Bool)available;
- (struct BTAccessoryManagerImpl *)_accessoryManager;

@end

@interface RemoteDeviceManager : NSObject
{
    NSObject<OS_xpc_object> *_connection;
}

- (void)sendMessage:(const char *)arg1 args:(id)arg2;
- (void)disconnectDevice:(id)arg1;
- (void)dealloc;
- (id)init;

@end

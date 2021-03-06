//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct in6_addr {
    union {
        unsigned char _field1[16];
        unsigned short _field2[8];
        unsigned int _field3[4];
    } _field1;
};

struct in_addr {
    unsigned int _field1;
};

struct sockaddr {
    unsigned char _field1;
    unsigned char _field2;
    char _field3[14];
};

struct sockaddr_in {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    struct in_addr _field4;
    char _field5[8];
};

struct sockaddr_in6 {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    unsigned int _field4;
    struct in6_addr _field5;
    unsigned int _field6;
};

struct sockaddr_storage {
    unsigned char ss_len;
    unsigned char ss_family;
    char __ss_pad1[6];
    long long __ss_align;
    char __ss_pad2[112];
};

#pragma mark -

//
// File: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
// UUID: EBF4554E-334A-3240-A709-1EA6C5F090C5
//
//                           Arch: x86_64
//                Current version: 800.0.0
//          Compatibility version: 1.0.0
//                 Source version: 647.49.1.0.0
//            Minimum iOS version: 8.2.0
//                    SDK version: 8.2.0
//
// Objective-C Garbage Collection: Unsupported
//

@protocol NSCoding
- (id)initWithCoder:(NSCoder *)arg1;
- (void)encodeWithCoder:(NSCoder *)arg1;
@end

@protocol NSCopying
- (id)copyWithZone:(struct _NSZone *)arg1;
@end

@interface IDSiMessageServerBag : IDSServerBag
{
}

+ (id)_bagCreationLock;
+ (id)_sharedInstanceForClass:(Class)arg1;
+ (id)sharedInstance;
- (id)init;
- (id)_bagDefaultsDomain;

@end

@interface IDSMessage : IDSBaseMessage <NSCopying>
{
    NSNumber *_wantsDeliveryStatus;
    NSDictionary *_deliveryStatusContext;
    NSNumber *_version;
}

@property(copy) NSNumber *version; // @synthesize version=_version;
@property(copy) NSDictionary *deliveryStatusContext; // @synthesize deliveryStatusContext=_deliveryStatusContext;
@property(copy) NSNumber *wantsDeliveryStatus; // @synthesize wantsDeliveryStatus=_wantsDeliveryStatus;
- (_Bool)wantsUserAgentInHeaders;
- (id)userAgentHeaderString;
- (id)messageBody;
- (_Bool)wantsHTTPHeaders;
- (_Bool)wantsAPSRetries;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

@interface IDSAppleRegistrationKeychainReader : NSObject
{
    NSMutableArray *_registrationData;
    IMTimer *_purgeTimer;
    CDUnknownBlockType _purgeCancelBlock;
    CDUnknownBlockType _purgeEnqueueBlock;
}

+ (id)keychainAccessGroupForVersion:(unsigned long long)arg1;
+ (id)keychainAccountForVersion:(unsigned long long)arg1;
+ (id)keychainServiceForVersion:(unsigned long long)arg1;
+ (id)sharedInstance;
- (id)registrationWithServiceType:(id)arg1 accountType:(int)arg2 value:(id)arg3;
- (void)_reloadFromKeychainLocked;
- (id)registrationData;
- (void)_reloadFromDictionaryLocked:(id)arg1;
- (void)_setPurgeTimer;
- (void)flushCache;
- (void)_flush;
- (void)dealloc;
- (id)init;

@end

@interface IDSBaseSocketPairConnection : NSObject
{
    IMWeakReference *_delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_outgoingDataArray;
    NSObject<OS_dispatch_queue> *_readQueue;
    NSObject<OS_dispatch_source> *_readSource;
    NSObject<OS_dispatch_source> *_writeSource;
    int _connectedSocket;
    double _lastDateCheck;
    long long _bytesReceived;
    double _prevBPS;
    _Bool _writeSourceIsResumed;
}

@property(readonly, nonatomic) int socket; // @synthesize socket=_connectedSocket;
- (_Bool)sendData:(id)arg1;
- (void)_setupWriteSource;
- (void)_sendToConnectedSocket;
- (void)start;
- (void)_processBytesAvailable;
- (void)_callDelegatesWithBlock:(CDUnknownBlockType)arg1;
- (void)setDestination:(id)arg1;
- (void)endSession;
- (void)dealloc;
- (id)initWithSocket:(int)arg1 queue:(id)arg2 delegate:(id)arg3;
- (id)initWithSocket:(int)arg1 queue:(id)arg2 delegate:(id)arg3 start:(_Bool)arg4;
- (id)initWithQueue:(id)arg1 delegate:(id)arg2;

@end

@interface IDSPushHandlerContext : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSSet *_topics;
    NSSet *_commands;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(copy, nonatomic) NSSet *commands; // @synthesize commands=_commands;
@property(copy, nonatomic) NSSet *topics; // @synthesize topics=_topics;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 topics:(id)arg2 commands:(id)arg3;

@end

@interface IDSPushHandler : NSObject
{
}

+ (id)sharedInstance;
- (void)configureAsMacNotificationCenterObserver:(id)arg1;
- (void)setCommands:(id)arg1 forListener:(id)arg2;
- (void)setTopics:(id)arg1 forListener:(id)arg2;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1 topics:(id)arg2 commands:(id)arg3 queue:(id)arg4;
- (void)_recalculateTopicsCacheOnIvarQueue;
- (void)_updateTopicsOnIvarQueue;
@property(readonly, nonatomic) _Bool isConnected;
@property(readonly, nonatomic) NSData *pushToken;
- (void)dealloc;
- (id)init;

@end

@interface IDSDelegateInfo : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)setQueue:(id)arg1;
- (id)queue;
- (void)dealloc;

@end

@interface IDSMessageContext : NSObject
{
    NSMutableDictionary *_dict;
    id _boostContext;
}

@property(nonatomic) long long broadcastID;
@property(nonatomic) _Bool wantsAppAck;
@property(nonatomic) _Bool expectsPeerResponse;
@property(nonatomic) NSNumber *priority;
@property(nonatomic) NSNumber *broadcastTime;
@property(nonatomic) NSNumber *originalCommand;
@property(copy, nonatomic) NSString *storageGuid;
@property(copy, nonatomic) NSString *incomingResponseIdentifier;
@property(copy, nonatomic) NSString *outgoingResponseIdentifier;
@property(retain, nonatomic) id boostContext;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1 boostContext:(id)arg2;

@end

@interface IDSServerBag : NSObject
{
    _Bool _allowSelfSignedCertificates;
    _Bool _allowUnsignedBags;
    int _trustStatus;
    int _token;
    IMConnectionMonitor *_connectionMonitor;
    NSURL *_bagURL;
    NSString *_apsEnvironmentName;
    NSDictionary *_bag;
    NSDictionary *_cachedBag;
    NSMutableURLRequest *_urlRequest;
    IMRemoteURLConnection *_remoteURLConnection;
    NSObject<OS_dispatch_queue> *_bagQueue;
    NSString *_cachedURLString;
    NSData *_certData;
    NSString *_cachedHash;
    NSDate *_loadDate;
    NSNumber *_cacheTime;
    unsigned long long _hasPairedDeviceState;
}

+ (id)_bagCreationLock;
+ (id)sharedInstanceForBagType:(long long)arg1;
+ (id)_sharedInstance;
+ (id)_sharedInstanceForClass:(Class)arg1;
+ (id)sharedInstance;
@property unsigned long long hasPairedDeviceState; // @synthesize hasPairedDeviceState=_hasPairedDeviceState;
@property int token; // @synthesize token=_token;
@property _Bool allowUnsignedBags; // @synthesize allowUnsignedBags=_allowUnsignedBags;
@property _Bool allowSelfSignedCertificates; // @synthesize allowSelfSignedCertificates=_allowSelfSignedCertificates;
@property(retain) NSNumber *_cacheTime; // @synthesize _cacheTime;
@property(retain) NSDate *_loadDate; // @synthesize _loadDate;
@property(retain, setter=_setCachedHash:) NSString *_cachedHash; // @synthesize _cachedHash;
@property(retain) NSData *_certData; // @synthesize _certData;
@property(setter=_setTrustStatus:) int _trustStatus; // @synthesize _trustStatus;
@property(retain, setter=_setCachedURLString:) NSString *_cachedURLString; // @synthesize _cachedURLString;
@property NSObject<OS_dispatch_queue> *_bagQueue; // @synthesize _bagQueue;
@property IMRemoteURLConnection *_remoteURLConnection; // @synthesize _remoteURLConnection;
@property(retain) NSMutableURLRequest *_urlRequest; // @synthesize _urlRequest;
@property(retain, setter=_setCachedBag:) NSDictionary *_cachedBag; // @synthesize _cachedBag;
@property(retain, setter=_setBag:) NSDictionary *_bag; // @synthesize _bag;
@property(retain) NSString *apsEnvironmentName; // @synthesize apsEnvironmentName=_apsEnvironmentName;
@property(retain) NSURL *bagURL; // @synthesize bagURL=_bagURL;
@property(retain) IMConnectionMonitor *_connectionMonitor; // @synthesize _connectionMonitor;
- (void)connectionMonitorDidUpdate:(id)arg1;
@property(readonly) _Bool isServerAvailable;
- (id)urlWithKey:(id)arg1;
- (id)objectForKey:(id)arg1;
@property(readonly) _Bool isInDebilitatedMode;
@property(readonly) _Bool isLoaded;
@property(readonly) _Bool isLoading;
- (void)forceBagLoad;
- (void)startBagLoad;
- (void)_startBagLoad:(_Bool)arg1;
- (void)_cancelCurrentLoad;
- (void)_processBagResultData:(id)arg1 response:(id)arg2 inBackground:(_Bool)arg3;
- (_Bool)_loadFromSignedDictionary:(id)arg1 returningError:(id *)arg2;
- (_Bool)_allowInvalid;
- (void)_invalidate;
- (_Bool)_loadFromDictionary:(id)arg1 returningError:(id *)arg2;
- (void)dealloc;
- (id)_initWithURL:(id)arg1 apsEnvironmentName:(id)arg2 allowSelfSignedCertificates:(_Bool)arg3 allowUnsignedBags:(_Bool)arg4;
- (void)_generateURLRequest;
- (void)_bagExternallyReloaded;
- (void)_saveToCache;
- (void)_saveCacheToPrefs;
- (void)__saveCacheToPrefs;
- (void)_loadFromCache;
- (void)_clearCache;
- (id)_bagDefaultsDomain;

@end

@interface IDSSockAddrWrapper : NSObject <NSCopying>
{
    struct sockaddr_storage _sa;
}

+ (id)wrapperWithWrapper:(id)arg1 andPortHostOrder:(unsigned short)arg2;
+ (id)wrapperWithAddressString:(id)arg1 withPortHostOrder:(unsigned short)arg2;
+ (id)wrapperWithAddressString:(id)arg1 withPortHostOrder:(unsigned short)arg2 withInterfaceName:(id)arg3;
+ (id)wrapperWithSockAddr:(const struct sockaddr *)arg1;
- (void)copySockAddr:(struct sockaddr *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)ipString;
- (id)ipData;
- (_Bool)isEqualToWrapper:(id)arg1;
- (_Bool)isEqualToSockAddr:(const struct sockaddr *)arg1;
@property(readonly, nonatomic) unsigned short saPortHostOrder;
@property(readonly, nonatomic) const struct sockaddr_in6 *sa6;
@property(readonly, nonatomic) const struct sockaddr_in *sa4;
@property(readonly, nonatomic) const struct sockaddr *sa;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithSockAddr:(const struct sockaddr *)arg1;

@end

@interface IDSSocketPairMessage : NSObject
{
    NSData *_underlyingData;
    unsigned char _command;
    id <NSObject> _context;
    NSString *_topic;
}

+ (id)messageWithCommand:(unsigned char)arg1 data:(id)arg2;
+ (id)messageWithHeaderData:(id)arg1 data:(id)arg2;
+ (id)messageWithData:(id)arg1;
+ (unsigned int)dataLengthFromHeaderData:(id)arg1;
+ (unsigned int)headerDataSize;
@property(retain, nonatomic) NSString *topic; // @synthesize topic=_topic;
@property(retain, nonatomic) id <NSObject> context; // @synthesize context=_context;
@property(readonly, nonatomic) unsigned char command; // @synthesize command=_command;
@property(readonly, retain, nonatomic) NSData *underlyingData; // @synthesize underlyingData=_underlyingData;
- (id)_existingUnderlyingData;
@property(readonly, nonatomic) unsigned long long underlyingDataLength;
- (id)_nonHeaderData;
- (void)dealloc;
- (id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2;

@end

@interface IDSSocketPairDataMessage : IDSSocketPairMessage
{
    unsigned int _sequenceNumber;
    unsigned short _streamID;
    unsigned long long _payloadOffset;
    unsigned long long _payloadLength;
    NSData *_data;
    _Bool _expectsPeerResponse;
    _Bool _wantsAppAck;
    _Bool _compressed;
    NSString *_peerResponseIdentifier;
    NSString *_messageUUID;
    NSDate *_expiryDate;
}

@property(nonatomic) unsigned int sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(readonly, nonatomic) unsigned short streamID; // @synthesize streamID=_streamID;
@property(nonatomic) NSDate *expiryDate; // @synthesize expiryDate=_expiryDate;
@property(readonly, nonatomic) _Bool wantsAppAck; // @synthesize wantsAppAck=_wantsAppAck;
@property(readonly, retain, nonatomic) NSString *peerResponseIdentifier; // @synthesize peerResponseIdentifier=_peerResponseIdentifier;
@property(readonly, nonatomic) _Bool expectsPeerResponse; // @synthesize expectsPeerResponse=_expectsPeerResponse;
@property(readonly, retain, nonatomic) NSString *messageUUID; // @synthesize messageUUID=_messageUUID;
@property(nonatomic) _Bool compressed; // @synthesize compressed=_compressed;
- (id)_nonHeaderData;
@property(readonly, retain, nonatomic) NSData *data;
- (unsigned char)command;
- (void)dealloc;
- (id)initWithSequenceNumber:(unsigned int)arg1 streamID:(unsigned short)arg2 expectsPeerResponse:(_Bool)arg3 wantsAppAck:(_Bool)arg4 compressed:(_Bool)arg5 peerResponseIdentifier:(id)arg6 messageUUID:(id)arg7 data:(id)arg8 expiryDate:(id)arg9;
- (id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2;

@end

@interface IDSSocketPairDictionaryMessage : IDSSocketPairDataMessage
{
}

- (unsigned char)command;

@end

@interface IDSSocketPairHandshake : IDSSocketPairMessage
{
    unsigned int _versionNumber;
}

@property(readonly, nonatomic) unsigned int versionNumber; // @synthesize versionNumber=_versionNumber;
- (id)_nonHeaderData;
- (unsigned char)command;
- (id)initWithVersionNumber:(unsigned int)arg1;
- (id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2;

@end

@interface IDSSocketPairEncryptedMessage : IDSSocketPairMessage
{
    NSData *_data;
}

- (id)_nonHeaderData;
@property(readonly, retain, nonatomic) NSData *data;
- (unsigned char)command;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2;

@end

@interface IDSSocketPairOTREncryptedMessage : IDSSocketPairMessage
{
    unsigned long long _offset;
    unsigned char _versionNumber;
    _Bool _encrypted;
    _Bool _fileXfer;
    unsigned short _streamID;
    unsigned short _priority;
    unsigned int _sequenceNumber;
    NSData *_data;
}

@property(readonly, nonatomic) _Bool fileXfer; // @synthesize fileXfer=_fileXfer;
@property(readonly, nonatomic) unsigned int sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(readonly, nonatomic) unsigned short priority; // @synthesize priority=_priority;
@property(readonly, nonatomic) unsigned short streamID; // @synthesize streamID=_streamID;
@property(readonly, nonatomic) _Bool encrypted; // @synthesize encrypted=_encrypted;
@property(readonly, nonatomic) unsigned char versionNumber; // @synthesize versionNumber=_versionNumber;
- (id)_nonHeaderData;
@property(readonly, retain, nonatomic) NSData *data;
- (unsigned char)command;
- (void)dealloc;
- (id)initWithVersion:(unsigned char)arg1 encrypted:(_Bool)arg2 streamID:(unsigned short)arg3 priority:(unsigned short)arg4 sequenceNumber:(unsigned int)arg5 fileXfer:(_Bool)arg6 data:(id)arg7;
- (id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2;

@end

@interface IDSSocketPairAckMessage : IDSSocketPairMessage
{
    unsigned int _sequenceNumber;
}

@property(readonly, nonatomic) unsigned int sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
- (id)_nonHeaderData;
- (unsigned char)command;
- (id)initWithSequenceNumber:(unsigned int)arg1;
- (id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2;

@end

@interface IDSSocketPairNAckMessage : IDSSocketPairMessage
{
    unsigned long long _offset;
    unsigned int _sequenceNumber;
    _Bool _fileXfer;
    unsigned short _streamID;
    unsigned short _priority;
}

@property(readonly, nonatomic) unsigned short priority; // @synthesize priority=_priority;
@property(readonly, nonatomic) unsigned short streamID; // @synthesize streamID=_streamID;
@property(readonly, nonatomic) _Bool fileXfer; // @synthesize fileXfer=_fileXfer;
@property(readonly, nonatomic) unsigned int sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
- (id)_nonHeaderData;
- (unsigned char)command;
- (id)initWithSequenceNumber:(unsigned int)arg1 streamID:(unsigned short)arg2 priority:(unsigned short)arg3 fileXfer:(_Bool)arg4;
- (id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2;

@end

@interface IDSSocketPairKeepAliveMessage : IDSSocketPairMessage
{
}

- (unsigned char)command;

@end

@interface IDSSocketPairAppAckMessage : IDSSocketPairMessage
{
    unsigned long long _offset;
    unsigned int _sequenceNumber;
    unsigned short _streamID;
    NSString *_peerResponseIdentifier;
}

@property(readonly, retain, nonatomic) NSString *peerResponseIdentifier; // @synthesize peerResponseIdentifier=_peerResponseIdentifier;
@property(nonatomic) unsigned int sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(readonly, nonatomic) unsigned short streamID; // @synthesize streamID=_streamID;
- (id)_nonHeaderData;
- (unsigned char)command;
- (void)dealloc;
- (id)initWithSequenceNumber:(unsigned int)arg1 streamID:(unsigned short)arg2 peerResponseIdentifier:(id)arg3;
- (id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2;

@end

@interface IDSSocketPairSessionInvitationMessage : IDSSocketPairDataMessage
{
}

- (unsigned char)command;

@end

@interface IDSSocketPairSessionAcceptMessage : IDSSocketPairDataMessage
{
}

- (unsigned char)command;

@end

@interface IDSSocketPairSessionDeclineMessage : IDSSocketPairDataMessage
{
}

- (unsigned char)command;

@end

@interface IDSSocketPairSessionCancelMessage : IDSSocketPairDataMessage
{
}

- (unsigned char)command;

@end

@interface IDSSocketPairSessionMessage : IDSSocketPairDataMessage
{
}

- (unsigned char)command;

@end

@interface IDSSocketPairSessionEndMessage : IDSSocketPairDataMessage
{
}

- (unsigned char)command;

@end

@interface IDSSocketPairSMSTextMessage : IDSSocketPairDataMessage
{
}

- (unsigned char)command;

@end

@interface IDSSocketPairSMSTextDownloadMessage : IDSSocketPairDataMessage
{
}

- (unsigned char)command;

@end

@interface IDSSocketPairSMSOutgoing : IDSSocketPairDataMessage
{
}

- (unsigned char)command;

@end

@interface IDSSocketPairSMSDownloadOutgoing : IDSSocketPairDataMessage
{
}

- (unsigned char)command;

@end

@interface IDSSocketPairSMSDeliveryReceipt : IDSSocketPairDataMessage
{
}

- (unsigned char)command;

@end

@interface IDSSocketPairSMSReadReceipt : IDSSocketPairDataMessage
{
}

- (unsigned char)command;

@end

@interface IDSSocketPairSMSFailure : IDSSocketPairDataMessage
{
}

- (unsigned char)command;

@end

@interface IDSSocketPairProxyOutgoingNiceMessage : IDSSocketPairDataMessage
{
}

- (unsigned char)command;

@end

@interface IDSSocketPairProxyIncomingNiceMessage : IDSSocketPairDataMessage
{
}

- (unsigned char)command;

@end

@interface IDSSocketPairTextMessage : IDSSocketPairDataMessage
{
}

- (unsigned char)command;

@end

@interface IDSSocketPairDeliveryReceipt : IDSSocketPairDataMessage
{
}

- (unsigned char)command;

@end

@interface IDSSocketPairReadReceipt : IDSSocketPairDataMessage
{
}

- (unsigned char)command;

@end

@interface IDSSocketPairAttachmentMessage : IDSSocketPairDataMessage
{
}

- (unsigned char)command;

@end

@interface IDSSocketPairPlayedReceipt : IDSSocketPairDataMessage
{
}

- (unsigned char)command;

@end

@interface IDSSocketPairSavedReceipt : IDSSocketPairDataMessage
{
}

- (unsigned char)command;

@end

@interface IDSSocketPairReflectedDeliveryReceipt : IDSSocketPairDataMessage
{
}

- (unsigned char)command;

@end

@interface IDSSocketPairGenericCommandMessage : IDSSocketPairDataMessage
{
}

- (unsigned char)command;

@end

@interface IDSSocketPairGenericGroupMessageCommand : IDSSocketPairDataMessage
{
}

- (unsigned char)command;

@end

@interface IDSSocketPairLocationShareOfferCommand : IDSSocketPairDataMessage
{
}

- (unsigned char)command;

@end

@interface IDSSocketPairExpiredAckMessage : IDSSocketPairAckMessage
{
}

- (unsigned char)command;

@end

@interface IDSSocketPairErrorMessage : IDSSocketPairDataMessage
{
}

- (unsigned char)command;

@end

@interface IDSSocketPairProtobufMessage : IDSSocketPairMessage
{
    unsigned long long _payloadOffset;
    unsigned long long _payloadLength;
    unsigned short _isResponse;
    unsigned short _type;
    NSData *_data;
    unsigned int _sequenceNumber;
    unsigned short _streamID;
    _Bool _expectsPeerResponse;
    _Bool _wantsAppAck;
    _Bool _compressed;
    NSString *_peerResponseIdentifier;
    NSString *_messageUUID;
    NSDate *_expiryDate;
}

@property(nonatomic) NSDate *expiryDate; // @synthesize expiryDate=_expiryDate;
@property(nonatomic) _Bool compressed; // @synthesize compressed=_compressed;
@property(nonatomic) unsigned int sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(readonly, nonatomic) unsigned short streamID; // @synthesize streamID=_streamID;
@property(readonly, nonatomic) unsigned short type; // @synthesize type=_type;
@property(readonly, nonatomic) unsigned short isResponse; // @synthesize isResponse=_isResponse;
@property(readonly, retain, nonatomic) NSString *peerResponseIdentifier; // @synthesize peerResponseIdentifier=_peerResponseIdentifier;
@property(readonly, nonatomic) _Bool wantsAppAck; // @synthesize wantsAppAck=_wantsAppAck;
@property(readonly, retain, nonatomic) NSString *messageUUID; // @synthesize messageUUID=_messageUUID;
@property(readonly, nonatomic) _Bool expectsPeerResponse; // @synthesize expectsPeerResponse=_expectsPeerResponse;
- (id)_nonHeaderData;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
- (unsigned char)command;
- (void)dealloc;
- (id)initWithSequenceNumber:(unsigned int)arg1 streamID:(unsigned short)arg2 expectsPeerResponse:(_Bool)arg3 wantsAppAck:(_Bool)arg4 compressed:(_Bool)arg5 peerResponseIdentifier:(id)arg6 messageUUID:(id)arg7 expiryDate:(id)arg8 protobuf:(id)arg9;
- (id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2;

@end

@interface IDSSocketPairFragmentedMessage : IDSSocketPairMessage
{
    unsigned long long _offset;
    unsigned int _fragmentedMessageID;
    unsigned int _fragmentIndex;
    unsigned int _totalFragmentCount;
    NSData *_data;
}

+ (id)createMessageFragmentsFromOriginalMessage:(id)arg1 withFragmentedMessageID:(unsigned int)arg2 fragmentSize:(unsigned int)arg3;
+ (id)createOriginalMessageFromFragmentedMessages:(id)arg1;
@property(readonly, nonatomic) unsigned int totalFragmentCount; // @synthesize totalFragmentCount=_totalFragmentCount;
@property(readonly, nonatomic) unsigned int fragmentIndex; // @synthesize fragmentIndex=_fragmentIndex;
@property(readonly, nonatomic) unsigned int fragmentedMessageID; // @synthesize fragmentedMessageID=_fragmentedMessageID;
- (id)_nonHeaderData;
@property(readonly, nonatomic) NSData *data;
- (unsigned char)command;
- (id)description;
- (void)dealloc;
- (id)initWithData:(id)arg1 withFragmentedMessageID:(unsigned int)arg2 fragmentIndex:(unsigned int)arg3 totalFragmentCount:(unsigned int)arg4;
- (id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2;

@end

@interface IDSSocketPairResourceTransferMessage : IDSSocketPairDataMessage
{
}

- (unsigned char)command;

@end

@interface IDSSocketPairResourceTransferReceiver : NSObject
{
    NSString *_resourcePath;
    NSDictionary *_metadata;
    int _fileDescriptor;
    unsigned long long _totalBytesExpected;
    unsigned long long _totalBytesReceived;
    _Bool _done;
    unsigned int _sequenceNumber;
    unsigned short _streamID;
    _Bool _expectsPeerResponse;
    _Bool _wantsAppAck;
    _Bool _compressed;
    NSString *_peerResponseIdentifier;
    NSString *_messageUUID;
}

@property(readonly, nonatomic) unsigned long long totalBytesReceived; // @synthesize totalBytesReceived=_totalBytesReceived;
- (id)finalizedMessageDictionaryIfDone;
- (_Bool)appendMessage:(id)arg1;
- (_Bool)writeResourceData:(id)arg1;
- (void)dealloc;
- (void)abortTransfer;
- (id)initWithMessage:(id)arg1;

@end

@interface IDSSocketPairResourceTransferSender : IDSSocketPairMessage
{
    NSString *_resourcePath;
    NSDictionary *_metadata;
    NSDictionary *_resourceAttributes;
    _Bool _sentFirstMessage;
    unsigned long long _totalBytes;
    unsigned long long _nextByte;
    _Bool _done;
    int _fileDescriptor;
    unsigned int _maxChunkSize;
    unsigned int _sequenceNumber;
    unsigned short _streamID;
    _Bool _expectsPeerResponse;
    _Bool _wantsAppAck;
    _Bool _compressed;
    NSString *_peerResponseIdentifier;
    NSString *_messageUUID;
}

@property(readonly, retain, nonatomic) NSString *messageUUID; // @synthesize messageUUID=_messageUUID;
@property(nonatomic) unsigned int sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(nonatomic) unsigned int maxChunkSize; // @synthesize maxChunkSize=_maxChunkSize;
@property(readonly, nonatomic) _Bool isDone; // @synthesize isDone=_done;
@property(readonly, nonatomic) _Bool sentFirstMessage; // @synthesize sentFirstMessage=_sentFirstMessage;
- (void)reset;
- (id)nextMessage;
- (id)readNextBytes;
- (void)dealloc;
- (unsigned char)command;
- (id)description;
- (id)initWithResourceAtPath:(id)arg1 metadata:(id)arg2 sequenceNumber:(unsigned int)arg3 streamID:(unsigned short)arg4 expectsPeerResponse:(_Bool)arg5 wantsAppAck:(_Bool)arg6 compressed:(_Bool)arg7 peerResponseIdentifier:(id)arg8 messageUUID:(id)arg9;

@end

@interface IDSSendParameters : NSObject <NSCopying>
{
    NSMutableDictionary *_params;
}

@property(readonly, retain, nonatomic) NSDate *expirationDate;
@property(nonatomic) _Bool enforceRemoteTimeouts;
@property(nonatomic) _Bool isProxiedOutgoingMessage;
@property(nonatomic) _Bool fireAndForget;
@property(nonatomic) _Bool bypassSizeCheck;
@property(nonatomic) _Bool daemonDeathResend;
@property(nonatomic) _Bool nonWaking;
@property(nonatomic) _Bool activityContinuation;
@property(nonatomic) _Bool bypassStorage;
@property(nonatomic) _Bool bypassDuet;
@property(nonatomic) double timeout;
@property(nonatomic) _Bool requireBluetooth;
@property(nonatomic) _Bool localDelivery;
@property(nonatomic) long long priority;
@property(nonatomic) _Bool wantsDeliveryStatus;
@property(nonatomic) _Bool wantsResponse;
@property(nonatomic) _Bool compressPayload;
@property(nonatomic) _Bool encryptPayload;
@property(nonatomic) _Bool wantsAppAck;
@property(nonatomic) _Bool useDictAsTopLevel;
@property(nonatomic) _Bool compressed;
@property(nonatomic) _Bool expectsPeerResponse;
@property(retain, nonatomic) NSArray *duetIdentifiersOverride;
@property(retain, nonatomic) NSString *queueOneIdentifier;
@property(retain, nonatomic) NSArray *interestingRegistrationProperties;
@property(retain, nonatomic) NSArray *requireAllRegistrationProperties;
@property(retain, nonatomic) NSString *peerResponseIdentifier;
@property(retain, nonatomic) NSArray *bulkedPayload;
@property(retain, nonatomic) NSString *alternateCallbackID;
@property(retain, nonatomic) NSData *messageUUID;
@property(retain, nonatomic) NSDictionary *deliveryStatusContext;
@property(retain, nonatomic) NSString *identifier;
@property(retain, nonatomic) NSNumber *command;
@property(retain, nonatomic) NSData *dataToEncrypt;
@property(retain, nonatomic) NSString *accountUUID;
@property(retain, nonatomic) NSArray *destinations;
@property(retain, nonatomic) NSString *fromID;
@property(retain, nonatomic) NSDictionary *resourceMetadata;
@property(retain, nonatomic) NSString *resourcePath;
@property(retain, nonatomic) NSDictionary *protobuf;
@property(retain, nonatomic) NSDictionary *message;
@property(retain, nonatomic) NSData *data;
@property(readonly, retain, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

@interface IDSMessageToDelete : NSObject
{
    unsigned int _dataProtectionClass;
    NSString *_guid;
    NSString *_alternateGUID;
}

@property(retain, setter=setAlternateGUID:) NSString *alternateGUID; // @synthesize alternateGUID=_alternateGUID;
@property(retain, setter=setGUID:) NSString *guid; // @synthesize guid=_guid;
@property unsigned int dataProtectionClass; // @synthesize dataProtectionClass=_dataProtectionClass;
- (void)dealloc;

@end

@interface IDSRemoteURLConnection : NSObject
{
    NSURLRequest *_request;
    NSString *_bundleIdentifierForDataUsage;
    CDUnknownBlockType _block;
    NSObject<OS_xpc_object> *_connection;
    _Bool _cancelled;
    _Bool _loading;
    _Bool _forceCellularIfPossible;
    int _retries;
    _Bool _requiresIDSHost;
}

@property _Bool requiresIDSHost; // @synthesize requiresIDSHost=_requiresIDSHost;
@property(retain) NSString *bundleIdentifierForDataUsage; // @synthesize bundleIdentifierForDataUsage=_bundleIdentifierForDataUsage;
@property _Bool forceCellularIfPossible; // @synthesize forceCellularIfPossible=_forceCellularIfPossible;
- (void)cancel;
- (void)load;
- (void)dealloc;
- (id)initWithURLRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (_Bool)_connect;
- (_Bool)_disconnect;
- (void)_disconnected;

@end

@interface IDSFaceTimeServerBag : IDSServerBag
{
}

+ (id)_bagCreationLock;
- (_Bool)isInDebilitatedMode;
- (id)init;
- (id)_bagDefaultsDomain;

@end

@interface IDSBaseMessage : NSObject <NSCopying>
{
    _Bool _forceCellular;
    _Bool _usingOutgoingPush;
    _Bool _wantsResponse;
    _Bool _wantsBinaryPush;
    _Bool _wantsIntegerUniqueIDs;
    _Bool _highPriority;
    _Bool _hasReceivedPushAck;
    int _timeoutRetries;
    id _context;
    NSDictionary *_clientInfo;
    NSData *_serviceData;
    unsigned long long _uniqueID;
    NSDictionary *_userInfo;
    NSDate *_creationDate;
    NSString *_topic;
    double _timeout;
    CDUnknownBlockType _completionBlock;
    CDUnknownBlockType _deliveryAcknowledgementBlock;
    NSDictionary *_cachedBody;
    NSString *_dsAuthID;
    double _timeSent;
    NSString *_dataUsageBundleIdentifier;
    NSDictionary *_responseAlert;
}

@property _Bool hasReceivedPushAck; // @synthesize hasReceivedPushAck=_hasReceivedPushAck;
@property _Bool highPriority; // @synthesize highPriority=_highPriority;
@property(copy) NSDictionary *responseAlertInfo; // @synthesize responseAlertInfo=_responseAlert;
@property _Bool wantsIntegerUniqueIDs; // @synthesize wantsIntegerUniqueIDs=_wantsIntegerUniqueIDs;
@property _Bool wantsBinaryPush; // @synthesize wantsBinaryPush=_wantsBinaryPush;
@property int timeoutRetries; // @synthesize timeoutRetries=_timeoutRetries;
@property double timeSent; // @synthesize timeSent=_timeSent;
@property(copy, nonatomic, setter=setDSAuthID:) NSString *dsAuthID; // @synthesize dsAuthID=_dsAuthID;
@property(retain, setter=_setCachedBody:) NSDictionary *_cachedBody; // @synthesize _cachedBody;
@property _Bool wantsResponse; // @synthesize wantsResponse=_wantsResponse;
@property(copy) CDUnknownBlockType deliveryAcknowledgementBlock; // @synthesize deliveryAcknowledgementBlock=_deliveryAcknowledgementBlock;
@property(setter=_setUsingOutgoingPush:) _Bool _usingOutgoingPush; // @synthesize _usingOutgoingPush;
@property(copy) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property double timeout; // @synthesize timeout=_timeout;
@property(retain) NSString *topic; // @synthesize topic=_topic;
@property _Bool forceCellular; // @synthesize forceCellular=_forceCellular;
@property(retain) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(copy) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property unsigned long long uniqueID; // @synthesize uniqueID=_uniqueID;
@property(copy) NSData *serviceData; // @synthesize serviceData=_serviceData;
@property(copy) NSDictionary *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(retain) id context; // @synthesize context=_context;
- (void)handleResponseDictionary:(id)arg1;
- (void)handleResponseHeaders:(id)arg1;
@property(readonly, retain) NSDictionary *messageBody;
@property(readonly, retain) NSDictionary *additionalInternalHeaders;
@property(readonly, retain) NSDictionary *nonStandardMessageHeadersForOutgoingPush;
@property(readonly, retain) NSDictionary *additionalMessageHeadersForOutgoingPush;
@property(readonly, retain) NSDictionary *additionalQueryStringParameters;
@property(readonly, retain) NSDictionary *additionalMessageHeaders;
@property(readonly, retain) NSString *bagKey;
@property(readonly) long long responseCommand;
@property(readonly) long long command;
@property(readonly, retain) NSString *userAgentHeaderString;
@property(readonly) _Bool wantsUserAgentInHeaders;
@property(readonly, retain) NSArray *requiredKeys;
- (_Bool)hasRequiredKeys:(id *)arg1;
@property(readonly, copy, nonatomic) NSData *IDCertificate;
@property(readonly, nonatomic) struct __SecKey *identityPublicKey;
@property(readonly, nonatomic) struct __SecKey *identityPrivateKey;
@property(copy, nonatomic) NSMutableArray *userIDArray;
@property(copy, nonatomic) NSMutableArray *privateKeyArray;
@property(copy, nonatomic) NSMutableArray *publicKeyArray;
@property(copy, nonatomic) NSMutableArray *certDataArray;
@property(copy, nonatomic) NSData *pushToken;
@property(copy, nonatomic) NSData *pushCertificate;
@property(nonatomic) struct __SecKey *pushPublicKey;
@property(nonatomic) struct __SecKey *pushPrivateKey;
- (void)_cacheBody;
@property(readonly, retain) NSDictionary *messageBodyUsingCache;
@property(readonly) _Bool isValidMessage;
@property(readonly) _Bool payloadCanBeLogged;
@property(readonly, retain) NSString *dataUsageBundleIdentifier; // @synthesize dataUsageBundleIdentifier=_dataUsageBundleIdentifier;
@property(readonly) double customRetryInterval;
@property(readonly) _Bool wantsCustomRetryInterval;
@property(readonly) _Bool wantsBodySignature;
@property(readonly) _Bool wantsSignature;
@property(readonly) _Bool ignoresNetworkConnectivity;
@property(readonly) _Bool wantsAPSRetries;
@property(readonly) _Bool wantsManagedRetries;
@property(readonly) _Bool wantsExtraTimeoutRetry;
@property(readonly) int maxTimeoutRetries;
@property(readonly) _Bool wantsCFNetworkTimeout;
@property(readonly) _Bool wantsBagKey;
@property(readonly) _Bool wantsHTTPGet;
@property(readonly) _Bool wantsHTTPHeaders;
@property(readonly) _Bool wantsJSONBody;
@property(readonly) _Bool wantsCompressedBody;
@property(readonly) _Bool wantsIDSServer;
@property(readonly, retain) NSString *uniqueIDString;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

@interface IDSProtobuf : NSObject <NSCoding>
{
    NSMutableDictionary *_protoBufParams;
    NSData *_uncompressedData;
}

+ (id)keyRepresentationForType:(unsigned short)arg1 isResponse:(_Bool)arg2;
@property(retain, nonatomic) NSData *uncompressedData; // @synthesize uncompressedData=_uncompressedData;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(retain, nonatomic) IDSMessageContext *context;
@property(nonatomic) _Bool isResponse;
@property(nonatomic) unsigned short type;
@property(retain, nonatomic) NSData *data;
- (id)dictionaryRepresentationWithUncompressedData;
- (id)dictionaryRepresentation;
- (void)dealloc;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithProtobufData:(id)arg1 type:(unsigned short)arg2 isResponse:(_Bool)arg3;
- (id)description;

@end

@interface IDSSocketPairConnection : NSObject
{
    NSMutableData *_headerData;
    NSMutableData *_currentMessageData;
    IMWeakReference *_delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_semaphore> *_lock;
    unsigned long long _currentOutgoingDataIndex;
    NSData *_outgoingData;
    NSMutableArray *_outgoingMessageArray;
    unsigned int _currentOutgoingFragmentedMessageID;
    unsigned long long _inFlightMessageCountLowWaterMark;
    NSMutableDictionary *_incomingDataFragments;
    unsigned int _fragmentationSize;
    _Bool _isConnected;
    unsigned int _currentDataLength;
    long long _bytesReceived;
    double _prevBPS;
    int _connectedSocket;
    _Bool _writeSocketIsResumed;
    double _lastDateCheck;
    _Bool _notifyWhenConnectionReceivesBytes;
    long long _priority;
}

- (void)setNotifyWhenConnectionReceivesBytes:(_Bool)arg1;
- (void)_endSession;
- (_Bool)sendDataMessage:(id)arg1 canFragment:(_Bool)arg2;
- (_Bool)sendDataMessage:(id)arg1;
- (void)_sendToConnectedSocket;
- (_Bool)_queueNextOutgoingData;
- (void)_processBytesAvailable;
- (long long)_read:(char *)arg1 maxLength:(unsigned long long)arg2;
- (void)_callDelegateWithBlock:(CDUnknownBlockType)arg1;
@property(nonatomic) unsigned long long inFlightMessageCountLowWaterMark;
@property(nonatomic) unsigned int fragmentationSize;
@property(readonly, nonatomic) NSSet *inFlightMessages;
@property(readonly, nonatomic) _Bool isEmpty;
@property(readonly, nonatomic) unsigned long long inFlightMessageCount;
@property(readonly, nonatomic) _Bool isConnected;
- (void)endSession;
- (void)dealloc;
- (id)initWithSocket:(int)arg1 queue:(id)arg2 delegate:(id)arg3 priority:(long long)arg4;

@end

@interface NSCachedURLResponse (_IDSServerBagAdditions)
- (id)_cacheTime;
@end

@interface NSURLResponse (_IDSServerBagAdditions)
- (id)_cacheTime;
@end

@interface NSData (IDS_NSData_subdataWithRangeNoCopy)
- (id)subdataWithRangeNoCopy:(struct _NSRange)arg1;
@end


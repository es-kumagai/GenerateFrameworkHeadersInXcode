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

#pragma mark Typedef'd Structures

typedef struct {
    CDUnknownFunctionPointerType _field1;
    CDUnknownFunctionPointerType _field2;
    CDUnknownFunctionPointerType _field3;
} CDStruct_90f67059;

typedef struct {
    long long _field1;
    long long _field2;
} CDStruct_912cb5d2;

#pragma mark -

//
// File: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
// UUID: BAA96F73-8A88-3EEE-8376-9756B3F57E18
//
//                           Arch: x86_64
//                Current version: 1.0.0
//          Compatibility version: 1.0.0
//                 Source version: 242.0.0.0.0
//            Minimum iOS version: 8.2.0
//                    SDK version: 8.2.0
//
// Objective-C Garbage Collection: Unsupported
//

@protocol NSCoding
- (id)initWithCoder:(NSCoder *)arg1;
- (void)encodeWithCoder:(NSCoder *)arg1;
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

@protocol NSXPCListenerDelegate <NSObject>

@optional
- (_Bool)listener:(NSXPCListener *)arg1 shouldAcceptNewConnection:(NSXPCConnection *)arg2;
@end

@protocol VSGenericUpdate <NSObject>
- (void)invokeUpdateWithObject:(id)arg1;
@end

@protocol VSRecognitionModelDataProvider <NSObject>
- (long long)valueCountForClassWithIdentifier:(NSString *)arg1 inModelWithIdentifier:(NSString *)arg2;

@optional
- (void)stopReportingChanges;
- (void)beginReportingChanges;
- (_Bool)isCacheValidityIdentifierValid:(NSDictionary *)arg1;
- (NSDictionary *)cacheValidityIdentifier;
- (NSString *)phoneticValueAtIndex:(long long)arg1 forClassWithIdentifier:(NSString *)arg2 inModelWithIdentifier:(NSString *)arg3;
- (_Bool)getValue:(id *)arg1 weight:(long long *)arg2 atIndex:(long long)arg3 forClassWithIdentifier:(NSString *)arg4 inModelWithIdentifier:(NSString *)arg5;
- (NSString *)valueAtIndex:(long long)arg1 forClassWithIdentifier:(NSString *)arg2 inModelWithIdentifier:(NSString *)arg3;
@end

@protocol VSRecognitionResultHandler <NSObject>

@optional
- (VSRecognitionAction *)actionForRecognitionResults:(NSArray *)arg1;
- (VSRecognitionAction *)actionForRecognitionResult:(VSRecognitionResult *)arg1;
@end

@protocol VSRemoteKeepAlive <NSObject>
- (oneway void)cancel;
- (oneway void)maintainWithAudioType:(long long)arg1 keepAudioSessionActive:(_Bool)arg2;
@end

@protocol VSSpeechConnectionDelegate
- (void)connection:(VSSpeechConnection *)arg1 speechRequest:(VSSpeechRequest *)arg2 willSpeakMark:(long long)arg3 inRange:(struct _NSRange)arg4;
- (void)connection:(VSSpeechConnection *)arg1 speechRequest:(VSSpeechRequest *)arg2 didStopAtEnd:(_Bool)arg3 phonemesSpoken:(NSString *)arg4 error:(NSError *)arg5;
- (void)connection:(VSSpeechConnection *)arg1 speechRequestDidContinue:(VSSpeechRequest *)arg2;
- (void)connection:(VSSpeechConnection *)arg1 speechRequestDidPause:(VSSpeechRequest *)arg2;
- (void)connection:(VSSpeechConnection *)arg1 speechRequestDidStart:(VSSpeechRequest *)arg2;
@end

@protocol VSSpeechService <NSObject>
- (oneway void)getLogToFile:(void (^)(_Bool))arg1;
- (oneway void)setLogToFile:(_Bool)arg1;
- (oneway void)getVoiceInfoForLanguageCode:(NSString *)arg1 footprint:(long long)arg2 gender:(long long)arg3 custom:(_Bool)arg4 reply:(void (^)(VSVoiceAsset *))arg5;
- (oneway void)getAutoDownloadedVoiceAssets:(void (^)(NSArray *))arg1;
- (oneway void)setAutoDownloadedVoiceAssets:(NSArray *)arg1;
- (oneway void)downloadVoiceAsset:(VSVoiceAsset *)arg1 progress:(VSGenericUpdateEndpoint *)arg2 completion:(void (^)(NSError *))arg3;
- (oneway void)getLocalCustomVoicesReply:(void (^)(NSArray *, NSError *))arg1;
- (oneway void)getCustomVoicesReply:(void (^)(NSArray *, NSError *))arg1;
- (oneway void)getSpeechIsActiveForConnectionReply:(void (^)(_Bool))arg1;
- (oneway void)getSpeechIsActiveReply:(void (^)(_Bool))arg1;
- (oneway void)getFootprintsForVoiceName:(NSString *)arg1 languageCode:(NSString *)arg2 reply:(void (^)(NSArray *))arg3;
- (oneway void)getVoiceNamesForLanguage:(NSString *)arg1 reply:(void (^)(NSArray *))arg2;
- (oneway void)stopSpeechRequestAtMark:(long long)arg1;
- (oneway void)continueSpeechRequest;
- (oneway void)pauseSpeechRequestAtMark:(long long)arg1;
- (oneway void)startSpeechRequest:(VSSpeechRequest *)arg1;
@end

@protocol VSSpeechServiceDelegate <NSObject>
- (oneway void)speechRequestDidStopWithSuccess:(_Bool)arg1 phonemesSpoken:(NSString *)arg2 error:(NSError *)arg3;
- (oneway void)speechRequestMark:(long long)arg1 didStartForRange:(struct _NSRange)arg2;
- (oneway void)speechRequestDidContinue;
- (oneway void)speechRequestDidPause;
- (oneway void)speechRequestDidStart;
@end

@interface VSRecognitionResult : NSObject
{
}

+ (id)recognitionResultWithModelIdentifier:(id)arg1 classIdentifiers:(id)arg2 values:(id)arg3;
+ (void)initialize;
- (id)description;
- (id)recognitionAction;
- (void)setRecognitionAction:(id)arg1;
- (id)createHandler;
- (id)valueOfFirstElementWithClassIdentifier:(id)arg1;
- (_Bool)getElementClassIdentifier:(id *)arg1 value:(id *)arg2 atIndex:(long long)arg3;
- (long long)elementCount;
- (id)modelIdentifier;
- (id)recognitionResultByReplacingValueForClassIdentifier:(id)arg1 withValue:(id)arg2;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)init;

@end

@interface VSRecognitionSession : NSObject
{
    NSString *_modelIdentifier;
    VSKeepAlive *_keepAlive;
    id <VSRecognitionSessionDelegate> _delegate;
    VSRecognitionAction *_currentAction;
    NSArray *_topLevelKeywords;
    id _handlingThread;
    VSSpeechSynthesizer *_synthesizer;
    NSString *_languageID;
    NSString *_debugDumpPath;
    NSString *_audioInputPath;
    double _levelInterval;
    unsigned long long _keywordPhase;
    struct {
        unsigned int delegateWillBegin:1;
        unsigned int delegateBegin:1;
        unsigned int delegateOpenURL:1;
        unsigned int delegateFinishedSpeaking:1;
        unsigned int delegateComplete:1;
        unsigned int debugDumpEnabled:1;
        unsigned int preferredEngine:2;
        unsigned int performHandlerActions:1;
        unsigned int allowSensitiveActions:1;
        unsigned int bluetoothAllowed:1;
        unsigned int resetNextAction:1;
        unsigned int isSpeaking:1;
        unsigned int actionBegan:1;
        unsigned int actionBeginning:1;
        unsigned int actionBeginDeferred:1;
        unsigned int invalid:1;
        unsigned int observeKeywordChange:1;
    } _sessionFlags;
}

- (void)setPerformRecognitionHandlerActions:(_Bool)arg1;
- (_Bool)setPreferredEngine:(int)arg1;
- (_Bool)setNextRecognitionRequiresReset:(_Bool)arg1;
- (_Bool)setNextRecognitionAudioInputPath:(id)arg1;
- (id)debugDumpPath;
- (_Bool)setDebugDumpEnabled:(_Bool)arg1;
- (void)speechSynthesizer:(id)arg1 didFinishSpeaking:(_Bool)arg2 withError:(id)arg3;
- (void)_notifyDelegateFinishedSpeakingWithError:(id)arg1;
- (id)_beginSpeakingString:(id)arg1 attributedString:(id)arg2;
- (id)_beginSpeakingAttributedString:(id)arg1;
- (id)beginSpeakingString:(id)arg1;
- (id)beginSpeakingFeedbackString;
- (void)_keywordIndexChanged;
- (id)_keywordsForModelIdentifier:(id)arg1;
- (id)_topLevelKeywords;
- (id)_createPhaseSortedKeywordsFromArray:(id)arg1;
- (struct __CFDictionary *)_createKeywordIndex;
- (long long)keywordCount;
- (id)keywordAtIndex:(long long)arg1;
- (void)setKeywordPhase:(unsigned long long)arg1;
- (float)inputLevelDB;
- (float)inputLevel;
- (void)setInputLevelUpdateInterval:(double)arg1;
- (id)displayStatusString;
- (id)displayResultString;
- (id)spokenFeedbackAttributedString;
- (id)spokenFeedbackString;
- (void)recognitionResultHandlingThread:(id)arg1 didHandleResults:(id)arg2 nextAction:(id)arg3;
- (id)_recognitionResultHandlingThread;
- (id)_currentRecognizeAction;
- (void)_setAction:(id)arg1;
- (id)_notifyDelegateOpenURL:(id)arg1;
- (void)_notifyDelegateActionStarted;
- (_Bool)_actionStarted:(id)arg1;
- (void)_actionCompleted:(id)arg1 nextAction:(id)arg2 error:(id)arg3;
- (id)cancel;
- (id)cancelMaintainingKeepAlive:(_Bool)arg1;
- (_Bool)setBluetoothInputAllowed:(_Bool)arg1;
- (_Bool)sensitiveActionsEnabled;
- (void)setSensitiveActionsEnabled:(_Bool)arg1;
- (_Bool)nextActionWillRecognize;
- (_Bool)nextActionWillTerminateSession;
- (_Bool)isBusy;
- (_Bool)hasDeferredAction;
- (_Bool)isValid;
- (_Bool)isFinished;
- (_Bool)isActivelyRecognizing;
- (_Bool)isRecognizing;
- (id)reset;
- (id)beginNextAction;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)initWithModelIdentifier:(id)arg1;
- (id)init;
- (void)_init;

@end

@interface VSRecognitionAction : NSObject
{
    NSString *_resultString;
    NSString *_statusString;
    union {
        NSString *stringValue;
        NSAttributedString *attributedStringValue;
    } _spokenString;
    VSRecognitionSession *_session;
    unsigned int _spokenStringIsAttributed:1;
}

- (void)_continueAfterDeferredStart;
- (_Bool)sensitiveActionsEnabled;
- (_Bool)_hasDeferredStartCallback;
- (void)completeWithNextAction:(id)arg1 error:(id)arg2;
- (id)cancel;
- (id)perform;
- (int)completionType;
- (void)setSpokenFeedbackAttributedString:(id)arg1;
- (id)spokenFeedbackAttributedString;
- (void)setSpokenFeedbackString:(id)arg1;
- (id)spokenFeedbackString;
- (void)setStatusDisplayString:(id)arg1;
- (id)statusDisplayString;
- (void)setResultDisplayString:(id)arg1;
- (id)resultDisplayString;
- (void)dealloc;
- (void)_setSession:(id)arg1;
- (id)_session;

@end

@interface VSRecognitionDisambiguateAction : VSRecognitionRecognizeAction
{
    NSString *_repeatedSpokenFeedbackString;
    NSString *_sequenceTag;
    NSMutableDictionary *_knownValues;
    NSMutableDictionary *_knownPhoneticValues;
    NSMutableDictionary *_ambiguousValues;
    NSMutableDictionary *_ambiguousPhoneticValues;
    void *_context;
}

- (id)_actionForEmptyResults;
- (struct __VSRecognition *)_createRecognitionInstanceWithCallbacks:(CDStruct_90f67059 *)arg1 info:(void *)arg2;
- (struct __VSRecognitionDisambiguationContext *)_disambiguationContext;
- (void)setKeywords:(id)arg1;
- (_Bool)_keywordIndexChanged;
- (id)_keywords;
- (void)setAmbiguousValues:(id)arg1 phoneticValues:(id)arg2 forClassIdentifier:(id)arg3;
- (id)ambiguousValuesForClassIdentifier:(id)arg1;
- (void)setKnownValues:(id)arg1 phoneticValues:(id)arg2 forClassIdentifier:(id)arg3;
- (id)knownValuesForClassIdentifier:(id)arg1;
- (void)setKnownValue:(id)arg1 phoneticValue:(id)arg2 forClassIdentifier:(id)arg3;
- (id)knownValueForClassIdentifier:(id)arg1;
- (void)setSequenceTag:(id)arg1;
- (id)sequenceTag;
- (id)repeatedSpokenFeedbackString;
- (void)setRepeatedSpokenFeedbackString:(id)arg1;
- (int)completionType;
- (void)dealloc;

@end

@interface VSRecognitionRecognizeAction : VSRecognitionAction
{
    NSString *_modelIdentifier;
    NSArray *_keywords;
    void *_recognition;
    NSArray *_results;
    NSString *_debugDumpPath;
    NSString *_audioInputPath;
    double _levelInterval;
    struct {
        unsigned int debugDumpEnabled:1;
        unsigned int preferredEngine:2;
        unsigned int resetEngine:1;
        unsigned int bluetoothAllowed:1;
        unsigned int hasStarted:1;
    } _recognizeFlags;
}

- (void)_handledThreadedResults:(id)arg1 nextAction:(id)arg2;
- (void)_handleRecognitionCompleted:(struct __VSRecognition *)arg1 withResults:(struct __CFArray *)arg2 error:(struct __CFError *)arg3;
- (void)_handleRecognitionStarted:(struct __VSRecognition *)arg1;
- (void)_handleRecognitionPrepared:(struct __VSRecognition *)arg1;
- (void)_reset;
- (void)_setResults:(id)arg1;
- (id)_actionForEmptyResults;
- (void)_continueAfterDeferredStart;
- (void)_releaseFromPrepare;
- (id)cancel;
- (id)perform;
- (void)_configureNewRecognitionInstance;
- (struct __VSRecognition *)_createRecognitionInstanceWithCallbacks:(CDStruct_90f67059 *)arg1 info:(void *)arg2;
- (_Bool)_setEngineResetRequired:(_Bool)arg1;
- (_Bool)_setAudioInputPath:(id)arg1;
- (_Bool)_setPreferredEngine:(int)arg1;
- (id)_debugDumpPath;
- (_Bool)_setDebugDumpPath:(id)arg1;
- (_Bool)_setDebugDumpEnabled:(_Bool)arg1;
- (_Bool)_setDebugDumpEnabled:(_Bool)arg1 dumpPath:(id)arg2;
- (_Bool)_keywordIndexChanged;
- (long long)_keywordCount;
- (id)_keywordAtIndex:(long long)arg1;
- (id)_keywords;
- (float)_inputLevelDB;
- (float)_inputLevel;
- (_Bool)_setInputLevelUpdateInterval:(double)arg1;
- (_Bool)_setBluetoothInputAllowed:(_Bool)arg1;
- (_Bool)_hasDeferredStartCallback;
- (_Bool)_isActivelyRecognizing;
- (_Bool)_isRecognizing;
- (id)modelIdentifier;
- (int)completionType;
- (void)dealloc;
- (id)initWithModelIdentifier:(id)arg1;

@end

@interface VSCacheUpdateListener : NSObject
{
    NSLock *_lock;
    NSMutableArray *_updateRequestQueue;
    NSDictionary *_dataProviders;
    NSTimer *_flushTimer;
    _Bool _isListening;
}

+ (id)sharedListenerIfExists;
+ (id)sharedListener;
- (void)_flush;
- (void)_enqueueRequest:(id)arg1;
- (void)_spokenLanguageChanged:(id)arg1;
- (void)performUpdateForModelIdentifier:(id)arg1 classIdentifier:(id)arg2;
- (void)stopListening;
- (void)startListening;
- (void)dealloc;
- (id)_initShared;
- (id)init;

@end

@interface VSCacheUpdateRequest : NSObject
{
    NSString *_modelID;
    NSString *_classID;
}

- (id)description;
- (id)coalescedRequest:(id)arg1;
- (id)classIdentifier;
- (id)modelIdentifier;
- (void)dealloc;
- (id)initWithModelIdentifier:(id)arg1 classIdentifier:(id)arg2;

@end

@interface VSRecognitionConfirmAction : VSRecognitionRecognizeAction
{
    VSRecognitionAction *_confirmedAction;
    VSRecognitionAction *_deniedAction;
    struct {
        unsigned int initializing:1;
        unsigned int confirmed:1;
    } _confirmFlags;
}

- (id)deniedAction;
- (void)setDeniedAction:(id)arg1;
- (id)confirmedAction;
- (void)setConfirmedAction:(id)arg1;
- (void)_setConfirmed:(_Bool)arg1;
- (int)completionType;
- (void)dealloc;
- (id)initWithModelIdentifier:(id)arg1;
- (id)init;

@end

@interface VSRecognitionURLAction : VSRecognitionAction
{
    NSURL *_url;
}

- (id)perform;
- (id)URL;
- (void)setURL:(id)arg1;
- (int)completionType;
- (void)dealloc;

@end

@interface VSRecognitionSpeakAction : VSRecognitionAction
{
    _Bool _shouldTerminate;
}

- (id)perform;
- (int)completionType;
- (id)initWithSpokenFeedbackString:(id)arg1 willTerminate:(_Bool)arg2;

@end

@interface VSRecognitionResultHandlingThread : NSObject
{
    id <VSRecognitionResultHandlingThreadDelegate> _delegate;
    NSMutableArray *_requests;
    NSConditionLock *_lock;
    struct {
        unsigned int running:1;
        unsigned int delegateDidHandleResults:1;
        unsigned int valid:1;
    } _resultHandlingFlags;
}

- (void)_handleRequests;
- (void)_notifyRequestHandled:(id)arg1;
- (void)invalidate;
- (void)handleResults:(id)arg1 withHandler:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)init;

@end

@interface VSRecognitionResultHandlingRequest : NSObject
{
    id <VSRecognitionResultHandler> _handler;
    NSArray *_results;
    VSRecognitionAction *_action;
}

- (id)nextAction;
- (void)setNextAction:(id)arg1;
- (id)handler;
- (id)results;
- (void)dealloc;
- (id)initWithHandler:(id)arg1 results:(id)arg2;

@end

@interface VSTextPreProcessor : NSObject
{
    NSArray *_rules;
    NSString *_languageID;
    struct __CFStringTokenizer *_tokenizer;
}

- (id)processedTextFromString:(id)arg1;
- (void)dealloc;
- (id)initWithContentsOfPath:(id)arg1 languageIdentifier:(id)arg2;

@end

@interface VSTextPreProcessorRule : NSObject
{
    NSString *_matchPattern;
    NSString *_replacement;
    _Bool _caseSensitive;
    _Bool _eatPunctuation;
}

- (id)matchedString:(id)arg1 forTokenInRange:(CDStruct_912cb5d2 *)arg2;
- (void)dealloc;
- (id)initWithDictionaryRepresentation:(id)arg1;

@end

@interface VSFormatArgument : NSObject
{
    NSString *formatSpecifier;
    NSDictionary *attributes;
    NSString *formattedArg;
}

- (void)dealloc;

@end

@interface VSAssetUpdateListener : NSObject
{
    _Bool _isListening;
    PCPersistentTimer *_assetCleanupTimer;
}

+ (id)sharedListener;
- (void)removeAssetForLanguage:(id)arg1;
- (_Bool)assetDownloadStatus:(id)arg1 progress:(float *)arg2 size:(long long *)arg3;
- (int)assetStatusForLanguage:(id)arg1;
- (id)downloadingAssetLanguage;
- (void)downloadAssetForLanguage:(id)arg1;
- (void)_cancelAssetCleanupTimer;
- (void)_scheduleNextCleanupForDate:(id)arg1;
- (void)_updateNextCleanupDate;
- (void)_spokenLanguageChanged:(id)arg1;
- (void)_cleanupAssets;
- (void)_flushLanguageChanges;
- (void)stopListening;
- (void)startListening;
- (void)_rescheduleAssetCleanup;
- (void)dealloc;
- (id)_initShared;
- (id)init;

@end

@interface VSSpeechRequest : NSObject <NSSecureCoding>
{
    _Bool _useCustomVoice;
    _Bool _maintainsInput;
    _Bool _audioSessionIDIsValid;
    unsigned int _audioSessionID;
    unsigned int _audioQueueFlags;
    NSString *_text;
    NSAttributedString *_attributedText;
    NSString *_languageCode;
    NSString *_voiceName;
    long long _footprint;
    long long _gender;
    NSURL *_outputPath;
    double _rate;
    double _pitch;
    double _volume;
    CDUnknownBlockType _stopHandler;
    CDUnknownBlockType _pauseHandler;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) CDUnknownBlockType pauseHandler; // @synthesize pauseHandler=_pauseHandler;
@property(copy, nonatomic) CDUnknownBlockType stopHandler; // @synthesize stopHandler=_stopHandler;
@property(nonatomic) unsigned int audioQueueFlags; // @synthesize audioQueueFlags=_audioQueueFlags;
@property(nonatomic) unsigned int audioSessionID; // @synthesize audioSessionID=_audioSessionID;
@property(nonatomic) _Bool audioSessionIDIsValid; // @synthesize audioSessionIDIsValid=_audioSessionIDIsValid;
@property(nonatomic) _Bool maintainsInput; // @synthesize maintainsInput=_maintainsInput;
@property(nonatomic) double volume; // @synthesize volume=_volume;
@property(nonatomic) double pitch; // @synthesize pitch=_pitch;
@property(nonatomic) double rate; // @synthesize rate=_rate;
@property(copy, nonatomic) NSURL *outputPath; // @synthesize outputPath=_outputPath;
@property(nonatomic) long long gender; // @synthesize gender=_gender;
@property(nonatomic) _Bool useCustomVoice; // @synthesize useCustomVoice=_useCustomVoice;
@property(nonatomic) long long footprint; // @synthesize footprint=_footprint;
@property(copy, nonatomic) NSString *voiceName; // @synthesize voiceName=_voiceName;
@property(copy, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(copy, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;

@end

@interface VSSpeechSynthesizer : NSObject <VSSpeechConnectionDelegate>
{
    VSKeepAlive *_keepAlive;
    VSKeepAlive *_inactiveKeepAlive;
    long long _footprint;
    _Bool _useCustomVoice;
    long long _gender;
    _Bool _useSharedSession;
    _Bool _audioSessionIDIsValid;
    unsigned int _audioSessionID;
    unsigned int _audioQueueFlags;
    NSObject<OS_dispatch_queue> *_queue;
    VSSpeechConnection *_speechConnection;
    struct {
        unsigned int delegateStart:1;
        unsigned int delegateFinish:1;
        unsigned int delegateFinishWithPhonemesSpoken:1;
        unsigned int delegatePause:1;
        unsigned int delegateContinue:1;
        unsigned int delegateWillSpeak:1;
        unsigned int delegateStartWithRequest:1;
        unsigned int delegateFinishWithRequest:1;
        unsigned int delegateFinishWithPhonemesSpokenWithRequest:1;
        unsigned int delegatePauseWithRequest:1;
        unsigned int delegateContinueWithRequest:1;
        unsigned int delegateWillSpeakWithRequest:1;
        unsigned int willUseInput:1;
    } _synthesizerFlags;
    float _rate;
    float _pitch;
    float _volume;
    id <VSSpeechSynthesizerDelegate> _delegate;
    NSString *_voice;
}

+ (void)getLogToFile:(CDUnknownBlockType)arg1;
+ (void)setLogToFile:(_Bool)arg1;
+ (void)initialize;
+ (_Bool)isSystemSpeaking;
+ (id)availableFootprintsForVoice:(id)arg1 languageCode:(id)arg2;
+ (id)availableLanguageCodes;
+ (id)availableVoicesForLanguageCode:(id)arg1;
+ (id)availableVoices;
+ (void)getVoiceInfoForLanguageCode:(id)arg1 footprint:(long long)arg2 gender:(long long)arg3 custom:(_Bool)arg4 reply:(CDUnknownBlockType)arg5;
+ (void)getAutoDownloadedVoiceAssets:(CDUnknownBlockType)arg1;
+ (void)setAutoDownloadedVoiceAssets:(id)arg1;
+ (void)downloadVoiceAsset:(id)arg1 progress:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)getLocalVoiceAssets:(CDUnknownBlockType)arg1;
+ (void)getAllVoiceAssets:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) NSString *voice; // @synthesize voice=_voice;
@property(nonatomic) float volume; // @synthesize volume=_volume;
@property(nonatomic) float pitch; // @synthesize pitch=_pitch;
@property(nonatomic) float rate; // @synthesize rate=_rate;
@property(nonatomic) __weak id <VSSpeechSynthesizerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)connection:(id)arg1 speechRequest:(id)arg2 willSpeakMark:(long long)arg3 inRange:(struct _NSRange)arg4;
- (void)connection:(id)arg1 speechRequest:(id)arg2 didStopAtEnd:(_Bool)arg3 phonemesSpoken:(id)arg4 error:(id)arg5;
- (void)connection:(id)arg1 speechRequestDidContinue:(id)arg2;
- (void)connection:(id)arg1 speechRequestDidPause:(id)arg2;
- (void)connection:(id)arg1 speechRequestDidStart:(id)arg2;
- (void)setMaintainInactivePersistentConnection:(_Bool)arg1;
- (void)setMaintainPersistentConnection:(_Bool)arg1;
- (_Bool)continueSpeakingRequest:(id)arg1 withError:(id *)arg2;
- (_Bool)pauseSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 synchronously:(_Bool)arg3 error:(id *)arg4;
- (_Bool)pauseSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 error:(id *)arg3;
- (_Bool)stopSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 synchronously:(_Bool)arg3 error:(id *)arg4;
- (_Bool)stopSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 error:(id *)arg3;
- (_Bool)startSpeakingString:(id)arg1 withLanguageCode:(id)arg2 request:(id *)arg3 error:(id *)arg4;
- (_Bool)startSpeakingString:(id)arg1 toURL:(id)arg2 request:(id *)arg3 error:(id *)arg4;
- (_Bool)startSpeakingString:(id)arg1 request:(id *)arg2 error:(id *)arg3;
- (void)useAudioQueueFlags:(unsigned int)arg1;
- (void)useSpecificAudioSession:(unsigned int)arg1;
- (void)useSharedAudioSession:(_Bool)arg1;
- (long long)gender;
- (void)setGender:(long long)arg1;
- (_Bool)useCustomVoice;
- (void)setUseCustomVoice:(_Bool)arg1;
- (long long)footprint;
- (void)setFootprint:(long long)arg1;
- (float)maximumRate;
- (float)minimumRate;
- (id)speechString;
- (_Bool)isSpeaking;
- (_Bool)continueSpeakingWithError:(id *)arg1;
- (_Bool)pauseSpeakingAtNextBoundary:(long long)arg1 synchronously:(_Bool)arg2 error:(id *)arg3;
- (_Bool)pauseSpeakingAtNextBoundary:(long long)arg1 error:(id *)arg2;
- (_Bool)stopSpeakingAtNextBoundary:(long long)arg1 synchronously:(_Bool)arg2 error:(id *)arg3;
- (_Bool)stopSpeakingAtNextBoundary:(long long)arg1 error:(id *)arg2;
- (_Bool)startSpeakingString:(id)arg1 toURL:(id)arg2 withLanguageCode:(id)arg3 error:(id *)arg4;
- (_Bool)startSpeakingString:(id)arg1 withLanguageCode:(id)arg2 error:(id *)arg3;
- (_Bool)startSpeakingString:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
- (_Bool)startSpeakingString:(id)arg1 error:(id *)arg2;
- (_Bool)_continueSpeakingRequest:(id)arg1 withError:(id *)arg2;
- (_Bool)_pauseSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 synchronously:(_Bool)arg3 error:(id *)arg4;
- (_Bool)_stopSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 synchronously:(_Bool)arg3 error:(id *)arg4;
- (_Bool)_startSpeakingString:(id)arg1 orAttributedString:(id)arg2 toURL:(id)arg3 withLanguageCode:(id)arg4 request:(id *)arg5 error:(id *)arg6;
- (void)_setDelegate:(id)arg1;
- (void)dealloc;
- (_Bool)startSpeakingAttributedString:(id)arg1 toURL:(id)arg2 withLanguageCode:(id)arg3 error:(id *)arg4;
- (id)initForInputFeedback;
- (id)init;

@end

@interface VSKeepAlive : NSObject
{
    NSXPCConnection *_serverConnection;
    long long _audioType;
    _Bool _active;
    _Bool _keepAudioSessionActive;
}

@property(nonatomic) _Bool keepAudioSessionActive; // @synthesize keepAudioSessionActive=_keepAudioSessionActive;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(nonatomic) long long audioType; // @synthesize audioType=_audioType;
- (void).cxx_destruct;
- (void)_ensureKeepAliveMaintenance;
- (id)_remoteKeepAlive;
- (id)_serverConnection;
- (void)dealloc;

@end

@interface VSSpeechConnection : NSObject
{
    NSXPCConnection *_connection;
    VSSpeechConnectionDelegateWrapper *_delegateWrapper;
    VSSpeechRequest *_request;
}

@property(readonly, nonatomic) VSSpeechRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (void)getLogToFile:(CDUnknownBlockType)arg1;
- (void)setLogToFile:(_Bool)arg1;
- (void)getVoiceInfoForLanguageCode:(id)arg1 footprint:(long long)arg2 gender:(long long)arg3 custom:(_Bool)arg4 reply:(CDUnknownBlockType)arg5;
- (void)getAutoDownloadedVoiceAssets:(CDUnknownBlockType)arg1;
- (void)setAutoDownloadedVoiceAssets:(id)arg1;
- (void)downloadVoiceAsset:(id)arg1 progress:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getLocalVoiceAssets:(CDUnknownBlockType)arg1;
- (void)getAllVoiceAssets:(CDUnknownBlockType)arg1;
- (void)continueCurrentSpeechRequest;
- (void)pauseCurrentSpeechRequestAtMark:(long long)arg1;
- (void)stopCurrentSpeechRequestAtMark:(long long)arg1;
- (void)startSpeechRequest:(id)arg1;
- (_Bool)isSystemSpeakingOnBehalfOfCurrentConnection;
- (_Bool)isSystemSpeaking;
- (id)availableFootprintsForVoice:(id)arg1 languageCode:(id)arg2;
- (id)availableVoicesForLanguageCode:(id)arg1;
@property(nonatomic) __weak id <VSSpeechConnectionDelegate> delegate;
- (void)_setRequest:(id)arg1;
- (void)_connectionInvalidated;
- (id)_remoteObjectWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_remoteObject;
- (id)_connection;
- (void)dealloc;

@end

@interface VSSpeechConnectionDelegateWrapper : NSObject <VSSpeechServiceDelegate>
{
    id <VSSpeechConnectionDelegate> _delegate;
    VSSpeechRequest *_request;
    VSSpeechConnection *_connection;
}

@property(nonatomic) __weak VSSpeechConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) VSSpeechRequest *request; // @synthesize request=_request;
@property(nonatomic) __weak id <VSSpeechConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (oneway void)speechRequestDidStopWithSuccess:(_Bool)arg1 phonemesSpoken:(id)arg2 error:(id)arg3;
- (oneway void)speechRequestMark:(long long)arg1 didStartForRange:(struct _NSRange)arg2;
- (oneway void)speechRequestDidContinue;
- (oneway void)speechRequestDidPause;
- (oneway void)speechRequestDidStart;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface VSVoiceAsset : NSObject <NSSecureCoding>
{
    _Bool _isInstalled;
    _Bool _isBuiltInVoice;
    NSString *_name;
    NSArray *_languages;
    long long _gender;
    long long _footprint;
    NSNumber *_contentVersion;
    NSString *_masteredVersion;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSString *masteredVersion; // @synthesize masteredVersion=_masteredVersion;
@property(readonly, nonatomic) NSNumber *contentVersion; // @synthesize contentVersion=_contentVersion;
@property(nonatomic) _Bool isBuiltInVoice; // @synthesize isBuiltInVoice=_isBuiltInVoice;
@property(readonly, nonatomic) _Bool isInstalled; // @synthesize isInstalled=_isInstalled;
@property(readonly, nonatomic) long long footprint; // @synthesize footprint=_footprint;
@property(readonly, nonatomic) long long gender; // @synthesize gender=_gender;
@property(readonly, nonatomic) NSArray *languages; // @synthesize languages=_languages;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)initWithName:(id)arg1 languages:(id)arg2 gender:(long long)arg3 footprint:(long long)arg4 contentVersion:(id)arg5 masteredVersion:(id)arg6 isInstalled:(_Bool)arg7;
- (id)initWithName:(id)arg1 languages:(id)arg2 gender:(long long)arg3 footprint:(long long)arg4 isInstalled:(_Bool)arg5;

@end

@interface VSGenericUpdateEndpoint : NSObject <NSXPCListenerDelegate, NSSecureCoding>
{
    NSXPCListenerEndpoint *_endpoint;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCListener *_listener;
    CDUnknownBlockType _handler;
}

+ (_Bool)supportsSecureCoding;
+ (CDUnknownBlockType)remoteUpdateHanderForEndpoint:(id)arg1;
+ (id)configuredEndpointWithUpdateHandler:(CDUnknownBlockType)arg1 withConnection:(id)arg2;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSXPCListenerEndpoint *endpoint; // @synthesize endpoint=_endpoint;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)invalidate;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface VSGenericBlockHolder : NSObject <VSGenericUpdate>
{
    CDUnknownBlockType _block;
}

- (void).cxx_destruct;
- (void)invokeUpdateWithObject:(id)arg1;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface NSArray (VSRecognitionSessionKeywords)
- (id)_nextKeywordUsingCursors:(struct __CFDictionary *)arg1;
- (id)_scrambledKeywordsAndAddToSet:(id)arg1;
@end

@interface NSAttributedString (VSSpeechAdditions)
+ (id)attributedStringWithFormatAndAttributes:(id)arg1;
@end

@interface NSMutableAttributedString (VSSpeechAdditions)
- (void)appendString:(id)arg1 withAttributes:(id)arg2;
@end


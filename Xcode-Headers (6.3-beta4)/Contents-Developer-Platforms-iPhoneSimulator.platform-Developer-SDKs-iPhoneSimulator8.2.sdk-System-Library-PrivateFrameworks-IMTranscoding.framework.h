//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark -

//
// File: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/IMTranscoding.framework/IMTranscoding
// UUID: 0949207B-A215-3A25-BA67-E2F7A7F0E937
//
//                           Arch: x86_64
//                Current version: 800.0.0
//          Compatibility version: 1.0.0
//                 Source version: 1363.9.22.0.0
//            Minimum iOS version: 8.2.0
//                    SDK version: 8.2.0
//
// Objective-C Garbage Collection: Unsupported
//

@interface IMTranscodeController : NSObject
{
    NSObject<OS_xpc_object> *_connection;
}

+ (id)sharedInstance;
- (void)transcodeFileTransferContents:(id)arg1 utiType:(id)arg2 allowUnfilteredUTIs:(id)arg3 target:(long long)arg4 highQualityMaxByteSize:(unsigned long long)arg5 lowQualityMaxByteSize:(unsigned long long)arg6 maxDimension:(unsigned long long)arg7 transcoderUserInfo:(id)arg8 representations:(long long)arg9 completionBlock:(CDUnknownBlockType)arg10;
- (void)_transcodeFileTransferContents:(id)arg1 utiType:(id)arg2 allowUnfilteredUTIs:(id)arg3 target:(long long)arg4 highQualityMaxByteSize:(unsigned long long)arg5 lowQualityMaxByteSize:(unsigned long long)arg6 maxDimension:(unsigned long long)arg7 transcoderUserInfo:(id)arg8 representations:(long long)arg9 retries:(int)arg10 completionBlock:(CDUnknownBlockType)arg11;
- (_Bool)_connect;
- (void)_disconnected;
- (void)dealloc;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark -

//
// File: /Applications/Xcode.app/Contents/PlugIns/IDEContinuousIntegration.ideplugin/Contents/MacOS/IDEContinuousIntegration
// UUID: 5DD5EE88-8F7F-3092-B257-77F5D194BD5E
//
//                           Arch: x86_64
//                Current version: 1.0.0
//          Compatibility version: 1.0.0
//                 Source version: 6743.0.0.0.0
//       Minimum Mac OS X version: 10.9.0
//                    SDK version: 10.10.0
//
// Objective-C Garbage Collection: Unsupported
//
//                       Run path: @executable_path/
//                               = /Applications/Xcode.app/Contents/PlugIns/IDEContinuousIntegration.ideplugin/Contents/MacOS
//                       Run path: @executable_path/../../../Frameworks
//                               = /Applications/Xcode.app/Contents/PlugIns/Frameworks
//                       Run path: @executable_path/../../../SharedFrameworks
//                               = /Applications/Xcode.app/Contents/PlugIns/SharedFrameworks
//                       Run path: @executable_path/../../../PlugIns
//                               = /Applications/Xcode.app/Contents/PlugIns/PlugIns
//                       Run path: @executable_path/../../../PlugIns
//                               = /Applications/Xcode.app/Contents/PlugIns/PlugIns
//                       Run path: @executable_path/../../../PlugIns/IDEiOSSupportCore.ideplugin/Contents/Frameworks
//                               = /Applications/Xcode.app/Contents/PlugIns/PlugIns/IDEiOSSupportCore.ideplugin/Contents/Frameworks
//                       Run path: @executable_path/../../../PlugIns/Xcode3Core.ideplugin/Contents/Frameworks
//                               = /Applications/Xcode.app/Contents/PlugIns/PlugIns/Xcode3Core.ideplugin/Contents/Frameworks
//                       Run path: @executable_path/../../../OtherFrameworks
//                               = /Applications/Xcode.app/Contents/PlugIns/OtherFrameworks
//                       Run path: @executable_path/../../../Developer/Toolchains/XcodeDefault.xctoolchain/usr/lib
//                               = /Applications/Xcode.app/Contents/PlugIns/Developer/Toolchains/XcodeDefault.xctoolchain/usr/lib
//

@protocol IDEKeyDrivenNavigableItemRepresentedObject <NSObject>
@property(readonly) NSString *navigableItem_name;

@optional
@property(readonly) NSString *navigableItem_groupIdentifier;
@property(readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly) DVTFileDataType *navigableItem_documentType;
@property(readonly) IDEFileReference *navigableItem_fileReference;
@property(readonly) BOOL navigableItem_isLeaf;
@property(readonly) BOOL navigableItem_isMajorGroup;
@property(readonly) NSString *navigableItem_toolTip;
@property(readonly) NSImage *navigableItem_image;
- (DVTDocumentLocation *)navigableItem_contentDocumentLocationInDocumentURL:(NSURL *)arg1;
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

@protocol XCSServiceErrorDelegate <NSObject>

@optional
- (void)service:(XCSService *)arg1 didEncounterError:(NSError *)arg2 withRequest:(XCSHTTPRequest *)arg3 proceed:(void (^)(unsigned long long, NSError *))arg4;
@end

@interface XCSService (IDEAccountPrefsPaneAccount) <IDEKeyDrivenNavigableItemRepresentedObject, XCSServiceErrorDelegate>
+ (id)keyPathsForValuesAffectingAccountReachability;
+ (id)keyPathsForValuesAffectingAccountEnabled;
+ (id)keyPathsForValuesAffectingAccountImage;
+ (id)keyPathsForValuesAffectingAccountSubTitle;
+ (id)keyPathsForValuesAffectingAccountTitle;
- (void)loginWithStoredCredentials:(CDUnknownBlockType)arg1;
- (void)service:(id)arg1 didEncounterError:(id)arg2 withRequest:(id)arg3 proceed:(CDUnknownBlockType)arg4;
- (void)deactivateXcodeSessionManagement;
- (void)activateXcodeSessionManagementWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)setCurrentUsername:(id)arg1 andPassword:(id)arg2 withError:(id *)arg3;
@property(readonly, nonatomic) BOOL isReachable;
@property(retain, nonatomic) XCSVersionInfo *lastKnownVersionInfo;
@property(retain, nonatomic) NSError *lastKnownConnectionError;
@property BOOL attemptGuestAuthentication;
@property(copy, nonatomic) NSString *password;
@property(copy, nonatomic) NSString *username;
@property(copy, nonatomic) NSString *displayName;
@property(readonly) DVTFileDataType *navigableItem_documentType;
@property(readonly, nonatomic) long long accountReachability;
- (BOOL)accountEnabled;
@property(readonly, nonatomic) NSImage *accountImage;
@property(readonly, copy, nonatomic) NSString *accountSubTitle;
@property(readonly, copy, nonatomic) NSString *accountTitle;
@property(readonly, nonatomic) NSImage *computerImage;
@property(readonly) NSString *navigableItem_name;
@property(readonly, copy, nonatomic) NSString *serverCompatibilityErrorText;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) BOOL enabled;
@property(readonly) unsigned long long hash;
@property(readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly) IDEFileReference *navigableItem_fileReference;
@property(readonly) NSString *navigableItem_groupIdentifier;
@property(readonly) NSImage *navigableItem_image;
@property(readonly) BOOL navigableItem_isLeaf;
@property(readonly) BOOL navigableItem_isMajorGroup;
@property(readonly) NSString *navigableItem_toolTip;
@property(readonly) Class superclass;
@end


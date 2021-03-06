//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark -

//
// File: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/Conference.framework/Conference
// UUID: 82962456-1AEB-3551-8852-459B2C93E1FB
//
//                           Arch: x86_64
//                Current version: 1.0.0
//          Compatibility version: 1.0.0
//                 Source version: 930.10.3.0.0
//            Minimum iOS version: 8.2.0
//                    SDK version: 8.2.0
//
// Objective-C Garbage Collection: Unsupported
//

@interface CNFConferenceController : NSObject
{
}

+ (struct __CFPhoneNumber *)newPhoneNumberRefForDestinationId:(id)arg1 useNetworkCountryCode:(_Bool)arg2;
+ (id)sharedInstance;

@end

@interface CNFUIUtilities : NSObject
{
}

+ (id)callDurationStringForChat:(id)arg1;
+ (id)currentCallDurationString;
+ (id)formattedPhoneNumberFromString:(id)arg1;
+ (id)statusStringForState:(unsigned int)arg1;

@end

@interface CNFInternalAccountViewController : PSListController
{
    IMAccount *_account;
    FTRegConnectionHandler *_connectionHandler;
}

@property(retain, nonatomic) IMAccount *account; // @synthesize account=_account;
- (void)_handleAccountNotification:(id)arg1;
- (void)_handleDaemonConnected:(id)arg1;
- (void)_handleDaemonDisconnected:(id)arg1;
- (void)_stopListeningForNotifications;
- (void)_startListeningForNotifications;
- (id)accountIsActive:(id)arg1;
- (id)registrationFailureReason:(id)arg1;
- (id)accountDisplayName:(id)arg1;
- (id)statusForAlias:(id)arg1;
- (id)accountType:(id)arg1;
- (id)accountLogin:(id)arg1;
- (id)registrationStatus:(id)arg1;
- (id)accountLoginStatus:(id)arg1;
- (_Bool)isConnectedToDaemon;
- (id)specifierForAlias:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (id)bundle;
- (id)specifiers;
- (void)dealloc;
- (id)initWithAccount:(id)arg1;

@end

@interface CNFInternalAccountListViewController : PSListController
{
    IMServiceImpl *_service;
    FTRegConnectionHandler *_connectionHandler;
}

@property(retain, nonatomic) IMServiceImpl *service; // @synthesize service=_service;
- (void)_handleAccountNotification:(id)arg1;
- (void)_handleDaemonConnected:(id)arg1;
- (void)_handleDaemonDisconnected:(id)arg1;
- (void)_stopListeningForNotifications;
- (void)_startListeningForNotifications;
- (void)accountTappedWithSpecifier:(id)arg1;
- (id)accountNameForSpecifier:(id)arg1;
- (id)specifiers;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithServiceType:(long long)arg1;

@end

@interface CNFInternalProcessListController : PSListController
{
}

- (void)conferenceKillProcesses:(id)arg1;
- (void)conferenceKillProcessesAndNukeKeychain:(id)arg1;
- (void)killJustMediaServerD:(id)arg1;
- (void)killJustIMAVAgent:(id)arg1;
- (void)killJustIChatAgent:(id)arg1;
- (id)bundle;
- (id)specifiers;

@end

@interface CNFInternalSettingsUtilities : NSObject
{
}

+ (void)setIDSEnvironment:(id)arg1;
+ (id)IDSEnvironment;
+ (void)setCurrentInternalSettingsBundle:(id)arg1;
+ (id)currentInternalSettingsBundle;
+ (void)signOutAllAccounts;
+ (void)nukeKeychain;
+ (void)killEverything;
+ (void)killMobileSMS;
+ (void)killMobilePhone;
+ (void)killFaceTime;
+ (void)killMediaServerd;
+ (void)syncImagentLogSettings;
+ (void)killImavagent;
+ (void)killImagent;
+ (void)setViceroyLoggingEnabled:(_Bool)arg1;
+ (_Bool)isViceroyLoggingEnabled;

@end

@interface NSURL (CNFAdditions)
- (id)formattedFaceTimeDestinationAccount;
- (_Bool)_isPhoneNumberID:(id)arg1;
@end


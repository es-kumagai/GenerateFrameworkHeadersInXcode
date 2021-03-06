//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark -

//
// File: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/AccountSettings.framework/AccountSettings
// UUID: 810E42FE-1E45-3D3A-BEE3-9555ECB9328A
//
//                           Arch: x86_64
//                Current version: 1.0.0
//          Compatibility version: 1.0.0
//                 Source version: 229.0.0.0.0
//            Minimum iOS version: 8.2.0
//                    SDK version: 8.2.0
//
// Objective-C Garbage Collection: Unsupported
//

@protocol ASRuntimeFixProtocol <NSObject>
- (NSSet *)supportedAccountTypes;
- (void)accountsHaveBeenSaved:(_Bool)arg1;
- (int)fixBasicAccountIfNeeded:(BasicAccount *)arg1 loggingMessage:(NSString *)arg2;
@end

@protocol AccountCreationProtocol

@optional
+ (id <AccountFullAccountProtocol>)accountWithBasicAccount:(BasicAccount *)arg1;
+ (Class)classForAccountType:(NSString *)arg1;
@end

@protocol AccountFullAccountProtocol <NSObject>
- (void)renewAccountCredentialsWithHandler:(void (^)(int))arg1;
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

@interface BasicAccount : NSObject <AccountFullAccountProtocol>
{
    NSDictionary *_originalProperties;
    NSMutableDictionary *_properties;
    id <AccountFullAccountProtocol> _fullAccount;
    id <AccountRefreshProtocol> _syncAccount;
    BasicAccount *_parentAccount;
}

+ (_Bool)userConfirmationIsRequiredByDataclass:(id)arg1;
+ (_Bool)displayToggleForDataclass:(id)arg1;
+ (_Bool)multipleStoresSupportedByDataclass:(id)arg1;
+ (_Bool)showRemindersSeparatelyForAccountType:(id)arg1;
+ (id)deleteAccountActionsForAccountType:(id)arg1;
+ (id)userActionsToDisableDataclass:(id)arg1 forAccountType:(id)arg2;
+ (id)userActionsToEnableDataclass:(id)arg1 forAccountType:(id)arg2;
+ (id)removeActionsIncompatibleWithSingleStoreDataclass:(id)arg1;
+ (id)supportedDataclassesForAccountType:(id)arg1;
+ (id)allSupportedDataclasses;
+ (id)accountWithProperties:(id)arg1;
+ (id)accountWithType:(id)arg1 class:(id)arg2;
+ (void)initialize;
+ (_Bool)isMultitaskingEnabled;
+ (id)_dataclassesProperties;
+ (id)_creatorsInfo;
+ (_Bool)_isValidAccountType:(id)arg1;
+ (id)_accountCreationMap;
+ (id)createNewAccountUID;
@property(retain, nonatomic) NSDictionary *originalProperties; // @synthesize originalProperties=_originalProperties;
- (void)renewAccountCredentialsWithHandler:(CDUnknownBlockType)arg1;
- (_Bool)refreshContainersForDataclass:(id)arg1;
- (_Bool)refreshContainerListForDataclass:(id)arg1;
- (_Bool)refreshContainerWithIdentifier:(id)arg1 forDataclass:(id)arg2;
- (_Bool)refreshContainersForDataclass:(id)arg1 isUserRequested:(_Bool)arg2;
- (_Bool)refreshContainerListForDataclass:(id)arg1 isUserRequested:(_Bool)arg2;
- (_Bool)refreshContainerWithIdentifier:(id)arg1 forDataclass:(id)arg2 isUserRequested:(_Bool)arg3;
- (id)fullAccountUsingLoader:(id)arg1;
- (void)setEnabledForDataclasses:(id)arg1;
- (void)setEnabled:(_Bool)arg1 forDataclass:(id)arg2;
- (_Bool)isEnabledForDataclass:(id)arg1;
- (id)enabledDataclasses;
- (id)provisionedDataclasses;
- (id)supportedDataclasses;
- (id)shortTypeString;
- (id)typeString;
- (id)displayName;
- (void)setAccountClass:(id)arg1;
- (id)accountClass;
- (id)syncStoreIdentifier;
- (void)setParentAccount:(id)arg1;
- (id)parentAccount;
- (id)parentAccountIdentifier;
- (id)identifier;
- (id)type;
- (id)propertiesToSave;
- (id)properties;
- (id)accountPropertyForKey:(id)arg1;
- (void)removeAccountPropertyForKey:(id)arg1;
- (void)setAccountProperty:(id)arg1 forKey:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithProperties:(id)arg1;
- (id)_profileRestrictedDataclasses;
- (id)_orderedDataclasses:(id)arg1;
- (id)_cachedSyncAccount;
- (id)_initWithType:(id)arg1 class:(id)arg2;
- (id)syncAccountCreatorClassNameForAccountType:(id)arg1;
- (id)fullAccountCreatorClassNameForAccountType:(id)arg1 loader:(id)arg2;
- (id)_creatorClassNameForAccountType:(id)arg1 creatorType:(id)arg2 loader:(id)arg3;
- (void)setFullAccount:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)_forcedSetEnabled:(_Bool)arg1 forDataclass:(id)arg2;
- (void)_forcedSetAccountProperty:(id)arg1 forKey:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface AccountsManager : NSObject
{
    NSMutableDictionary *_topLevelAccountsByID;
    NSMutableArray *_orderedTopLevelAccounts;
    NSMutableDictionary *_childAccountsByID;
    NSMutableDictionary *_childAccountIDToParentAccountID;
    NSMutableDictionary *_originalAccountsByID;
    unsigned long long _dataVersion;
    NSArray *_runtimeFixers;
}

+ (id)_notifierClassNamesForAccountType:(id)arg1 dataclass:(id)arg2;
+ (id)displayNameForGroupOfAccountType:(id)arg1 forBeginningOfSentence:(_Bool)arg2;
+ (void)accountDidChange:(id)arg1 forDataclass:(id)arg2;
+ (void)accountWillChange:(id)arg1 forDataclass:(id)arg2;
+ (void)_migrateAccountsIfNeeded;
+ (void)_setShouldSkipNotifications:(_Bool)arg1;
+ (id)fullPathToAccountSettingsPlist;
+ (unsigned long long)currentVersion;
+ (_Bool)_oldMailAccountsInformationFound;
+ (_Bool)_oldDAAccountsInformationFound;
+ (_Bool)accountSettingsNeedsToBeMigrated;
+ (void)shouldMigrateOldMailAccounts:(_Bool *)arg1 oldDAAccounts:(_Bool *)arg2 newAccountSettings:(_Bool *)arg3;
+ (void)removeNewAccountSettingsToMigrateOldAccountInformation;
+ (void)waitForMigrationToFinish;
+ (void)releaseMigrationLock:(id)arg1;
+ (id)createAndLockMigrationLock;
+ (void)killDataAccessIfNecessary;
- (void)_sendNotificationsForChangedAccounts;
- (void)_addNotificationToDictionary:(id)arg1 forChangeType:(int)arg2 originalProperties:(id)arg3 currentProperties:(id)arg4;
- (void)_setOriginalAccountDictionaries;
- (unsigned long long)countOfBasicAccountsWithTypes:(id)arg1;
- (id)_createRuntimeFixers;
- (id)_initWithAccountsInfo:(id)arg1;
- (void)_loadChildrenFromAccount:(id)arg1;
- (void)_removeChildrenForAccountWithIdentifier:(id)arg1;
- (void)saveAllAccounts;
- (id)mergeInMemoryProperties:(id)arg1 originalProperties:(id)arg2 onDiskProperties:(id)arg3;
- (void)addChild:(id)arg1 toAccount:(id)arg2;
- (void)removeChildWithIdentifier:(id)arg1 fromAccount:(id)arg2;
- (void)replaceAccountsWithTypes:(id)arg1 withAccounts:(id)arg2;
- (void)replaceAccount:(id)arg1 withAccount:(id)arg2;
- (void)deleteAccountWithIdentifier:(id)arg1;
- (void)deleteAccount:(id)arg1;
- (void)insertAccount:(id)arg1;
- (void)updateAccount:(id)arg1;
- (unsigned long long)count;
- (id)accountsWithTypes:(id)arg1 withLoader:(id)arg2;
- (id)accountsWithTypes:(id)arg1;
- (id)allMailAccounts;
- (id)fullAccountWithIdentifier:(id)arg1 loader:(id)arg2;
- (id)fullDeviceLocalAccount;
- (id)basicAccountsWithTypes:(id)arg1;
- (id)allBasicSyncableAccounts;
- (id)allBasicAccounts;
- (id)syncableAccountWithSyncIdentifier:(id)arg1;
- (id)displayAccountWithSyncIdentifier:(id)arg1;
- (id)accountWithIdentifier:(id)arg1;
- (void)dealloc;
- (id)init;
- (unsigned long long)dataVersion;
- (id)initInsideOfMigration;
- (id)initWithAccounsInfoArray:(id)arg1;
- (void)setDataVersion:(unsigned long long)arg1;

@end

@interface DeviceLocalAccount : BasicAccount <AccountCreationProtocol>
{
}

+ (id)accountWithBasicAccount:(id)arg1;
+ (id)tetheredSourceForDataClass:(id)arg1;
+ (_Bool)isTetheredSyncingDataclass:(id)arg1;
+ (id)localizedReferenceToSyncSourceStringForDataClass:(id)arg1;
+ (id)localizedSyncSourceStringForDataClass:(id)arg1 forBeginningOfSentence:(_Bool)arg2;
+ (id)typeString;
+ (id)basicAccountProperties;
+ (id)_identifier;
- (id)syncStoreIdentifier;
- (id)displayName;
- (id)identifier;

@end

@interface ASRuntimeFixMailAccount : NSObject <ASRuntimeFixProtocol>
{
    _Bool _shouldNotifyMobileMail;
    NSSet *_supportedMailClasses;
}

- (id)supportedAccountTypes;
- (void)accountsHaveBeenSaved:(_Bool)arg1;
- (int)fixBasicAccountIfNeeded:(id)arg1 loggingMessage:(id)arg2;
- (void)dealloc;
- (id)init;
- (_Bool)_cleanupAccountClass:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


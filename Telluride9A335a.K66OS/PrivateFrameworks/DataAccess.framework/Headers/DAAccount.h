/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <BasicAccount.h> // Unknown library
#import "DataAccess-Structs.h"
#import "AccountCreationProtocol.h"
#import "BasicAccountSyncing.h"
#import "AccountFullAccountProtocol.h"

@class NSMutableDictionary, DAStatusReport, NSString, NSData, NSURL, NSArray, DASettingsTemplate;

@interface DAAccount : BasicAccount <AccountFullAccountProtocol, AccountCreationProtocol, BasicAccountSyncing> {
	int _dataclasses;	// 24 = 0x18
	BOOL _hasDirtyBits;	// 28 = 0x1c
	BOOL _hasInitted;	// 29 = 0x1d
	BOOL _shouldAutodiscoverPrincipalURL;	// 30 = 0x1e
	BOOL _shouldPromptForPassword;	// 31 = 0x1f
	BOOL _shouldFailAllTasks;	// 32 = 0x20
	BOOL _shouldUseOpportunisticSockets;	// 33 = 0x21
	int _originalDataclasses;	// 36 = 0x24
	CFDictionaryRef _changeTypesByDataclass;	// 40 = 0x28
	NSMutableDictionary *_haveWarnedAboutCertDict;	// 44 = 0x2c
	DASettingsTemplate *_settingsTemplate;	// 48 = 0x30
	DAStatusReport *_statusReport;	// 52 = 0x34
	CFDictionaryRef _consumers;	// 56 = 0x38
	CFURLStorageSessionRef _storageSession;	// 60 = 0x3c
}
@property(copy) NSString *accountDescription;	// G=0x3224fb79; S=0x32250279; 
@property(assign, setter=setDAAccountVersion:) int daAccountVersion;	// G=0x3224f7ed; S=0x32251d91; 
@property(copy) NSString *emailAddress;	// G=0x32251245; S=0x32251291; 
@property(copy) NSArray *emailAddresses;	// G=0x322512d9; S=0x32251311; 
@property(readonly, assign) int enabledDataclassesBitmask;	// G=0x322522c1; @synthesize=_dataclasses
@property(retain) NSData *encryptionIdentityPersistentReference;	// G=0x322514ad; 
@property(readonly, assign) BOOL hasDirtyBits;	// G=0x32251791; converted property
@property(copy) NSString *host;	// G=0x3225111d; S=0x32251169; 
@property(readonly, assign) NSData *identityPersist;	// G=0x32251a09; 
@property(readonly, assign) BOOL isChildAccount;	// G=0x32251d35; 
@property(copy) NSString *password;	// G=0x32250e59; S=0x32250fa1; 
@property(readonly, assign) NSString *persistentUUID;	// G=0x3224f64d; 
@property(assign) int port;	// G=0x32251541; S=0x3225158d; 
@property(copy) NSURL *principalURL;	// G=0x322516b5; S=0x32251701; 
@property(readonly, assign, nonatomic) NSString *scheduleIdentifier;	// G=0x3225023d; 
@property(copy) NSString *scheme;	// G=0x32251621; S=0x3225166d; 
@property(retain) DASettingsTemplate *settingsTemplate;	// G=0x322522f1; S=0x32252305; @synthesize=_settingsTemplate
@property(assign) BOOL shouldAutodiscoverPrincipalURL;	// G=0x322522d1; S=0x322522e1; @synthesize=_shouldAutodiscoverPrincipalURL
@property(assign) BOOL shouldFailAllTasks;	// G=0x32252339; S=0x32252349; @synthesize=_shouldFailAllTasks
@property(assign) BOOL shouldPromptForPassword;	// G=0x32250e39; S=0x32250e49; 
@property(assign) BOOL shouldUseOpportunisticSockets;	// G=0x32252359; S=0x32252369; @synthesize=_shouldUseOpportunisticSockets
@property(retain) NSData *signingIdentityPersistentReference;	// G=0x32251419; 
@property(readonly, assign) DAStatusReport *statusReport;	// G=0x32252329; @synthesize=_statusReport
@property(readonly, assign) NSString *tag;	// G=0x3225024d; 
@property(assign) int toDosNumberOfPastDaysToSync;	// G=0x3225d8c9; S=0x3225d8cd; converted property
@property(assign) BOOL useSSL;	// G=0x322511b1; S=0x322511fd; 
@property(copy) NSString *user;	// G=0x322510fd; S=0x3225110d; 
@property(copy) NSString *username;	// G=0x32251069; S=0x322510b5; 
@property(retain) id version;	// G=0x32250fd5; S=0x32251021; converted property
+ (Class)accountClass;	// 0x3225015d
+ (Class)accountClassWithProperties:(id)properties;	// 0x32250639
+ (id)basicAccountProperties;	// 0x3224ffd9
+ (Class)classForAccountType:(id)accountType;	// 0x32250701
+ (Class)clientClass;	// 0x32250669
+ (Class)daemonClass;	// 0x322506b5
+ (id)defaultProperties;	// 0x32251d39
+ (id)newAccountOfAccountType:(id)accountType;	// 0x32251d3d
- (id)init;	// 0x322500b5
- (id)initWithProperties:(id)properties;	// 0x3224f291
- (int)_actionForTrust:(SecTrust *)trust host:(id)host service:(id)service;	// 0x32252379
- (id)_exceptionsDict;	// 0x32251b45
- (void)_handlePasswordNotification:(CFUserNotificationRef)notification response:(unsigned long)response callback:(id)callback;	// 0x3225382d
- (BOOL)_isIdentityManagedByProfile;	// 0x32251b05
- (void)_removeHostsToTrust;	// 0x32250b85
- (id)_serverSuffixesToAlwaysFail;	// 0x32252479
- (void)_setPersistentUUID:(id)uuid;	// 0x3225025d
- (void)_setProperties:(id)properties;	// 0x32251749
- (BOOL)_upgradeSelfFromPreKirkwood;	// 0x32250c8d
- (BOOL)accountBoolPropertyForKey:(id)key;	// 0x32250739
- (int)accountChangeTypeForDataclass:(int)dataclass;	// 0x322505c1
- (BOOL)accountContainsEmailAddress:(id)address;	// 0x32251359
// declared property getter: - (id)accountDescription;	// 0x3224fb79
- (id)accountID;	// 0x3224f591
- (int)accountIntPropertyForKey:(id)key;	// 0x322507a1
- (BOOL)accountNeedsUpgrade;	// 0x32250bb5
- (BOOL)autodiscoverAccountConfigurationWithConsumer:(id)consumer;	// 0x32250b7d
- (id)beginDownloadingAttachmentWithUUID:(id)uuid consumer:(id)consumer;	// 0x322539d5
- (void)cancelAllSearchQueries;	// 0x3225bd69
- (void)cancelAutodiscovery;	// 0x32250b81
- (void)cancelDownloadingInstance:(id)instance error:(id)error;	// 0x32253a75
- (void)cancelSearchQuery:(id)query;	// 0x3225bd65
- (void)checkValidityWithConsumer:(id)consumer;	// 0x32250b35
- (BOOL)childKeyIsSharedForReading:(id)reading;	// 0x322520a1
- (BOOL)childKeyIsSharedForWriting:(id)writing;	// 0x32252149
- (void)cleanupAccountFiles;	// 0x32251cd9
- (id)consumerForTask:(id)task;	// 0x32250af1
- (id)contactsFolders;	// 0x32253aa5
- (CFURLStorageSessionRef)copyStorageSession;	// 0x3225214d
// declared property getter: - (int)daAccountVersion;	// 0x3224f7ed
- (void)dealloc;	// 0x3224f715
- (id)defaultContactsFolder;	// 0x32253aa1
- (id)defaultContainerIdentifierForDADataclass:(int)dadataclass;	// 0x322518f1
- (id)defaultEventsFolder;	// 0x322539c5
- (id)defaultNotesFolder;	// 0x3226b85d
- (id)defaultToDosFolder;	// 0x3225d8bd
- (id)deletedItemsFolder;	// 0x32253b05
- (id)description;	// 0x32252fad
- (id)domainOnly;	// 0x32250a95
// declared property getter: - (id)emailAddress;	// 0x32251245
// declared property getter: - (id)emailAddresses;	// 0x322512d9
// declared property getter: - (int)enabledDataclassesBitmask;	// 0x322522c1
- (BOOL)enabledForDADataclass:(int)dadataclass;	// 0x322502e1
// declared property getter: - (id)encryptionIdentityPersistentReference;	// 0x322514ad
- (id)eventsFolders;	// 0x322539c9
- (CFDataRef)exceptionsForDigest:(id)digest;	// 0x32251b61
- (void)getRootFolderWithConsumer:(id)consumer;	// 0x32271b55
- (void)handleTrust:(SecTrust *)trust forHost:(id)host withCompletionBlock:(id)completionBlock;	// 0x32252501
- (BOOL)handleTrustChallenge:(id)challenge;	// 0x32252c79
// converted property getter: - (BOOL)hasDirtyBits;	// 0x32251791
- (BOOL)haveWarnedAboutCert:(id)cert forHost:(id)host;	// 0x32251dd5
// declared property getter: - (id)host;	// 0x3225111d
// declared property getter: - (id)identityPersist;	// 0x32251a09
- (id)inboxFolder;	// 0x32253afd
- (BOOL)isActiveSyncAccount;	// 0x32252089
- (BOOL)isCalDAVAccount;	// 0x32252091
- (BOOL)isCalDAVChildAccount;	// 0x32252099
- (BOOL)isCardDAVAccount;	// 0x32252095
// declared property getter: - (BOOL)isChildAccount;	// 0x32251d35
- (BOOL)isDisabled;	// 0x3224fad1
- (BOOL)isEqualToAccount:(id)account;	// 0x32251fe9
- (BOOL)isHotmailAccount;	// 0x3225209d
- (BOOL)isLDAPAccount;	// 0x3225208d
- (int)keychainAccessibilityType;	// 0x32250f09
- (id)localizedIdenticalAccountFailureMessage;	// 0x3225303d
- (id)localizedInvalidPasswordMessage;	// 0x322530dd
- (BOOL)monitorFolderWithID:(id)anId;	// 0x32251801
- (BOOL)monitorFoldersWithIDs:(id)ids;	// 0x322517fd
- (id)notesFolders;	// 0x3226b861
- (BOOL)originallyEnabledForDADataclass:(int)dadataclass;	// 0x322505a9
// declared property getter: - (id)password;	// 0x32250e59
- (void)performSearchQuery:(id)query;	// 0x3225bcc1
// declared property getter: - (id)persistentUUID;	// 0x3224f64d
// declared property getter: - (int)port;	// 0x32251541
// declared property getter: - (id)principalURL;	// 0x322516b5
- (BOOL)reattemptInvitationLinkageForMetaData:(id)metaData inFolderWithId:(id)anId;	// 0x32253b09
- (void)removeClientCertificateData;	// 0x322518f5
- (void)removeConsumerForTask:(id)task;	// 0x32250b15
- (void)renewAccountCredentialsWithHandler:(id)handler;	// 0x3225317d
- (void)resetAccountID;	// 0x32250179
- (BOOL)resetCertWarnings;	// 0x32251ee9
- (void)resetStatusReport;	// 0x32251f19
- (void)resumeMonitoringFoldersWithIDs:(id)ids;	// 0x32250809
- (void)saveAccountProperties;	// 0x3225194d
- (void)saveAccountSettings;	// 0x32251d21
- (void)saveChildAccountSettingsWithAccountsManager:(id)accountsManager;	// 0x322519bd
// declared property getter: - (id)scheduleIdentifier;	// 0x3225023d
// declared property getter: - (id)scheme;	// 0x32251621
- (BOOL)searchQueriesRunning;	// 0x3225bd6d
- (BOOL)sendEmailsForCalEvents:(id)calEvents consumer:(id)consumer;	// 0x322539d1
- (id)sentItemsFolder;	// 0x32253b01
- (void)setAccountBoolProperty:(BOOL)property forKey:(id)key;	// 0x32250761
// declared property setter: - (void)setAccountDescription:(id)description;	// 0x32250279
- (void)setAccountIntProperty:(int)property forKey:(id)key;	// 0x322507c9
- (void)setConsumer:(id)consumer forTask:(id)task;	// 0x32250a99
// declared property setter: - (void)setDAAccountVersion:(int)version;	// 0x32251d91
// declared property setter: - (void)setEmailAddress:(id)address;	// 0x32251291
// declared property setter: - (void)setEmailAddresses:(id)addresses;	// 0x32251311
- (void)setEnabled:(BOOL)enabled forDADataclass:(int)dadataclass changeType:(int)type;	// 0x322502f9
- (oneway void)setEncryptionIdentityPersistentReference:(id)reference;	// 0x322514f9
- (void)setExceptions:(CFDataRef)exceptions forDigest:(id)digest;	// 0x32251ba5
- (void)setHaveWarnedAboutCert:(id)cert forHost:(id)host;	// 0x32251e21
// declared property setter: - (void)setHost:(id)host;	// 0x32251169
- (void)setIdentityCertificatePersistentID:(id)anId managedByProfile:(BOOL)profile;	// 0x32251a25
// declared property setter: - (void)setPassword:(id)password;	// 0x32250fa1
- (void)setPassword:(id)password withAccessibility:(int)accessibility;	// 0x32250f0d
// declared property setter: - (void)setPort:(int)port;	// 0x3225158d
// declared property setter: - (void)setPrincipalURL:(id)url;	// 0x32251701
// declared property setter: - (void)setScheme:(id)scheme;	// 0x3225166d
// declared property setter: - (void)setSettingsTemplate:(id)aTemplate;	// 0x32252305
// declared property setter: - (void)setShouldAutodiscoverPrincipalURL:(BOOL)autodiscoverPrincipalURL;	// 0x322522e1
// declared property setter: - (void)setShouldFailAllTasks:(BOOL)failAllTasks;	// 0x32252349
// declared property setter: - (void)setShouldPromptForPassword:(BOOL)promptForPassword;	// 0x32250e49
// declared property setter: - (void)setShouldUseOpportunisticSockets:(BOOL)useOpportunisticSockets;	// 0x32252369
- (oneway void)setSigningIdentityPersistentReference:(id)reference;	// 0x32251465
// converted property setter: - (void)setToDosNumberOfPastDaysToSync:(int)sync;	// 0x3225d8cd
// declared property setter: - (void)setUseSSL:(BOOL)ssl;	// 0x322511fd
// declared property setter: - (void)setUser:(id)user;	// 0x3225110d
// declared property setter: - (void)setUsername:(id)username;	// 0x322510b5
// converted property setter: - (void)setVersion:(id)version;	// 0x32251021
// declared property getter: - (id)settingsTemplate;	// 0x322522f1
// declared property getter: - (BOOL)shouldAutodiscoverPrincipalURL;	// 0x322522d1
// declared property getter: - (BOOL)shouldFailAllTasks;	// 0x32252339
// declared property getter: - (BOOL)shouldPromptForPassword;	// 0x32250e39
// declared property getter: - (BOOL)shouldUseOpportunisticSockets;	// 0x32252359
// declared property getter: - (id)signingIdentityPersistentReference;	// 0x32251419
- (id)spinnerIdentifiers;	// 0x322505ed
- (id)stateString;	// 0x32250909
// declared property getter: - (id)statusReport;	// 0x32252329
- (void)stopMonitoringFolderWithID:(id)anId;	// 0x322508ad
- (void)stopMonitoringFolders;	// 0x32251895
- (void)stopMonitoringFoldersWithIDs:(id)ids;	// 0x32251839
- (BOOL)supportsDADataclass:(int)dataclass;	// 0x32250299
- (int)supportsEmailFlagging;	// 0x3225bd75
- (int)supportsMailboxSearch;	// 0x3225bd71
- (void)suspendMonitoringFoldersWithIDs:(id)ids;	// 0x32250851
- (id)syncStoreIdentifier;	// 0x3224f705
- (void)synchronizeBookmarkTreeWithConsumer:(id)consumer hasRemoteChanges:(BOOL)changes;	// 0x32271b59
- (void)synchronizeContactsFolder:(id)folder previousTag:(id)tag previousSyncToken:(id)token actions:(id)actions highestIdContext:(XXStruct_K5nmsA *)context isInitialUberSync:(BOOL)sync isResyncAfterConnectionFailed:(BOOL)failed previousTagIsSuspect:(BOOL)suspect consumer:(id)consumer;	// 0x32253aa9
- (void)synchronizeEventsFolder:(id)folder previousTag:(id)tag actions:(id)actions highestIdContext:(XXStruct_SMhV9B *)context isInitialUberSync:(BOOL)sync isResyncAfterConnectionFailed:(BOOL)failed consumer:(id)consumer;	// 0x322539cd
- (void)synchronizeNotesFolder:(id)folder noteContext:(id)context previousTag:(id)tag actions:(id)actions changeSet:(id)set notesToDeleteAfterSync:(id)deleteAfterSync isInitialUberSync:(BOOL)sync isResyncAfterConnectionFailed:(BOOL)failed consumer:(id)consumer;	// 0x3226b865
- (void)synchronizeToDosFolder:(id)dosFolder previousTag:(id)tag actions:(id)actions highestIdContext:(XXStruct_SMhV9B *)context isInitialUberSync:(BOOL)sync isResyncAfterConnectionFailed:(BOOL)failed consumer:(id)consumer;	// 0x3225d8c5
// declared property getter: - (id)tag;	// 0x3225024d
- (void)takeValuesFromAccount:(id)account;	// 0x32250989
- (void)tearDown;	// 0x322517a1
- (id)toDosFolders;	// 0x3225d8c1
// converted property getter: - (int)toDosNumberOfPastDaysToSync;	// 0x3225d8c9
- (BOOL)upgradeAccount;	// 0x32250de1
- (id)urlForKeychain;	// 0x322515d5
// declared property getter: - (BOOL)useSSL;	// 0x322511b1
// declared property getter: - (id)user;	// 0x322510fd
// declared property getter: - (id)username;	// 0x32251069
- (id)usernameWithoutDomain;	// 0x32250a85
// converted property getter: - (id)version;	// 0x32250fd5
@end

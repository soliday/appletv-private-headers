/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAAccount.h> // Unknown library
#import "DAEAS-Structs.h"

@class ASFolderHierarchy, ASProtocol, ASTaskManager, NSMutableSet, NSLock, NSMutableArray, ASAutodiscoverTask;

@interface ASAccount : DAAccount {
	ASFolderHierarchy *_folderHierarchy;	// 64 = 0x40
	ASTaskManager *_taskManager;	// 68 = 0x44
	ASProtocol *_protocol;	// 72 = 0x48
	NSMutableSet *_searchTaskSet;	// 76 = 0x4c
	NSMutableArray *_autodiscoveryServersToTry;	// 80 = 0x50
	NSLock *_autodiscoverTaskLock;	// 84 = 0x54
	ASAutodiscoverTask *_autodiscoverTask;	// 88 = 0x58
	BOOL _useHTTPForTesting;	// 92 = 0x5c
	BOOL _useLocalhostForAutodiscoveryTesting;	// 93 = 0x5d
	BOOL _isValidating;	// 94 = 0x5e
}
@property(assign, setter=setASAccountVersion:) int asAccountVersion;	// G=0x321bcb11; S=0x321bcb45; 
@property(retain) id emailAddress;	// G=0x321bce05; S=0x321bce21; converted property
@property(retain) id emailAddresses;	// G=0x321bce9d; S=0x321bcf19; converted property
@property(retain) id encryptionIdentityPersistentReference;	// G=0x321bd4a5; S=0x321bd4c1; converted property
@property(retain) id host;	// G=0x321bccad; S=0x321bccc9; converted property
@property(retain) id lastKnownProtocolVersion;	// G=0x321bd299; S=0x321bd40d; converted property
@property(assign) int mailNumberOfPastDaysToSync;	// G=0x321bd20d; S=0x321bd27d; 
@property(readonly, assign) int mailNumberOfPastDaysToSyncUpperLimit;	// G=0x321bd161; 
@property(assign) int port;	// G=0x321bcd45; S=0x321bcd61; converted property
@property(readonly, retain) ASProtocol *protocol;	// G=0x321bd641; converted property
@property(retain) id savedFolderPathsThatClientsCareAbout;	// G=0x321bd329; S=0x321bd345; converted property
@property(retain) id signingIdentityPersistentReference;	// G=0x321bd441; S=0x321bd45d; converted property
@property(readonly, retain) ASTaskManager *taskManager;	// G=0x321b7281; converted property
@property(assign) BOOL useSSL;	// G=0x321bcd7d; S=0x321bcd9d; converted property
@property(retain) id username;	// G=0x321bcb89; S=0x321bcba5; converted property
+ (Class)accountClass;	// 0x321b7095
+ (void)cleanUpFilesForAccountWithId:(id)anId;	// 0x321b730d
+ (Class)clientClass;	// 0x321c1db5
+ (id)defaultProperties;	// 0x321b7551
+ (id)supportedDataclasses;	// 0x321b76cd
- (id)initWithProperties:(id)properties;	// 0x321b6fc9
- (void *)_copyDefaultExchangeEventsCalendar:(BOOL)calendar;	// 0x321bb3f1
- (void *)_copyExchangeCalendarStore:(BOOL)store;	// 0x321bb0ed
- (id)_defaultMailFolderWithDefaultType:(int)defaultType fallbackType:(int)type fallbackName:(id)name;	// 0x321b8f61
- (void)_fillOutActionsArray:(id)array responseArray:(id)array2 withTask:(id)task added:(id)added removed:(id)removed modified:(id)modified perserved:(id)perserved addedResponse:(id)response modifiedResponse:(id)response9 removedResponse:(id)response10 fetchedResponse:(id)response11;	// 0x321b930d
- (id)_folderHierarchy;	// 0x321b82c5
- (BOOL)_generateAutodiscoverURLsForEmailAddress:(id)emailAddress;	// 0x321bbf55
- (void)_getContextElementsForItemChangeType:(int)itemChangeType dataclass:(int)dataclass nativeContext:(id)context outContext:(id *)context4 outServerId:(id *)anId;	// 0x321b9295
- (BOOL)_needsNewAccountIDForOldVersion:(int)oldVersion;	// 0x321b7b11
- (id)_newPolicyManager;	// 0x321b6fc5
- (id)_oldURLsForKeychain;	// 0x321b78a1
- (void)_removeInvitationsForMailboxFolderID:(id)mailboxFolderID;	// 0x321b99f5
- (BOOL)_shouldSaveLastKnownProtocolVersion;	// 0x321bd409
- (void)_startAutodiscoverTaskWithConsumer:(id)consumer;	// 0x321bc261
- (BOOL)_upgradeSelfFromVersion:(int)version superClassUpgraded:(BOOL)upgraded;	// 0x321b7b1d
- (id)_visibleASFolders;	// 0x321b8349
- (void)accountDidUpdateProtocolVersion;	// 0x321bd749
- (BOOL)accountNeedsUpgrade;	// 0x321b7fb1
- (id)addressBookConstraintsPath;	// 0x321bd721
- (void)applyNewAccountProperties:(id)properties forceSave:(BOOL)save;	// 0x321bae6d
// declared property getter: - (int)asAccountVersion;	// 0x321bcb11
- (id)asFolderHierarchyTaskManager:(id)manager;	// 0x321b91c5
- (id)asFolderWithId:(id)anId;	// 0x321b916d
- (BOOL)autodiscoverAccountConfigurationWithConsumer:(id)consumer;	// 0x321bc3e5
- (void)autodiscoverTask:(id)task completedWithStatus:(int)status accountInfo:(id)info shouldRetryWithEmail:(id)email error:(id)error;	// 0x321bc61d
- (void)blowAwayFolderCache;	// 0x321b9145
- (id)calendarConstraintsPath;	// 0x321bd6f9
- (void)cancelAllSearchQueries;	// 0x321bbaa1
- (void)cancelAutodiscovery;	// 0x321bc1f1
- (void)cancelSearchQuery:(id)query;	// 0x321bb959
- (void)cancelTaskWithID:(int)anId;	// 0x321bb0c1
- (void)checkValidityWithConsumer:(id)consumer;	// 0x321b7329
- (void)cleanupAccountFiles;	// 0x321b7241
- (id)contactsFolders;	// 0x321b88fd
- (void)dealloc;	// 0x321b70b1
- (id)defaultContactsFolder;	// 0x321b875d
- (id)defaultContainerIdentifierForDADataclass:(int)dadataclass;	// 0x321b9229
- (id)defaultEventsFolder;	// 0x321b8a09
- (id)defaultToDosFolder;	// 0x321b8cb5
- (id)deletedItemsFolder;	// 0x321b90f1
- (id)displayName;	// 0x321b7781
- (id)domainOnly;	// 0x321bd74d
// converted property getter: - (id)emailAddress;	// 0x321bce05
// converted property getter: - (id)emailAddresses;	// 0x321bce9d
- (BOOL)enabledForDADataclass:(int)dadataclass;	// 0x321b80a9
// converted property getter: - (id)encryptionIdentityPersistentReference;	// 0x321bd4a5
- (id)eventsFolders;	// 0x321b8ba9
- (id)existingTaskManager;	// 0x321b72fd
- (void)fetchAttachmentTask:(id)task completedWithStatus:(int)status dataWasBase64:(BOOL)a64 error:(id)error;	// 0x321ba769
- (void)fetchAttachmentTask:(id)task receivedData:(id)data ofContentType:(id)contentType;	// 0x321ba6fd
- (id)folderIdsThatExternalClientsCareAbout;	// 0x321b91d5
- (id)folderIdsThatExternalClientsCareAboutForDataclasses:(int)dataclasses;	// 0x321b91fd
- (void)folderItemsSyncTask:(id)task completedWithStatus:(int)status error:(id)error newSyncKey:(id)key added:(id)added removed:(id)removed modified:(id)modified addedResponse:(id)response modifiedResponse:(id)response9 removedResponse:(id)response10 fetchedResponse:(id)response11;	// 0x321b9b51
- (BOOL)folderItemsSyncTask:(id)task handleStreamOperation:(int)operation forCodePage:(int)codePage tag:(int)tag withParentItem:(id)parentItem withData:(char *)data dataLength:(int)length;	// 0x321ba291
- (BOOL)folderItemsSyncTask:(id)task hasPartialAdded:(id)added removed:(id)removed modified:(id)modified addedResponse:(id)response modifiedResponse:(id)response6 removedResponse:(id)response7 fetchedResponse:(id)response8 moreAvailable:(BOOL)available;	// 0x321ba4b9
- (id)folderWithId:(id)anId;	// 0x321b9199
- (id)foldersTag;	// 0x321b911d
- (void)getOptionsTask:(id)task completedWithStatus:(int)status supportedCommands:(id)commands supportedVersions:(id)versions error:(id)error;	// 0x321b73d5
// converted property getter: - (id)host;	// 0x321bccad
- (id)inboxFolder;	// 0x321b9099
- (BOOL)isActiveSyncAccount;	// 0x321bd7bd
- (BOOL)isEqualToAccount:(id)account;	// 0x321bd889
- (BOOL)isGoogleAccount;	// 0x321bd825
- (BOOL)isHotmailAccount;	// 0x321bd7c1
- (void)itemOperationsTask:(id)task completedWithStatus:(int)status error:(id)error responses:(id)responses;	// 0x321ba7d5
- (BOOL)itemOperationsTask:(id)task handleStreamOperation:(int)operation forCodePage:(int)codePage tag:(int)tag withParentItem:(id)parentItem withData:(char *)data dataLength:(int)length;	// 0x321ba9e1
- (BOOL)itemOperationsTask:(id)task hasPartialResponses:(id)responses;	// 0x321babed
// converted property getter: - (id)lastKnownProtocolVersion;	// 0x321bd299
- (id)localizedIdenticalAccountFailureMessage;	// 0x321bdab5
- (id)localizedInvalidPasswordMessage;	// 0x321bdb65
// declared property getter: - (int)mailNumberOfPastDaysToSync;	// 0x321bd20d
// declared property getter: - (int)mailNumberOfPastDaysToSyncUpperLimit;	// 0x321bd161
- (void)moveItemsTask:(id)task completedWithStatus:(int)status error:(id)error movedItems:(id)items;	// 0x321bb58d
- (CFStringRef)passwordChangedNotificationName;	// 0x321b7839
- (CFStringRef)passwordIsKnownGoodNotificationName;	// 0x321b786d
- (void)performSearchQuery:(id)query;	// 0x321bbb79
- (id)policyManager;	// 0x321b71c9
// converted property getter: - (int)port;	// 0x321bcd45
// converted property getter: - (id)protocol;	// 0x321bd641
- (void)resetAccountID;	// 0x321b8275
- (void)saveAccountSettings;	// 0x321b71f1
// converted property getter: - (id)savedFolderPathsThatClientsCareAbout;	// 0x321bd329
- (BOOL)searchQueriesRunning;	// 0x321bbd9d
- (void)searchTask:(id)task finishedWithError:(id)error;	// 0x321bbe75
- (void)searchTask:(id)task returnedResults:(id)results;	// 0x321bbdc5
- (void)searchTask:(id)task returnedTotalCount:(id)count;	// 0x321bbe0d
- (void)sendMailTask:(id)task completedWithStatus:(int)status error:(id)error;	// 0x321bae29
- (int)sendMessageWithRFC822Data:(id)rfc822Data messageID:(id)anId outgoingMessageType:(int)type originalMessageFolderID:(id)anId4 originalMessageItemID:(id)anId5 originalMessageLongID:(id)anId6 originalAccountID:(id)anId7 consumer:(id)consumer context:(void *)context;	// 0x321baeb1
- (id)sentItemsFolder;	// 0x321b90c5
// declared property setter: - (void)setASAccountVersion:(int)version;	// 0x321bcb45
// converted property setter: - (void)setEmailAddress:(id)address;	// 0x321bce21
// converted property setter: - (void)setEmailAddresses:(id)addresses;	// 0x321bcf19
- (void)setEnabled:(BOOL)enabled forDADataclass:(int)dadataclass changeType:(int)type;	// 0x321b80f9
// converted property setter: - (void)setEncryptionIdentityPersistentReference:(id)reference;	// 0x321bd4c1
- (BOOL)setFolderIdsThatExternalClientsCareAboutAdded:(id)added deleted:(id)deleted foldersTag:(id)tag;	// 0x321b9291
// converted property setter: - (void)setHost:(id)host;	// 0x321bccc9
// converted property setter: - (void)setLastKnownProtocolVersion:(id)version;	// 0x321bd40d
- (void)setLastKnownProtocolVersion:(id)version save:(BOOL)save;	// 0x321bd2b5
// declared property setter: - (void)setMailNumberOfPastDaysToSync:(int)sync;	// 0x321bd27d
// converted property setter: - (void)setPort:(int)port;	// 0x321bcd61
- (void)setProtocolVersion:(id)version;	// 0x321bd551
// converted property setter: - (void)setSavedFolderPathsThatClientsCareAbout:(id)about;	// 0x321bd345
- (void)setShouldFailAllTasks:(BOOL)failAllTasks;	// 0x321bca69
// converted property setter: - (void)setSigningIdentityPersistentReference:(id)reference;	// 0x321bd45d
- (void)setUseHTTPForTesting:(BOOL)testing;	// 0x321bc1d1
- (void)setUseLocalhostForAutodiscoveryTesting:(BOOL)autodiscoveryTesting;	// 0x321bc1e1
// converted property setter: - (void)setUseSSL:(BOOL)ssl;	// 0x321bcd9d
// converted property setter: - (void)setUsername:(id)username;	// 0x321bcba5
- (id)shortTypeString;	// 0x321b77e5
- (BOOL)shouldFixOnDiskDeviceId;	// 0x321b9309
- (BOOL)shouldSavePropertiesForFolderPathsThatClientsCareAbout;	// 0x321bd325
// converted property getter: - (id)signingIdentityPersistentReference;	// 0x321bd441
- (int)sniffableTypeForFolder:(id)folder;	// 0x321b85e1
- (id)stateString;	// 0x321b74cd
- (id)supportedDataclasses;	// 0x321b76ed
- (BOOL)supportsDADataclass:(int)dataclass;	// 0x321b74ad
- (int)supportsEmailFlagging;	// 0x321bd6d1
- (int)supportsMailboxSearch;	// 0x321bd6a9
// converted property getter: - (id)taskManager;	// 0x321b7281
- (id)toDosFolders;	// 0x321b8e55
- (id)typeString;	// 0x321b7791
- (BOOL)upgradeAccount;	// 0x321b7f29
- (void)upgradeWithProtocolVersion:(id)protocolVersion;	// 0x321bd509
// converted property getter: - (BOOL)useSSL;	// 0x321bcd7d
// converted property getter: - (id)username;	// 0x321bcb89
- (id)usernameWithoutDomain;	// 0x321bcc21
- (id)visibleFolders;	// 0x321b832d
@end


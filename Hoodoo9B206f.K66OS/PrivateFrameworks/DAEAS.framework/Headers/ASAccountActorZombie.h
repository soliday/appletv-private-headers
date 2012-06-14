/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <NSObject.h> // Unknown library
#import "ASAccountActorMessages.h"


@interface ASAccountActorZombie : NSObject <ASAccountActorMessages> {
}
+ (id)sharedZombie;	// 0x3219e9d5
- (oneway void)_accountPasswordChanged;	// 0x3219ed7d
- (oneway void)_daemonDiedNotification:(id)notification;	// 0x3219ed69
- (oneway void)_folderHierarchyChanged;	// 0x3219ed75
- (oneway void)_folderUpdatedNotification:(id)notification;	// 0x3219ed6d
- (oneway void)_foldersThatExternalClientsCareAboutChanged;	// 0x3219ed79
- (oneway void)_newASPolicyKeyNotification:(id)notification;	// 0x3219ed71
- (void)_sendFailureToConsumer:(id)consumer;	// 0x3219eafd
- (oneway void)cancelAllSearchQueries;	// 0x3219ed19
- (oneway void)cancelSearchQuery:(id)query;	// 0x3219ed15
- (oneway void)cancelTaskWithID:(int)anId;	// 0x3219ecad
- (id)deletedItemsFolder;	// 0x3219ed89
- (id)encryptionIdentityPersistentReference;	// 0x3219ead5
- (id)folderIDsThatExternalClientsCareAboutForDataclasses:(int)dataclasses withTag:(id *)tag;	// 0x3219eaf1
- (id)folderIDsThatExternalClientsCareAboutWithTag:(id *)tag;	// 0x3219eaed
- (BOOL)generatesBulletins;	// 0x3219eac5
- (id)inboxFolder;	// 0x3219ed81
- (BOOL)isHotmailAccount;	// 0x3219ed8d
- (int)mailNumberOfPastDaysToSync;	// 0x3219eab9
- (id)mailboxes;	// 0x3219eab5
- (oneway void)monitorFoldersForUpdates:(id)updates;	// 0x3219eae1
- (int)performFetchAttachmentRequest:(id)request consumer:(id)consumer;	// 0x3219ebbd
- (int)performFetchMessageSearchResultRequests:(id)requests consumer:(id)consumer;	// 0x3219ec11
- (void)performFolderChange:(id)change;	// 0x3219ec49
- (int)performMailboxRequest:(id)request mailbox:(id)mailbox previousTag:(id)tag consumer:(id)consumer;	// 0x3219eb69
- (int)performMailboxRequests:(id)requests mailbox:(id)mailbox previousTag:(id)tag consumer:(id)consumer;	// 0x3219eb85
- (int)performMoveRequests:(id)requests consumer:(id)consumer;	// 0x3219eba1
- (int)performResolveRecipientsRequest:(id)request consumer:(id)consumer;	// 0x3219ec2d
- (oneway void)performSearchQuery:(id)query;	// 0x3219ecb1
- (BOOL)reattemptInvitationLinkageForMetaData:(id)metaData inFolderWithId:(id)anId;	// 0x3219eaf9
- (BOOL)searchQueriesRunning;	// 0x3219ed1d
- (int)sendMessageWithRFC822Data:(id)rfc822Data messageID:(id)anId outgoingMessageType:(int)type originalMessageFolderID:(id)anId4 originalMessageItemID:(id)anId5 originalMessageLongID:(id)anId6 originalAccountID:(id)anId7 consumer:(id)consumer context:(void *)context;	// 0x3219eb4d
- (id)sentItemsFolder;	// 0x3219ed85
- (oneway void)setAccount:(id)account;	// 0x3219ed25
- (oneway void)setEncryptionIdentityPersistentReference:(id)reference;	// 0x3219ead9
- (BOOL)setFolderIdsThatExternalClientsCareAboutAdded:(id)added deleted:(id)deleted foldersTag:(id)tag;	// 0x3219eaf5
- (oneway void)setGeneratesBulletins:(BOOL)bulletins;	// 0x3219eac9
- (oneway void)setMailNumberOfPastDaysToSync:(int)sync;	// 0x3219eadd
- (oneway void)setSigningIdentityPersistentReference:(id)reference;	// 0x3219ead1
- (oneway void)shutdown;	// 0x3219ed29
- (id)signingIdentityPersistentReference;	// 0x3219eacd
- (oneway void)startup;	// 0x3219ed21
- (oneway void)stopMonitoringAllFolders;	// 0x3219eae9
- (oneway void)stopMonitoringFoldersForUpdates:(id)updates;	// 0x3219eae5
- (int)supportsEmailFlagging;	// 0x3219eac1
- (int)supportsMailboxSearch;	// 0x3219eabd
@end


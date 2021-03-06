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
+ (id)sharedZombie;	// 0x32ececc5
- (oneway void)_accountPasswordChanged;	// 0x32ece3ed
- (oneway void)_daemonDiedNotification:(id)notification;	// 0x32ece3d9
- (oneway void)_folderHierarchyChanged;	// 0x32ece3e5
- (oneway void)_folderUpdatedNotification:(id)notification;	// 0x32ece3dd
- (oneway void)_foldersThatExternalClientsCareAboutChanged;	// 0x32ece3e9
- (oneway void)_newASPolicyKeyNotification:(id)notification;	// 0x32ece3e1
- (void)_sendFailureToConsumer:(id)consumer;	// 0x32eceb59
- (void)cancelAllSearchQueries;	// 0x32ece3c9
- (void)cancelSearchQuery:(id)query;	// 0x32ece3c5
- (oneway void)cancelTaskWithID:(int)anId;	// 0x32ece3c1
- (id)deletedItemsFolder;	// 0x32ece3f9
- (id)folderIDsThatExternalClientsCareAboutForDataclasses:(int)dataclasses withTag:(id *)tag;	// 0x32ece3b5
- (id)folderIDsThatExternalClientsCareAboutWithTag:(id *)tag;	// 0x32ece3b1
- (id)inboxFolder;	// 0x32ece3f1
- (int)mailNumberOfPastDaysToSync;	// 0x32ece399
- (id)mailboxes;	// 0x32ece395
- (oneway void)monitorFoldersForUpdates:(id)updates;	// 0x32ece3a5
- (int)performFetchAttachmentRequest:(id)request consumer:(id)consumer;	// 0x32eceaa1
- (int)performFetchMessageSearchResultRequests:(id)requests consumer:(id)consumer;	// 0x32ecea89
- (int)performMailboxRequest:(id)request mailbox:(id)mailbox previousTag:(id)tag consumer:(id)consumer;	// 0x32eceb29
- (int)performMailboxRequests:(id)requests mailbox:(id)mailbox previousTag:(id)tag consumer:(id)consumer;	// 0x32eceb11
- (int)performMoveRequests:(id)requests consumer:(id)consumer;	// 0x32eceaf9
- (void)performSearchQuery:(id)query consumer:(id)consumer;	// 0x32ecea3d
- (BOOL)reattemptInvitationLinkageForMetaData:(id)metaData inFolderWithId:(id)anId;	// 0x32ece3bd
- (BOOL)searchQueriesRunning;	// 0x32ece3cd
- (int)sendMessageWithRFC822Data:(id)rfc822Data messageID:(id)anId outgoingMessageType:(int)type originalMessageFolderID:(id)anId4 originalMessageItemID:(id)anId5 originalMessageLongID:(id)anId6 originalAccountID:(id)anId7 consumer:(id)consumer context:(void *)context;	// 0x32eceb41
- (id)sentItemsFolder;	// 0x32ece3f5
- (oneway void)setAccount:(id)account;	// 0x32ece3d5
- (BOOL)setFolderIdsThatExternalClientsCareAboutAdded:(id)added deleted:(id)deleted foldersTag:(id)tag;	// 0x32ece3b9
- (oneway void)setMailNumberOfPastDaysToSync:(int)sync;	// 0x32ece3a1
- (oneway void)shutdown;	// 0x32eceba5
- (oneway void)startup;	// 0x32ece3d1
- (oneway void)stopMonitoringAllFolders;	// 0x32ece3ad
- (oneway void)stopMonitoringFoldersForUpdates:(id)updates;	// 0x32ece3a9
- (int)supportsMailboxSearch;	// 0x32ece39d
@end


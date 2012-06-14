/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BookmarkDAV.framework/BookmarkDAV
 */

#import "BookmarkDAV-Structs.h"
#import <NSObject.h> // Unknown library
#import "CoreDAVLocalDBTreeInfoProvider.h"
#import "CoreDAVDeleteTaskDelegate.h"
#import "CoreDAVGetAccountPropertiesTaskGroupDelegate.h"
#import "CoreDAVContainerInfoTaskGroupDelegate.h"

@class BookmarkDAVSyncData, NSDictionary, NSURL, NSString, NSMutableSet;
@protocol CoreDAVAccountInfoProvider, CoreDAVTaskManager;

@interface BookmarkDAVSyncDriver : NSObject <CoreDAVLocalDBTreeInfoProvider, CoreDAVDeleteTaskDelegate, CoreDAVGetAccountPropertiesTaskGroupDelegate, CoreDAVContainerInfoTaskGroupDelegate> {
	id<CoreDAVAccountInfoProvider> _accountInfoProvider;	// 4 = 0x4
	id<CoreDAVTaskManager> _taskManager;	// 8 = 0x8
	NSMutableSet *_outstandingTaskGroups;	// 12 = 0xc
	id _getAccountPropertiesHandler;	// 16 = 0x10
	id _syncHandler;	// 20 = 0x14
	void *_changeToken;	// 24 = 0x18
	NSURL *_homeURL;	// 28 = 0x1c
	NSString *_pushKey;	// 32 = 0x20
	NSDictionary *_pushTransport;	// 36 = 0x24
	id _openDBBlock;	// 40 = 0x28
	id _getDBBlock;	// 44 = 0x2c
	id _saveDBBlock;	// 48 = 0x30
	id _closeDBBlock;	// 52 = 0x34
	BookmarkDAVSyncData *_topLevelSyncData;	// 56 = 0x38
	id _registerForPush;	// 60 = 0x3c
	BOOL _forceSafariOrdering;	// 64 = 0x40
	BOOL _forceSave;	// 65 = 0x41
}
@property(readonly, assign) id<CoreDAVAccountInfoProvider> accountInfoProvider;	// G=0x3607da91; @synthesize=_accountInfoProvider
@property(copy) id getAccountPropertiesHandler;	// G=0x3607daa1; S=0x3607dab5; @synthesize=_getAccountPropertiesHandler
@property(retain) NSURL *homeURL;	// G=0x3607d9e9; S=0x3607d9fd; @synthesize=_homeURL
@property(readonly, assign) unsigned outstandingActionCount;	// G=0x3607d9c9; 
@property(retain) NSString *pushKey;	// G=0x3607da21; S=0x3607da35; @synthesize=_pushKey
@property(retain) NSDictionary *pushTransport;	// G=0x3607da59; S=0x3607da6d; @synthesize=_pushTransport
@property(copy) id syncHandler;	// G=0x3607dad9; S=0x3607daed; @synthesize=_syncHandler
@property(readonly, assign) BookmarkDAVSyncData *topLevelSyncData;	// G=0x3607a055; 
- (id)initWithAccountInfoProvider:(id)accountInfoProvider taskManager:(id)manager openDBBlock:(id)block getDBBlock:(id)block4 saveDBBlock:(id)block5 closeDBBlock:(id)block6 registerForPush:(id)push forceSafariOrdering:(BOOL)ordering;	// 0x36079df5
- (BOOL)_addChange:(void *)change toData:(id)data numActionsP:(int *)p runningSizeP:(int *)p4 maxResources:(int)resources maxSize:(int)size foldersToAddByServerId:(CFDictionaryRef)addByServerId parentToArrayOfChildrenFolderChanges:(CFDictionaryRef)childrenFolderChanges pushedParentToArrayOfChildrenFolders:(CFDictionaryRef)childrenFolders;	// 0x3607dcc1
- (BOOL)_applyReturnedBookmarks:(id)bookmarks withPushedBookmarks:(CFArrayRef)pushedBookmarks;	// 0x3607f805
- (BOOL)_applyReturnedFolders:(id)folders parentToArrayOfChildrenFolders:(CFDictionaryRef)childrenFolders topmostFolders:(CFArrayRef)folders3 postedToURL:(id)url;	// 0x3607f38d
- (BOOL)_applyUnmatchedParsedFolders:(id)folders;	// 0x3607e829
- (id)_bookmarkXBELDataForBookmarkChanges:(CFArrayRef)bookmarkChanges pushedBookmarks:(CFArrayRef)bookmarks maxResources:(int)resources maxSize:(int)size;	// 0x3607e3a9
- (int)_clientOrderOfItemPrecedingItemAtServerOrder:(int)serverOrder inParentWithURL:(id)url;	// 0x3607ae5d
- (void)_closeDBAndSave:(BOOL)save;	// 0x3607a129
- (id)_copyDAVBookmarkFromBookmarkRef:(void *)bookmarkRef;	// 0x3607aa01
- (id)_copyDAVFolderFromFolderRef:(void *)folderRef;	// 0x3607aaf9
- (id)_dbRelativeString:(id)string;	// 0x3607ae15
- (void)_finishInitialSyncShouldPushChanges:(BOOL)_finishInitialSync;	// 0x3607fb69
- (id)_folderXBELDataForTopmostFolderChanges:(CFArrayRef)topmostFolderChanges foldersToAddByServerId:(CFDictionaryRef)addByServerId parentToArrayOfChildrenFolderChanges:(CFDictionaryRef)childrenFolderChanges pushedParentToArrayOfChildrenFolders:(CFDictionaryRef)childrenFolders pushedTopmostFolders:(CFArrayRef)folders maxResources:(int)resources maxSize:(int)size;	// 0x3607e249
- (void)_handleAddsOrModifies:(id)modifies removes:(id)removes;	// 0x3607cf19
- (BOOL)_handleErrorItem:(id)item forBAItem:(void *)baitem;	// 0x3607db11
- (void)_invokeAndNilGetAccountPropertiesHandlerWithSuccess:(BOOL)success error:(id)error;	// 0x3607a029
- (void)_makeBookmarkFromDAVNode:(id)davnode;	// 0x3607c965
- (void)_makeFolderFromContainer:(id)container;	// 0x3607cad1
- (BOOL)_matchParsedFolders:(id)folders toPushedFolders:(CFDictionaryRef)pushedFolders unmatchedParsedFolders:(id)folders3 parsedSetsOfChildrenFoldersByParentURL:(id)childrenFoldersByParentURL arraysOfChildrenByNameByParent:(CFDictionaryRef)childrenByNameByParent;	// 0x3607ef59
- (void)_removeTempIdsFromFoldersInDict:(CFDictionaryRef)dict;	// 0x3607e79d
- (void)_saveDB;	// 0x3607a0bd
- (int)_serverOrderForChange:(void *)change;	// 0x3607acd1
- (void)_setChildrenOrder:(id)order forFolderURL:(id)folderURL;	// 0x3607aef5
- (void)_setRootCTag:(id)tag rootSyncToken:(id)token knownOrderings:(id)orderings;	// 0x3607ed1d
- (void)_setServerIdOnItem:(void *)item isBookmark:(BOOL)bookmark;	// 0x3607ac0d
- (void)_syncWithRemoteChanges:(BOOL)remoteChanges completionHandler:(id)handler skipAddChanges:(BOOL)changes;	// 0x3607b0f5
// declared property getter: - (id)accountInfoProvider;	// 0x3607da91
- (void)containerInfoTask:(id)task completedWithContainers:(id)containers error:(id)error;	// 0x3607a389
- (id)copyAllLocalURLsInFolderWithURL:(id)url;	// 0x3607c675
- (id)copyLocalETagsForURLs:(id)urls;	// 0x3607c375
- (void)dealloc;	// 0x36079f29
// declared property getter: - (id)getAccountPropertiesHandler;	// 0x3607daa1
- (void)getAccountPropertiesTask:(id)task completedWithError:(id)error;	// 0x3607a1c1
- (void)getAccountPropertiesWithCompletionHandler:(id)completionHandler;	// 0x3607a941
- (BOOL)getCTag:(id *)tag pTag:(id *)tag2 forFolderWithURL:(id)url;	// 0x3607c20d
// declared property getter: - (id)homeURL;	// 0x3607d9e9
- (void)notePutToURL:(id)url withDataPayload:(id)dataPayload finishedWithIgnoredError:(id)ignoredError;	// 0x3607d755
// declared property getter: - (unsigned)outstandingActionCount;	// 0x3607d9c9
// declared property getter: - (id)pushKey;	// 0x3607da21
// declared property getter: - (id)pushTransport;	// 0x3607da59
- (void)recursiveContainerSyncTask:(id)task completedFullSyncWithNewCTag:(id)newCTag newPTag:(id)tag newSyncToken:(id)token error:(id)error;	// 0x3607d315
- (void)recursiveContainerSyncTask:(id)task completedSyncOfFolderWithURL:(id)url newCTag:(id)tag newPTag:(id)tag4 addedOrModified:(id)modified removed:(id)removed error:(id)error;	// 0x3607d10d
- (void)recursiveContainerSyncTask:(id)task receivedAddedOrModifiedFolder:(id)folder;	// 0x3607ccad
- (void)recursiveContainerSyncTask:(id)task retrievedAddedOrModifiedActions:(id)actions removed:(id)removed;	// 0x3607d059
// declared property setter: - (void)setGetAccountPropertiesHandler:(id)handler;	// 0x3607dab5
// declared property setter: - (void)setHomeURL:(id)url;	// 0x3607d9fd
- (BOOL)setLocalETag:(id)tag forItemWithURL:(id)url;	// 0x3607c88d
// declared property setter: - (void)setPushKey:(id)key;	// 0x3607da35
// declared property setter: - (void)setPushTransport:(id)transport;	// 0x3607da6d
// declared property setter: - (void)setSyncHandler:(id)handler;	// 0x3607daed
// declared property getter: - (id)syncHandler;	// 0x3607dad9
- (void)syncWithRemoteChanges:(BOOL)remoteChanges completionHandler:(id)handler;	// 0x3607c1e9
// declared property getter: - (id)topLevelSyncData;	// 0x3607a055
@end


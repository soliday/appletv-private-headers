/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVDeleteTaskDelegate.h"
#import "CoreDAVPutTaskDelegate.h"
#import "CoreDAVTaskGroup.h"
#import "CoreDAVTaskGroupDelegate.h"
#import "CoreDAVMkcolTaskDelegate.h"
#import "CoreDAVPropPatchTaskDelegate.h"

@class NSMutableArray, NSURL, NSString, NSMutableDictionary, NSArray, NSDictionary, NSMutableSet;
@protocol CoreDAVLocalDBTreeInfoProvider;

@interface CoreDAVRecursiveContainerSyncTaskGroup : CoreDAVTaskGroup <CoreDAVDeleteTaskDelegate, CoreDAVPutTaskDelegate, CoreDAVTaskGroupDelegate, CoreDAVMkcolTaskDelegate, CoreDAVPropPatchTaskDelegate> {
	int _phase;	// 44 = 0x2c
	NSURL *_folderURL;	// 48 = 0x30
	NSString *_previousCTag;	// 52 = 0x34
	NSString *_nextCTag;	// 56 = 0x38
	NSString *_previousSyncToken;	// 60 = 0x3c
	NSString *_nextSyncToken;	// 64 = 0x40
	NSString *_previousPTag;	// 68 = 0x44
	NSString *_nextPTag;	// 72 = 0x48
	NSArray *_actions;	// 76 = 0x4c
	void *_context;	// 80 = 0x50
	unsigned _multiGetBatchSize;	// 84 = 0x54
	NSMutableArray *_unsubmittedTasks;	// 88 = 0x58
	NSURL *_addMemberURL;	// 92 = 0x5c
	BOOL _useMultiGet;	// 96 = 0x60
	NSMutableSet *_syncReportDeletedURLs;	// 100 = 0x64
	NSMutableDictionary *_leafURLToETag;	// 104 = 0x68
	NSMutableArray *_childCollectionURL;	// 108 = 0x6c
	Class _appSpecificDataItemClass;	// 112 = 0x70
	Class _appSpecificContainerItemClass;	// 116 = 0x74
	BOOL _syncItemOrder;	// 120 = 0x78
	NSMutableDictionary *_folderURLToChildrenURLOrder;	// 124 = 0x7c
	BOOL _preflightCTag;	// 128 = 0x80
}
@property(readonly, assign) void *context;	// G=0x30cc23d1; @synthesize=_context
@property(assign, nonatomic) id<CoreDAVLocalDBTreeInfoProvider> delegate;	// @dynamic
@property(readonly, assign) NSURL *folderURL;	// G=0x30cc2359; @synthesize=_folderURL
@property(readonly, assign) NSDictionary *folderURLToChildrenURLOrder;	// G=0x30cc23e1; @synthesize=_folderURLToChildrenURLOrder
@property(assign) unsigned multiGetBatchSize;	// G=0x30cc2339; S=0x30cc2349; @synthesize=_multiGetBatchSize
@property(retain) NSString *nextCTag;	// G=0x30cc23f1; S=0x30cc2405; @synthesize=_nextCTag
@property(assign) BOOL preflightCTag;	// G=0x30cc2379; S=0x30cc2389; @synthesize=_preflightCTag
@property(readonly, assign) NSString *previousCTag;	// G=0x30cc2369; @synthesize=_previousCTag
@property(retain) NSString *previousSyncToken;	// G=0x30cc2399; S=0x30cc23ad; @synthesize=_previousSyncToken
- (id)initWithFolderURL:(id)folderURL previousCTag:(id)tag previousPTag:(id)tag3 previousSyncToken:(id)token actions:(id)actions syncItemOrder:(BOOL)order context:(void *)context accountInfoProvider:(id)provider taskManager:(id)manager;	// 0x30cbe1cd
- (id)_copyContainerParserMappings;	// 0x30cc2209
- (void)_folderModTask:(id)task parsedPropStats:(id)stats error:(id)error;	// 0x30cc0a95
- (void)_foundChildrenOrder:(id)order inFolderWithURL:(id)url;	// 0x30cbe711
- (void)_getDataPayloads;	// 0x30cbf98d
- (void)_getItemTags;	// 0x30cbf5cd
- (void)_getTask:(id)task finishedWithParsedContents:(id)parsedContents error:(id)error;	// 0x30cc1cf1
- (void)_getTopFolderTags;	// 0x30cbf3f5
- (void)_postTask:(id)task didFinishWithError:(id)error;	// 0x30cc08a5
- (void)_pushActions;	// 0x30cbeb25
- (unsigned)_submitTasks;	// 0x30cbe849
- (void)_syncReportTask:(id)task didFinishWithError:(id)error;	// 0x30cc1319
- (void)_taskGroupSuccessfullyFinishedWithContents:(id)contents;	// 0x30cbe9fd
- (void)_tearDownAllUnsubmittedTasks;	// 0x30cbe5dd
- (void)bailWithError:(id)error;	// 0x30cbe7c5
- (void)cancelTaskGroup;	// 0x30cbe809
// declared property getter: - (void *)context;	// 0x30cc23d1
- (id)copyFolderMultiGetTaskWithURLs:(id)urls;	// 0x30cc226d
- (id)copyMultiGetTaskWithURLs:(id)urls;	// 0x30cc2229
- (id)dataContentType;	// 0x30cc22b1
- (void)dealloc;	// 0x30cbe3bd
- (void)deleteTask:(id)task completedWithError:(id)error;	// 0x30cc1141
- (id)description;	// 0x30cbe4f9
// declared property getter: - (id)folderURL;	// 0x30cc2359
// declared property getter: - (id)folderURLToChildrenURLOrder;	// 0x30cc23e1
- (BOOL)isWhitelistedError:(id)error;	// 0x30cc0531
- (void)mkcolTask:(id)task parsedPropStats:(id)stats error:(id)error;	// 0x30cc1039
// declared property getter: - (unsigned)multiGetBatchSize;	// 0x30cc2339
// declared property getter: - (id)nextCTag;	// 0x30cc23f1
// declared property getter: - (BOOL)preflightCTag;	// 0x30cc2379
// declared property getter: - (id)previousCTag;	// 0x30cc2369
// declared property getter: - (id)previousSyncToken;	// 0x30cc2399
- (void)propFindTask:(id)task parsedResponses:(id)responses error:(id)error;	// 0x30cc18d1
- (void)propPatchTask:(id)task parsedResponses:(id)responses error:(id)error;	// 0x30cc1049
- (void)putTask:(id)task completedWithNewETag:(id)newETag error:(id)error;	// 0x30cc05a5
// declared property setter: - (void)setMultiGetBatchSize:(unsigned)size;	// 0x30cc2349
// declared property setter: - (void)setNextCTag:(id)tag;	// 0x30cc2405
// declared property setter: - (void)setPreflightCTag:(BOOL)tag;	// 0x30cc2389
// declared property setter: - (void)setPreviousSyncToken:(id)token;	// 0x30cc23ad
- (BOOL)shouldSyncChildWithResourceType:(id)resourceType;	// 0x30cc22f5
- (void)startTaskGroup;	// 0x30cc04d9
- (void)syncAway;	// 0x30cc0521
- (void)task:(id)task didFinishWithError:(id)error;	// 0x30cc1059
- (void)taskGroupWillCancelWithError:(id)taskGroup;	// 0x30cbe56d
@end


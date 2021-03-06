/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BookmarkDAV.framework/BookmarkDAV
 */

#import <CoreDAVPostTask.h> // Unknown library

@class NSString, NSArray, NSMutableDictionary, NSDictionary, NSMutableArray, NSURL;

@interface BookmarkDAVBulkPostTask : CoreDAVPostTask {
	NSString *_checkCTag;	// 148 = 0x94
	NSMutableArray *_parsedBookmarks;	// 152 = 0x98
	NSMutableDictionary *_parsedBookmarksByURL;	// 156 = 0x9c
	NSMutableArray *_parsedFolders;	// 160 = 0xa0
	NSMutableDictionary *_parsedFoldersByURL;	// 164 = 0xa4
	NSMutableDictionary *_folderURLToChildrenURLOrder;	// 168 = 0xa8
	NSString *_nextRootCTag;	// 172 = 0xac
	NSString *_nextRootSyncToken;	// 176 = 0xb0
	NSURL *_checkCTagURL;	// 180 = 0xb4
}
@property(readonly, assign) NSDictionary *folderURLToChildrenURLOrder;	// G=0x303dddb1; @synthesize=_folderURLToChildrenURLOrder
@property(retain) NSString *nextRootCTag;	// G=0x303dddc1; S=0x303dddd5; @synthesize=_nextRootCTag
@property(retain) NSString *nextRootSyncToken;	// G=0x303dddf9; S=0x303dde0d; @synthesize=_nextRootSyncToken
@property(readonly, assign) NSArray *parsedBookmarks;	// G=0x303ddd91; @synthesize=_parsedBookmarks
@property(readonly, assign) NSArray *parsedFolders;	// G=0x303ddda1; @synthesize=_parsedFolders
- (id)initWithDataPayload:(id)dataPayload atURL:(id)url checkCTag:(id)tag checkCTagURL:(id)url4;	// 0x303dcab9
- (void)_foundChildrenOrder:(id)order inFolderWithURL:(id)url;	// 0x303dd141
- (id)additionalHeaderValues;	// 0x303dcced
- (id)copyDefaultParserForContentType:(id)contentType;	// 0x303dce01
- (void)dealloc;	// 0x303dcc01
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x303dd1c5
// declared property getter: - (id)folderURLToChildrenURLOrder;	// 0x303dddb1
// declared property getter: - (id)nextRootCTag;	// 0x303dddc1
// declared property getter: - (id)nextRootSyncToken;	// 0x303dddf9
// declared property getter: - (id)parsedBookmarks;	// 0x303ddd91
// declared property getter: - (id)parsedFolders;	// 0x303ddda1
// declared property setter: - (void)setNextRootCTag:(id)tag;	// 0x303dddd5
// declared property setter: - (void)setNextRootSyncToken:(id)token;	// 0x303dde0d
@end


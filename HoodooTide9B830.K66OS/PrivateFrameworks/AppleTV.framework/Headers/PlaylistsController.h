/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRDataQueryController.h"

@class NSMutableArray, NSArray;

@interface PlaylistsController : BRDataQueryController {
@private
	ATVMediaTypeRef _mediaTypeForQuery;	// 152 = 0x98
	ATVMediaCollectionRef _folder;	// 156 = 0x9c
	NSArray *_filteredPlaylists;	// 160 = 0xa0
	BOOL _countIntegratedQuery;	// 164 = 0xa4
	NSMutableArray *_tempFilteredPlaylists;	// 168 = 0xa8
	NSMutableArray *_pendingPlaylistQueries;	// 172 = 0xac
	Class _mediaTypeControllerClass;	// 176 = 0xb0
}
+ (id)playlistsControllerWithDataClient:(ATVDataClientRef)dataClient dataClientType:(unsigned long)type mediaType:(ATVMediaTypeRef)type3 mediaTypeControllerClass:(Class)aClass;	// 0x32b06049
- (id)initWithMediaType:(ATVMediaTypeRef)mediaType folder:(ATVMediaCollectionRef)folder dataClient:(ATVDataClientRef)client dataClientType:(unsigned long)type mediaTypeControllerClass:(Class)aClass;	// 0x32b060a5
- (BOOL)_cloudFolderHasPlaylist:(id)playlist inTree:(id)tree;	// 0x32b0856d
- (void)_cloudPreparePlaylistHierarcy:(id)hierarcy;	// 0x32b07e49
- (ATVMediaFilterRef)_createFilterForCurrentMediaType;	// 0x32b073d5
- (void)_fetchPlaylistsItemCount:(id)count;	// 0x32b07495
- (int)_firstLevelChildernOfPlaylistAtIndex:(int)index inArray:(id)array totalChildern:(int *)childern;	// 0x32b07c45
- (void)_playlistItemsQueryComplete:(ATVMediaQueryRef)complete;	// 0x32b076f1
- (void)_preparePlaylistHierarcy:(id)hierarcy;	// 0x32b07a7d
- (ATVMediaQueryRef)createDataQuery;	// 0x32b06409
- (ATVMediaQueryRef)createPlayQueryForIndexPath:(id)indexPath;	// 0x32b06f19
- (ATVMediaQueryRef)createPreviewQueryForIndexPath:(id)indexPath;	// 0x32b06bf5
- (BOOL)dataClientUpdated:(id)updated;	// 0x32b06331
- (BOOL)dataQueryComplete:(ATVMediaQueryRef)complete;	// 0x32b066c1
- (void)dealloc;	// 0x32b0621d
- (id)errorForNoContent;	// 0x32b06bd5
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x32b07211
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x32b071e5
- (id)list:(id)list indexPathForItemID:(id)itemID;	// 0x32b06e6d
- (id)list:(id)list itemIDForIndexPath:(id)indexPath;	// 0x32b06dc9
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x32b06cd1
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x32b071f1
- (void)playQueryComplete:(ATVMediaQueryRef)complete;	// 0x32b07115
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "MusicController.h"

@class NSString, NSNumber;

@interface MusicItemsController : MusicController {
@private
	ATVMediaCollectionRef _album;	// 124 = 0x7c
	ATVMediaCollectionRef _artist;	// 128 = 0x80
	ATVMediaCollectionRef _musicVideoArtist;	// 132 = 0x84
	ATVMediaCollectionRef _composer;	// 136 = 0x88
	ATVMediaCollectionRef _playlist;	// 140 = 0x8c
	NSString *_genre;	// 144 = 0x90
	NSNumber *_albumID;	// 148 = 0x94
	BOOL _displaysMusicVideosOnly;	// 152 = 0x98
	BOOL _displayAudiobooksOnly;	// 153 = 0x99
	BOOL _sortItemsByName;	// 154 = 0x9a
	BOOL _refreshList;	// 155 = 0x9b
}
+ (id)allMusicVideosControllerWithDataClient:(ATVDataClientRef)dataClient dataClientType:(unsigned long)type;	// 0x303b5c01
+ (id)allSongsControllerByGenre:(id)genre dataClient:(ATVDataClientRef)client dataClientType:(unsigned long)type;	// 0x303b5b71
+ (id)allSongsControllerWithDataClient:(ATVDataClientRef)dataClient dataClientType:(unsigned long)type;	// 0x303b5b41
+ (id)audiobooksControllerForAlbum:(ATVMediaCollectionRef)album dataClient:(ATVDataClientRef)client dataClientType:(unsigned long)type;	// 0x303b5e85
+ (id)controllerForATVMediaType:(ATVMediaTypeRef)atvmediaType collection:(ATVMediaCollectionRef)collection dataClient:(ATVDataClientRef)client dataClientType:(unsigned long)type playAllItems:(BOOL)items;	// 0x303b5af9
+ (id)musicVideosControllerForArtist:(ATVMediaCollectionRef)artist dataClient:(ATVDataClientRef)client dataClientType:(unsigned long)type;	// 0x303b5e3d
+ (id)songsControllerForAlbum:(ATVMediaCollectionRef)album byGenre:(id)genre dataClient:(ATVDataClientRef)client dataClientType:(unsigned long)type;	// 0x303b5c8d
+ (id)songsControllerForAlbumWithID:(id)anId dataClient:(ATVDataClientRef)client dataClientType:(unsigned long)type;	// 0x303b5d45
+ (id)songsControllerForArtist:(ATVMediaCollectionRef)artist byGenre:(id)genre dataClient:(ATVDataClientRef)client dataClientType:(unsigned long)type;	// 0x303b5ce9
+ (id)songsControllerForComposer:(ATVMediaCollectionRef)composer dataClient:(ATVDataClientRef)client dataClientType:(unsigned long)type;	// 0x303b5d8d
+ (id)songsControllerForPlaylist:(ATVMediaCollectionRef)playlist dataClient:(ATVDataClientRef)client dataClientType:(unsigned long)type;	// 0x303b5de5
- (id)initWithAlbum:(ATVMediaCollectionRef)album byGenre:(id)genre dataClient:(ATVDataClientRef)client dataClientType:(unsigned long)type;	// 0x303b5f4d
- (id)initWithAlbumID:(id)albumID dataClient:(ATVDataClientRef)client dataClientType:(unsigned long)type;	// 0x303b616d
- (id)initWithArtist:(ATVMediaCollectionRef)artist byGenre:(id)genre dataClient:(ATVDataClientRef)client dataClientType:(unsigned long)type;	// 0x303b607d
- (id)initWithAudiobookAlbum:(ATVMediaCollectionRef)audiobookAlbum dataClient:(ATVDataClientRef)client dataClientType:(unsigned long)type;	// 0x303b64a9
- (id)initWithComposer:(ATVMediaCollectionRef)composer dataClient:(ATVDataClientRef)client dataClientType:(unsigned long)type;	// 0x303b61ed
- (id)initWithGenre:(id)genre dataClient:(ATVDataClientRef)client dataClientType:(unsigned long)type;	// 0x303b5ecd
- (id)initWithMusiVideoArtist:(ATVMediaCollectionRef)musiVideoArtist dataClient:(ATVDataClientRef)client dataClientType:(unsigned long)type;	// 0x303b63c9
- (id)initWithPlaylist:(ATVMediaCollectionRef)playlist dataClient:(ATVDataClientRef)client dataClientType:(unsigned long)type;	// 0x303b62bd
- (int)_headerCount;	// 0x303b73bd
- (void)_playerUpdated:(id)updated;	// 0x303b75d1
- (void)_registerForPlayerNotifications;	// 0x303b7519
- (void)_setDisplaysAudiobooksOnly:(BOOL)only;	// 0x303b7509
- (void)_setDisplaysMusicVideosOnly:(BOOL)only;	// 0x303b74f9
- (void)_setPreviewForMedia:(void *)media;	// 0x303b7409
- (ATVMediaQueryRef)createDataQuery;	// 0x303b67c9
- (ATVMediaQueryRef)createPreDataQuery;	// 0x303b6631
- (void *)dataItemAtIndexPath:(id)indexPath;	// 0x303b6b2d
- (void)dealloc;	// 0x303b64ed
- (id)errorForNoContent;	// 0x303b6a7d
- (id)indexPathForDataItem:(void *)dataItem;	// 0x303b6a9d
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x303b6dd9
- (void)list:(id)list didPlayItemAtIndexPath:(id)indexPath;	// 0x303b7161
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x303b6f29
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x303b6d21
- (id)list:(id)list indexPathForItemID:(id)itemID;	// 0x303b725d
- (id)list:(id)list itemIDForIndexPath:(id)indexPath;	// 0x303b7171
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x303b6bd1
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x303b6d8d
- (BOOL)preDataQueryComplete:(id)complete;	// 0x303b66a5
- (void)setSortItemsByName:(BOOL)name;	// 0x303b73ad
- (void)wasExhumed;	// 0x303b65bd
@end

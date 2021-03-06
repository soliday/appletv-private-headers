/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRDataQueryController.h"
#import "AppleTV-Structs.h"


@interface MusicController : BRDataQueryController {
}
+ (void)addGenre:(id)genre toQuery:(ATVMediaQueryRef)query;	// 0x333169d5
+ (void)addPropertiesForAlbumQuery:(ATVMediaQueryRef)albumQuery;	// 0x33316ec5
+ (void)addPropertiesForSongsQuery:(ATVMediaQueryRef)songsQuery;	// 0x33316dc5
+ (void)addiTunesLPFilterToQuery:(ATVMediaQueryRef)query;	// 0x33316991
+ (id)albumMenuItemForAlbum:(ATVMediaCollectionRef)album;	// 0x3331762d
+ (id)albumMenuItemForAlbum:(ATVMediaCollectionRef)album displaysArtistName:(BOOL)name;	// 0x33317641
+ (id)artistMenuItemForArtist:(ATVMediaCollectionRef)artist;	// 0x333175b1
+ (ATVMediaQueryRef)createAudiobooksQueryWithProperties:(BOOL)properties;	// 0x33316f49
+ (ATVMediaQueryRef)createItemsQueryForAlbum:(ATVMediaCollectionRef)album;	// 0x33317161
+ (ATVMediaQueryRef)createItemsQueryForPlaylist:(ATVMediaCollectionRef)playlist;	// 0x333171d1
+ (ATVMediaQueryRef)createMusicVideosQueryWithProperties:(BOOL)properties;	// 0x33316fbd
+ (ATVMediaQueryRef)createMusicVideosQueryWithPropertiesForArtistID:(id)artistID;	// 0x33317031
+ (ATVMediaQueryRef)createPlaylistsQueryWithProperties:(BOOL)properties;	// 0x33317089
+ (ATVMediaCompoundFilterRef)createSongsAndMusicVideosFilter;	// 0x33316d15
+ (ATVMediaQueryRef)createSongsQuery;	// 0x33316a15
+ (ATVMediaQueryRef)createSongsQueryForAlbumID:(id)albumID;	// 0x33316bd1
+ (ATVMediaQueryRef)createSongsQueryForArtist:(ATVMediaCollectionRef)artist;	// 0x33316a71
+ (ATVMediaQueryRef)createSongsQueryForComposer:(ATVMediaCollectionRef)composer;	// 0x33316c59
+ (ATVMediaQueryRef)createSongsQueryWithProperties;	// 0x33316a35
+ (ATVMediaQueryRef)createSongsQueryWithPropertiesForAlbumID:(id)albumID;	// 0x33316d89
+ (ATVMediaQueryRef)createSongsQueryWithPropertiesForArtist:(ATVMediaCollectionRef)artist;	// 0x33316b95
+ (ATVMediaQueryRef)createSongsQueryWithPropertiesForComposer:(ATVMediaCollectionRef)composer;	// 0x33316cd9
+ (void)initialize;	// 0x33316935
+ (id)playlistMenuItemForPlaylist:(ATVMediaCollectionRef)playlist;	// 0x33317815
+ (id)previewForAlbum:(ATVMediaCollectionRef)album preview:(id)preview;	// 0x33317d9d
+ (id)previewForMediaItem:(ATVMediaItemRef)mediaItem preview:(id)preview;	// 0x33317a8d
+ (id)songMenuItemForSong:(ATVMediaItemRef)song;	// 0x33317249
+ (id)songMenuItemForSong:(ATVMediaItemRef)song displaysArtist:(BOOL)artist;	// 0x33317269
- (void)_handleContextMenuSelection:(id)selection;	// 0x33318165
- (id)providersForContextMenu;	// 0x333180a9
@end


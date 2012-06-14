/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRMediaMenuController.h"

@class NSSet;

@interface BRPlaylistsMenuController : BRMediaMenuController {
@private
	NSSet *_mediaTypes;	// 160 = 0xa0
}
+ (id)_dataStoreWithMediaTypes:(id)mediaTypes sortDescriptors:(id)descriptors;	// 0x32a4a3d9
+ (long)playlistCountForMediaTypes:(id)mediaTypes;	// 0x32a4a0a5
- (id)initWithMediaTypes:(id)mediaTypes;	// 0x32a4a0d1
- (id)initWithMediaTypes:(id)mediaTypes resolveArtworkFromParentCollections:(BOOL)parentCollections;	// 0x32a4a0e5
- (id)_dataProviderForController:(id)controller;	// 0x32a4a589
- (void)_itemSelected:(id)selected;	// 0x32a4a635
- (void)_pushControllerForPlaylist:(id)playlist;	// 0x32a4a7d9
- (void)_startPlayerWithTrackAtIndex:(long)index tracklist:(id)tracklist shuffle:(BOOL)shuffle list:(id)list;	// 0x32a4ab8d
- (void)dealloc;	// 0x32a4a38d
@end


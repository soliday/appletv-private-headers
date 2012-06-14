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
+ (id)_dataStoreWithMediaTypes:(id)mediaTypes sortDescriptors:(id)descriptors;	// 0x36706555
+ (long)playlistCountForMediaTypes:(id)mediaTypes;	// 0x36706221
- (id)initWithMediaTypes:(id)mediaTypes;	// 0x3670624d
- (id)initWithMediaTypes:(id)mediaTypes resolveArtworkFromParentCollections:(BOOL)parentCollections;	// 0x36706261
- (id)_dataProviderForController:(id)controller;	// 0x36706705
- (void)_itemSelected:(id)selected;	// 0x367067b1
- (void)_pushControllerForPlaylist:(id)playlist;	// 0x36706955
- (void)_startPlayerWithTrackAtIndex:(long)index tracklist:(id)tracklist shuffle:(BOOL)shuffle list:(id)list;	// 0x36706d09
- (void)dealloc;	// 0x36706509
@end

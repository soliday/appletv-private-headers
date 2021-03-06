/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRMediaMenuController.h"
#import "AppleTV-Structs.h"

@class NSSet;

@interface BRPlaylistsMenuController : BRMediaMenuController {
@private
	NSSet *_mediaTypes;	// 156 = 0x9c
}
+ (id)_dataStoreWithMediaTypes:(id)mediaTypes sortDescriptors:(id)descriptors;	// 0x33276839
+ (long)playlistCountForMediaTypes:(id)mediaTypes;	// 0x33276505
- (id)initWithMediaTypes:(id)mediaTypes;	// 0x33276531
- (id)initWithMediaTypes:(id)mediaTypes resolveArtworkFromParentCollections:(BOOL)parentCollections;	// 0x33276545
- (id)_dataProviderForController:(id)controller;	// 0x332769e9
- (void)_itemSelected:(id)selected;	// 0x33276a95
- (void)_pushControllerForPlaylist:(id)playlist;	// 0x33276c39
- (void)_startPlayerWithTrackAtIndex:(long)index tracklist:(id)tracklist shuffle:(BOOL)shuffle list:(id)list;	// 0x33276fed
- (void)dealloc;	// 0x332767ed
@end


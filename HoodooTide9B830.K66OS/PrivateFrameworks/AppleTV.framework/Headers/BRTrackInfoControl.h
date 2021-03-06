/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRTrackInfoLayer, NSString, BRMediaPlayer;

__attribute__((visibility("hidden")))
@interface BRTrackInfoControl : BRControl {
@private
	BRTrackInfoLayer *_layer;	// 48 = 0x30
	BRMediaPlayer *_player;	// 52 = 0x34
	NSString *_lastAssetID;	// 56 = 0x38
}
@property(retain) BRMediaPlayer *player;	// G=0x32a1cf05; S=0x32a1cdfd; converted property
- (id)init;	// 0x32a1cb5d
- (id)_fetchCoverArt;	// 0x32a1d0f5
- (void)_playbackAssetChanged:(id)changed;	// 0x32a1d1e1
- (void)_playerStateChanged:(id)changed;	// 0x32a1d1a1
- (BOOL)_supportsShowingArtist:(id)artist;	// 0x32a1d2bd
- (BOOL)_supportsShowingPrimaryCollectionTitle:(id)title;	// 0x32a1d359
- (void)_updateCoverArt:(id)art;	// 0x32a1d1f1
- (void)_updateTrackInfo;	// 0x32a1cf35
- (id)accessibilityLabel;	// 0x32a1cf15
- (void)controlWasActivated;	// 0x32a1cc91
- (void)controlWasDeactivated;	// 0x32a1cd61
- (void)dealloc;	// 0x32a1cbed
// converted property getter: - (id)player;	// 0x32a1cf05
// converted property setter: - (void)setPlayer:(id)player;	// 0x32a1cdfd
@end


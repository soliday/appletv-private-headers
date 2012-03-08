/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPVideoOverlay.h"
#import "MPNowPlayingItemQueueInfoButtonDelegate.h"

@class MPNowPlayingItemQueueInfoButton, MPInlineTransportControls;

@interface MPInlineVideoOverlay : MPVideoOverlay <MPNowPlayingItemQueueInfoButtonDelegate> {
@private
	MPInlineTransportControls *_transportControls;	// 100 = 0x64
	MPNowPlayingItemQueueInfoButton *_itemQueueInfoButton;	// 104 = 0x68
	unsigned _layoutSubviewsActive : 1;	// 108 = 0x6c
}
@property(assign) BOOL allowsWirelessPlayback;	// G=0x31a21f21; S=0x31a21f59; converted property
- (id)initWithFrame:(CGRect)frame;	// 0x31a210dd
- (void)_availableRoutesDidChangeNotification:(id)_availableRoutes;	// 0x31a221f5
- (void)_configureLinkButtonForCurrentItemTime;	// 0x31a21d21
- (unsigned)_convertedPartsMask:(unsigned)mask;	// 0x31a22225
// converted property getter: - (BOOL)allowsWirelessPlayback;	// 0x31a21f21
- (void)crossedURLTimeMarker:(id)marker;	// 0x31a21e41
- (void)dealloc;	// 0x31a21179
- (void)detailSliderTrackingDidBegin:(id)detailSliderTracking;	// 0x31a21e51
- (void)detailSliderTrackingDidCancel:(id)detailSliderTracking;	// 0x31a21ee1
- (void)detailSliderTrackingDidEnd:(id)detailSliderTracking;	// 0x31a21ea1
- (void)layoutSubviews;	// 0x31a21259
- (int)nowPlayingItemQueueInfoButton:(id)button willDisplayInfoType:(int)type;	// 0x31a21d15
// converted property setter: - (void)setAllowsWirelessPlayback:(BOOL)playback;	// 0x31a21f59
- (void)setDesiredParts:(unsigned)parts animate:(BOOL)animate;	// 0x31a21ff5
- (void)setDisabledParts:(unsigned)parts;	// 0x31a22119
- (void)setFrame:(CGRect)frame;	// 0x31a21ccd
- (void)setItem:(id)item;	// 0x31a21f99
- (void)setVideoViewController:(id)controller;	// 0x31a22161
- (void)setVisibleParts:(unsigned)parts animate:(BOOL)animate;	// 0x31a2207d
@end

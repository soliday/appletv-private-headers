/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPTransportControls.h"

@class UIImage;

@interface MPFullScreenTransportControls : MPTransportControls {
	UIImage *_backgroundImage;	// 128 = 0x80
	float _requiredFrameSizeWidth;	// 132 = 0x84
}
- (id)init;	// 0x346ad24d
- (void)_layoutVolumeSlider:(id)slider;	// 0x346ae225
- (void)_playbackModeDidChange;	// 0x346ae385
- (void)dealloc;	// 0x346ad3b1
- (void)drawRect:(CGRect)rect;	// 0x346ad431
- (void)layoutSubviews;	// 0x346ad50d
- (id)newVolumeSlider;	// 0x346adde1
- (void)reloadForAdditions:(id)additions removals:(id)removals animate:(BOOL)animate;	// 0x346ade69
- (void)setVisibleParts:(unsigned)parts animated:(BOOL)animated;	// 0x346addad
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x346ad499
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPPlaybackControlsView.h"

@class UILabel, UIImageView;

@interface MPPortraitControlsOverlay : MPPlaybackControlsView {
	UILabel *_scrubSpeedLabel;	// 144 = 0x90
	UILabel *_scrubInstructionLabel;	// 148 = 0x94
	UIImageView *_scrubInstructionOverlay;	// 152 = 0x98
	UIImageView *_backgroundView;	// 156 = 0x9c
	BOOL _boundsAnimInFlight;	// 160 = 0xa0
	CGRect _boundsAnimGoal;	// 164 = 0xa4
}
- (id)initWithFrame:(CGRect)frame;	// 0x34664455
- (void)_hideScrubInstructionOverlayAnimationDidEnd;	// 0x34666931
- (int)_layoutStyle;	// 0x346647dd
- (void)_resetStateAfterSliderTrackingDone:(id)done;	// 0x346662f9
- (void)_showScrubInstructionOverlayAnimationDidEnd;	// 0x3466692d
- (void)_sizeToFitAnimationDidEnd;	// 0x34666919
- (float)_sizeToFitForCurrentStateAnimated:(BOOL)currentStateAnimated;	// 0x34664815
- (CGRect)bounds;	// 0x34664ca9
- (void)dealloc;	// 0x34664621
- (void)detailSlider:(id)slider didChangeScrubSpeed:(int)speed;	// 0x346669c9
- (void)detailSliderTrackingDidBegin:(id)detailSliderTracking;	// 0x34665a55
- (void)detailSliderTrackingDidCancel:(id)detailSliderTracking;	// 0x34666765
- (void)detailSliderTrackingDidEnd:(id)detailSliderTracking;	// 0x34666775
- (CGRect)hitRect;	// 0x34664c55
- (void)layoutSubviews;	// 0x34665879
- (void)layoutSubviews_Compact;	// 0x34664d09
- (void)layoutSubviews_Short;	// 0x34664d6d
- (void)layoutSubviews_Tall;	// 0x34665101
- (id)newButtonForPart:(unsigned)part;	// 0x34664705
- (id)newProgressIndicator;	// 0x34664abd
- (void)resetDetailSlider:(id)slider;	// 0x34665901
- (void)setVisibleParts:(unsigned)parts;	// 0x34664a65
- (void)updateForEndOfDetailScrubbing;	// 0x346659b5
@end


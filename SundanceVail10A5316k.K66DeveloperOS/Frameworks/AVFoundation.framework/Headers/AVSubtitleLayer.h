/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <CALayer.h> // Unknown library
#import "AVFoundation-Structs.h"

@class AVSubtitleLayerInternal, AVPlayer, CADisplay;

@interface AVSubtitleLayer : CALayer {
	AVSubtitleLayerInternal *_subtitleLayer;	// 48 = 0x30
}
@property(assign, nonatomic, getter=isOverscanSubtitleSupportEnabled) BOOL overscanSubtitleSupportEnabled;	// G=0x36789f01; S=0x36789fed; 
@property(retain, nonatomic) AVPlayer *player;	// G=0x36789c7d; S=0x36789b15; 
@property(readonly, assign, nonatomic) CADisplay *subtitleLayerDisplay;	// G=0x3678a0cd; 
+ (id)subtitleLayerWithPlayer:(id)player;	// 0x36788369
- (id)init;	// 0x3678880d
- (id)initWithLayer:(id)layer;	// 0x36788af1
- (void)_setHasPlayerToObserve:(int)observe andShouldObserveIt:(int)anAnd;	// 0x367892d9
- (void)_updateNonForcedSubtitleDisplayEnabled:(BOOL)enabled;	// 0x36789041
- (void)dealloc;	// 0x36789a51
- (void)drawInContext:(CGContextRef)context;	// 0x36788c35
- (void)finalize;	// 0x367899d9
- (long)getLayout:(SubtitleLayoutParameters)layout suggestLayout:(CGRect *)layout2;	// 0x36788511
// declared property getter: - (BOOL)isOverscanSubtitleSupportEnabled;	// 0x36789f01
- (void)layerDidBecomeVisible:(BOOL)layer;	// 0x36789da9
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x36789e19
// declared property getter: - (id)player;	// 0x36789c7d
// declared property setter: - (void)setOverscanSubtitleSupportEnabled:(BOOL)enabled;	// 0x36789fed
// declared property setter: - (void)setPlayer:(id)player;	// 0x36789b15
// declared property getter: - (id)subtitleLayerDisplay;	// 0x3678a0cd
- (long)updateSubtitle:(id)subtitle forcedSubtitleSample:(BOOL)sample shouldBeHidden:(BOOL *)hidden;	// 0x367883c5
@end


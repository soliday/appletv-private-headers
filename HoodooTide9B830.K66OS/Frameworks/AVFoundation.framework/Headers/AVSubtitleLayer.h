/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <CALayer.h> // Unknown library

@class AVPlayer, CADisplay, AVSubtitleLayerInternal;

@interface AVSubtitleLayer : CALayer {
	AVSubtitleLayerInternal *_subtitleLayer;	// 48 = 0x30
}
@property(assign, nonatomic, getter=isOverscanSubtitleSupportEnabled) BOOL overscanSubtitleSupportEnabled;	// G=0x35e7d90d; S=0x35e7d9fd; 
@property(retain, nonatomic) AVPlayer *player;	// G=0x35e7cb05; S=0x35e7c991; @dynamic
@property(readonly, assign, nonatomic) CADisplay *subtitleLayerDisplay;	// G=0x35e7dadd; 
+ (id)subtitleLayerWithPlayer:(id)player;	// 0x35e7ba4d
- (id)init;	// 0x35e7baa9
- (id)initWithLayer:(id)layer;	// 0x35e7bc65
- (void)_invalidateBoundaryTimeObserver;	// 0x35e7c639
- (void)_setHasPlayerToObserve:(int)observe andShouldObserveIt:(int)anAnd;	// 0x35e7c065
- (void)_updateNonForcedSubtitleDisplayEnabled:(BOOL)enabled;	// 0x35e7bd99
- (void)dealloc;	// 0x35e7c8d5
- (void)finalize;	// 0x35e7c85d
// declared property getter: - (BOOL)isOverscanSubtitleSupportEnabled;	// 0x35e7d90d
- (void)layerDidBecomeVisible:(BOOL)layer;	// 0x35e7d4b9
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x35e7d84d
// declared property getter: - (id)player;	// 0x35e7cb05
- (void)setBounds:(CGRect)bounds;	// 0x35e7d2fd
// declared property setter: - (void)setOverscanSubtitleSupportEnabled:(BOOL)enabled;	// 0x35e7d9fd
// declared property setter: - (void)setPlayer:(id)player;	// 0x35e7c991
// declared property getter: - (id)subtitleLayerDisplay;	// 0x35e7dadd
- (void)subtitlesDidChange:(id)subtitles;	// 0x35e7cc35
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <CALayer.h> // Unknown library

@class AVPlayerLayerInternal, AVPlayer, NSString;

@interface AVPlayerLayer : CALayer {
	AVPlayerLayerInternal *_playerLayer;	// 48 = 0x30
}
@property(assign, getter=isOverscanSubtitleSupportEnabled) BOOL overscanSubtitleSupportEnabled;	// G=0x3267ef11; S=0x3267f015; converted property
@property(retain, nonatomic) AVPlayer *player;	// G=0x3267e341; S=0x3267e471; 
@property(readonly, assign, nonatomic, getter=isReadyForDisplay) BOOL readyForDisplay;	// G=0x3267eb91; @dynamic
@property(copy) NSString *videoGravity;	// G=0x3267e739; S=0x3267e8a5; 
+ (id)playerLayerWithPlayer:(id)player;	// 0x3267b789
- (id)init;	// 0x3267b7e5
- (id)initWithLayer:(id)layer;	// 0x3267ba79
- (void)_addAnimationsForContentLayer:(id)contentLayer size:(CGSize)size gravity:(id)gravity;	// 0x3267c199
- (void)_addAnimationsForSubtitleLayer:(id)subtitleLayer size:(CGSize)size;	// 0x3267c639
- (void)_connectContentLayerToPlayer;	// 0x3267d4b1
- (void)_disconnectContentLayerFromPlayer;	// 0x3267d4ed
- (CGSize)_getAVPlayerCurrentItemPresentationSizeKeyFromPlayer:(id)player;	// 0x3267d529
- (CGRect)_minRectToFitVideoAndSubtitlesInBounds:(CGRect)bounds;	// 0x3267f339
- (float)_pctOfSubtitleLayerHeight;	// 0x3267ee85
- (void)_setHasPlayerToObserve:(int)observe andShouldObserveIt:(int)anAnd;	// 0x3267dcad
- (void)_setItem:(id)item readyForDisplay:(BOOL)display;	// 0x3267ebe9
- (void)_setSubtitleDisplayEnabled:(BOOL)enabled;	// 0x3267ece9
- (void)_setSubtitleGravity:(id)gravity;	// 0x3267edb1
- (BOOL)_subtitleDisplayEnabled;	// 0x3267ecad
- (id)_subtitleGravity;	// 0x3267ed7d
- (void)_updatePresentationSize:(CGSize)size;	// 0x3267d591
- (void)_updateSubtitleLayerForPlayerLayerBounds:(CGRect)playerLayerBounds presentationSize:(CGSize)size playLayerTransform:(CATransform3D)transform;	// 0x3267db31
- (CGRect)_videoRect;	// 0x3267f125
- (CGRect)_videoRectForBounds:(CGRect)bounds;	// 0x3267f315
- (void)addAnimation:(id)animation forKey:(id)key;	// 0x3267ccb1
- (void)dealloc;	// 0x3267d2a5
- (void)finalize;	// 0x3267d3f1
// converted property getter: - (BOOL)isOverscanSubtitleSupportEnabled;	// 0x3267ef11
// declared property getter: - (BOOL)isReadyForDisplay;	// 0x3267eb91
- (void)layerDidBecomeVisible:(BOOL)layer;	// 0x3267e681
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x3267e209
// declared property getter: - (id)player;	// 0x3267e341
- (void)removeAllAnimations;	// 0x3267d1d9
- (void)removeAnimationForKey:(id)key;	// 0x3267d079
- (void)setBounds:(CGRect)bounds;	// 0x3267bbd1
// converted property setter: - (void)setOverscanSubtitleSupportEnabled:(BOOL)enabled;	// 0x3267f015
// declared property setter: - (void)setPlayer:(id)player;	// 0x3267e471
// declared property setter: - (void)setVideoGravity:(id)gravity;	// 0x3267e8a5
// declared property getter: - (id)videoGravity;	// 0x3267e739
@end


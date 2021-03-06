/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <CALayer.h> // Unknown library

@class AVSynchronizedLayerInternal, AVPlayerItem;

@interface AVSynchronizedLayer : CALayer {
	AVSynchronizedLayerInternal *_syncLayer;	// 48 = 0x30
}
@property(retain, nonatomic) AVPlayerItem *playerItem;	// G=0x30aed429; S=0x30aed449; 
+ (id)synchronizedLayerWithPlayerItem:(id)playerItem;	// 0x30aed325
- (id)init;	// 0x30aed381
- (void)dealloc;	// 0x30aed6c5
- (void)finalize;	// 0x30aed7bd
- (void)layerDidBecomeVisible:(BOOL)layer;	// 0x30aed5e1
// declared property getter: - (id)playerItem;	// 0x30aed429
// declared property setter: - (void)setPlayerItem:(id)item;	// 0x30aed449
@end


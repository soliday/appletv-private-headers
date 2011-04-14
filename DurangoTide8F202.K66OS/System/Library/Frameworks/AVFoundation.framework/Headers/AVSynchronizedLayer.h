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
@property(retain, nonatomic) AVPlayerItem *playerItem;	// G=0x303f94e9; S=0x303f96e5; 
+ (id)synchronizedLayerWithPlayerItem:(id)playerItem;	// 0x303f95e5
- (id)init;	// 0x303f9635
- (void)dealloc;	// 0x303f9905
- (void)finalize;	// 0x303f98a9
- (void)layerDidBecomeVisible:(BOOL)layer;	// 0x303f984d
// declared property getter: - (id)playerItem;	// 0x303f94e9
// declared property setter: - (void)setPlayerItem:(id)item;	// 0x303f96e5
@end

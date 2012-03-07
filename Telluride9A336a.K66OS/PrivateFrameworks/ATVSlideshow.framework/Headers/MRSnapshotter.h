/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "ATVSlideshow-Structs.h"

@class EAGLContext, MRRenderer, MRTexture;

@interface MRSnapshotter : NSObject {
	MRRenderer *_renderer;	// 4 = 0x4
	CGSize _size;	// 8 = 0x8
	EAGLContext *_context;	// 16 = 0x10
	MRTexture *_texture;	// 20 = 0x14
}
@property(assign, nonatomic) BOOL isFlipped;	// G=0x344133b1; S=0x344133e5; 
@property(assign, nonatomic) CGSize size;	// G=0x344136e5; S=0x344131b5; @synthesize=_size
- (id)initWithMontage:(id)montage andAssetManagementDelegate:(id)delegate;	// 0x34412fd5
- (CGImageRef)CGImageSnapshotAtState:(id)state;	// 0x344136a9
- (CGImageRef)CGImageSnapshotAtTime:(double)time;	// 0x3441366d
- (CGImageRef)_CGImageSnapshot;	// 0x34413421
- (void)dealloc;	// 0x3441312d
// declared property getter: - (BOOL)isFlipped;	// 0x344133b1
// declared property setter: - (void)setIsFlipped:(BOOL)flipped;	// 0x344133e5
// declared property setter: - (void)setSize:(CGSize)size;	// 0x344131b5
// declared property getter: - (CGSize)size;	// 0x344136e5
@end

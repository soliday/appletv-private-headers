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
@property(assign, nonatomic) BOOL isFlipped;	// G=0x321e0731; S=0x321e0765; 
@property(assign, nonatomic) CGSize size;	// G=0x321e0a85; S=0x321e0535; @synthesize=_size
- (id)initWithMontage:(id)montage andAssetManagementDelegate:(id)delegate isReadOnly:(BOOL)only;	// 0x321e0355
- (CGImageRef)CGImageSnapshotAtState:(id)state;	// 0x321e0a49
- (CGImageRef)CGImageSnapshotAtTime:(double)time;	// 0x321e0a0d
- (CGImageRef)_CGImageSnapshot;	// 0x321e07a1
- (void)dealloc;	// 0x321e04ad
// declared property getter: - (BOOL)isFlipped;	// 0x321e0731
// declared property setter: - (void)setIsFlipped:(BOOL)flipped;	// 0x321e0765
// declared property setter: - (void)setSize:(CGSize)size;	// 0x321e0535
// declared property getter: - (CGSize)size;	// 0x321e0a85
@end


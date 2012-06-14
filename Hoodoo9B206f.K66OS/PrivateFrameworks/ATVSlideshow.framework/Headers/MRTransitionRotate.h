/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MRTransition.h"
#import "ATVSlideshow-Structs.h"

@class MRImageProvider;

@interface MRTransitionRotate : MRTransition {
	MRImageProvider *mBoxShadowBig;	// 60 = 0x3c
}
- (id)initWithTransitionID:(id)transitionID;	// 0x30ac5001
- (void)_cleanup;	// 0x30ac5105
- (BOOL)isLoadedForTime:(double)time;	// 0x30ac519d
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x30ac51c1
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x30ac522d
- (void)setPixelSize:(CGSize)size;	// 0x30ac5145
- (void)unload;	// 0x30ac5fcd
@end


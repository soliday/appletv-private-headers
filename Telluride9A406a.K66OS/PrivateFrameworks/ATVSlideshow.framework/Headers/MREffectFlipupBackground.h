/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MREffect.h"
#import "ATVSlideshow-Structs.h"

@class MRImageProvider;

@interface MREffectFlipupBackground : MREffect {
	MRImageProvider *mGradientProvider;	// 112 = 0x70
}
- (id)initWithEffectID:(id)effectID;	// 0x34aad3a1
- (void)_cleanup;	// 0x34aad3e1
- (void)_unload;	// 0x34aad719
- (BOOL)isLoadedForTime:(double)time;	// 0x34aad479
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x34aad49d
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x34aad715
- (void)setAttributes:(id)attributes;	// 0x34aad509
- (void)setPixelSize:(CGSize)size;	// 0x34aad421
@end

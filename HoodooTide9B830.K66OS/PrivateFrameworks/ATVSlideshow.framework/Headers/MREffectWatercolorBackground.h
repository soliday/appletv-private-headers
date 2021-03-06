/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class MRImageProvider;

@interface MREffectWatercolorBackground : MREffect {
	MRImageProvider *mPlasmaProvider;	// 112 = 0x70
}
- (id)initWithEffectID:(id)effectID;	// 0x32115ad9
- (void)_cleanup;	// 0x32115be1
- (void)_unload;	// 0x321164e9
- (BOOL)isLoadedForTime:(double)time;	// 0x32115c79
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x32115c9d
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x32115f0d
- (void)setAttributes:(id)attributes;	// 0x32115d09
- (void)setPixelSize:(CGSize)size;	// 0x32115c21
@end


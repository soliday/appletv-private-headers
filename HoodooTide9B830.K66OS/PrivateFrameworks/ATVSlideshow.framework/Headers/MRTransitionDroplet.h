/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MRTransition.h"
#import "ATVSlideshow-Structs.h"


@interface MRTransitionDroplet : MRTransition {
	float mAmplitude;	// 60 = 0x3c
	BOOL mUseLighting;	// 64 = 0x40
}
- (id)initWithTransitionID:(id)transitionID;	// 0x32165269
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x321652bd
@end


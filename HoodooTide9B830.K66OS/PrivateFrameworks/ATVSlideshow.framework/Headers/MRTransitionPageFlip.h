/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MRTransition.h"
#import "ATVSlideshow-Structs.h"


@interface MRTransitionPageFlip : MRTransition {
	XXStruct_mi4pgC *mMesh;	// 60 = 0x3c
}
- (id)initWithTransitionID:(id)transitionID;	// 0x321680f9
- (void)buildMesh;	// 0x321681cd
- (void)cleaup;	// 0x32168139
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x32168309
- (void)releaseByTransitioner:(id)transitioner;	// 0x32168181
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x32168365
- (void)setAttributes:(id)attributes;	// 0x321682a9
@end


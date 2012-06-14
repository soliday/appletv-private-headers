/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MZEffectTiming.h"
#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class NSMutableDictionary, NSMutableArray;

@interface MREffectShiftingTiles : MREffect <MZEffectTiming> {
	NSMutableDictionary *mSprites;	// 112 = 0x70
	NSMutableArray *mTiming;	// 116 = 0x74
	NSMutableArray *mFirstLayout;	// 120 = 0x78
	NSMutableArray *mLastLayout;	// 124 = 0x7c
	int mLastCol;	// 128 = 0x80
	int mLastSlideIndex;	// 132 = 0x84
	int mSlideStartIndex;	// 136 = 0x88
	BOOL mNeedsToBeRebuilt;	// 140 = 0x8c
	BOOL mNeedsToRecalculateIterations;	// 141 = 0x8d
	int mIterationStartIndex;	// 144 = 0x90
}
@property(readonly, assign, nonatomic) double mainDuration;	// @dynamic
@property(readonly, assign, nonatomic) double phaseInDuration;	// @dynamic
@property(readonly, assign, nonatomic) double phaseOutDuration;	// @dynamic
+ (id)customTimingWithEffectID:(id)effectID effectAttributes:(id)attributes slideInformation:(id)information andTextInformation:(id)information4;	// 0x321e5969
+ (BOOL)hasCustomTiming;	// 0x321e5965
+ (BOOL)supportsDynamicExpansionForEffectID:(id)effectID;	// 0x321e5a2d
+ (unsigned)typicalSlideBatchSizeForEffectID:(id)effectID;	// 0x321e5a31
- (id)initWithEffectID:(id)effectID;	// 0x321e5829
- (void)_applyTimingToSlideProviders;	// 0x321e610d
- (float)_aspectRatioForSlideIndex:(int)slideIndex;	// 0x321e779d
- (double)_calculateMainDuration;	// 0x321e7315
- (void)_cleanup;	// 0x321e58e1
- (id)_infoForTime:(double)time;	// 0x321eba69
- (id)_layoutForIteration:(int)iteration;	// 0x321ebbe1
- (id)_layoutForTime:(double)time;	// 0x321ebb55
- (int)_lowestDisplayIteration;	// 0x321e5c19
- (id)_setupFirstLayout;	// 0x321e735d
- (void)_setupLayoutsWithSlideInfo:(id)slideInfo append:(BOOL)append;	// 0x321e784d
- (id)_slideProviderWithAspectRatio:(BOOL)aspectRatio nearest:(int)nearest actual:(int *)actual;	// 0x321eb9d5
- (void)_unload;	// 0x321ebff5
- (void)_updateSizeScripts;	// 0x321e6a25
- (int)_widthForLayout:(int)layout;	// 0x321e7841
- (void)appendSlideInformation:(id)information andTextInformation:(id)information2;	// 0x321e6059
- (double)displayTimeForSlideAtIndex:(unsigned)index;	// 0x321e7761
- (double)displayTimeForTextAtIndex:(unsigned)index;	// 0x321e7789
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x321ebe7d
- (unsigned)firstSlideIndexStillNeededAtTime:(double)time;	// 0x321e5a75
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x321ebfad
- (double)lowestDisplayTime;	// 0x321e76e5
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x321e9731
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x321e9a41
- (void)setMultiImageSlideRange:(NSRange)range;	// 0x321e5ec9
- (void)setPhaseInDuration:(double)duration mainDuration:(double)duration2 phaseOutDuration:(double)duration3;	// 0x321e60c1
- (double)showDurationForSlideAtIndex:(unsigned)index;	// 0x321e7395
- (double)showTimeForSlideAtIndex:(unsigned)index;	// 0x321e70cd
- (BOOL)supportsDynamicExpansion;	// 0x321e5a35
- (int)typicalSlideBatchSize;	// 0x321e5a39
@end


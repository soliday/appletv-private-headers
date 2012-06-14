/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"

@class MCContainerParallelizer, NSDictionary, NSMutableDictionary, NSMutableArray, MUMathExpressionDoubleBased, NSString;

@interface MPAnimatedSet : NSObject <NSCoding> {
	NSString *mAnimatedSetID;	// 4 = 0x4
	NSDictionary *mDescription;	// 8 = 0x8
	MUMathExpressionDoubleBased *mTimeOfGoodPositionFormula;	// 12 = 0xc
	BOOL mTimeWraps;	// 16 = 0x10
	NSMutableDictionary *mSlides;	// 20 = 0x14
	NSMutableArray *mFeaturedSlidePositions;	// 24 = 0x18
	NSMutableArray *mFeaturingAttributes;	// 28 = 0x1c
	double mStartTime;	// 32 = 0x20
	double mIntroDuration;	// 40 = 0x28
	double mMainDuration;	// 48 = 0x30
	double mOutroDuration;	// 56 = 0x38
	double mTotalNumberOfIntervals;	// 64 = 0x40
	double mDefaultFeaturingDuration;	// 72 = 0x48
	double mDefaultFeaturingAnimationDuration;	// 80 = 0x50
	NSDictionary *mDefaultFeaturingAnimationAttributes;	// 88 = 0x58
	NSDictionary *mAttributes;	// 92 = 0x5c
	BOOL mEaseInEaseOutBetweenFeaturedSlides;	// 96 = 0x60
	BOOL mFirstSlideIsShared;	// 97 = 0x61
	BOOL mLastSlideIsShared;	// 98 = 0x62
	NSString *mIntroAnimationID;	// 100 = 0x64
	NSString *mOutroAnimationID;	// 104 = 0x68
	float mDistance;	// 108 = 0x6c
	float mSpeed;	// 112 = 0x70
	MCContainerParallelizer *mContainer;	// 116 = 0x74
}
@property(readonly, assign) NSString *animatedSetID;	// G=0x3096eb8d; @synthesize=mAnimatedSetID
@property(copy) NSDictionary *attributes;	// G=0x3096ece5; S=0x3096ecf9; @synthesize=mAttributes
@property(readonly, assign) MCContainerParallelizer *container;	// G=0x3096ee2d; @synthesize=mContainer
@property(assign) double defaultFeaturingAnimationDuration;	// G=0x3096ec7d; S=0x3096ecb1; @synthesize=mDefaultFeaturingAnimationDuration
@property(assign) double defaultFeaturingDuration;	// G=0x3096ec15; S=0x3096ec49; @synthesize=mDefaultFeaturingDuration
@property(assign) float distance;	// G=0x3096eded; S=0x3096edfd; @synthesize=mDistance
@property(assign) BOOL easeInEaseOutBetweenFeaturedSlides;	// G=0x3096ed1d; S=0x3096ed2d; @synthesize=mEaseInEaseOutBetweenFeaturedSlides
@property(assign) BOOL firstSlideIsShared;	// G=0x3096ed3d; S=0x3096ed4d; @synthesize=mFirstSlideIsShared
@property(readonly, assign) double fullDuration;	// G=0x3096e9f1; 
@property(copy) NSString *introAnimationID;	// G=0x3096ed7d; S=0x3096ed91; @synthesize=mIntroAnimationID
@property(assign) BOOL lastSlideIsShared;	// G=0x3096ed5d; S=0x3096ed6d; @synthesize=mLastSlideIsShared
@property(readonly, assign) unsigned maximumNumberOfSlides;	// G=0x3096c779; 
@property(readonly, assign) unsigned minimumNumberOfSlides;	// G=0x3096c775; 
@property(readonly, assign) BOOL needsEvenNumberOfSlides;	// G=0x3096c77d; 
@property(copy) NSString *outroAnimationID;	// G=0x3096edb5; S=0x3096edc9; @synthesize=mOutroAnimationID
@property(assign) float speed;	// G=0x3096ee0d; S=0x3096ee1d; @synthesize=mSpeed
@property(assign) double startTime;	// G=0x3096ebad; S=0x3096ebe1; @synthesize=mStartTime
@property(readonly, assign) BOOL timeWraps;	// G=0x3096eb9d; @synthesize=mTimeWraps
- (id)initWithAnimatedSetID:(id)animatedSetID;	// 0x3096bc25
- (id)initWithCoder:(id)coder;	// 0x3096c1b9
// declared property getter: - (id)animatedSetID;	// 0x3096eb8d
- (void)applyIntroAnimationPathsToPlug:(id)plug atPosition:(unsigned)position;	// 0x3096df51
// declared property getter: - (id)attributes;	// 0x3096ece5
- (void)chooseAnIntroAnimation;	// 0x3096ea35
- (void)chooseAnOutroAnimation;	// 0x3096eae1
- (void)computeAnimationPathsForTime:(double)time andPosition:(unsigned)position usingAnimationPaths:(id)paths otherAttributes:(id)attributes plugTimeOffset:(double)offset plugTimeOffsetKind:(int)kind plugAnimationPaths:(id)paths7;	// 0x3096d555
// declared property getter: - (id)container;	// 0x3096ee2d
- (void)dealloc;	// 0x3096c57d
- (void)decodeFromSlides:(id)slides;	// 0x3096c781
// declared property getter: - (double)defaultFeaturingAnimationDuration;	// 0x3096ec7d
// declared property getter: - (double)defaultFeaturingDuration;	// 0x3096ec15
// declared property getter: - (float)distance;	// 0x3096eded
// declared property getter: - (BOOL)easeInEaseOutBetweenFeaturedSlides;	// 0x3096ed1d
- (void)encodeWithCoder:(id)coder;	// 0x3096be99
- (double)featuringTimeForSlideAtPosition:(unsigned)position;	// 0x3096cba9
// declared property getter: - (BOOL)firstSlideIsShared;	// 0x3096ed3d
// declared property getter: - (double)fullDuration;	// 0x3096e9f1
- (void)insertIntoContainer:(id)container;	// 0x3096d195
// declared property getter: - (id)introAnimationID;	// 0x3096ed7d
// declared property getter: - (BOOL)lastSlideIsShared;	// 0x3096ed5d
// declared property getter: - (unsigned)maximumNumberOfSlides;	// 0x3096c779
// declared property getter: - (unsigned)minimumNumberOfSlides;	// 0x3096c775
// declared property getter: - (BOOL)needsEvenNumberOfSlides;	// 0x3096c77d
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x3096c6ad
// declared property getter: - (id)outroAnimationID;	// 0x3096edb5
- (void)removeAllSlides;	// 0x3096cabd
- (void)removeSlideAtPosition:(unsigned)position;	// 0x3096c98d
- (void)setAnimationPaths:(id)paths onPlug:(id)plug atPosition:(unsigned)position atTimeOffset:(double)timeOffset withTimeOffsetKind:(int)timeOffsetKind forDuration:(double)duration withFunctionTimeOffset:(double)functionTimeOffset andFunctionTimeFactor:(double)factor easeIn:(BOOL)anIn easeOut:(BOOL)anOut otherAttributes:(id)attributes;	// 0x3096daed
- (void)setAnimationPathsForPlug:(id)plug atPosition:(unsigned)position;	// 0x3096e0d5
// declared property setter: - (void)setAttributes:(id)attributes;	// 0x3096ecf9
// declared property setter: - (void)setDefaultFeaturingAnimationDuration:(double)duration;	// 0x3096ecb1
// declared property setter: - (void)setDefaultFeaturingDuration:(double)duration;	// 0x3096ec49
// declared property setter: - (void)setDistance:(float)distance;	// 0x3096edfd
// declared property setter: - (void)setEaseInEaseOutBetweenFeaturedSlides:(BOOL)easeOutBetweenFeaturedSlides;	// 0x3096ed2d
// declared property setter: - (void)setFirstSlideIsShared:(BOOL)shared;	// 0x3096ed4d
// declared property setter: - (void)setIntroAnimationID:(id)anId;	// 0x3096ed91
// declared property setter: - (void)setLastSlideIsShared:(BOOL)shared;	// 0x3096ed6d
// declared property setter: - (void)setOutroAnimationID:(id)anId;	// 0x3096edc9
// declared property setter: - (void)setSpeed:(float)speed;	// 0x3096ee1d
// declared property setter: - (void)setStartTime:(double)time;	// 0x3096ebe1
- (void)showSlide:(id)slide atPosition:(unsigned)position featuringAttributes:(id)attributes;	// 0x3096c8d1
- (id)slides;	// 0x3096cb99
// declared property getter: - (float)speed;	// 0x3096ee0d
// declared property getter: - (double)startTime;	// 0x3096ebad
- (double)time1OfGoodPositionForPosition:(int)position;	// 0x3096ee3d
- (double)time2OfGoodPositionForPosition:(int)position;	// 0x3096f039
- (double)timeOfGoodPositionForPosition:(int)position;	// 0x3096de0d
// declared property getter: - (BOOL)timeWraps;	// 0x3096eb9d
- (void)updateContainer;	// 0x3096ce81
@end


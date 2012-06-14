/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MRLoadable.h"
#import "MRRenderable.h"
#import "ATVSlideshow-Structs.h"
#import <NSObject.h> // Unknown library

@class NSOperation, NSDictionary, MRLayerEffect, NSString, MRImage;

@interface MREffect : NSObject <MRLoadable, MRRenderable> {
	NSDictionary *mDescription;	// 4 = 0x4
	MRLayerEffect *mEffectLayer;	// 8 = 0x8
	MRImage *mOutputImage;	// 12 = 0xc
	NSString *mEffectID;	// 16 = 0x10
	NSDictionary *mAttributes;	// 20 = 0x14
	NSDictionary *mFlattenedAttributes;	// 24 = 0x18
	unsigned mSeed;	// 28 = 0x1c
	NSRange mMultiImageSlideRange;	// 32 = 0x20
	BOOL mNeedsToUpdateSlides;	// 40 = 0x28
	BOOL mNeedsToUpdateTexts;	// 41 = 0x29
	BOOL mNeedsToUpdateAttributes;	// 42 = 0x2a
	NSOperation *mPreloadOperation;	// 44 = 0x2c
	CGSize mPixelSize;	// 48 = 0x30
	MRImage *mAccumulatedImage;	// 56 = 0x38
	BOOL mNeedsToUpdateAccumulatedImage;	// 60 = 0x3c
	double mDefaultPhaseInDuration;	// 64 = 0x40
	double mDefaultMainDuration;	// 72 = 0x48
	double mDefaultPhaseOutDuration;	// 80 = 0x50
	double mPhaseInDuration;	// 88 = 0x58
	double mMainDuration;	// 96 = 0x60
	double mPhaseOutDuration;	// 104 = 0x68
}
@property(retain, nonatomic) MRImage *accumulatedImage;	// G=0x30a200b9; S=0x30a1f3ed; @synthesize=mAccumulatedImage
@property(retain, nonatomic) NSDictionary *attributes;	// G=0x30a2004d; S=0x30a1f249; @synthesize=mAttributes
@property(readonly, assign) NSString *effectID;	// G=0x30a2003d; @synthesize=mEffectID
@property(readonly, assign, nonatomic) BOOL isAlphaFriendly;	// G=0x30a1fbf9; 
@property(readonly, assign, nonatomic) BOOL isInfinite;	// G=0x30a1fc65; 
@property(readonly, assign, nonatomic) BOOL isNative3D;	// G=0x30a1fb4d; 
@property(readonly, assign, nonatomic) BOOL isOpaque;	// G=0x30a1fbb9; 
@property(readonly, assign, nonatomic) double mainDuration;	// G=0x30a20111; @synthesize=mMainDuration
@property(assign, nonatomic) NSRange multiImageSlideRange;	// G=0x30a200c9; S=0x30a200e5; @synthesize=mMultiImageSlideRange
@property(assign, nonatomic) BOOL needsToUpdateSlides;	// G=0x30a20079; S=0x30a20089; @synthesize=mNeedsToUpdateSlides
@property(assign, nonatomic) BOOL needsToUpdateTexts;	// G=0x30a20099; S=0x30a200a9; @synthesize=mNeedsToUpdateTexts
@property(readonly, assign, nonatomic) double phaseInDuration;	// G=0x30a200f9; @synthesize=mPhaseInDuration
@property(readonly, assign, nonatomic) double phaseOutDuration;	// G=0x30a20129; @synthesize=mPhaseOutDuration
@property(assign, nonatomic) CGSize pixelSize;	// G=0x30a2005d; S=0x30a1f1e5; @synthesize=mPixelSize
@property(readonly, assign, nonatomic) BOOL supportsDynamicExpansion;	// G=0x30a20149; 
@property(readonly, assign, nonatomic) unsigned typicalSlideBatchSize;	// G=0x30a2014d; 
+ (id)customTimingWithEffectID:(id)effectID effectAttributes:(id)attributes slideInformation:(id)information andTextInformation:(id)information4;	// 0x30a1f1dd
+ (id)defaultEffectAttributesWithEffectID:(id)effectID andSlideInformation:(id)information;	// 0x30a1f1e1
+ (BOOL)hasCustomTiming;	// 0x30a1f1d9
+ (id)retainedEffectWithEffectID:(id)effectID forEffectLayer:(id)effectLayer;	// 0x30a1ea21
+ (BOOL)supportsDynamicExpansionForEffectID:(id)effectID;	// 0x30a20141
+ (unsigned)typicalSlideBatchSizeForEffectID:(id)effectID;	// 0x30a20145
- (id)initWithEffectID:(id)effectID;	// 0x30a1ea75
- (void)_cleanup;	// 0x30a1f1b1
- (double)_computePhaseTimeForTime:(double)time;	// 0x30a1ef89
- (double)_computeTimeForPhaseTime:(double)phaseTime;	// 0x30a1f09d
- (void)_loadForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x30a20189
- (int)_maxLinesForTextElement:(id)textElement;	// 0x30a20039
- (CGSize)_maxSizeForTextElement:(id)textElement;	// 0x30a20021
- (void)_unload;	// 0x30a2018d
// declared property getter: - (id)accumulatedImage;	// 0x30a200b9
// declared property getter: - (id)attributes;	// 0x30a2004d
- (void)beginMorphingToAspectRatio:(float)aspectRatio withDuration:(double)duration;	// 0x30a1f445
- (void)cancelLoading;	// 0x30a1fa65
- (void)cleanup;	// 0x30a1ec21
- (void)dealloc;	// 0x30a1eba1
// declared property getter: - (id)effectID;	// 0x30a2003d
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x30a1f44d
- (void)endMorphing;	// 0x30a1f449
- (void)finalize;	// 0x30a1ebe1
- (unsigned)firstSlideIndexStillNeededAtTime:(double)time;	// 0x30a20151
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x30a1f451
// declared property getter: - (BOOL)isAlphaFriendly;	// 0x30a1fbf9
// declared property getter: - (BOOL)isInfinite;	// 0x30a1fc65
- (BOOL)isLoadedForTime:(double)time;	// 0x30a1f455
// declared property getter: - (BOOL)isNative3D;	// 0x30a1fb4d
// declared property getter: - (BOOL)isOpaque;	// 0x30a1fbb9
- (BOOL)isRetainedByEffectLayer;	// 0x30a1ef2d
- (void)loadForTime:(double)time inContext:(id)context withArguments:(id)arguments now:(BOOL)now;	// 0x30a1f459
- (void)loadWithArguments:(id)arguments;	// 0x30a1f73d
// declared property getter: - (double)mainDuration;	// 0x30a20111
// declared property getter: - (NSRange)multiImageSlideRange;	// 0x30a200c9
- (BOOL)needsMoreSlidesAtTime:(double)time;	// 0x30a20159
// declared property getter: - (BOOL)needsToUpdateSlides;	// 0x30a20079
// declared property getter: - (BOOL)needsToUpdateTexts;	// 0x30a20099
- (id)patchworkAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x30a1feb9
// declared property getter: - (double)phaseInDuration;	// 0x30a200f9
// declared property getter: - (double)phaseOutDuration;	// 0x30a20129
// declared property getter: - (CGSize)pixelSize;	// 0x30a2005d
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x30a1fc69
- (void)releaseByEffectLayer:(id)layer;	// 0x30a1ee51
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x30a1fd11
- (void)retainByEffectLayer:(id)layer;	// 0x30a1edc9
- (id)retainedByUserRenderedImageAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x30a1fd55
// declared property setter: - (void)setAccumulatedImage:(id)image;	// 0x30a1f3ed
// declared property setter: - (void)setAttributes:(id)attributes;	// 0x30a1f249
- (void)setLiveAttributes:(id)attributes;	// 0x30a1f3e9
// declared property setter: - (void)setMultiImageSlideRange:(NSRange)range;	// 0x30a200e5
// declared property setter: - (void)setNeedsToUpdateSlides:(BOOL)updateSlides;	// 0x30a20089
// declared property setter: - (void)setNeedsToUpdateTexts:(BOOL)updateTexts;	// 0x30a200a9
- (void)setPhaseInDuration:(double)duration mainDuration:(double)duration2 phaseOutDuration:(double)duration3;	// 0x30a1ef45
// declared property setter: - (void)setPixelSize:(CGSize)size;	// 0x30a1f1e5
// declared property getter: - (BOOL)supportsDynamicExpansion;	// 0x30a20149
// declared property getter: - (unsigned)typicalSlideBatchSize;	// 0x30a2014d
- (void)unload;	// 0x30a1f8f9
@end


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
@property(retain, nonatomic) MRImage *accumulatedImage;	// G=0x320c40b9; S=0x320c33ed; @synthesize=mAccumulatedImage
@property(retain, nonatomic) NSDictionary *attributes;	// G=0x320c404d; S=0x320c3249; @synthesize=mAttributes
@property(readonly, assign) NSString *effectID;	// G=0x320c403d; @synthesize=mEffectID
@property(readonly, assign, nonatomic) BOOL isAlphaFriendly;	// G=0x320c3bf9; 
@property(readonly, assign, nonatomic) BOOL isInfinite;	// G=0x320c3c65; 
@property(readonly, assign, nonatomic) BOOL isNative3D;	// G=0x320c3b4d; 
@property(readonly, assign, nonatomic) BOOL isOpaque;	// G=0x320c3bb9; 
@property(readonly, assign, nonatomic) double mainDuration;	// G=0x320c4111; @synthesize=mMainDuration
@property(assign, nonatomic) NSRange multiImageSlideRange;	// G=0x320c40c9; S=0x320c40e5; @synthesize=mMultiImageSlideRange
@property(assign, nonatomic) BOOL needsToUpdateSlides;	// G=0x320c4079; S=0x320c4089; @synthesize=mNeedsToUpdateSlides
@property(assign, nonatomic) BOOL needsToUpdateTexts;	// G=0x320c4099; S=0x320c40a9; @synthesize=mNeedsToUpdateTexts
@property(readonly, assign, nonatomic) double phaseInDuration;	// G=0x320c40f9; @synthesize=mPhaseInDuration
@property(readonly, assign, nonatomic) double phaseOutDuration;	// G=0x320c4129; @synthesize=mPhaseOutDuration
@property(assign, nonatomic) CGSize pixelSize;	// G=0x320c405d; S=0x320c31e5; @synthesize=mPixelSize
@property(readonly, assign, nonatomic) BOOL supportsDynamicExpansion;	// G=0x320c4149; 
@property(readonly, assign, nonatomic) unsigned typicalSlideBatchSize;	// G=0x320c414d; 
+ (id)customTimingWithEffectID:(id)effectID effectAttributes:(id)attributes slideInformation:(id)information andTextInformation:(id)information4;	// 0x320c31dd
+ (id)defaultEffectAttributesWithEffectID:(id)effectID andSlideInformation:(id)information;	// 0x320c31e1
+ (BOOL)hasCustomTiming;	// 0x320c31d9
+ (id)retainedEffectWithEffectID:(id)effectID forEffectLayer:(id)effectLayer;	// 0x320c2a21
+ (BOOL)supportsDynamicExpansionForEffectID:(id)effectID;	// 0x320c4141
+ (unsigned)typicalSlideBatchSizeForEffectID:(id)effectID;	// 0x320c4145
- (id)initWithEffectID:(id)effectID;	// 0x320c2a75
- (void)_cleanup;	// 0x320c31b1
- (double)_computePhaseTimeForTime:(double)time;	// 0x320c2f89
- (double)_computeTimeForPhaseTime:(double)phaseTime;	// 0x320c309d
- (void)_loadForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x320c4189
- (int)_maxLinesForTextElement:(id)textElement;	// 0x320c4039
- (CGSize)_maxSizeForTextElement:(id)textElement;	// 0x320c4021
- (void)_unload;	// 0x320c418d
// declared property getter: - (id)accumulatedImage;	// 0x320c40b9
// declared property getter: - (id)attributes;	// 0x320c404d
- (void)beginMorphingToAspectRatio:(float)aspectRatio withDuration:(double)duration;	// 0x320c3445
- (void)cancelLoading;	// 0x320c3a65
- (void)cleanup;	// 0x320c2c21
- (void)dealloc;	// 0x320c2ba1
// declared property getter: - (id)effectID;	// 0x320c403d
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x320c344d
- (void)endMorphing;	// 0x320c3449
- (void)finalize;	// 0x320c2be1
- (unsigned)firstSlideIndexStillNeededAtTime:(double)time;	// 0x320c4151
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x320c3451
// declared property getter: - (BOOL)isAlphaFriendly;	// 0x320c3bf9
// declared property getter: - (BOOL)isInfinite;	// 0x320c3c65
- (BOOL)isLoadedForTime:(double)time;	// 0x320c3455
// declared property getter: - (BOOL)isNative3D;	// 0x320c3b4d
// declared property getter: - (BOOL)isOpaque;	// 0x320c3bb9
- (BOOL)isRetainedByEffectLayer;	// 0x320c2f2d
- (void)loadForTime:(double)time inContext:(id)context withArguments:(id)arguments now:(BOOL)now;	// 0x320c3459
- (void)loadWithArguments:(id)arguments;	// 0x320c373d
// declared property getter: - (double)mainDuration;	// 0x320c4111
// declared property getter: - (NSRange)multiImageSlideRange;	// 0x320c40c9
- (BOOL)needsMoreSlidesAtTime:(double)time;	// 0x320c4159
// declared property getter: - (BOOL)needsToUpdateSlides;	// 0x320c4079
// declared property getter: - (BOOL)needsToUpdateTexts;	// 0x320c4099
- (id)patchworkAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x320c3eb9
// declared property getter: - (double)phaseInDuration;	// 0x320c40f9
// declared property getter: - (double)phaseOutDuration;	// 0x320c4129
// declared property getter: - (CGSize)pixelSize;	// 0x320c405d
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x320c3c69
- (void)releaseByEffectLayer:(id)layer;	// 0x320c2e51
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x320c3d11
- (void)retainByEffectLayer:(id)layer;	// 0x320c2dc9
- (id)retainedByUserRenderedImageAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x320c3d55
// declared property setter: - (void)setAccumulatedImage:(id)image;	// 0x320c33ed
// declared property setter: - (void)setAttributes:(id)attributes;	// 0x320c3249
- (void)setLiveAttributes:(id)attributes;	// 0x320c33e9
// declared property setter: - (void)setMultiImageSlideRange:(NSRange)range;	// 0x320c40e5
// declared property setter: - (void)setNeedsToUpdateSlides:(BOOL)updateSlides;	// 0x320c4089
// declared property setter: - (void)setNeedsToUpdateTexts:(BOOL)updateTexts;	// 0x320c40a9
- (void)setPhaseInDuration:(double)duration mainDuration:(double)duration2 phaseOutDuration:(double)duration3;	// 0x320c2f45
// declared property setter: - (void)setPixelSize:(CGSize)size;	// 0x320c31e5
// declared property getter: - (BOOL)supportsDynamicExpansion;	// 0x320c4149
// declared property getter: - (unsigned)typicalSlideBatchSize;	// 0x320c414d
- (void)unload;	// 0x320c38f9
@end


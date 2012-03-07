/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MRLayer.h"

@class NSMutableDictionary, MREffect, MCContainerEffect, NSDictionary, NSString, NSArray, MRImage, MRSlideProvider;

@interface MRLayerEffect : MRLayer {
	MCContainerEffect *mContainer;	// 112 = 0x70
	MREffect *mEffect;	// 116 = 0x74
	NSMutableDictionary *mSlideProvidersForElementIDs;	// 120 = 0x78
	NSArray *mSlideProviders;	// 124 = 0x7c
	NSMutableDictionary *mSlideShowTimeScripts;	// 128 = 0x80
	NSMutableDictionary *mTextsForElementIDs;	// 132 = 0x84
	NSString *mTargetedElement;	// 136 = 0x88
	NSString *mEditedElement;	// 140 = 0x8c
	float mEditedAlpha;	// 144 = 0x90
	MRImage *mAccumulatedImage;	// 148 = 0x94
	MRSlideProvider *mMultiImageModelInput;	// 152 = 0x98
	unsigned long mIndexOfFirstMultiImageInput;	// 156 = 0x9c
	NSRange mMultiImageSlideRange;	// 160 = 0xa0
	BOOL mNeedsToUpdateEffect;	// 168 = 0xa8
	BOOL mNeedsToUpdateTiming;	// 169 = 0xa9
	BOOL mNeedsToUpdateSlides;	// 170 = 0xaa
	BOOL mNeedsToUpdateTexts;	// 171 = 0xab
	BOOL mNeedsToUpdateEffectAttributes;	// 172 = 0xac
	BOOL mHasWarnedDelegateAboutNearingEnd;	// 173 = 0xad
}
@property(retain, nonatomic) MRImage *accumulatedImage;	// G=0x34367b35; S=0x3436735d; @synthesize=mAccumulatedImage
@property(assign, setter=suspendAsynchronousOperations:) BOOL asynchronousOperationsAreSuspended;	// G=0x34367acd; S=0x34367af5; 
@property(readonly, assign) MCContainerEffect *container;	// G=0x34367b65; @synthesize=mContainer
@property(copy, nonatomic) NSString *editedElement;	// G=0x34367b55; S=0x343672ed; @synthesize=mEditedElement
@property(readonly, assign) NSDictionary *slideProvidersForElementIDs;	// G=0x34367b75; @synthesize=mSlideProvidersForElementIDs
@property(copy, nonatomic) NSString *targetedElement;	// G=0x34367b45; S=0x3436727d; @synthesize=mTargetedElement
@property(readonly, assign) NSDictionary *textsForElementIDs;	// G=0x34367b85; @synthesize=mTextsForElementIDs
+ (void)initialize;	// 0x3436603d
- (id)initWithPlug:(id)plug andParameters:(id)parameters inSuperlayer:(id)superlayer;	// 0x343660b9
- (void)_cleanupProviders;	// 0x343682cd
- (id)_dumpLayerWithOptions:(unsigned)options;	// 0x34367a01
- (id)_effectAttributes;	// 0x34367b15
- (BOOL)_isNative3D;	// 0x34367581
- (int)_maxLinesForTextElement:(id)textElement;	// 0x343679a9
- (CGSize)_maxSizeForTextElement:(id)textElement;	// 0x3436792d
- (void)_observePlug;	// 0x343693a1
- (void)_observePlugOnPreactivate;	// 0x343694c5
- (void)_rebuildEffect;	// 0x34367b95
- (void)_renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x34369611
- (id)_retainedByUserRenderedImageAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3436965d
- (void)_stallRenderer;	// 0x34367aad
- (void)_unobservePlug;	// 0x34369441
- (void)_unobservePlugOnDepreactivate;	// 0x34369579
- (void)_updateEffectAttributes;	// 0x34369191
- (void)_updateSlides;	// 0x3436870d
- (void)_updateTexts;	// 0x34368f09
- (void)_updateTiming;	// 0x34368551
// declared property getter: - (id)accumulatedImage;	// 0x34367b35
- (id)actionHitAtPoint:(CGPoint)point layer:(id *)layer;	// 0x343678b9
// declared property getter: - (BOOL)asynchronousOperationsAreSuspended;	// 0x34367acd
- (void)cleanup;	// 0x34366281
// declared property getter: - (id)container;	// 0x34367b65
// declared property getter: - (id)editedElement;	// 0x34367b55
- (id)elementHitAtPoint:(CGPoint)point localPoint:(CGPoint *)point2;	// 0x34367609
- (id)elementHitAtPoint:(CGPoint)point localPoint:(CGPoint *)point2 localTime:(double *)time;	// 0x343675bd
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates forElement:(id)element;	// 0x343676c1
- (BOOL)hasAudio;	// 0x3436741d
- (BOOL)hasSomethingToRender;	// 0x34367231
- (BOOL)isAlphaFriendly;	// 0x34366bd5
- (BOOL)isLoadedForTime:(double)time;	// 0x34366989
- (BOOL)isOpaque;	// 0x34366bb1
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x343663c9
- (id)patchworkAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x34367025
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x34366bf9
- (void)resumeOrPause:(BOOL)pause;	// 0x34366689
// declared property setter: - (void)setAccumulatedImage:(id)image;	// 0x3436735d
// declared property setter: - (void)setEditedElement:(id)element;	// 0x343672ed
- (void)setPixelSize:(CGSize)size;	// 0x343670e9
// declared property setter: - (void)setTargetedElement:(id)element;	// 0x3436727d
// declared property getter: - (id)slideProvidersForElementIDs;	// 0x34367b75
- (BOOL)supportsDynamicExpansion;	// 0x343670c5
// declared property setter: - (void)suspendAsynchronousOperations:(BOOL)operations;	// 0x34367af5
- (void)synchronizeTime;	// 0x343668b5
// declared property getter: - (id)targetedElement;	// 0x34367b45
// declared property getter: - (id)textsForElementIDs;	// 0x34367b85
- (void)unload;	// 0x34366b2d
@end

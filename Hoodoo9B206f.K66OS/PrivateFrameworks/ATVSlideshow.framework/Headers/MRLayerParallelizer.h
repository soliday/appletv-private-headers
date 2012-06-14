/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MRLayer.h"
#import "ATVSlideshow-Structs.h"

@class MCContainerParallelizer, NSMutableDictionary, NSMutableArray, NSString, NSArray;

@interface MRLayerParallelizer : MRLayer {
	MCContainerParallelizer *mContainer;	// 124 = 0x7c
	NSMutableArray *mSublayers;	// 128 = 0x80
	NSMutableDictionary *mSublayersForPlugs;	// 132 = 0x84
	NSString *mCurrentPageID;	// 136 = 0x88
	CGColorRef mBackgroundColor;	// 140 = 0x8c
	BOOL mNeedsToUpdateSublayersOrdering;	// 144 = 0x90
	BOOL mNeedsToUpdateBackgroundColor;	// 145 = 0x91
}
@property(copy) NSString *currentPageID;	// G=0x30a909f5; S=0x30a90a09; @synthesize=mCurrentPageID
@property(readonly, assign) NSArray *sublayers;	// G=0x30a909e5; @synthesize=mSublayers
- (id)initWithPlug:(id)plug andParameters:(id)parameters inSuperlayer:(id)superlayer;	// 0x30a8d819
- (id)_createSublayerForPlug:(id)plug;	// 0x30a90f5d
- (id)_currentState;	// 0x30a90671
- (void)_deleteSublayer:(id)sublayer;	// 0x30a910f1
- (id)_dumpLayerWithOptions:(unsigned)options;	// 0x30a90875
- (void)_executeLayerCommandQueue;	// 0x30a90a2d
- (void)_observePlug;	// 0x30a913b9
- (void)_observePlugOnPreactivate;	// 0x30a91471
- (void)_observeSublayer:(id)sublayer;	// 0x30a91261
- (void)_observeSublayerOnPreactivate:(id)preactivate;	// 0x30a912fd
- (void)_renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x30a91681
- (id)_retainedByUserRenderedImageAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x30a91a6d
- (void)_setNeedsToRequestRebuildAudio:(BOOL)requestRebuildAudio;	// 0x30a915bd
- (BOOL)_sublayersMakesOpaque;	// 0x30a8e959
- (void)_unobservePlug;	// 0x30a91419
- (void)_unobservePlugOnDepreactivate;	// 0x30a91525
- (void)_unobserveSublayer:(id)sublayer;	// 0x30a912a5
- (void)_unobserveSublayerOnDepreactivate:(id)depreactivate;	// 0x30a91365
- (void)_updateSublayersOrdering;	// 0x30a90e95
- (id)actionForKey:(id)key recursive:(BOOL)recursive;	// 0x30a9016d
- (id)actionHitAtPoint:(CGPoint)point layer:(id *)layer;	// 0x30a8fd81
- (void)beginMorphingToAspectRatio:(float)aspectRatio withDuration:(double)duration;	// 0x30a8e3b1
- (void)cleanup;	// 0x30a8d989
// declared property getter: - (id)currentPageID;	// 0x30a909f5
- (void)deactivate;	// 0x30a8e621
- (void)depreactivate:(BOOL)depreactivate;	// 0x30a8e705
- (void)endMorphing;	// 0x30a8e521
- (BOOL)hasAudio;	// 0x30a8f545
- (BOOL)hasSomethingToRender;	// 0x30a8e1dd
- (BOOL)isAlphaFriendly;	// 0x30a8ec11
- (BOOL)isInfinite;	// 0x30a8ec89
- (BOOL)isLoadedForTime:(double)time;	// 0x30a8e801
- (BOOL)isOpaque;	// 0x30a8ebcd
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x30a8dbfd
- (id)patchworkAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x30a8f389
- (double)phaseInSublayerForID:(id)anId;	// 0x30a90401
- (double)phaseOutSublayerForID:(id)anId;	// 0x30a90569
- (void)preactivate;	// 0x30a8e5e1
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x30a8ecc1
// declared property setter: - (void)setCurrentPageID:(id)anId;	// 0x30a90a09
- (void)setNeedsUpdateForPluggerOfSublayer:(id)sublayer;	// 0x30a8f47d
- (void)setPixelSize:(CGSize)size;	// 0x30a8e021
- (id)sublayerForID:(id)anId;	// 0x30a8f63d
- (id)sublayerForPlugObjectID:(id)plugObjectID recursive:(BOOL)recursive;	// 0x30a8f775
- (id)sublayerHitAtPoint:(CGPoint)point onlyIfHitElement:(BOOL)element localPoint:(CGPoint *)point3;	// 0x30a8f959
// declared property getter: - (id)sublayers;	// 0x30a909e5
- (void)synchronizeTime;	// 0x30a8e2d9
@end


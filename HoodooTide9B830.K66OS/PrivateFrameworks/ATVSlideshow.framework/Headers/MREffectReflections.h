/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class NSMutableDictionary, MRReflectionsRenderable, MRImageProvider;

@interface MREffectReflections : MREffect {
	NSMutableDictionary *mSprites;	// 112 = 0x70
	BOOL mSpeedUpRight;	// 116 = 0x74
	BOOL mIsLoaded;	// 117 = 0x75
	NSMutableDictionary *mLayoutInfo;	// 120 = 0x78
	int mTilt;	// 124 = 0x7c
	int mPhaseOutType;	// 128 = 0x80
	int mDirection;	// 132 = 0x84
	int mLayout;	// 136 = 0x88
	int mAspect;	// 140 = 0x8c
	MRImageProvider *mGroundShadowCenterProvider;	// 144 = 0x90
	MRImageProvider *mGroundShadowLeftProvider;	// 148 = 0x94
	MRImageProvider *mGroundShadowRightProvider;	// 152 = 0x98
	MRReflectionsRenderable *mHead;	// 156 = 0x9c
	MRReflectionsRenderable *mTail;	// 160 = 0xa0
}
+ (void)initialize;	// 0x320f4369
- (id)initWithEffectID:(id)effectID;	// 0x320f4d0d
- (void)_applySizeScripts:(float)scripts;	// 0x320f5705
- (void)_cleanup;	// 0x320f4fe9
- (float)_tXForTime:(double)time layout:(id)layout;	// 0x320f638d
- (void)_unload;	// 0x320f7751
- (float)_yOffsetForTime:(double)time layout:(id)layout size:(CGSize)size position:(CGPoint)position aspectRatio:(float)ratio;	// 0x320f64cd
- (float)_yRotationForTime:(double)time layout:(id)layout;	// 0x320f6145
- (void)beginMorphingToAspectRatio:(float)aspectRatio withDuration:(double)duration;	// 0x320f76a1
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x320f6935
- (void)endMorphing;	// 0x320f7701
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x320f6a65
- (BOOL)isLoadedForTime:(double)time;	// 0x320f514d
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x320f51b5
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x320f5951
- (void)renderKey:(id)key size:(CGSize)size position:(CGPoint)position yRot:(float)rot tX:(float)x time:(double)time inContext:(id)context withArguments:(id)arguments flipped:(BOOL)flipped shadow:(BOOL)shadow;	// 0x320f661d
- (void)renderStuffAtTime:(double)time alpha:(float)alpha inContext:(id)context withArguments:(id)arguments;	// 0x320f6aad
- (void)setPixelSize:(CGSize)size;	// 0x320f50b5
@end

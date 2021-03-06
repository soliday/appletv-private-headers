/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class NSMutableDictionary, MRImageProvider;

@interface MREffectScrapbook_Old : MREffect {
	MRImageProvider *mImageProviders[7];	// 112 = 0x70
	MRImageProvider *mBackgroundImageProvider;	// 140 = 0x8c
	NSMutableDictionary *mSprites;	// 144 = 0x90
	unsigned mNumberOfVertices;	// 148 = 0x94
	float *mMeshVertices;	// 152 = 0x98
	float *mMeshTextureVertices;	// 156 = 0x9c
	float mLocalTranslationX;	// 160 = 0xa0
	float mLocalTranslationY;	// 164 = 0xa4
	float mZoomScale;	// 168 = 0xa8
	double mPhaseTime;	// 172 = 0xac
}
+ (void)initialize;	// 0x30a5746d
+ (void)renderDumbImage:(id)image inContext:(id)context atPosition:(CGPoint)position andSize:(CGSize)size zRotation:(float)rotation withBorderRect:(CGRect)borderRect;	// 0x30a62bb9
+ (void)renderImage:(id)image withFrame:(id)frame andMask:(id)mask usingSprite:(id)sprite inContext:(id)context;	// 0x30a6286d
- (id)initWithEffectID:(id)effectID;	// 0x30a57515
- (void)_cleanup;	// 0x30a5aecd
- (void)_unload;	// 0x30a627f5
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x30a5b429
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x30a5b5d1
- (BOOL)isAlphaFriendly;	// 0x30a5b025
- (BOOL)isOpaque;	// 0x30a5b021
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x30a5b029
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x30a5b0dd
- (void)renderBackgroundAtTime:(double)time inContext:(id)context withArguments:(id)arguments subtractingSprites:(id)sprites withTranslation:(CGPoint)translation andScale:(float)scale;	// 0x30a5b6ad
- (void)renderEffect10AtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x30a62121
- (void)renderEffect1AtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x30a5bc1d
- (void)renderEffect2AtTime:(double)time movieVersion:(BOOL)version inContext:(id)context withArguments:(id)arguments;	// 0x30a5c755
- (void)renderEffect3AtTime:(double)time movieVersion:(BOOL)version inContext:(id)context withArguments:(id)arguments;	// 0x30a5d325
- (void)renderEffect4AtTime:(double)time movieVersion:(BOOL)version inContext:(id)context withArguments:(id)arguments;	// 0x30a5e311
- (void)renderEffect5AtTime:(double)time movieVersion:(BOOL)version inContext:(id)context withArguments:(id)arguments;	// 0x30a5f2bd
- (void)renderEffect6AtTime:(double)time movieVersion:(BOOL)version inContext:(id)context withArguments:(id)arguments;	// 0x30a5fff5
- (void)renderEffect7AtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x30a60961
- (void)renderEffect8AtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x30a613a1
- (void)renderEffect9AtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x30a617bd
- (void)setPixelSize:(CGSize)size;	// 0x30a5af75
@end


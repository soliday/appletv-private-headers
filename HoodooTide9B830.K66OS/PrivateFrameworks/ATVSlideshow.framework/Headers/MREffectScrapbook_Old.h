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
+ (void)initialize;	// 0x320fb46d
+ (void)renderDumbImage:(id)image inContext:(id)context atPosition:(CGPoint)position andSize:(CGSize)size zRotation:(float)rotation withBorderRect:(CGRect)borderRect;	// 0x32106bb9
+ (void)renderImage:(id)image withFrame:(id)frame andMask:(id)mask usingSprite:(id)sprite inContext:(id)context;	// 0x3210686d
- (id)initWithEffectID:(id)effectID;	// 0x320fb515
- (void)_cleanup;	// 0x320feecd
- (void)_unload;	// 0x321067f5
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x320ff429
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x320ff5d1
- (BOOL)isAlphaFriendly;	// 0x320ff025
- (BOOL)isOpaque;	// 0x320ff021
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x320ff029
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x320ff0dd
- (void)renderBackgroundAtTime:(double)time inContext:(id)context withArguments:(id)arguments subtractingSprites:(id)sprites withTranslation:(CGPoint)translation andScale:(float)scale;	// 0x320ff6ad
- (void)renderEffect10AtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x32106121
- (void)renderEffect1AtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x320ffc1d
- (void)renderEffect2AtTime:(double)time movieVersion:(BOOL)version inContext:(id)context withArguments:(id)arguments;	// 0x32100755
- (void)renderEffect3AtTime:(double)time movieVersion:(BOOL)version inContext:(id)context withArguments:(id)arguments;	// 0x32101325
- (void)renderEffect4AtTime:(double)time movieVersion:(BOOL)version inContext:(id)context withArguments:(id)arguments;	// 0x32102311
- (void)renderEffect5AtTime:(double)time movieVersion:(BOOL)version inContext:(id)context withArguments:(id)arguments;	// 0x321032bd
- (void)renderEffect6AtTime:(double)time movieVersion:(BOOL)version inContext:(id)context withArguments:(id)arguments;	// 0x32103ff5
- (void)renderEffect7AtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x32104961
- (void)renderEffect8AtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x321053a1
- (void)renderEffect9AtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x321057bd
- (void)setPixelSize:(CGSize)size;	// 0x320fef75
@end


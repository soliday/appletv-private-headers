/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class MRCroppingSprite, MRTextRenderer, MRImage;

@interface MREffectFramedText : MREffect {
	MRTextRenderer *mTextRenderer;	// 112 = 0x70
	MRCroppingSprite *mSprite;	// 116 = 0x74
	MRCroppingSprite *mTextSprite;	// 120 = 0x78
	MRImage *mTextImage;	// 124 = 0x7c
	CGRect mTextRect;	// 128 = 0x80
	CGRect mInnerFrameRect;	// 144 = 0x90
	float mYPosition;	// 160 = 0xa0
	float mScrollY;	// 164 = 0xa4
	double mFrameTime;	// 168 = 0xa8
	double mHitOffFrameTime;	// 176 = 0xb0
	float mVelocity;	// 184 = 0xb8
	BOOL mTextWasUpdatedSinceLastRendering;	// 188 = 0xbc
	BOOL mLiveAttributesWereUpdatedSinceLastRendering;	// 189 = 0xbd
	BOOL mHasTextRect;	// 190 = 0xbe
	BOOL mIsHit;	// 191 = 0xbf
}
+ (void)initialize;	// 0x321f849d
- (id)init;	// 0x321f85a5
- (void)_cleanup;	// 0x321f860d
- (void)_loadForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x321f95f1
- (int)_maxLinesForTextElement:(id)textElement;	// 0x321f9ae1
- (CGSize)_maxSizeForTextElement:(id)textElement;	// 0x321f9a11
- (void)_unload;	// 0x321f9b51
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x321f953d
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x321f958d
- (BOOL)isLoadedForTime:(double)time;	// 0x321f8a09
- (BOOL)isNative3D;	// 0x321f8a8d
- (BOOL)isOpaque;	// 0x321f8a91
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x321f8a95
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x321f8afd
- (void)setAttributes:(id)attributes;	// 0x321f8699
- (void)setLiveAttributes:(id)attributes;	// 0x321f8959
@end


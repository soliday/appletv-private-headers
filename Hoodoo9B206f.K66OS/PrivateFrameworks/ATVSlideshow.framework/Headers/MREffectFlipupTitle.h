/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class NSMutableDictionary, MRImageProvider, NSMutableArray, MRTextRenderer;

@interface MREffectFlipupTitle : MREffect {
	NSMutableDictionary *mSprites;	// 112 = 0x70
	BOOL mFlipped;	// 116 = 0x74
	MRTextRenderer *mTextRenderer;	// 120 = 0x78
	MRTextRenderer *mWordRenderer;	// 124 = 0x7c
	NSMutableArray *mWordImages;	// 128 = 0x80
	NSMutableArray *mWordFrames;	// 132 = 0x84
	NSMutableArray *mCachedRenderedWords;	// 136 = 0x88
	float mTextYOffset;	// 140 = 0x8c
	CGSize mTextSize;	// 144 = 0x90
	CGSize mTextImageSize;	// 152 = 0x98
	MRImageProvider *mMaskProvider;	// 160 = 0xa0
}
- (id)initWithEffectID:(id)effectID;	// 0x30b3aa01
- (void)_cleanup;	// 0x30b3ab91
- (void)_loadForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x30b3bbc1
- (int)_maxLinesForTextElement:(id)textElement;	// 0x30b3ae1d
- (CGSize)_maxSizeForTextElement:(id)textElement;	// 0x30b3adf5
- (void)_unload;	// 0x30b3c211
- (void)cacheRenderedWords;	// 0x30b3c001
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x30b3ba49
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x30b3bb79
- (BOOL)isLoadedForTime:(double)time;	// 0x30b3ae21
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x30b3ad89
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x30b3aec5
- (void)renderTextAtTime:(double)time inContext:(id)context withArguments:(id)arguments scale:(float)scale;	// 0x30b3b21d
- (void)setPixelSize:(CGSize)size;	// 0x30b3ad31
@end


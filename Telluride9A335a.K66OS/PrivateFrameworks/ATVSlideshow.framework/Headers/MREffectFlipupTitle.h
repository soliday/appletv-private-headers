/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MREffect.h"
#import "ATVSlideshow-Structs.h"

@class NSMutableDictionary, NSMutableArray, MRTextRenderer, MRImageProvider;

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
- (id)initWithEffectID:(id)effectID;	// 0x31bf7739
- (void)_cleanup;	// 0x31bf78c9
- (void)_loadForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x31bf88b5
- (int)_maxLinesForTextElement:(id)textElement;	// 0x31bf7b55
- (CGSize)_maxSizeForTextElement:(id)textElement;	// 0x31bf7b2d
- (void)_unload;	// 0x31bf8e91
- (void)cacheRenderedWords;	// 0x31bf8c81
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x31bf873d
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x31bf886d
- (BOOL)isLoadedForTime:(double)time;	// 0x31bf7b59
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x31bf7ac1
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x31bf7bfd
- (void)renderTextAtTime:(double)time inContext:(id)context withArguments:(id)arguments scale:(float)scale;	// 0x31bf7f4d
- (void)setPixelSize:(CGSize)size;	// 0x31bf7a69
@end


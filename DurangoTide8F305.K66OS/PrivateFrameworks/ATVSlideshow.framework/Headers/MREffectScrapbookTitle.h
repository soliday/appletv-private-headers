/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class MRImage, MRTextRenderer, MRImageProvider, NSMutableDictionary;

@interface MREffectScrapbookTitle : MREffect {
	MRImageProvider *mImageProviders[5];	// 112 = 0x70
	NSMutableDictionary *mSprites;	// 132 = 0x84
	MRTextRenderer *mTextRenderer0;	// 136 = 0x88
	MRImage *mTextImage0;	// 140 = 0x8c
	float mLocalTranslationX;	// 144 = 0x90
	float mLocalTranslationY;	// 148 = 0x94
}
- (id)initWithEffectID:(id)effectID;	// 0x332bd319
- (void)_cleanup;	// 0x332be2c1
- (void)_loadForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x332be92d
- (int)_maxLinesForTextElement:(id)textElement;	// 0x332becdd
- (CGSize)_maxSizeForTextElement:(id)textElement;	// 0x332bec49
- (void)_unload;	// 0x332bece1
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x332be3d5
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x332be605
- (BOOL)isLoadedForTime:(double)time;	// 0x332be72d
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x332be79d
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x332be81d
- (void)renderDumbImage:(id)image inContext:(id)context atPosition:(CGPoint)position andSize:(CGSize)size withBorderRect:(CGRect)borderRect;	// 0x332c0e2d
- (void)renderEffectTitle2AtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x332bfd55
- (void)renderEffectTitleAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x332bed9d
- (void)renderImage:(id)image forKey:(id)key withFrame:(id)frame andMask:(id)mask inContext:(id)context atPosition:(CGPoint)position andSize:(CGSize)size withInnerCenteredRect:(CGRect)innerCenteredRect;	// 0x332c0b49
- (void)setPixelSize:(CGSize)size;	// 0x332be31d
@end


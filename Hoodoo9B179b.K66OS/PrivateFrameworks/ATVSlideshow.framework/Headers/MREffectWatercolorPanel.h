/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class NSMutableDictionary, MRCroppingSprite, MRTextRenderer, MRImage;

@interface MREffectWatercolorPanel : MREffect {
	NSMutableDictionary *mSprites;	// 112 = 0x70
	MRTextRenderer *mTextRenderer;	// 116 = 0x74
	MRImage *mTextImage;	// 120 = 0x78
	MRCroppingSprite *mTextSprite;	// 124 = 0x7c
}
- (id)initWithEffectID:(id)effectID;	// 0x3552a5a9
- (void)_cleanup;	// 0x3552a615
- (void)_loadForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3552bea9
- (int)_maxLinesForTextElement:(id)textElement;	// 0x3552bea5
- (CGSize)_maxSizeForTextElement:(id)textElement;	// 0x3552be71
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x3552bc69
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x3552bddd
- (BOOL)isLoadedForTime:(double)time;	// 0x3552a641
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3552a6c5
- (void)renderEffect2AtTime:(double)time isSquare:(BOOL)square inContext:(id)context withArguments:(id)arguments;	// 0x3552a7dd
- (void)renderEffect3AtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3552b08d
- (void)renderEffectSubtitleAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3552b59d
@end


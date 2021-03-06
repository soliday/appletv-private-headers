/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import <NSObject.h> // Unknown library


@interface MRTextRenderer : NSObject {
	CFAttributedStringRef _text;	// 4 = 0x4
	CFAttributedStringRef _cachedText;	// 8 = 0x8
	CFAttributedStringRef _placeholderText;	// 12 = 0xc
	CGSize _maxSize;	// 16 = 0x10
	CGSize _resolution;	// 24 = 0x18
	int _maxNumberOfLines;	// 32 = 0x20
	int _lastGlyphIndex;	// 36 = 0x24
	BOOL _truncate;	// 40 = 0x28
	BOOL _renderAtMaxSize;	// 41 = 0x29
	float _lineSpacingFactor;	// 44 = 0x2c
}
@property(assign, nonatomic) float lineSpacingFactor;	// G=0x33d9072d; S=0x33d9073d; @synthesize=_lineSpacingFactor
@property(assign, nonatomic) int maxNumberOfLines;	// G=0x33d9069d; S=0x33d906ad; @synthesize=_maxNumberOfLines
@property(assign, nonatomic) CGSize maxSize;	// G=0x33d906dd; S=0x33d906f5; @synthesize=_maxSize
@property(assign, nonatomic) CFAttributedStringRef placeholderText;	// G=0x33d90675; S=0x33d8d879; @synthesize=_placeholderText
@property(assign, nonatomic) BOOL renderAtMaxSize;	// G=0x33d9070d; S=0x33d9071d; @synthesize=_renderAtMaxSize
@property(assign, nonatomic) CGSize resolution;	// G=0x33d90685; S=0x33d8d98d; @synthesize=_resolution
@property(assign, nonatomic) CFAttributedStringRef text;	// G=0x33d8d841; S=0x33d8d91d; @synthesize=_text
@property(assign, nonatomic) BOOL truncate;	// G=0x33d906bd; S=0x33d906cd; @synthesize=_truncate
- (id)init;	// 0x33d8d679
- (id)initWithText:(CFAttributedStringRef)text resolution:(CGSize)resolution;	// 0x33d8d711
- (void)_drawInContext:(CGContextRef)context withAttributedString:(CFAttributedStringRef)attributedString withSize:(CGSize)size;	// 0x33d8df3d
- (int)_numberOfLinesInString:(CFAttributedStringRef)string;	// 0x33d8fd45
- (CGContextRef)_retainedContextFromAttributedString:(CFAttributedStringRef)attributedString withSize:(CGSize)size;	// 0x33d8de8d
- (CGSize)_shadowSizeOffsetForString:(CFAttributedStringRef)string;	// 0x33d90085
- (CGSize)_sizeOfString:(CFAttributedStringRef)string ignoreResolution:(BOOL)resolution;	// 0x33d8f895
- (CGSize)_sizeToRendererAt;	// 0x33d8db05
- (CFAttributedStringRef)_truncateTextToFitInSize:(CGSize)size fromCenter:(BOOL)center outSize:(CGSize *)size3;	// 0x33d90259
- (void)cleanup;	// 0x33d8d7f1
- (int)countOfGlyphs;	// 0x33d8ec31
- (int)countOfWords;	// 0x33d8e1f5
- (void)dealloc;	// 0x33d8d771
- (void)finalize;	// 0x33d8d7b1
- (CGRect)frameOfLineWithGlyphAtIndex:(int)index range:(NSRange *)range;	// 0x33d8f439
- (int)glyphIndexForStringIndex:(int)stringIndex;	// 0x33d8f015
// declared property getter: - (float)lineSpacingFactor;	// 0x33d9072d
// declared property getter: - (int)maxNumberOfLines;	// 0x33d9069d
// declared property getter: - (CGSize)maxSize;	// 0x33d906dd
- (int)numberOfLines;	// 0x33d8fcc5
- (int)numberOfLinesForTruncatedText;	// 0x33d8fced
- (CGPoint)originOfGlyphAtIndex:(int)index;	// 0x33d8f201
- (CGPoint)originOfWordAtIndex:(int)index;	// 0x33d8ea21
// declared property getter: - (CFAttributedStringRef)placeholderText;	// 0x33d90675
- (XXStruct_K5nmsA)rangeOfGlyphsOnLine:(int)glyphsOnLine;	// 0x33d8e67d
- (XXStruct_K5nmsA)rangeOfStringForGlyphIndex:(int)glyphIndex;	// 0x33d8ee05
- (XXStruct_K5nmsA)rangeOfWordsOnLine:(int)wordsOnLine;	// 0x33d8e355
// declared property getter: - (BOOL)renderAtMaxSize;	// 0x33d9070d
// declared property getter: - (CGSize)resolution;	// 0x33d90685
- (CGContextRef)retainedContext;	// 0x33d8d9c5
- (CGContextRef)retainedContextOfGlyphAtIndex:(int)index;	// 0x33d8ed41
- (CGContextRef)retainedContextOfWordsInRange:(XXStruct_K5nmsA)range;	// 0x33d8e7cd
// declared property setter: - (void)setLineSpacingFactor:(float)factor;	// 0x33d9073d
// declared property setter: - (void)setMaxNumberOfLines:(int)lines;	// 0x33d906ad
// declared property setter: - (void)setMaxSize:(CGSize)size;	// 0x33d906f5
// declared property setter: - (void)setPlaceholderText:(CFAttributedStringRef)text;	// 0x33d8d879
// declared property setter: - (void)setRenderAtMaxSize:(BOOL)maxSize;	// 0x33d9071d
// declared property setter: - (void)setResolution:(CGSize)resolution;	// 0x33d8d98d
// declared property setter: - (void)setText:(CFAttributedStringRef)text;	// 0x33d8d91d
// declared property setter: - (void)setTruncate:(BOOL)truncate;	// 0x33d906cd
- (CGSize)shadowOffset;	// 0x33d8fead
- (CGSize)sizeOfText;	// 0x33d8da85
- (void)squeezeWidthForLineCount:(int)lineCount;	// 0x33d901e9
// declared property getter: - (CFAttributedStringRef)text;	// 0x33d8d841
- (CGRect)tightFrameOfAllLines;	// 0x33d8db61
- (CGRect)tightFrameOfLineAtIndex:(int)index;	// 0x33d8dc51
- (void)trimWhitespace;	// 0x33d90595
// declared property getter: - (BOOL)truncate;	// 0x33d906bd
@end


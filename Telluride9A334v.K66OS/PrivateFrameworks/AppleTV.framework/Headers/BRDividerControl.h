/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSAttributedString;

@interface BRDividerControl : BRControl {
@private
	NSAttributedString *_label;	// 48 = 0x30
	float _brightness;	// 52 = 0x34
	float _alignmentFactor;	// 56 = 0x38
	float _lineThickness;	// 60 = 0x3c
	float _startOffset;	// 64 = 0x40
	float _endOffset;	// 68 = 0x44
	BOOL _drawsLine;	// 72 = 0x48
	float _startOffsetText;	// 76 = 0x4c
	int _dividerOrientation;	// 80 = 0x50
	int _dividerHeightStyle;	// 84 = 0x54
}
@property(assign) float brightness;	// G=0x33200391; S=0x33200381; converted property
@property(assign) int dividerHeightStyle;	// G=0x3320047d; S=0x3320045d; converted property
@property(assign) int dividerOrientation;	// G=0x3320044d; S=0x3320040d; converted property
@property(assign) BOOL drawsLine;	// G=0x332003b1; S=0x332003a1; converted property
@property(retain) NSAttributedString *label;	// G=0x331ffcf9; S=0x331ffc15; converted property
- (id)init;	// 0x331ffae5
- (id)accessibilityLabel;	// 0x3320048d
// converted property getter: - (float)brightness;	// 0x33200391
- (void)dealloc;	// 0x331ffbc9
// converted property getter: - (int)dividerHeightStyle;	// 0x3320047d
// converted property getter: - (int)dividerOrientation;	// 0x3320044d
- (void)drawInContext:(CGContextRef)context;	// 0x331fff29
// converted property getter: - (BOOL)drawsLine;	// 0x332003b1
- (BOOL)isAccessibilityElement;	// 0x332004dd
// converted property getter: - (id)label;	// 0x331ffcf9
- (float)recommendedHeight;	// 0x331ffe81
- (float)recommendedWidth;	// 0x331fff1d
- (void)setAlignmentFactor:(float)factor;	// 0x331ffd19
// converted property setter: - (void)setBrightness:(float)brightness;	// 0x33200381
// converted property setter: - (void)setDividerHeightStyle:(int)style;	// 0x3320045d
// converted property setter: - (void)setDividerOrientation:(int)orientation;	// 0x3320040d
// converted property setter: - (void)setDrawsLine:(BOOL)line;	// 0x332003a1
- (void)setEndOffset:(float)offset;	// 0x331ffdb1
// converted property setter: - (void)setLabel:(id)label;	// 0x331ffc15
- (void)setLabel:(id)label withAttributes:(id)attributes;	// 0x331ffc65
- (void)setLineThickness:(float)thickness;	// 0x331ffdfd
- (void)setStartOffset:(float)offset;	// 0x331ffd65
- (void)setStartOffsetText:(float)text;	// 0x332003c1
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x331ffe31
@end


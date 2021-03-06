/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class NSAttributedString;

@interface BRDividerControl : BRControl {
@private
	NSAttributedString *_label;	// 44 = 0x2c
	float _brightness;	// 48 = 0x30
	float _alignmentFactor;	// 52 = 0x34
	float _lineThickness;	// 56 = 0x38
	float _startOffset;	// 60 = 0x3c
	float _endOffset;	// 64 = 0x40
	BOOL _drawsLine;	// 68 = 0x44
	float _startOffsetText;	// 72 = 0x48
	int _dividerOrientation;	// 76 = 0x4c
	int _dividerHeightStyle;	// 80 = 0x50
}
@property(assign) float brightness;	// G=0x3296ce31; S=0x3296ce21; converted property
@property(assign) int dividerHeightStyle;	// G=0x3296ce71; S=0x3296cea5; converted property
@property(assign) int dividerOrientation;	// G=0x3296ce61; S=0x3296cec5; converted property
@property(assign) BOOL drawsLine;	// G=0x3296ce51; S=0x3296ce41; converted property
- (id)init;	// 0x32922965
- (id)accessibilityLabel;	// 0x3296ce85
// converted property getter: - (float)brightness;	// 0x3296ce31
- (void)dealloc;	// 0x3292b6e1
// converted property getter: - (int)dividerHeightStyle;	// 0x3296ce71
// converted property getter: - (int)dividerOrientation;	// 0x3296ce61
- (void)drawInContext:(CGContextRef)context;	// 0x3292411d
// converted property getter: - (BOOL)drawsLine;	// 0x3296ce51
- (BOOL)isAccessibilityElement;	// 0x3296ce81
- (float)recommendedHeight;	// 0x329235b5
- (float)recommendedWidth;	// 0x3296ce19
- (void)setAlignmentFactor:(float)factor;	// 0x3296d085
// converted property setter: - (void)setBrightness:(float)brightness;	// 0x3296ce21
// converted property setter: - (void)setDividerHeightStyle:(int)style;	// 0x3296cea5
// converted property setter: - (void)setDividerOrientation:(int)orientation;	// 0x3296cec5
// converted property setter: - (void)setDrawsLine:(BOOL)line;	// 0x3296ce41
- (void)setEndOffset:(float)offset;	// 0x3296cfdd
- (void)setLabel:(id)label;	// 0x32922a41
- (void)setLabel:(id)label withAttributes:(id)attributes;	// 0x3296d0d9
- (void)setLineThickness:(float)thickness;	// 0x3296cfa1
- (void)setStartOffset:(float)offset;	// 0x3296d031
- (void)setStartOffsetText:(float)text;	// 0x3296cefd
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3296cf51
@end


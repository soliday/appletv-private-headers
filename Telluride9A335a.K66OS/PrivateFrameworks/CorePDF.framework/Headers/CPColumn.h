/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import "CPRegion.h"


@interface CPColumn : CPRegion {
	BOOL hasCentredParagraph;	// 68 = 0x44
	BOOL hasColumnBreak;	// 69 = 0x45
	float maxLeftPad;	// 72 = 0x48
	float maxRightPad;	// 76 = 0x4c
	float maxRight;	// 80 = 0x50
	float minLeft;	// 84 = 0x54
	BOOL complete;	// 88 = 0x58
}
@property(assign) BOOL complete;	// G=0x31236485; S=0x31236495; @synthesize
@property(assign) BOOL hasCentredParagraph;	// G=0x31236445; S=0x31236455; converted property
@property(assign) BOOL isImageRegion;	// G=0x3123643d; S=0x31236835; converted property
@property(assign) float maxLeftPad;	// G=0x31236465; S=0x312366dd; converted property
@property(assign) float maxRightPad;	// G=0x31236475; S=0x3123666d; converted property
- (id)init;	// 0x312364a5
- (void)accept:(id)accept;	// 0x312368bd
- (float)bottomBaseline;	// 0x312367c5
- (CGRect)columnBounds;	// 0x3123681d
// declared property getter: - (BOOL)complete;	// 0x31236485
- (id)copyWithZone:(NSZone *)zone;	// 0x312368d5
- (void)dealloc;	// 0x31236901
- (id)description;	// 0x3123653d
// converted property getter: - (BOOL)hasCentredParagraph;	// 0x31236445
- (int)inOrder;	// 0x312580ad
- (BOOL)isBoxRegion;	// 0x31236431
- (BOOL)isGraphicalRegion;	// 0x31236435
// converted property getter: - (BOOL)isImageRegion;	// 0x3123643d
- (BOOL)isRowRegion;	// 0x31236439
- (BOOL)isShapeRegion;	// 0x31236441
- (float)leftPad;	// 0x312367a1
// converted property getter: - (float)maxLeftPad;	// 0x31236465
// converted property getter: - (float)maxRightPad;	// 0x31236475
- (int)outOrder;	// 0x31258075
- (CGRect)paddedBounds;	// 0x312365e1
- (float)rightPad;	// 0x31236745
- (float)selectionBottom;	// 0x31236591
// declared property setter: - (void)setComplete:(BOOL)complete;	// 0x31236495
// converted property setter: - (void)setHasCentredParagraph:(BOOL)paragraph;	// 0x31236455
- (void)setHasColumnBreak:(BOOL)aBreak;	// 0x31236421
// converted property setter: - (void)setIsImageRegion:(BOOL)region;	// 0x31236835
// converted property setter: - (void)setMaxLeftPad:(float)pad;	// 0x312366dd
// converted property setter: - (void)setMaxRightPad:(float)pad;	// 0x3123666d
@end


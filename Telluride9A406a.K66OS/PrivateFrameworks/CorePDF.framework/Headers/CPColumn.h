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
@property(assign) BOOL complete;	// G=0x304c9485; S=0x304c9495; @synthesize
@property(assign) BOOL hasCentredParagraph;	// G=0x304c9445; S=0x304c9455; converted property
@property(assign) BOOL isImageRegion;	// G=0x304c943d; S=0x304c9835; converted property
@property(assign) float maxLeftPad;	// G=0x304c9465; S=0x304c96dd; converted property
@property(assign) float maxRightPad;	// G=0x304c9475; S=0x304c966d; converted property
- (id)init;	// 0x304c94a5
- (void)accept:(id)accept;	// 0x304c98bd
- (float)bottomBaseline;	// 0x304c97c5
- (CGRect)columnBounds;	// 0x304c981d
// declared property getter: - (BOOL)complete;	// 0x304c9485
- (id)copyWithZone:(NSZone *)zone;	// 0x304c98d5
- (void)dealloc;	// 0x304c9901
- (id)description;	// 0x304c953d
// converted property getter: - (BOOL)hasCentredParagraph;	// 0x304c9445
- (int)inOrder;	// 0x304eb0ad
- (BOOL)isBoxRegion;	// 0x304c9431
- (BOOL)isGraphicalRegion;	// 0x304c9435
// converted property getter: - (BOOL)isImageRegion;	// 0x304c943d
- (BOOL)isRowRegion;	// 0x304c9439
- (BOOL)isShapeRegion;	// 0x304c9441
- (float)leftPad;	// 0x304c97a1
// converted property getter: - (float)maxLeftPad;	// 0x304c9465
// converted property getter: - (float)maxRightPad;	// 0x304c9475
- (int)outOrder;	// 0x304eb075
- (CGRect)paddedBounds;	// 0x304c95e1
- (float)rightPad;	// 0x304c9745
- (float)selectionBottom;	// 0x304c9591
// declared property setter: - (void)setComplete:(BOOL)complete;	// 0x304c9495
// converted property setter: - (void)setHasCentredParagraph:(BOOL)paragraph;	// 0x304c9455
- (void)setHasColumnBreak:(BOOL)aBreak;	// 0x304c9421
// converted property setter: - (void)setIsImageRegion:(BOOL)region;	// 0x304c9835
// converted property setter: - (void)setMaxLeftPad:(float)pad;	// 0x304c96dd
// converted property setter: - (void)setMaxRightPad:(float)pad;	// 0x304c966d
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <NSObject.h> // Unknown library
#import "CorePDF-Structs.h"

@class NSMutableArray, CPParagraph;

@interface CPParagraphFlow : NSObject {
	CPParagraph *paragraph;	// 4 = 0x4
	float fLeft;	// 8 = 0x8
	float fRight;	// 12 = 0xc
	float fTop;	// 16 = 0x10
	float fBottom;	// 20 = 0x14
	NSMutableArray *paragraphsAbove;	// 24 = 0x18
	NSMutableArray *paragraphsBelow;	// 28 = 0x1c
	NSMutableArray *paragraphsLeft;	// 32 = 0x20
	NSMutableArray *paragraphsRight;	// 36 = 0x24
	BOOL placed;	// 40 = 0x28
	BOOL adjacentToCallout;	// 41 = 0x29
	int calloutType;	// 44 = 0x2c
	CPParagraph *nextInColumn;	// 48 = 0x30
}
@property(assign) int calloutType;	// G=0x32631001; S=0x32631011; @synthesize
@property(assign) float fBottom;	// G=0x32631041; S=0x32631051; @synthesize
@property(assign) float fLeft;	// G=0x32631081; S=0x32631091; @synthesize
@property(assign) float fRight;	// G=0x32631061; S=0x32631071; @synthesize
@property(assign, nonatomic) CPParagraph *nextInColumn;	// G=0x32630fe1; S=0x32630ff1; @synthesize
@property(retain, nonatomic) CPParagraph *paragraph;	// G=0x326310a1; S=0x32631165; @synthesize
@property(readonly, retain) NSMutableArray *paragraphsAbove;	// G=0x32630f9d; converted property
@property(readonly, retain) NSMutableArray *paragraphsBelow;	// G=0x32630fad; converted property
@property(readonly, retain) NSMutableArray *paragraphsLeft;	// G=0x32630fbd; converted property
@property(readonly, retain) NSMutableArray *paragraphsRight;	// G=0x32630fcd; converted property
@property(assign) BOOL placed;	// G=0x32631021; S=0x32631031; @synthesize
- (id)initWithParagraph:(id)paragraph;	// 0x32632ee1
- (float)area;	// 0x326312ed
- (CGRect)belowBounds;	// 0x326314a1
- (id)belowTwoSides:(unsigned)sides;	// 0x32630fdd
// declared property getter: - (int)calloutType;	// 0x32631001
- (float)dAbove;	// 0x32631351
- (float)dBelow;	// 0x326313f9
- (void)dealloc;	// 0x326310b1
- (id)description;	// 0x32632e19
// declared property getter: - (float)fBottom;	// 0x32631041
// declared property getter: - (float)fLeft;	// 0x32631081
// declared property getter: - (float)fRight;	// 0x32631061
- (id)ignoreCallouts:(unsigned)callouts;	// 0x32631ee5
- (int)inOrder;	// 0x326312c1
- (int)inOrder:(BOOL)order;	// 0x32631211
- (BOOL)intervalOverlapLeft:(float)left right:(float)right paragraphs:(id)paragraphs;	// 0x32632c1d
- (BOOL)intervalOverlapLeft:(float)left right:(float)right rects:(id)rects;	// 0x32632cd9
- (BOOL)intervalOverlapTop:(float)top bottom:(float)bottom paragraphs:(id)paragraphs;	// 0x32632b61
- (int)leftOrder;	// 0x326311b9
// declared property getter: - (id)nextInColumn;	// 0x32630fe1
- (id)nextParagraphInColumn:(id)column;	// 0x3263192d
- (int)outOrder;	// 0x326311e5
// declared property getter: - (id)paragraph;	// 0x326310a1
// converted property getter: - (id)paragraphsAbove;	// 0x32630f9d
// converted property getter: - (id)paragraphsBelow;	// 0x32630fad
// converted property getter: - (id)paragraphsLeft;	// 0x32630fbd
// converted property getter: - (id)paragraphsRight;	// 0x32630fcd
// declared property getter: - (BOOL)placed;	// 0x32631021
- (void)removeFromAbove:(id)above;	// 0x326318e5
- (void)removeFromBelow:(id)below;	// 0x32631909
- (void)replaceAbove:(id)above withOneOf:(id)of;	// 0x326315c5
- (void)replaceBelow:(id)below withOneOf:(id)of;	// 0x32631755
- (int)rightOrder;	// 0x3263118d
// declared property setter: - (void)setCalloutType:(int)type;	// 0x32631011
// declared property setter: - (void)setFBottom:(float)bottom;	// 0x32631051
// declared property setter: - (void)setFLeft:(float)left;	// 0x32631091
// declared property setter: - (void)setFRight:(float)right;	// 0x32631071
// declared property setter: - (void)setNextInColumn:(id)column;	// 0x32630ff1
// declared property setter: - (void)setParagraph:(id)paragraph;	// 0x32631165
- (void)setParagraphsAboveIn:(id)anIn;	// 0x326328cd
- (void)setParagraphsBelowIn:(id)anIn;	// 0x326325d9
- (void)setParagraphsLeftIn:(id)anIn;	// 0x32632379
- (void)setParagraphsRightIn:(id)anIn;	// 0x32632109
// declared property setter: - (void)setPlaced:(BOOL)placed;	// 0x32631031
- (id)simpleRule:(unsigned)rule;	// 0x326320b1
- (int)topDescending:(id)descending;	// 0x32632dad
- (id)twoSides:(unsigned)sides;	// 0x32631d11
@end


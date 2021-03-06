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
@property(assign) int calloutType;	// G=0x307be001; S=0x307be011; @synthesize
@property(assign) float fBottom;	// G=0x307be041; S=0x307be051; @synthesize
@property(assign) float fLeft;	// G=0x307be081; S=0x307be091; @synthesize
@property(assign) float fRight;	// G=0x307be061; S=0x307be071; @synthesize
@property(assign, nonatomic) CPParagraph *nextInColumn;	// G=0x307bdfe1; S=0x307bdff1; @synthesize
@property(retain, nonatomic) CPParagraph *paragraph;	// G=0x307be0a1; S=0x307be165; @synthesize
@property(readonly, retain) NSMutableArray *paragraphsAbove;	// G=0x307bdf9d; converted property
@property(readonly, retain) NSMutableArray *paragraphsBelow;	// G=0x307bdfad; converted property
@property(readonly, retain) NSMutableArray *paragraphsLeft;	// G=0x307bdfbd; converted property
@property(readonly, retain) NSMutableArray *paragraphsRight;	// G=0x307bdfcd; converted property
@property(assign) BOOL placed;	// G=0x307be021; S=0x307be031; @synthesize
- (id)initWithParagraph:(id)paragraph;	// 0x307bfee1
- (float)area;	// 0x307be2ed
- (CGRect)belowBounds;	// 0x307be4a1
- (id)belowTwoSides:(unsigned)sides;	// 0x307bdfdd
// declared property getter: - (int)calloutType;	// 0x307be001
- (float)dAbove;	// 0x307be351
- (float)dBelow;	// 0x307be3f9
- (void)dealloc;	// 0x307be0b1
- (id)description;	// 0x307bfe19
// declared property getter: - (float)fBottom;	// 0x307be041
// declared property getter: - (float)fLeft;	// 0x307be081
// declared property getter: - (float)fRight;	// 0x307be061
- (id)ignoreCallouts:(unsigned)callouts;	// 0x307beee5
- (int)inOrder;	// 0x307be2c1
- (int)inOrder:(BOOL)order;	// 0x307be211
- (BOOL)intervalOverlapLeft:(float)left right:(float)right paragraphs:(id)paragraphs;	// 0x307bfc1d
- (BOOL)intervalOverlapLeft:(float)left right:(float)right rects:(id)rects;	// 0x307bfcd9
- (BOOL)intervalOverlapTop:(float)top bottom:(float)bottom paragraphs:(id)paragraphs;	// 0x307bfb61
- (int)leftOrder;	// 0x307be1b9
// declared property getter: - (id)nextInColumn;	// 0x307bdfe1
- (id)nextParagraphInColumn:(id)column;	// 0x307be92d
- (int)outOrder;	// 0x307be1e5
// declared property getter: - (id)paragraph;	// 0x307be0a1
// converted property getter: - (id)paragraphsAbove;	// 0x307bdf9d
// converted property getter: - (id)paragraphsBelow;	// 0x307bdfad
// converted property getter: - (id)paragraphsLeft;	// 0x307bdfbd
// converted property getter: - (id)paragraphsRight;	// 0x307bdfcd
// declared property getter: - (BOOL)placed;	// 0x307be021
- (void)removeFromAbove:(id)above;	// 0x307be8e5
- (void)removeFromBelow:(id)below;	// 0x307be909
- (void)replaceAbove:(id)above withOneOf:(id)of;	// 0x307be5c5
- (void)replaceBelow:(id)below withOneOf:(id)of;	// 0x307be755
- (int)rightOrder;	// 0x307be18d
// declared property setter: - (void)setCalloutType:(int)type;	// 0x307be011
// declared property setter: - (void)setFBottom:(float)bottom;	// 0x307be051
// declared property setter: - (void)setFLeft:(float)left;	// 0x307be091
// declared property setter: - (void)setFRight:(float)right;	// 0x307be071
// declared property setter: - (void)setNextInColumn:(id)column;	// 0x307bdff1
// declared property setter: - (void)setParagraph:(id)paragraph;	// 0x307be165
- (void)setParagraphsAboveIn:(id)anIn;	// 0x307bf8cd
- (void)setParagraphsBelowIn:(id)anIn;	// 0x307bf5d9
- (void)setParagraphsLeftIn:(id)anIn;	// 0x307bf379
- (void)setParagraphsRightIn:(id)anIn;	// 0x307bf109
// declared property setter: - (void)setPlaced:(BOOL)placed;	// 0x307be031
- (id)simpleRule:(unsigned)rule;	// 0x307bf0b1
- (int)topDescending:(id)descending;	// 0x307bfdad
- (id)twoSides:(unsigned)sides;	// 0x307bed11
@end


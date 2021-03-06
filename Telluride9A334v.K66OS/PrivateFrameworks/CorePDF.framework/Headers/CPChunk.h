/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import "CPObject.h"


@interface CPChunk : CPObject {
	CGRect bounds;	// 24 = 0x18
	BOOL shrinksWithChildren;	// 40 = 0x28
	BOOL dirtyBounds;	// 41 = 0x29
	unsigned position;	// 44 = 0x2c
	long insertionOrder;	// 48 = 0x30
}
@property(assign) CGPoint anchor;	// G=0x307913d9; S=0x30792395; converted property
@property(assign) CGRect bounds;	// G=0x307925c1; S=0x307913a1; converted property
@property(assign) unsigned chunkPosition;	// G=0x3079149d; S=0x307914ad; converted property
@property(assign) long insertionOrder;	// G=0x30791425; S=0x307913f5; converted property
@property(assign) BOOL shrinksWithChildren;	// G=0x30791459; S=0x30791469; converted property
+ (float)chooseReferenceFontSizeFrom:(float)from and:(float)anAnd;	// 0x30791349
- (id)init;	// 0x307914bd
- (float)absoluteGapTo:(id)to;	// 0x3079228d
- (void)accept:(id)accept;	// 0x3079297d
- (void)add:(id)add;	// 0x30792911
- (void)add:(id)add atIndex:(unsigned)index;	// 0x307928a5
- (void)addChildrenOf:(id)of;	// 0x30792865
- (CGRect)adjustToPointBoundary:(CGRect)pointBoundary;	// 0x30792555
- (CGSize)advance;	// 0x30791439
- (float)advanceDeltaAfterSpace;	// 0x307913f1
// converted property getter: - (CGPoint)anchor;	// 0x307913d9
- (float)bottom;	// 0x30791975
// converted property getter: - (CGRect)bounds;	// 0x307925c1
- (BOOL)boundsEqualsRect:(CGRect)rect accuracy:(float)accuracy;	// 0x30791715
- (float)center;	// 0x307919d5
// converted property getter: - (unsigned)chunkPosition;	// 0x3079149d
- (float)clusterGapTo:(id)to;	// 0x3079231d
- (int)clusterLevelHint;	// 0x30791455
- (int)compareAnchorX:(id)x;	// 0x30791f11
- (int)compareAnchorY:(id)y;	// 0x30791f69
- (int)compareAnchorYDescending:(id)descending;	// 0x30791eb9
- (int)compareChunkPosition:(id)position;	// 0x30791a6d
- (int)compareInsertionOrder:(id)order;	// 0x30791e2d
- (int)compareLinearBounds:(id)bounds;	// 0x30791cb5
- (int)compareTopDescending:(id)descending;	// 0x30791b89
- (int)compareX:(id)x;	// 0x30791e61
- (int)compareXBounds:(id)bounds;	// 0x30791d69
- (int)compareY:(id)y;	// 0x30791c45
- (int)compareYBounds:(id)bounds;	// 0x30791bd5
- (int)compareYDescending:(id)descending;	// 0x30791b31
- (int)compareYDescendingX:(id)x;	// 0x30791aa1
- (int)compareZ:(id)z;	// 0x30791df9
- (int)compareZDescending:(id)descending;	// 0x30791dc5
- (id)copyAndSplitChildrenAtIndex:(unsigned)index;	// 0x30792995
- (id)copyWithZone:(NSZone *)zone;	// 0x30792a39
- (id)describeBounds;	// 0x3079241d
- (void)fitBoundsToChildren;	// 0x3079210d
- (float)fontSize;	// 0x30791435
- (BOOL)geometricallyContains:(id)contains;	// 0x3079176d
// converted property getter: - (long)insertionOrder;	// 0x30791425
- (BOOL)intersectsChild:(CGRect)child;	// 0x307915b1
- (float)left;	// 0x30791a3d
- (float)opticalLeading;	// 0x3079139d
- (void)orderedInsert:(id)insert usingSelector:(SEL)selector;	// 0x307918f9
- (BOOL)overlapsHorizontallyWith:(id)with;	// 0x30791879
- (BOOL)overlapsVerticallyWith:(id)with;	// 0x307917e9
- (float)referenceAdvanceWidth;	// 0x3079226d
- (void)remove:(id)remove;	// 0x30792815
- (void)removeAll;	// 0x307927a5
- (CGRect)renderedBounds;	// 0x30792439
- (void)resizeWith:(id)with;	// 0x30791fe5
- (float)right;	// 0x30791a0d
- (float)rotationAngle;	// 0x3079152d
// converted property setter: - (void)setAnchor:(CGPoint)anchor;	// 0x30792395
// converted property setter: - (void)setBounds:(CGRect)bounds;	// 0x307913a1
- (void)setChildren:(id)children;	// 0x30792609
// converted property setter: - (void)setChunkPosition:(unsigned)position;	// 0x307914ad
// converted property setter: - (void)setInsertionOrder:(long)order;	// 0x307913f5
// converted property setter: - (void)setShrinksWithChildren:(BOOL)children;	// 0x30791469
// converted property getter: - (BOOL)shrinksWithChildren;	// 0x30791459
- (void)sortUsingSelector:(SEL)selector;	// 0x30791fc1
- (id)takeChildren;	// 0x30792735
- (id)takeChildrenAmong:(id)among;	// 0x307926cd
- (float)top;	// 0x307919a5
- (void)translateObjectYBy:(float)by;	// 0x30791479
@end


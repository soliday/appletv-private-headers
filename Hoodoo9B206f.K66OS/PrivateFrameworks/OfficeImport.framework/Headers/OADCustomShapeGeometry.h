/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OADShapeGeometry.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface OADCustomShapeGeometry : OADShapeGeometry {
@private
	CsRect<long int> *mGeometryCoordSpace;	// 12 = 0xc
	CsPoint<long int> *mLimo;	// 16 = 0x10
	NSMutableArray *mFormulas;	// 20 = 0x14
	NSMutableArray *mTextBodyRects;	// 24 = 0x18
	NSMutableArray *mPaths;	// 28 = 0x1c
}
@property(assign) CsRect<long int> geometryCoordSpace;	// G=0x344be479; S=0x3443fd55; converted property
@property(assign) CsPoint<long int> limo;	// G=0x34614431; S=0x3443fe39; converted property
- (id)init;	// 0x3443e959
- (void)addFormula:(id)formula;	// 0x344c05f5
- (void)addPath:(id)path;	// 0x3443f961
- (void)addTextBodyRect:(id)rect;	// 0x344c06bd
- (void)dealloc;	// 0x344446a9
- (id)formulaAtIndex:(unsigned)index;	// 0x344c09a1
- (unsigned)formulaCount;	// 0x344c0981
// converted property getter: - (CsRect<long int>)geometryCoordSpace;	// 0x344be479
// converted property getter: - (CsPoint<long int>)limo;	// 0x34614431
- (id)pathAtIndex:(unsigned)index;	// 0x344be079
- (unsigned)pathCount;	// 0x344be059
// converted property setter: - (void)setGeometryCoordSpace:(CsRect<long int>)space;	// 0x3443fd55
// converted property setter: - (void)setLimo:(CsPoint<long int>)limo;	// 0x3443fe39
- (id)textBodyRectAtIndex:(unsigned)index;	// 0x344c0769
- (unsigned)textBodyRectCount;	// 0x344401e5
@end


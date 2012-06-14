/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CHDBar2DType.h"


__attribute__((visibility("hidden")))
@interface CHDBar3DType : CHDBar2DType {
@private
	int mGapDepth;	// 40 = 0x28
	int mShapeType;	// 44 = 0x2c
}
@property(assign) int gapDepth;	// G=0x345d8735; S=0x34546445; converted property
@property(assign) int shapeType;	// G=0x3455b8e9; S=0x34546499; converted property
+ (bool)is3DType;	// 0x3455bb09
- (id)initWithChart:(id)chart;	// 0x345463f5
// converted property getter: - (int)gapDepth;	// 0x345d8735
// converted property setter: - (void)setGapDepth:(int)depth;	// 0x34546445
// converted property setter: - (void)setShapeType:(int)type;	// 0x34546499
// converted property getter: - (int)shapeType;	// 0x3455b8e9
@end


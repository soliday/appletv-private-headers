/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMDiagramShapeMapper.h"
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface CMDiagramSegmentedPyramidMapper : CMDiagramShapeMapper {
}
- (id)_suggestedBoundsForPyramidLayerWithIndex:(unsigned)index inLayer:(unsigned)layer andSlice:(unsigned)slice;	// 0x32b1057d
- (unsigned)layerCount;	// 0x32b10341
- (void)mapAt:(id)at withState:(id)state;	// 0x32b10381
- (void)mapChildrenAt:(id)at withState:(id)state;	// 0x32b10109
- (int)pointCount;	// 0x32b100f1
- (CGSize)sizeForNode:(id)node atIndex:(unsigned)index;	// 0x32b1051d
@end

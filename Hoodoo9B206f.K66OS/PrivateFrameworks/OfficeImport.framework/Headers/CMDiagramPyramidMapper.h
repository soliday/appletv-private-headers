/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMDiagramShapeMapper.h"
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface CMDiagramPyramidMapper : CMDiagramShapeMapper {
@private
	BOOL mIsFlipped;	// 112 = 0x70
}
- (id)_suggestedBoundsForNodeAtIndex:(unsigned)index;	// 0x345780c9
- (void)mapAt:(id)at withState:(id)state;	// 0x34577f7d
- (void)mapChildrenAt:(id)at withState:(id)state;	// 0x34578189
- (void)setIsFlipped:(BOOL)flipped;	// 0x34666be5
- (CGSize)sizeForNode:(id)node atIndex:(unsigned)index;	// 0x3457806d
@end


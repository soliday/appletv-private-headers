/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMDiagramMapper.h"
#import "OfficeImport-Structs.h"

@class OADOrientedBounds, NSString;

__attribute__((visibility("hidden")))
@interface CMDiagramShapeMapper : CMDiagramMapper {
@private
	int mChildCount;	// 88 = 0x58
	OADOrientedBounds *mDiagramShapeBounds;	// 92 = 0x5c
	NSString *mIdentifier;	// 96 = 0x60
	float mDefaultFontSize;	// 100 = 0x64
	int mMaxMappableTreeDepth;	// 104 = 0x68
	float mDefaultScale;	// 108 = 0x6c
}
- (id)initWithOddDiagram:(id)oddDiagram drawingContext:(id)context orientedBounds:(id)bounds identifier:(id)identifier parent:(id)parent;	// 0x352f286d
- (CGRect)circumscribedBounds;	// 0x35417d51
- (float)defaultFontSize;	// 0x352f5909
- (void)mapAt:(id)at withState:(id)state;	// 0x352f2b5d
- (void)mapChildrenAt:(id)at withState:(id)state;	// 0x35417d69
- (void)setDefaultFonSize;	// 0x352f37c9
- (void)setFonSizeForChildNode:(id)childNode atIndex:(unsigned)index;	// 0x352f385d
- (float)setFonSizeForChildNode:(id)childNode atIndex:(unsigned)index level:(int)level;	// 0x352f3881
- (CGSize)sizeForNode:(id)node atIndex:(unsigned)index;	// 0x35317bf9
- (CGSize)textSizeForShapeSize:(CGSize)shapeSize;	// 0x352f3f3d
@end

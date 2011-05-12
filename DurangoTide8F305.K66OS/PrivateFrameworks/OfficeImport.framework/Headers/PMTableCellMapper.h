/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMMapper.h"

@class CMStyle, OADTableCell;

__attribute__((visibility("hidden")))
@interface PMTableCellMapper : CMMapper {
@private
	OADTableCell *mCell;	// 8 = 0x8
	CMStyle *mStyle;	// 12 = 0xc
	int mColIndex;	// 16 = 0x10
	unsigned mRowIndex;	// 20 = 0x14
	float mWidth;	// 24 = 0x18
}
- (id)initWithOadTableCell:(id)oadTableCell rowIndex:(unsigned)index columnIndex:(int)index3 parent:(id)parent;	// 0x344ce1bd
- (void)dealloc;	// 0x344cf03d
- (void)mapAt:(id)at withState:(id)state;	// 0x344ce249
- (void)mapBordersWithState:(id)state;	// 0x344ce56d
- (void)mapCellPropertiesWithState:(id)state textAnchor:(int)anchor;	// 0x344cee51
- (id)rowMapper;	// 0x344ce991
- (id)tableMapper;	// 0x344ce915
- (float)widthWithState:(id)state;	// 0x344ceda9
@end

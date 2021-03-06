/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMMapper.h"

@class CMDrawableStyle, CMTableGridInfo, OADTable, OADOrientedBounds;

__attribute__((visibility("hidden")))
@interface PMTableMapper : CMMapper {
@private
	OADTable *mTable;	// 8 = 0x8
	CMDrawableStyle *mStyle;	// 12 = 0xc
	CMTableGridInfo *mGrid;	// 16 = 0x10
	OADOrientedBounds *mBounds;	// 20 = 0x14
}
- (id)initWithOadTable:(id)oadTable bounds:(id)bounds parent:(id)parent;	// 0x319f59c9
- (id)cellStyle;	// 0x31aa7799
- (float)columnWidthAtIndex:(int)index state:(id)state;	// 0x319f5e79
- (void)dealloc;	// 0x319f70b5
- (id)defaultCellFillForRow:(unsigned)row withState:(id)state;	// 0x31a77861
- (id)defaultCellFillWithState:(id)state;	// 0x31aa77ed
- (id)grid;	// 0x31aa7789
- (void)mapAt:(id)at withState:(id)state;	// 0x319f5a79
- (void)mapColumnGridAt:(id)at withState:(id)state;	// 0x319f5d11
- (void)mapTablePropertiesWithState:(id)state;	// 0x319f5bf1
- (unsigned)rowCount;	// 0x319f6971
- (id)tableBorderStyle;	// 0x319f6a09
@end


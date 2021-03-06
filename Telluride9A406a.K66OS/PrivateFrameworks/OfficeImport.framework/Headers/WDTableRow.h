/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class WDTable, WDTableRowProperties, NSMutableArray;

__attribute__((visibility("hidden")))
@interface WDTableRow : NSObject {
@private
	int mIndex;	// 4 = 0x4
	WDTable *mTable;	// 8 = 0x8
	WDTableRowProperties *mProperties;	// 12 = 0xc
	NSMutableArray *mCells;	// 16 = 0x10
}
- (id)initWithTable:(id)table at:(int)at;	// 0x3295c949
- (id)addCell;	// 0x3295d3c9
- (id)addCellWithIndex:(int)index;	// 0x32ab7e31
- (id)cellAt:(int)at;	// 0x32962f35
- (int)cellCount;	// 0x3295d611
- (id)cellIterator;	// 0x32ab7ddd
- (void)dealloc;	// 0x328c000d
- (int)index;	// 0x32ab7d89
- (id)newCellIterator;	// 0x32ab7d99
- (id)properties;	// 0x3295cf1d
- (id)table;	// 0x3295d3a9
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CMMapper.h"

@class EDReference;

__attribute__((visibility("hidden")))
@interface EMCellMapper : CMMapper {
@private
	EDCellHeader *edCell;	// 8 = 0x8
	EDReference *edMergedCellReference;	// 12 = 0xc
	int rowNumber;	// 16 = 0x10
	int firstColumn;	// 20 = 0x14
	int lastColumn;	// 24 = 0x18
	int columnSpan;	// 28 = 0x1c
	BOOL firstCellFlag;	// 32 = 0x20
	BOOL spreadLeftFlag;	// 33 = 0x21
	double columnWidth;	// 36 = 0x24
}
@property(readonly, assign) int columnSpan;	// G=0x32b13be9; converted property
@property(readonly, assign) double columnWidth;	// G=0x32b13bc1; converted property
@property(assign) int firstColumn;	// G=0x32b13ba1; S=0x32b13bb1; converted property
@property(assign) int lastColumn;	// G=0x329192a1; S=0x32970f49; converted property
- (id)initWithEDCell:(EDCellHeader *)edcell rowInfo:(EDRowInfo *)info parent:(id)parent state:(id)state;	// 0x32917871
- (id)initWithParent:(id)parent;	// 0x3291797d
- (void)adjustColumnSpanForGrid:(double *)grid columnCount:(unsigned)count nextCell:(EDCellHeader *)cell withState:(id)state;	// 0x32919425
// converted property getter: - (int)columnSpan;	// 0x32b13be9
// converted property getter: - (double)columnWidth;	// 0x32b13bc1
// converted property getter: - (int)firstColumn;	// 0x32b13ba1
- (BOOL)isCellEmpty;	// 0x32970f21
- (BOOL)isCellMerged;	// 0x329192b1
- (BOOL)isCellSpreading:(id)spreading;	// 0x32919349
- (BOOL)isFirstCell;	// 0x32b13bf9
// converted property getter: - (int)lastColumn;	// 0x329192a1
- (void)mapAt:(id)at withState:(id)state;	// 0x32b13c0d
- (void)mapAt:(id)at withState:(id)state height:(double)height;	// 0x32917eb5
- (id)mapHyperlinkAt:(id)at;	// 0x32b13c09
- (void)mapRowColSpansAt:(id)at withState:(id)state;	// 0x329182b5
- (void)resetColumnSpan:(int)span;	// 0x32b13bd9
- (void)setFirstCellFlag;	// 0x32917a2d
// converted property setter: - (void)setFirstColumn:(int)column;	// 0x32b13bb1
// converted property setter: - (void)setLastColumn:(int)column;	// 0x32970f49
@end


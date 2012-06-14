/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EFHelper.h"
#import <NSObject.h> // Unknown library

@class EDWorkbook, EDWorksheet, ECMappingContext;

__attribute__((visibility("hidden")))
@interface EDFormulaHelper : NSObject <EFHelper> {
@private
	EDWorkbook *mWorkbook;	// 4 = 0x4
	EDWorksheet *mWorksheet;	// 8 = 0x8
	int mRowNumber;	// 12 = 0xc
	int mColumnNumber;	// 16 = 0x10
	ECMappingContext *mMappingContext;	// 20 = 0x14
}
- (id)initWithWorkbook:(id)workbook worksheet:(id)worksheet rowNumber:(int)number columnNumber:(int)number4;	// 0x345c31c5
- (int)columnNumber;	// 0x345c31b5
- (unsigned)createIndexWithType:(int)type firstSheetIndex:(unsigned)index lastSheetIndex:(unsigned)index3;	// 0x345c3aa1
- (void)dealloc;	// 0x345c3a2d
- (BOOL)isCurrentSheet:(id)sheet;	// 0x345c3375
- (bool)isThereContentOutsideOfLassoBoundsForRowMin:(unsigned)rowMin rowMax:(unsigned)max columnMin:(unsigned)min columnMax:(unsigned)max4;	// 0x345c3191
- (unsigned)resolveFile:(id)file;	// 0x345c3805
- (unsigned)resolveFirstSheet:(id)sheet lastSheet:(id)sheet2;	// 0x345c3829
- (int)resolveFunctionName:(id)name;	// 0x345c3271
- (unsigned)resolveName:(id)name;	// 0x345c3939
- (unsigned)resolveSheet:(id)sheet;	// 0x345c389d
- (id)resolveTable:(id)table;	// 0x345c3601
- (unsigned)resolveTableColumn:(id)column columnName:(id)name;	// 0x345c33bd
- (unsigned)resolveTableToSheetId:(id)sheetId;	// 0x345c3445
- (int)rowNumber;	// 0x345c31a5
- (id)workbook;	// 0x345c3195
@end


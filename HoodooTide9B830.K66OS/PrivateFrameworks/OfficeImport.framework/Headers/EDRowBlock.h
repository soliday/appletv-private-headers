/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface EDRowBlock : NSObject {
@private
	CFDataRef mPackedData;	// 4 = 0x4
	CFDataRef mCellOffsets;	// 8 = 0x8
}
@property(assign) unsigned index;	// G=0x311eac59; S=0x311d4e49; converted property
+ (id)rowBlock;	// 0x311d4d6d
- (id)init;	// 0x311d4db5
- (EDCellHeader *)addCellWithColumnNumber:(unsigned)columnNumber type:(int)type isFormulaCell:(bool)cell rowInfo:(EDRowInfo **)info rowBlocks:(id)blocks;	// 0x311d55c1
- (EDRowInfo *)addRowInfoWithRowNumber:(unsigned)rowNumber cellCountHint:(unsigned)hint;	// 0x311d5151
- (void)archiveByAppendingToMutableData:(CFDataRef)mutableData;	// 0x3134d261
- (EDCellHeader *)cellAtIndex:(unsigned)index rowInfo:(EDRowInfo *)info;	// 0x311dcba1
- (EDCellHeader *)cellWithColumnNumber:(unsigned)columnNumber rowInfo:(EDRowInfo *)info;	// 0x311dec6d
- (void)checkCellOffsetOrThrow:(unsigned long)aThrow;	// 0x3134cf11
- (void)dealloc;	// 0x311f5425
- (void)doneWithContent;	// 0x311f5465
- (unsigned)expectedIndexOfCellWithColumnNumber:(unsigned)columnNumber rowInfo:(EDRowInfo *)info;	// 0x311decfd
- (unsigned)firstRowNumber;	// 0x311d5da5
- (void)incrementIndex;	// 0x3134d02d
// converted property getter: - (unsigned)index;	// 0x311eac59
- (unsigned)indexOfCellWithColumnNumber:(unsigned)columnNumber rowInfo:(EDRowInfo *)info;	// 0x311deca9
- (unsigned)indexOfRowInfoWithRowNumber:(unsigned)rowNumber;	// 0x311d50ad
- (unsigned)lastRowNumber;	// 0x311dcb21
- (void)removeCellAtIndex:(unsigned)index rowInfo:(EDRowInfo **)info;	// 0x3134d091
- (unsigned)rowCount;	// 0x311ee61d
- (EDRowInfo *)rowInfoAtIndex:(unsigned)index;	// 0x311d5dc9
- (EDRowInfo *)rowInfoWithRowNumber:(unsigned)rowNumber;	// 0x311d5041
- (EDRowInfo *)rowInfoWithRowNumber:(unsigned)rowNumber createIfNil:(bool)aNil;	// 0x311d5055
// converted property setter: - (void)setIndex:(unsigned)index;	// 0x311d4e49
- (unsigned long)startOfCellsOrThrow;	// 0x3134ce41
- (void)unarchiveFromData:(CFDataRef)data offset:(unsigned *)offset;	// 0x3134d1d5
@end

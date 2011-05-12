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
@property(assign) unsigned index;	// G=0x343aa561; S=0x343a9349; converted property
+ (id)rowBlock;	// 0x343a9281
- (id)init;	// 0x343a92c1
- (EDCellHeader *)addCellWithColumnNumber:(unsigned)columnNumber type:(int)type isFormulaCell:(bool)cell rowInfo:(EDRowInfo **)info rowBlocks:(id)blocks;	// 0x343a99c9
- (EDRowInfo *)addRowInfoWithRowNumber:(unsigned)rowNumber cellCountHint:(unsigned)hint;	// 0x343a95f1
- (void)archiveByAppendingToMutableData:(CFDataRef)mutableData;	// 0x345c71c9
- (EDCellHeader *)cellAtIndex:(unsigned)index rowInfo:(EDRowInfo *)info;	// 0x343bfccd
- (EDCellHeader *)cellWithColumnNumber:(unsigned)columnNumber rowInfo:(EDRowInfo *)info;	// 0x343c463d
- (void)dealloc;	// 0x343c8f61
- (void)doneWithContent;	// 0x343c8f9d
- (unsigned)expectedIndexOfCellWithColumnNumber:(unsigned)columnNumber rowInfo:(EDRowInfo *)info;	// 0x343c46bd
- (unsigned)firstRowNumber;	// 0x343a9e85
- (void)incrementIndex;	// 0x345c716d
// converted property getter: - (unsigned)index;	// 0x343aa561
- (unsigned)indexOfCellWithColumnNumber:(unsigned)columnNumber rowInfo:(EDRowInfo *)info;	// 0x343c4675
- (unsigned)indexOfRowInfoWithRowNumber:(unsigned)rowNumber;	// 0x343a9571
- (unsigned)lastRowNumber;	// 0x343be6b9
- (void)removeCellAtIndex:(unsigned)index rowInfo:(EDRowInfo **)info;	// 0x345c72ad
- (unsigned)rowCount;	// 0x343be715
- (EDRowInfo *)rowInfoAtIndex:(unsigned)index;	// 0x343a9ea5
- (EDRowInfo *)rowInfoWithRowNumber:(unsigned)rowNumber;	// 0x343a9509
- (EDRowInfo *)rowInfoWithRowNumber:(unsigned)rowNumber createIfNil:(bool)aNil;	// 0x343a9521
// converted property setter: - (void)setIndex:(unsigned)index;	// 0x343a9349
- (void)unarchiveFromData:(CFDataRef)data offset:(unsigned *)offset;	// 0x345c722d
@end

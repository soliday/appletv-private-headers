/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "TSUFlushable.h"
#import <NSObject.h> // Unknown library

@class NSRecursiveLock, NSMutableArray, EDWorksheet, NSString, EDCollection;

__attribute__((visibility("hidden")))
@interface EDRowBlocks : NSObject <TSUFlushable> {
@private
	EDWorksheet *mWorksheet;	// 4 = 0x4
	NSMutableArray *mRowBlocks;	// 8 = 0x8
	EDCollection *mFormulas;	// 12 = 0xc
	unsigned mMaxPopulatedRow;	// 16 = 0x10
	unsigned mMaxPopulatedColumn;	// 20 = 0x14
	NSString *mFileName;	// 24 = 0x18
	int mLockCount;	// 28 = 0x1c
	NSRecursiveLock *mSaveLoadLock;	// 32 = 0x20
}
- (id)initWithWorksheet:(id)worksheet;	// 0x3290aa81
- (EDCellHeader *)cellWithRowNumber:(unsigned)rowNumber columnNumber:(int)number;	// 0x329977b5
- (Class)classForFormulaType:(unsigned char)formulaType;	// 0x32a793ed
- (void)dealloc;	// 0x3292e365
- (unsigned)expectedIndexOfRowBlockForRowNumber:(unsigned)rowNumber;	// 0x3290dc35
- (id)fileNameForPersistingRowBlocks;	// 0x32a791fd
- (void)flush;	// 0x32a79365
- (unsigned char)formulaTypeForFormula:(id)formula;	// 0x32a79375
- (id)formulas;	// 0x329146dd
- (unsigned)indexOfRowBlockForRowNumber:(unsigned)rowNumber;	// 0x32a791a1
- (void)load;	// 0x3290b519
- (void)lock;	// 0x3290ace5
- (unsigned)maxPopulatedColumn;	// 0x32a79191
- (unsigned)maxPopulatedRow;	// 0x32915b11
- (void)removeRowBlockAtIndex:(unsigned)index;	// 0x32a791d9
- (id)rowBlockAtIndex:(unsigned)index;	// 0x3290dd25
- (unsigned)rowBlockCount;	// 0x3290dd05
- (id)rowBlockForRowNumber:(unsigned)rowNumber currentRowBlock:(id)block;	// 0x3299780d
- (id)rowBlockForRowNumber:(unsigned)rowNumber currentRowBlock:(id)block createIfNil:(bool)aNil;	// 0x3290da51
- (void)save;	// 0x32a79445
- (bool)spaceForRowNumber:(unsigned)rowNumber rowBlock:(id)block;	// 0x3290ee49
- (void)unlock;	// 0x3290f21d
- (void)updateMaxPopulatedRow:(unsigned)row column:(unsigned)column;	// 0x3290ebe5
@end

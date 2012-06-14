/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "EDProcessor.h"

@class EDRowBlock, NSMutableArray, EDColumnInfoCollection, EDWorksheet, EDRowBlocks, NSArray;

__attribute__((visibility("hidden")))
@interface EPStyleFlattener : EDProcessor {
@private
	EDWorksheet *mWorksheet;	// 16 = 0x10
	EDRowBlocks *mRowBlocks;	// 20 = 0x14
	EDRowBlock *mCurrentRowBlock;	// 24 = 0x18
	EDColumnInfoCollection *mColumnInfos;	// 28 = 0x1c
	NSArray *mKeys;	// 32 = 0x20
	NSMutableArray *mRanges;	// 36 = 0x24
	int mFirstRow;	// 40 = 0x28
	int mLastRow;	// 44 = 0x2c
	int mFirstColumn;	// 48 = 0x30
	int mLastColumn;	// 52 = 0x34
	unsigned mFirstRowStripeSize;	// 56 = 0x38
	unsigned mSecondRowStripeSize;	// 60 = 0x3c
	unsigned mFirstColumnStripeSize;	// 64 = 0x40
	unsigned mSecondColumnStripeSize;	// 68 = 0x44
}
- (void)applyDifferentialStyle:(id)style borderFlags:(int)flags precedence:(int)precedence toCell:(EDCellHeader **)cell row:(int)row column:(int)column;	// 0x3456d9c1
- (void)applyProcessorToObject:(id)object sheet:(id)sheet;	// 0x3451d285
- (void)applyStyleElements:(id)elements toCell:(EDCellHeader *)cell row:(int)row column:(int)column;	// 0x3456d6e5
- (int)borderFlagsForStyleType:(int)styleType row:(int)row column:(int)column;	// 0x345c0bf1
- (void)cacheRange:(id)range;	// 0x3456ca0d
- (void)cacheSizes:(id)sizes inObject:(id)object;	// 0x3456cb09
- (EDCellHeader *)cellWithSetupStyleAtRowNumber:(int)rowNumber columnNumber:(int)number;	// 0x3456d5c9
- (void)clearCache;	// 0x3456ecb1
- (id)collectionFromWorksheet:(id)worksheet;	// 0x345c0bdd
- (void)dealloc;	// 0x3451d699
- (id)extractCellStyleElements:(id)elements parentScope:(id)scope row:(int)row column:(int)column;	// 0x345c0be9
- (id)extractGlobalStyleElements:(id)elements;	// 0x34580d2d
- (id)extractKeys:(id)keys from:(id)from parent:(id)parent;	// 0x3456cd11
- (id)extractRowStyleElements:(id)elements parentScope:(id)scope row:(int)row;	// 0x345c0be5
- (id)flattenBorder:(int)border borders:(id)borders differentialBorders:(id)borders3 flag:(bool)flag precedence:(int)precedence row:(int)row column:(int)column isBorderCopied:(bool *)copied;	// 0x3456dec1
- (id)flattenBorders:(id)borders differentialBorders:(id)borders2 borderFlags:(int)flags precedence:(int)precedence row:(int)row column:(int)column isBordersCopied:(bool *)copied;	// 0x3456dc55
- (id)flattenFill:(id)fill differentialFill:(id)fill2 isFillCopied:(bool *)copied;	// 0x3456e34d
- (id)flattenFont:(id)font differentialFont:(id)font2 isFontCopied:(bool *)copied;	// 0x3456e595
- (id)keysInTheOrderTheyShouldBeApplied;	// 0x345c0bed
- (void)processObject:(id)object;	// 0x3456c439
- (id)styleFromObject:(id)object;	// 0x345c0be1
- (id)wrapDifferentialStyleInATableStyleElement:(id)atableStyleElement type:(int)type;	// 0x34583865
@end


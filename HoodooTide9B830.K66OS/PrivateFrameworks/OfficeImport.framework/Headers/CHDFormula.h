/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDFormula.h"

@class EDReferenceCollection, EDWorkbook;

__attribute__((visibility("hidden")))
@interface CHDFormula : EDFormula {
@private
	EDReferenceCollection *mReferences;	// 8 = 0x8
	EDWorkbook *mWorkbook;	// 12 = 0xc
}
@property(retain) id references;	// G=0x31256939; S=0x31256d01; converted property
+ (id)formulaWithReference:(id)reference;	// 0x312d0c85
+ (id)formulaWithReferences:(id)references;	// 0x312e2b3d
- (id)initWithReference:(id)reference;	// 0x312d0cd1
- (id)initWithReferences:(id)references;	// 0x312e2b89
- (id)initWithWorkbook:(id)workbook;	// 0x3134972d
- (unsigned)countOfCellsBeingReferenced;	// 0x31256da1
- (void)dealloc;	// 0x3125eb81
- (bool)isConstantStringFormula;	// 0x31349771
- (void)prepareTokens;	// 0x313497c5
// converted property getter: - (id)references;	// 0x31256939
- (id)referencesFromFormula;	// 0x312569ad
// converted property setter: - (void)setReferences:(id)references;	// 0x31256d01
- (void)setWorkbook:(id)workbook;	// 0x31251c95
@end


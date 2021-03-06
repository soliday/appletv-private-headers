/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class EDFormula, TSUPointerKeyDictionary, EDString;

__attribute__((visibility("hidden")))
@interface EDName : NSObject {
@private
	unsigned mSheetIndex;	// 4 = 0x4
	EDString *mNameString;	// 8 = 0x8
	EDFormula *mFormula;	// 12 = 0xc
	TSUPointerKeyDictionary *mMaxWorksheetReferences;	// 16 = 0x10
}
@property(retain) id nameString;	// G=0x35376649; S=0x3531dffd; converted property
@property(assign) unsigned sheetIndex;	// G=0x35376669; S=0x3531e0a1; converted property
- (id)init;	// 0x3531dfbd
- (void)dealloc;	// 0x35321ac9
- (id)formula;	// 0x35376659
- (unsigned)hash;	// 0x353766c5
- (BOOL)isEqual:(id)equal;	// 0x353766f1
- (BOOL)isEqualToEDName:(id)edname;	// 0x353767b5
- (BOOL)isEqualToString:(id)string;	// 0x3537678d
- (id)maxWorksheetReferences;	// 0x35376679
// converted property getter: - (id)nameString;	// 0x35376649
- (void)setCleanedFormula:(id)formula;	// 0x3531e295
- (void)setFormula:(id)formula workbook:(id)workbook;	// 0x3531e231
// converted property setter: - (void)setNameString:(id)string;	// 0x3531dffd
// converted property setter: - (void)setSheetIndex:(unsigned)index;	// 0x3531e0a1
// converted property getter: - (unsigned)sheetIndex;	// 0x35376669
@end


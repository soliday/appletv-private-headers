/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class CHDDataValuesCollection, CHDFormula, EDResources;

__attribute__((visibility("hidden")))
@interface CHDData : NSObject {
@private
	CHDDataValuesCollection *mDataValues;	// 4 = 0x4
	CHDFormula *mFormula;	// 8 = 0x8
	unsigned mContentFormatId;	// 12 = 0xc
	unsigned mDataValueIndexCount;	// 16 = 0x10
	EDResources *mResources;	// 20 = 0x14
}
@property(retain) id contentFormat;	// G=0x344e7bcd; S=0x345582bd; converted property
@property(assign) unsigned contentFormatId;	// G=0x345d8f51; S=0x344e20fd; converted property
@property(assign) unsigned dataValueIndexCount;	// G=0x344e5b75; S=0x344e1edd; converted property
+ (id)dataWithDataPointCount:(unsigned)dataPointCount resources:(id)resources;	// 0x344e1b39
+ (id)dataWithResources:(id)resources;	// 0x344e18cd
- (id)initWithDataPointCount:(unsigned)dataPointCount resources:(id)resources;	// 0x344e1b89
- (id)initWithResources:(id)resources;	// 0x344e1919
- (unsigned)averageDataPointDecimalCount;	// 0x345d9081
// converted property getter: - (id)contentFormat;	// 0x344e7bcd
// converted property getter: - (unsigned)contentFormatId;	// 0x345d8f51
- (unsigned)countOfCellsBeingReferenced;	// 0x344e68ed
// converted property getter: - (unsigned)dataValueIndexCount;	// 0x344e5b75
- (id)dataValues;	// 0x344e1b0d
- (void)dealloc;	// 0x344e5019
- (id)firstValueContentFormatWithWorkbook:(id)workbook;	// 0x345d8f61
- (id)formula;	// 0x344e1a5d
- (bool)isEmpty;	// 0x344e236d
// converted property setter: - (void)setContentFormat:(id)format;	// 0x345582bd
// converted property setter: - (void)setContentFormatId:(unsigned)anId;	// 0x344e20fd
// converted property setter: - (void)setDataValueIndexCount:(unsigned)count;	// 0x344e1edd
- (void)setFormula:(id)formula chart:(id)chart;	// 0x344e1ca5
@end


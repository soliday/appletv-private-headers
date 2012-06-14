/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class EDReference, EDResources, NSString, EDCollection;

__attribute__((visibility("hidden")))
@interface EDPivotTable : NSObject {
@private
	EDResources *mResources;	// 4 = 0x4
	bool mShowLastColumn;	// 8 = 0x8
	bool mShowRowHeaders;	// 9 = 0x9
	bool mShowColumnHeaders;	// 10 = 0xa
	bool mShowRowStripes;	// 11 = 0xb
	bool mShowColumnStripes;	// 12 = 0xc
	bool mApplyNumberFormats;	// 13 = 0xd
	bool mApplyBorderFormats;	// 14 = 0xe
	bool mApplyFontFormats;	// 15 = 0xf
	bool mApplyPatternFormats;	// 16 = 0x10
	bool mApplyAlignmentFormats;	// 17 = 0x11
	bool mApplyWidthHeightFormats;	// 18 = 0x12
	bool mUseAutoFormatting;	// 19 = 0x13
	bool mColGrandTotals;	// 20 = 0x14
	bool mRowGrandTotals;	// 21 = 0x15
	bool mCustomListSort;	// 22 = 0x16
	bool mCompactData;	// 23 = 0x17
	bool mCompact;	// 24 = 0x18
	bool mDataCaption;	// 25 = 0x19
	bool mDataOnRows;	// 26 = 0x1a
	bool mDisableFieldList;	// 27 = 0x1b
	bool mMergeItem;	// 28 = 0x1c
	bool mMultipleFieldFilters;	// 29 = 0x1d
	bool mOutline;	// 30 = 0x1e
	bool mOutlineData;	// 31 = 0x1f
	bool mPageOverThenDown;	// 32 = 0x20
	bool mShowCalcMbrs;	// 33 = 0x21
	bool mShowDataDropDown;	// 34 = 0x22
	bool mShowDropZones;	// 35 = 0x23
	bool mShowEmptyCol;	// 36 = 0x24
	bool mShowEmptyRow;	// 37 = 0x25
	bool mShowHeaders;	// 38 = 0x26
	bool mShowMemberPropertyTips;	// 39 = 0x27
	bool mShowMissing;	// 40 = 0x28
	bool mShowMultipleLabel;	// 41 = 0x29
	bool mSubtotalHiddenItems;	// 42 = 0x2a
	NSString *mName;	// 44 = 0x2c
	NSString *mStyleName;	// 48 = 0x30
	NSString *mColumnHeaderCaption;	// 52 = 0x34
	NSString *mRowHeaderCaption;	// 56 = 0x38
	NSString *mPageStyleName;	// 60 = 0x3c
	EDReference *mPivotTableRange;	// 64 = 0x40
	unsigned mStyleIndex;	// 68 = 0x44
	int mFirstHeaderRow;	// 72 = 0x48
	int mFirstDataRow;	// 76 = 0x4c
	int mFirstDataColumn;	// 80 = 0x50
	unsigned mRowPageCount;	// 84 = 0x54
	unsigned mColumnPageCount;	// 88 = 0x58
	unsigned mPageWrap;	// 92 = 0x5c
	unsigned mAutoFormatId;	// 96 = 0x60
	unsigned mDataPosition;	// 100 = 0x64
	EDCollection *mRowFields;	// 104 = 0x68
	EDCollection *mColumnFields;	// 108 = 0x6c
	EDCollection *mRowItems;	// 112 = 0x70
	EDCollection *mColumnItems;	// 116 = 0x74
	EDCollection *mPivotFields;	// 120 = 0x78
	EDCollection *mDataFields;	// 124 = 0x7c
	EDCollection *mConditionalFields;	// 128 = 0x80
	EDCollection *mPivotAreas;	// 132 = 0x84
	EDCollection *mPageFields;	// 136 = 0x88
}
@property(assign) bool applyAlignmentFormats;	// G=0x313350e1; S=0x312f09d9; converted property
@property(assign) bool applyBorderFormats;	// G=0x313350b1; S=0x312f09a9; converted property
@property(assign) bool applyFontFormats;	// G=0x313350c1; S=0x312f09b9; converted property
@property(assign) bool applyNumberFormats;	// G=0x313350a1; S=0x312f0999; converted property
@property(assign) bool applyPatternFormats;	// G=0x313350d1; S=0x312f09c9; converted property
@property(assign) bool applyWidthHeightFormats;	// G=0x313350f1; S=0x312f09e9; converted property
@property(assign) unsigned autoFormatId;	// G=0x31335051; S=0x31335061; converted property
@property(assign) bool colGrandTotals;	// G=0x31335101; S=0x31335111; converted property
@property(retain) id columnHeaderCaption;	// G=0x31334fa1; S=0x31335441; converted property
@property(assign) unsigned columnPageCount;	// G=0x31335011; S=0x31335021; converted property
@property(assign) bool compact;	// G=0x312f1b7d; S=0x31335191; converted property
@property(assign) bool compactData;	// G=0x31335171; S=0x31335181; converted property
@property(assign) bool customListSort;	// G=0x31335151; S=0x31335161; converted property
@property(assign) bool dataCaption;	// G=0x313351a1; S=0x312f0a09; converted property
@property(assign) bool dataOnRows;	// G=0x313351b1; S=0x313351c1; converted property
@property(assign) unsigned dataPosition;	// G=0x31335071; S=0x31335081; converted property
@property(assign) bool disableFieldList;	// G=0x313351d1; S=0x313351e1; converted property
@property(assign) int firstDataColumn;	// G=0x312f0d1d; S=0x312eef89; converted property
@property(assign) int firstDataRow;	// G=0x312f0d0d; S=0x312eef79; converted property
@property(assign) int firstHeaderRow;	// G=0x312f0cfd; S=0x312eef69; converted property
@property(assign) bool mergeItem;	// G=0x313351f1; S=0x31335201; converted property
@property(assign) bool multipleFieldFilters;	// G=0x31335211; S=0x312f0a19; converted property
@property(retain) id name;	// G=0x31334fe1; S=0x312f0951; converted property
@property(assign) bool outline;	// G=0x31335221; S=0x312f0a29; converted property
@property(assign) bool outlineData;	// G=0x31335231; S=0x312f0a39; converted property
@property(assign) bool pageOverThenDown;	// G=0x31335241; S=0x31335251; converted property
@property(retain) id pageStyleName;	// G=0x31334fc1; S=0x313353b1; converted property
@property(assign) unsigned pageWrap;	// G=0x31335031; S=0x31335041; converted property
@property(retain) id pivotTableRange;	// G=0x312f0ced; S=0x312eef21; converted property
@property(assign) bool rowGrandTotals;	// G=0x31335131; S=0x31335141; converted property
@property(retain) id rowHeaderCaption;	// G=0x31334fb1; S=0x313353f9; converted property
@property(assign) unsigned rowPageCount;	// G=0x31334ff1; S=0x31335001; converted property
@property(assign) bool showCalcMbrs;	// G=0x31335261; S=0x312f0a49; converted property
@property(assign) bool showColumnHeaders;	// G=0x312f0f29; S=0x312ef1b9; converted property
@property(assign) bool showColumnStripes;	// G=0x312f1541; S=0x312ef199; converted property
@property(assign) bool showDataDropDown;	// G=0x31335271; S=0x31335281; converted property
@property(assign) bool showDropZones;	// G=0x31335291; S=0x313352a1; converted property
@property(assign) bool showEmptyCol;	// G=0x313352b1; S=0x313352c1; converted property
@property(assign) bool showEmptyRow;	// G=0x313352d1; S=0x313352e1; converted property
@property(assign) bool showHeaders;	// G=0x313352f1; S=0x31335301; converted property
@property(assign) bool showLastColumn;	// G=0x31335091; S=0x312ef179; converted property
@property(assign) bool showMemberPropertyTips;	// G=0x31335311; S=0x31335321; converted property
@property(assign) bool showMissing;	// G=0x31335331; S=0x31335341; converted property
@property(assign) bool showMultipleLabel;	// G=0x31335351; S=0x31335361; converted property
@property(assign) bool showRowHeaders;	// G=0x312f1531; S=0x312ef1a9; converted property
@property(assign) bool showRowStripes;	// G=0x312f1b4d; S=0x312ef189; converted property
@property(retain) id style;	// G=0x312f0a6d; S=0x31335489; converted property
@property(assign) unsigned styleIndex;	// G=0x31335391; S=0x313353a1; converted property
@property(retain) id styleName;	// G=0x31334fd1; S=0x312ef131; converted property
@property(assign) bool subtotalHiddenItems;	// G=0x31335371; S=0x31335381; converted property
@property(assign) bool useAutoFormatting;	// G=0x31335121; S=0x312f09f9; converted property
+ (id)pivotTableWithResources:(id)resources;	// 0x312ee93d
- (id)initWithResources:(id)resources;	// 0x312ee989
// converted property getter: - (bool)applyAlignmentFormats;	// 0x313350e1
// converted property getter: - (bool)applyBorderFormats;	// 0x313350b1
// converted property getter: - (bool)applyFontFormats;	// 0x313350c1
// converted property getter: - (bool)applyNumberFormats;	// 0x313350a1
// converted property getter: - (bool)applyPatternFormats;	// 0x313350d1
// converted property getter: - (bool)applyWidthHeightFormats;	// 0x313350f1
// converted property getter: - (unsigned)autoFormatId;	// 0x31335051
// converted property getter: - (bool)colGrandTotals;	// 0x31335101
- (id)columnFields;	// 0x312effe9
// converted property getter: - (id)columnHeaderCaption;	// 0x31334fa1
- (id)columnItems;	// 0x312efff9
// converted property getter: - (unsigned)columnPageCount;	// 0x31335011
// converted property getter: - (bool)compact;	// 0x312f1b7d
// converted property getter: - (bool)compactData;	// 0x31335171
- (id)conditionalFormats;	// 0x312f056d
// converted property getter: - (bool)customListSort;	// 0x31335151
// converted property getter: - (bool)dataCaption;	// 0x313351a1
- (id)dataFields;	// 0x312f0139
// converted property getter: - (bool)dataOnRows;	// 0x313351b1
// converted property getter: - (unsigned)dataPosition;	// 0x31335071
- (void)dealloc;	// 0x312f1d9d
// converted property getter: - (bool)disableFieldList;	// 0x313351d1
// converted property getter: - (int)firstDataColumn;	// 0x312f0d1d
// converted property getter: - (int)firstDataRow;	// 0x312f0d0d
// converted property getter: - (int)firstHeaderRow;	// 0x312f0cfd
// converted property getter: - (bool)mergeItem;	// 0x313351f1
// converted property getter: - (bool)multipleFieldFilters;	// 0x31335211
// converted property getter: - (id)name;	// 0x31334fe1
// converted property getter: - (bool)outline;	// 0x31335221
// converted property getter: - (bool)outlineData;	// 0x31335231
- (id)pageFields;	// 0x312f0009
// converted property getter: - (bool)pageOverThenDown;	// 0x31335241
// converted property getter: - (id)pageStyleName;	// 0x31334fc1
// converted property getter: - (unsigned)pageWrap;	// 0x31335031
- (id)pivotAreas;	// 0x312f071d
- (id)pivotFields;	// 0x312ef1c9
// converted property getter: - (id)pivotTableRange;	// 0x312f0ced
- (id)rowFields;	// 0x312efc79
// converted property getter: - (bool)rowGrandTotals;	// 0x31335131
// converted property getter: - (id)rowHeaderCaption;	// 0x31334fb1
- (id)rowItems;	// 0x312efd45
// converted property getter: - (unsigned)rowPageCount;	// 0x31334ff1
// converted property setter: - (void)setApplyAlignmentFormats:(bool)formats;	// 0x312f09d9
// converted property setter: - (void)setApplyBorderFormats:(bool)formats;	// 0x312f09a9
// converted property setter: - (void)setApplyFontFormats:(bool)formats;	// 0x312f09b9
// converted property setter: - (void)setApplyNumberFormats:(bool)formats;	// 0x312f0999
// converted property setter: - (void)setApplyPatternFormats:(bool)formats;	// 0x312f09c9
// converted property setter: - (void)setApplyWidthHeightFormats:(bool)formats;	// 0x312f09e9
// converted property setter: - (void)setAutoFormatId:(unsigned)anId;	// 0x31335061
// converted property setter: - (void)setColGrandTotals:(bool)totals;	// 0x31335111
// converted property setter: - (void)setColumnHeaderCaption:(id)caption;	// 0x31335441
// converted property setter: - (void)setColumnPageCount:(unsigned)count;	// 0x31335021
// converted property setter: - (void)setCompact:(bool)compact;	// 0x31335191
// converted property setter: - (void)setCompactData:(bool)data;	// 0x31335181
// converted property setter: - (void)setCustomListSort:(bool)sort;	// 0x31335161
// converted property setter: - (void)setDataCaption:(bool)caption;	// 0x312f0a09
// converted property setter: - (void)setDataOnRows:(bool)rows;	// 0x313351c1
// converted property setter: - (void)setDataPosition:(unsigned)position;	// 0x31335081
// converted property setter: - (void)setDisableFieldList:(bool)list;	// 0x313351e1
// converted property setter: - (void)setFirstDataColumn:(int)column;	// 0x312eef89
// converted property setter: - (void)setFirstDataRow:(int)row;	// 0x312eef79
// converted property setter: - (void)setFirstHeaderRow:(int)row;	// 0x312eef69
// converted property setter: - (void)setMergeItem:(bool)item;	// 0x31335201
// converted property setter: - (void)setMultipleFieldFilters:(bool)filters;	// 0x312f0a19
// converted property setter: - (void)setName:(id)name;	// 0x312f0951
// converted property setter: - (void)setOutline:(bool)outline;	// 0x312f0a29
// converted property setter: - (void)setOutlineData:(bool)data;	// 0x312f0a39
// converted property setter: - (void)setPageOverThenDown:(bool)down;	// 0x31335251
// converted property setter: - (void)setPageStyleName:(id)name;	// 0x313353b1
// converted property setter: - (void)setPageWrap:(unsigned)wrap;	// 0x31335041
// converted property setter: - (void)setPivotTableRange:(id)range;	// 0x312eef21
// converted property setter: - (void)setRowGrandTotals:(bool)totals;	// 0x31335141
// converted property setter: - (void)setRowHeaderCaption:(id)caption;	// 0x313353f9
// converted property setter: - (void)setRowPageCount:(unsigned)count;	// 0x31335001
// converted property setter: - (void)setShowCalcMbrs:(bool)mbrs;	// 0x312f0a49
// converted property setter: - (void)setShowColumnHeaders:(bool)headers;	// 0x312ef1b9
// converted property setter: - (void)setShowColumnStripes:(bool)stripes;	// 0x312ef199
// converted property setter: - (void)setShowDataDropDown:(bool)down;	// 0x31335281
// converted property setter: - (void)setShowDropZones:(bool)zones;	// 0x313352a1
// converted property setter: - (void)setShowEmptyCol:(bool)col;	// 0x313352c1
// converted property setter: - (void)setShowEmptyRow:(bool)row;	// 0x313352e1
// converted property setter: - (void)setShowHeaders:(bool)headers;	// 0x31335301
// converted property setter: - (void)setShowLastColumn:(bool)column;	// 0x312ef179
// converted property setter: - (void)setShowMemberPropertyTips:(bool)tips;	// 0x31335321
// converted property setter: - (void)setShowMissing:(bool)missing;	// 0x31335341
// converted property setter: - (void)setShowMultipleLabel:(bool)label;	// 0x31335361
// converted property setter: - (void)setShowRowHeaders:(bool)headers;	// 0x312ef1a9
// converted property setter: - (void)setShowRowStripes:(bool)stripes;	// 0x312ef189
// converted property setter: - (void)setStyle:(id)style;	// 0x31335489
// converted property setter: - (void)setStyleIndex:(unsigned)index;	// 0x313353a1
// converted property setter: - (void)setStyleName:(id)name;	// 0x312ef131
// converted property setter: - (void)setSubtotalHiddenItems:(bool)items;	// 0x31335381
// converted property setter: - (void)setUseAutoFormatting:(bool)formatting;	// 0x312f09f9
// converted property getter: - (bool)showCalcMbrs;	// 0x31335261
// converted property getter: - (bool)showColumnHeaders;	// 0x312f0f29
// converted property getter: - (bool)showColumnStripes;	// 0x312f1541
// converted property getter: - (bool)showDataDropDown;	// 0x31335271
// converted property getter: - (bool)showDropZones;	// 0x31335291
// converted property getter: - (bool)showEmptyCol;	// 0x313352b1
// converted property getter: - (bool)showEmptyRow;	// 0x313352d1
// converted property getter: - (bool)showHeaders;	// 0x313352f1
// converted property getter: - (bool)showLastColumn;	// 0x31335091
// converted property getter: - (bool)showMemberPropertyTips;	// 0x31335311
// converted property getter: - (bool)showMissing;	// 0x31335331
// converted property getter: - (bool)showMultipleLabel;	// 0x31335351
// converted property getter: - (bool)showRowHeaders;	// 0x312f1531
// converted property getter: - (bool)showRowStripes;	// 0x312f1b4d
// converted property getter: - (id)style;	// 0x312f0a6d
// converted property getter: - (unsigned)styleIndex;	// 0x31335391
// converted property getter: - (id)styleName;	// 0x31334fd1
// converted property getter: - (bool)subtotalHiddenItems;	// 0x31335371
// converted property getter: - (bool)useAutoFormatting;	// 0x31335121
@end


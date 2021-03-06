/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class WDDocument;

__attribute__((visibility("hidden")))
@interface WDTableCellProperties : NSObject {
@private
	short mWidth;	// 4 = 0x4
	short mPosition;	// 6 = 0x6
	unsigned mOriginal : 1;	// 8 = 0x8
	unsigned mTracked : 1;	// 8 = 0x8
	unsigned mResolved : 1;	// 8 = 0x8
	XXStruct_UT9PZB mOriginalProperties;	// 12 = 0xc
	XXStruct_UT9PZB mTrackedProperties;	// 128 = 0x80
	WDDocument *mDocument;	// 244 = 0xf4
}
@property(assign) short bottomMargin;	// G=0x30e785ed; S=0x30dd9b95; converted property
@property(assign) int bottomMarginType;	// G=0x30e78739; S=0x30dd9be9; converted property
@property(assign) int deleted;	// G=0x30e78f5d; S=0x30e78fed; converted property
@property(retain) id deletionDate;	// G=0x30e79911; S=0x30e7a079; converted property
@property(retain) id editDate;	// G=0x30e79a3d; S=0x30e79fb1; converted property
@property(assign) int edited;	// G=0x30e790f9; S=0x30e79189; converted property
@property(assign) BOOL firstInSetOfVerticallyMergedCells;	// G=0x30e78c61; S=0x30d38009; converted property
@property(retain) id formattingChangeDate;	// G=0x30e79b85; S=0x30e79ee9; converted property
@property(assign) int formattingChanged;	// G=0x30e79295; S=0x30e79325; converted property
@property(assign) unsigned short indexToAuthorIDOfDeletion;	// G=0x30e79431; S=0x30e794c5; converted property
@property(assign) unsigned short indexToAuthorIDOfEdit;	// G=0x30e795d1; S=0x30e79665; converted property
@property(assign) unsigned short indexToAuthorIDOfFormattingChange;	// G=0x30e79771; S=0x30e79805; converted property
@property(assign) short leftMargin;	// G=0x30d29c65; S=0x30d22edd; converted property
@property(assign) int leftMarginType;	// G=0x30e78881; S=0x30dd98ed; converted property
@property(assign) BOOL noWrap;	// G=0x30e78db1; S=0x30e78e49; converted property
@property(assign) short position;	// G=0x30e77de1; S=0x30d22ecd; converted property
@property(assign) int resolveMode;	// G=0x30e77df1; S=0x30d22a29; converted property
@property(assign) short rightMargin;	// G=0x30d29db1; S=0x30d22f31; converted property
@property(assign) int rightMarginType;	// G=0x30e789c9; S=0x30dd9941; converted property
@property(assign) short topMargin;	// G=0x30e78359; S=0x30dd9aed; converted property
@property(assign) int topMarginType;	// G=0x30e784a5; S=0x30dd9b41; converted property
@property(assign) int verticalAlignment;	// G=0x30d386bd; S=0x30d37f59; converted property
@property(assign) BOOL verticallyMergedCell;	// G=0x30e78b11; S=0x30d37fad; converted property
@property(assign) short width;	// G=0x30d28111; S=0x30d22f85; converted property
@property(assign) int widthType;	// G=0x30d28081; S=0x30d23189; converted property
- (id)init;	// 0x30d31c59
- (id)initWithDocument:(id)document;	// 0x30d22595
- (void)addProperties:(id)properties;	// 0x30e7a201
- (void)addPropertiesValues:(XXStruct_py1o6D *)values to:(XXStruct_py1o6D *)to;	// 0x30e7a245
- (id)bottomBorder;	// 0x30d3859d
// converted property getter: - (short)bottomMargin;	// 0x30e785ed
// converted property getter: - (int)bottomMarginType;	// 0x30e78739
- (void)clearShading;	// 0x30e7a139
- (id)copyWithZone:(NSZone *)zone;	// 0x30e79ccd
- (void)dealloc;	// 0x30c8512d
// converted property getter: - (int)deleted;	// 0x30e78f5d
// converted property getter: - (id)deletionDate;	// 0x30e79911
- (id)diagonalDownBorder;	// 0x30e77f81
- (id)diagonalUpBorder;	// 0x30e77e39
- (id)document;	// 0x30e77dd1
// converted property getter: - (id)editDate;	// 0x30e79a3d
// converted property getter: - (int)edited;	// 0x30e790f9
// converted property getter: - (BOOL)firstInSetOfVerticallyMergedCells;	// 0x30e78c61
// converted property getter: - (id)formattingChangeDate;	// 0x30e79b85
// converted property getter: - (int)formattingChanged;	// 0x30e79295
// converted property getter: - (unsigned short)indexToAuthorIDOfDeletion;	// 0x30e79431
// converted property getter: - (unsigned short)indexToAuthorIDOfEdit;	// 0x30e795d1
// converted property getter: - (unsigned short)indexToAuthorIDOfFormattingChange;	// 0x30e79771
- (id)insideHorizontalBorder;	// 0x30e780c9
- (id)insideVerticalBorder;	// 0x30e78211
- (BOOL)isBottomBorderOverridden;	// 0x30d29985
- (BOOL)isBottomMarginOverridden;	// 0x30e78681
- (BOOL)isBottomMarginTypeOverridden;	// 0x30e787c9
- (BOOL)isDeletedOverridden;	// 0x30e79041
- (BOOL)isDeletionDateOverridden;	// 0x30e7999d
- (BOOL)isDiagonalDownBorderOverridden;	// 0x30e78011
- (BOOL)isDiagonalUpBorderOverridden;	// 0x30e77ec9
- (BOOL)isEditDateOverridden;	// 0x30e79acd
- (BOOL)isEditedOverridden;	// 0x30e791dd
- (BOOL)isFirstInSetOfVerticallyMergedCellsOverridden;	// 0x30e78cf9
- (BOOL)isFormattingChangeDateOverridden;	// 0x30e79c15
- (BOOL)isFormattingChangedOverridden;	// 0x30e79379
- (BOOL)isIndexToAuthorIDOfDeletionOverridden;	// 0x30e79519
- (BOOL)isIndexToAuthorIDOfEditOverridden;	// 0x30e796b9
- (BOOL)isIndexToAuthorIDOfFormattingChangeOverridden;	// 0x30e79859
- (BOOL)isInsideHorizontalBorderOverridden;	// 0x30e78159
- (BOOL)isInsideVerticalBorderOverridden;	// 0x30e782a1
- (BOOL)isLeftBorderOverridden;	// 0x30d298cd
- (BOOL)isLeftMarginOverridden;	// 0x30d29bad
- (BOOL)isLeftMarginTypeOverridden;	// 0x30e78911
- (BOOL)isNoWrapOverridden;	// 0x30e78ea5
- (BOOL)isRightBorderOverridden;	// 0x30d29a3d
- (BOOL)isRightMarginOverridden;	// 0x30d29cf9
- (BOOL)isRightMarginTypeOverridden;	// 0x30e78a59
- (BOOL)isShadingOverridden;	// 0x30d29e45
- (BOOL)isTopBorderOverridden;	// 0x30d29815
- (BOOL)isTopMarginOverridden;	// 0x30e783ed
- (BOOL)isTopMarginTypeOverridden;	// 0x30e78535
- (BOOL)isVerticalAlignmentOverridden;	// 0x30d29af5
- (BOOL)isVerticallyMergedCellOverridden;	// 0x30e78ba9
- (BOOL)isWidthTypeOverridden;	// 0x30d27fc9
- (id)leftBorder;	// 0x30d3850d
// converted property getter: - (short)leftMargin;	// 0x30d29c65
// converted property getter: - (int)leftMarginType;	// 0x30e78881
- (id)mutableBottomBorder;	// 0x30d37dc1
- (id)mutableDiagonalDownBorder;	// 0x30de26d9
- (id)mutableDiagonalUpBorder;	// 0x30de260d
- (id)mutableInsideHorizontalBorder;	// 0x30db9871
- (id)mutableInsideVerticalBorder;	// 0x30db993d
- (id)mutableLeftBorder;	// 0x30d37cf5
- (id)mutableRightBorder;	// 0x30d37e8d
- (id)mutableShading;	// 0x30da4195
- (id)mutableTopBorder;	// 0x30d37c29
// converted property getter: - (BOOL)noWrap;	// 0x30e78db1
- (void)originalToTracked;	// 0x30e7a1c5
// converted property getter: - (short)position;	// 0x30e77de1
// converted property getter: - (int)resolveMode;	// 0x30e77df1
- (id)rightBorder;	// 0x30d3862d
// converted property getter: - (short)rightMargin;	// 0x30d29db1
// converted property getter: - (int)rightMarginType;	// 0x30e789c9
// converted property setter: - (void)setBottomMargin:(short)margin;	// 0x30dd9b95
// converted property setter: - (void)setBottomMarginType:(int)type;	// 0x30dd9be9
// converted property setter: - (void)setDeleted:(int)deleted;	// 0x30e78fed
// converted property setter: - (void)setDeletionDate:(id)date;	// 0x30e7a079
// converted property setter: - (void)setEditDate:(id)date;	// 0x30e79fb1
// converted property setter: - (void)setEdited:(int)edited;	// 0x30e79189
// converted property setter: - (void)setFirstInSetOfVerticallyMergedCells:(BOOL)verticallyMergedCells;	// 0x30d38009
// converted property setter: - (void)setFormattingChangeDate:(id)date;	// 0x30e79ee9
// converted property setter: - (void)setFormattingChanged:(int)changed;	// 0x30e79325
// converted property setter: - (void)setIndexToAuthorIDOfDeletion:(unsigned short)deletion;	// 0x30e794c5
// converted property setter: - (void)setIndexToAuthorIDOfEdit:(unsigned short)edit;	// 0x30e79665
// converted property setter: - (void)setIndexToAuthorIDOfFormattingChange:(unsigned short)formattingChange;	// 0x30e79805
// converted property setter: - (void)setLeftMargin:(short)margin;	// 0x30d22edd
// converted property setter: - (void)setLeftMarginType:(int)type;	// 0x30dd98ed
// converted property setter: - (void)setNoWrap:(BOOL)wrap;	// 0x30e78e49
// converted property setter: - (void)setPosition:(short)position;	// 0x30d22ecd
// converted property setter: - (void)setResolveMode:(int)mode;	// 0x30d22a29
// converted property setter: - (void)setRightMargin:(short)margin;	// 0x30d22f31
// converted property setter: - (void)setRightMarginType:(int)type;	// 0x30dd9941
// converted property setter: - (void)setTopMargin:(short)margin;	// 0x30dd9aed
// converted property setter: - (void)setTopMarginType:(int)type;	// 0x30dd9b41
// converted property setter: - (void)setVerticalAlignment:(int)alignment;	// 0x30d37f59
// converted property setter: - (void)setVerticallyMergedCell:(BOOL)cell;	// 0x30d37fad
// converted property setter: - (void)setWidth:(short)width;	// 0x30d22f85
// converted property setter: - (void)setWidthType:(int)type;	// 0x30d23189
- (id)shading;	// 0x30da4271
- (id)topBorder;	// 0x30d3847d
// converted property getter: - (short)topMargin;	// 0x30e78359
// converted property getter: - (int)topMarginType;	// 0x30e784a5
// converted property getter: - (int)verticalAlignment;	// 0x30d386bd
// converted property getter: - (BOOL)verticallyMergedCell;	// 0x30e78b11
// converted property getter: - (short)width;	// 0x30d28111
// converted property getter: - (int)widthType;	// 0x30d28081
@end


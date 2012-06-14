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
	XXStruct_a$$qTB mOriginalProperties;	// 12 = 0xc
	XXStruct_a$$qTB mTrackedProperties;	// 132 = 0x84
	WDDocument *mDocument;	// 252 = 0xfc
}
@property(assign) short bottomMargin;	// G=0x312bbc99; S=0x311c4c1d; converted property
@property(assign) int bottomMarginType;	// G=0x312bbdcd; S=0x312bbe5d; converted property
@property(assign) int deleted;	// G=0x312bc7a9; S=0x312bc839; converted property
@property(retain) id deletionDate;	// G=0x312bd0f1; S=0x312bd181; converted property
@property(retain) id editDate;	// G=0x312bd2b9; S=0x312bd349; converted property
@property(assign) int edited;	// G=0x312bc931; S=0x312bc9c1; converted property
@property(assign) BOOL firstInSetOfVerticallyMergedCells;	// G=0x312bc4d5; S=0x311522ed; converted property
@property(retain) id formattingChangeDate;	// G=0x312bd481; S=0x312bd511; converted property
@property(assign) int formattingChanged;	// G=0x312bcab9; S=0x312bcb49; converted property
@property(assign) unsigned short indexToAuthorIDOfDeletion;	// G=0x312bcc41; S=0x312bccd5; converted property
@property(assign) unsigned short indexToAuthorIDOfEdit;	// G=0x312bcdd1; S=0x312bce65; converted property
@property(assign) unsigned short indexToAuthorIDOfFormattingChange;	// G=0x312bcf61; S=0x312bcff5; converted property
@property(assign) short leftMargin;	// G=0x311c4d1d; S=0x311c4c71; converted property
@property(assign) int leftMarginType;	// G=0x312bbf55; S=0x312bbfe5; converted property
@property(assign) BOOL noWrap;	// G=0x312bc60d; S=0x312bc6a1; converted property
@property(assign) short position;	// G=0x312bb2e9; S=0x311521c9; converted property
@property(assign) int resolveMode;	// G=0x312bb2f9; S=0x31151d51; converted property
@property(assign) short rightMargin;	// G=0x311c4dad; S=0x311c4cc5; converted property
@property(assign) int rightMarginType;	// G=0x312bc0dd; S=0x312bc16d; converted property
@property(assign) int textDirection;	// G=0x312bc265; S=0x3115222d; converted property
@property(assign) short topMargin;	// G=0x312bb9dd; S=0x311c4bc9; converted property
@property(assign) int topMarginType;	// G=0x312bbb11; S=0x312bbba1; converted property
@property(assign) int verticalAlignment;	// G=0x31153671; S=0x311521d9; converted property
@property(assign) BOOL verticallyMergedCell;	// G=0x312bc39d; S=0x31152285; converted property
@property(assign) short width;	// G=0x31105365; S=0x310f40cd; converted property
@property(assign) int widthType;	// G=0x311052d5; S=0x310f40dd; converted property
- (id)init;	// 0x310e6a5d
- (id)initWithDocument:(id)document;	// 0x310f353d
- (id).cxx_construct;	// 0x310e6a59
- (void)addProperties:(id)properties;	// 0x311b5171
- (void)addPropertiesValues:(XXStruct_PkO1_D *)values to:(XXStruct_PkO1_D *)to;	// 0x311b51b9
- (id)bottomBorder;	// 0x31106d09
// converted property getter: - (short)bottomMargin;	// 0x312bbc99
// converted property getter: - (int)bottomMarginType;	// 0x312bbdcd
- (void)clearShading;	// 0x312bb36d
- (id)copyWithZone:(NSZone *)zone;	// 0x312bd649
- (void)dealloc;	// 0x31109b61
// converted property getter: - (int)deleted;	// 0x312bc7a9
// converted property getter: - (id)deletionDate;	// 0x312bd0f1
- (id)diagonalDownBorder;	// 0x312bb5b1
- (id)diagonalUpBorder;	// 0x312bb3ed
- (id)document;	// 0x312bb2d9
// converted property getter: - (id)editDate;	// 0x312bd2b9
// converted property getter: - (int)edited;	// 0x312bc931
// converted property getter: - (BOOL)firstInSetOfVerticallyMergedCells;	// 0x312bc4d5
// converted property getter: - (id)formattingChangeDate;	// 0x312bd481
// converted property getter: - (int)formattingChanged;	// 0x312bcab9
// converted property getter: - (unsigned short)indexToAuthorIDOfDeletion;	// 0x312bcc41
// converted property getter: - (unsigned short)indexToAuthorIDOfEdit;	// 0x312bcdd1
// converted property getter: - (unsigned short)indexToAuthorIDOfFormattingChange;	// 0x312bcf61
- (id)insideHorizontalBorder;	// 0x312bb775
- (id)insideVerticalBorder;	// 0x312bb8a9
- (BOOL)isBottomBorderOverridden;	// 0x31106c65
- (BOOL)isBottomMarginOverridden;	// 0x312bbd29
- (BOOL)isBottomMarginTypeOverridden;	// 0x312bbeb1
- (BOOL)isDeletedOverridden;	// 0x312bc88d
- (BOOL)isDeletionDateOverridden;	// 0x312bd215
- (BOOL)isDiagonalDownBorderOverridden;	// 0x312bb6d1
- (BOOL)isDiagonalUpBorderOverridden;	// 0x312bb50d
- (BOOL)isEditDateOverridden;	// 0x312bd3dd
- (BOOL)isEditedOverridden;	// 0x312bca15
- (BOOL)isFirstInSetOfVerticallyMergedCellsOverridden;	// 0x312bc569
- (BOOL)isFormattingChangeDateOverridden;	// 0x312bd5a5
- (BOOL)isFormattingChangedOverridden;	// 0x312bcb9d
- (BOOL)isIndexToAuthorIDOfDeletionOverridden;	// 0x312bcd2d
- (BOOL)isIndexToAuthorIDOfEditOverridden;	// 0x312bcebd
- (BOOL)isIndexToAuthorIDOfFormattingChangeOverridden;	// 0x312bd04d
- (BOOL)isInsideHorizontalBorderOverridden;	// 0x312bb805
- (BOOL)isInsideVerticalBorderOverridden;	// 0x312bb939
- (BOOL)isLeftBorderOverridden;	// 0x31106b31
- (BOOL)isLeftMarginOverridden;	// 0x31106f71
- (BOOL)isLeftMarginTypeOverridden;	// 0x312bc039
- (BOOL)isNoWrapOverridden;	// 0x312bc705
- (BOOL)isRightBorderOverridden;	// 0x31106d99
- (BOOL)isRightMarginOverridden;	// 0x31107015
- (BOOL)isRightMarginTypeOverridden;	// 0x312bc1c1
- (BOOL)isShadingOverridden;	// 0x311070b9
- (BOOL)isTextDirectionOverridden;	// 0x312bc2f9
- (BOOL)isTopBorderOverridden;	// 0x311069dd
- (BOOL)isTopMarginOverridden;	// 0x312bba6d
- (BOOL)isTopMarginTypeOverridden;	// 0x312bbbf5
- (BOOL)isVerticalAlignmentOverridden;	// 0x31106ecd
- (BOOL)isVerticallyMergedCellOverridden;	// 0x312bc431
- (BOOL)isWidthTypeOverridden;	// 0x31105231
- (id)leftBorder;	// 0x31106bd5
// converted property getter: - (short)leftMargin;	// 0x311c4d1d
// converted property getter: - (int)leftMarginType;	// 0x312bbf55
- (id)mutableBottomBorder;	// 0x310f42b1
- (id)mutableDiagonalDownBorder;	// 0x312bb641
- (id)mutableDiagonalUpBorder;	// 0x312bb47d
- (id)mutableInsideHorizontalBorder;	// 0x31197819
- (id)mutableInsideVerticalBorder;	// 0x311978a9
- (id)mutableLeftBorder;	// 0x310f4221
- (id)mutableRightBorder;	// 0x310f4341
- (id)mutableShading;	// 0x31152f75
- (id)mutableTopBorder;	// 0x310f4191
// converted property getter: - (BOOL)noWrap;	// 0x312bc60d
- (void)originalToTracked;	// 0x312bb341
// converted property getter: - (short)position;	// 0x312bb2e9
// converted property getter: - (int)resolveMode;	// 0x312bb2f9
- (id)rightBorder;	// 0x31106e3d
// converted property getter: - (short)rightMargin;	// 0x311c4dad
// converted property getter: - (int)rightMarginType;	// 0x312bc0dd
// converted property setter: - (void)setBottomMargin:(short)margin;	// 0x311c4c1d
// converted property setter: - (void)setBottomMarginType:(int)type;	// 0x312bbe5d
// converted property setter: - (void)setDeleted:(int)deleted;	// 0x312bc839
// converted property setter: - (void)setDeletionDate:(id)date;	// 0x312bd181
// converted property setter: - (void)setEditDate:(id)date;	// 0x312bd349
// converted property setter: - (void)setEdited:(int)edited;	// 0x312bc9c1
// converted property setter: - (void)setFirstInSetOfVerticallyMergedCells:(BOOL)verticallyMergedCells;	// 0x311522ed
// converted property setter: - (void)setFormattingChangeDate:(id)date;	// 0x312bd511
// converted property setter: - (void)setFormattingChanged:(int)changed;	// 0x312bcb49
// converted property setter: - (void)setIndexToAuthorIDOfDeletion:(unsigned short)deletion;	// 0x312bccd5
// converted property setter: - (void)setIndexToAuthorIDOfEdit:(unsigned short)edit;	// 0x312bce65
// converted property setter: - (void)setIndexToAuthorIDOfFormattingChange:(unsigned short)formattingChange;	// 0x312bcff5
// converted property setter: - (void)setLeftMargin:(short)margin;	// 0x311c4c71
// converted property setter: - (void)setLeftMarginType:(int)type;	// 0x312bbfe5
// converted property setter: - (void)setNoWrap:(BOOL)wrap;	// 0x312bc6a1
// converted property setter: - (void)setPosition:(short)position;	// 0x311521c9
// converted property setter: - (void)setResolveMode:(int)mode;	// 0x31151d51
// converted property setter: - (void)setRightMargin:(short)margin;	// 0x311c4cc5
// converted property setter: - (void)setRightMarginType:(int)type;	// 0x312bc16d
// converted property setter: - (void)setTextDirection:(int)direction;	// 0x3115222d
// converted property setter: - (void)setTopMargin:(short)margin;	// 0x311c4bc9
// converted property setter: - (void)setTopMarginType:(int)type;	// 0x312bbba1
// converted property setter: - (void)setVerticalAlignment:(int)alignment;	// 0x311521d9
// converted property setter: - (void)setVerticallyMergedCell:(BOOL)cell;	// 0x31152285
// converted property setter: - (void)setWidth:(short)width;	// 0x310f40cd
// converted property setter: - (void)setWidthType:(int)type;	// 0x310f40dd
- (id)shading;	// 0x311538fd
// converted property getter: - (int)textDirection;	// 0x312bc265
- (id)topBorder;	// 0x31106a81
// converted property getter: - (short)topMargin;	// 0x312bb9dd
// converted property getter: - (int)topMarginType;	// 0x312bbb11
// converted property getter: - (int)verticalAlignment;	// 0x31153671
// converted property getter: - (BOOL)verticallyMergedCell;	// 0x312bc39d
// converted property getter: - (short)width;	// 0x31105365
// converted property getter: - (int)widthType;	// 0x311052d5
@end

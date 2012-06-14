/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class WDDocument;

__attribute__((visibility("hidden")))
@interface WDTableProperties : NSObject <NSCopying> {
@private
	WDDocument *mDocument;	// 4 = 0x4
	unsigned mOriginal : 1;	// 8 = 0x8
	unsigned mTracked : 1;	// 8 = 0x8
	unsigned mResolved : 1;	// 8 = 0x8
	XXStruct_hOXagA mOriginalProperties;	// 12 = 0xc
	XXStruct_hOXagA mTrackedProperties;	// 148 = 0x94
}
@property(assign) int alignment;	// G=0x3460c90d; S=0x344b3719; converted property
@property(retain) id baseStyle;	// G=0x3450d55d; S=0x344c3ded; converted property
@property(assign) long bottomDistanceFromText;	// G=0x3460d5ad; S=0x34573335; converted property
@property(assign) short cellSpacing;	// G=0x3460cf79; S=0x3454ba8d; converted property
@property(assign) int cellSpacingType;	// G=0x3460d0c5; S=0x3457105d; converted property
@property(assign) int deleted;	// G=0x3460d6f5; S=0x3460d785; converted property
@property(retain) id deletionDate;	// G=0x3460e0c1; S=0x3460e829; converted property
@property(retain) id editDate;	// G=0x3460e209; S=0x3460e761; converted property
@property(assign) int edited;	// G=0x3460d895; S=0x3460d925; converted property
@property(retain) id formattingChangeDate;	// G=0x3460e341; S=0x3460e699; converted property
@property(assign) int formattingChanged;	// G=0x3460da35; S=0x3460dac5; converted property
@property(assign) int horizontalAnchor;	// G=0x3455da39; S=0x3455d811; converted property
@property(assign) long horizontalPosition;	// G=0x344ba7fd; S=0x3455d8c1; converted property
@property(assign) short indent;	// G=0x3460cce5; S=0x344c3e41; converted property
@property(assign) int indentType;	// G=0x3460ce31; S=0x344c3e99; converted property
@property(assign) unsigned short indexToAuthorIDOfDeletion;	// G=0x3460dbd5; S=0x3460dc69; converted property
@property(assign) unsigned short indexToAuthorIDOfEdit;	// G=0x3460dd79; S=0x3460de0d; converted property
@property(assign) unsigned short indexToAuthorIDOfFormattingChange;	// G=0x3460df1d; S=0x3460dfb1; converted property
@property(assign) int justification;	// G=0x3460c7c5; S=0x344c9b21; converted property
@property(assign) long leftDistanceFromText;	// G=0x344ba88d; S=0x3456aa6d; converted property
@property(assign) int resolveMode;	// G=0x3460c635; S=0x344b3239; converted property
@property(assign) long rightDistanceFromText;	// G=0x3460d465; S=0x3456aac5; converted property
@property(assign) long topDistanceFromText;	// G=0x3460d2c5; S=0x3460d355; converted property
@property(assign) int verticalAnchor;	// G=0x3455d9a9; S=0x3455d7b9; converted property
@property(assign) long verticalPosition;	// G=0x3455d919; S=0x3455d869; converted property
@property(assign) long width;	// G=0x3460ca55; S=0x344c9b79; converted property
@property(assign) int widthType;	// G=0x3460cb9d; S=0x344c9bd1; converted property
- (id)init;	// 0x3460ed11
- (id)initWithDocument:(id)document;	// 0x344b2dd9
// converted property getter: - (int)alignment;	// 0x3460c90d
// converted property getter: - (id)baseStyle;	// 0x3450d55d
- (id)bottomBorder;	// 0x344ca185
// converted property getter: - (long)bottomDistanceFromText;	// 0x3460d5ad
// converted property getter: - (short)cellSpacing;	// 0x3460cf79
// converted property getter: - (int)cellSpacingType;	// 0x3460d0c5
- (void)clearBottomBorder;	// 0x3460eb01
- (void)clearInsideHorizontalBorder;	// 0x3460e9a1
- (void)clearInsideVerticalBorder;	// 0x3460e8f1
- (void)clearLeftBorder;	// 0x3460ebb1
- (void)clearRightBorder;	// 0x3460ea51
- (void)clearShading;	// 0x344b3771
- (void)clearTopBorder;	// 0x3460ec61
- (id)copyWithZone:(NSZone *)zone;	// 0x3460e489
- (void)dealloc;	// 0x34416ed1
// converted property getter: - (int)deleted;	// 0x3460d6f5
// converted property getter: - (id)deletionDate;	// 0x3460e0c1
- (id)document;	// 0x344b3a41
// converted property getter: - (id)editDate;	// 0x3460e209
// converted property getter: - (int)edited;	// 0x3460d895
// converted property getter: - (id)formattingChangeDate;	// 0x3460e341
// converted property getter: - (int)formattingChanged;	// 0x3460da35
// converted property getter: - (int)horizontalAnchor;	// 0x3455da39
// converted property getter: - (long)horizontalPosition;	// 0x344ba7fd
// converted property getter: - (short)indent;	// 0x3460cce5
// converted property getter: - (int)indentType;	// 0x3460ce31
// converted property getter: - (unsigned short)indexToAuthorIDOfDeletion;	// 0x3460dbd5
// converted property getter: - (unsigned short)indexToAuthorIDOfEdit;	// 0x3460dd79
// converted property getter: - (unsigned short)indexToAuthorIDOfFormattingChange;	// 0x3460df1d
- (id)insideHorizontalBorder;	// 0x344ca35d
- (id)insideVerticalBorder;	// 0x344ca3ed
- (BOOL)isAlignmentOverridden;	// 0x3460c99d
- (BOOL)isBaseStyleOverridden;	// 0x344b56f9
- (BOOL)isBottomBorderOverridden;	// 0x344b9a39
- (BOOL)isBottomDistanceFromTextOverridden;	// 0x3460d63d
- (BOOL)isCellSpacingOverridden;	// 0x3460d00d
- (BOOL)isCellSpacingTypeOverridden;	// 0x3460d155
- (BOOL)isDeletedOverridden;	// 0x3460d7dd
- (BOOL)isDeletionDateOverridden;	// 0x3460e151
- (BOOL)isEditDateOverridden;	// 0x3460e299
- (BOOL)isEditedOverridden;	// 0x3460d97d
- (BOOL)isFormattingChangeDateOverridden;	// 0x3460e3d1
- (BOOL)isFormattingChangedOverridden;	// 0x3460db1d
- (BOOL)isHorizontalAnchorOverridden;	// 0x344b5939
- (BOOL)isHorizontalPositionOverridden;	// 0x344b5aa9
- (BOOL)isIndentOverridden;	// 0x3460cd79
- (BOOL)isIndentTypeOverridden;	// 0x3460cec1
- (BOOL)isIndexToAuthorIDOfDeletionOverridden;	// 0x3460dcc1
- (BOOL)isIndexToAuthorIDOfEditOverridden;	// 0x3460de65
- (BOOL)isIndexToAuthorIDOfFormattingChangeOverridden;	// 0x3460e009
- (BOOL)isInsideHorizontalBorderOverridden;	// 0x344b9ba9
- (BOOL)isInsideVerticalBorderOverridden;	// 0x344b9c61
- (BOOL)isJustificationOverridden;	// 0x3460c855
- (BOOL)isLeftBorderOverridden;	// 0x344b9981
- (BOOL)isLeftDistanceFromTextOverridden;	// 0x3460d20d
- (BOOL)isRightBorderOverridden;	// 0x344b9af1
- (BOOL)isRightDistanceFromTextOverridden;	// 0x3460d4f5
- (BOOL)isShadingOverridden;	// 0x3460c70d
- (BOOL)isTableFloating;	// 0x344b586d
- (BOOL)isTopBorderOverridden;	// 0x344b98c9
- (BOOL)isTopDistanceFromTextOverridden;	// 0x3460d3ad
- (BOOL)isVerticalAnchorOverridden;	// 0x344b59f1
- (BOOL)isVerticalPositionOverridden;	// 0x344b5b61
- (BOOL)isWidthOverridden;	// 0x3460cae5
- (BOOL)isWidthTypeOverridden;	// 0x3460cc2d
// converted property getter: - (int)justification;	// 0x3460c7c5
- (id)leftBorder;	// 0x344ca0f5
// converted property getter: - (long)leftDistanceFromText;	// 0x344ba88d
- (void)moveOrignalToTracked;	// 0x3460ed51
- (id)mutableBottomBorder;	// 0x344c97d1
- (id)mutableInsideHorizontalBorder;	// 0x344c9979
- (id)mutableInsideVerticalBorder;	// 0x344c9a4d
- (id)mutableLeftBorder;	// 0x344c96fd
- (id)mutableRightBorder;	// 0x344c98a5
- (id)mutableShading;	// 0x3456ab35
- (id)mutableTopBorder;	// 0x344c9629
// converted property getter: - (int)resolveMode;	// 0x3460c635
- (id)rightBorder;	// 0x344ca215
// converted property getter: - (long)rightDistanceFromText;	// 0x3460d465
// converted property setter: - (void)setAlignment:(int)alignment;	// 0x344b3719
// converted property setter: - (void)setBaseStyle:(id)style;	// 0x344c3ded
// converted property setter: - (void)setBottomDistanceFromText:(long)text;	// 0x34573335
// converted property setter: - (void)setCellSpacing:(short)spacing;	// 0x3454ba8d
// converted property setter: - (void)setCellSpacingType:(int)type;	// 0x3457105d
// converted property setter: - (void)setDeleted:(int)deleted;	// 0x3460d785
// converted property setter: - (void)setDeletionDate:(id)date;	// 0x3460e829
// converted property setter: - (void)setEditDate:(id)date;	// 0x3460e761
// converted property setter: - (void)setEdited:(int)edited;	// 0x3460d925
// converted property setter: - (void)setFormattingChangeDate:(id)date;	// 0x3460e699
// converted property setter: - (void)setFormattingChanged:(int)changed;	// 0x3460dac5
// converted property setter: - (void)setHorizontalAnchor:(int)anchor;	// 0x3455d811
// converted property setter: - (void)setHorizontalPosition:(long)position;	// 0x3455d8c1
// converted property setter: - (void)setIndent:(short)indent;	// 0x344c3e41
// converted property setter: - (void)setIndentType:(int)type;	// 0x344c3e99
// converted property setter: - (void)setIndexToAuthorIDOfDeletion:(unsigned short)deletion;	// 0x3460dc69
// converted property setter: - (void)setIndexToAuthorIDOfEdit:(unsigned short)edit;	// 0x3460de0d
// converted property setter: - (void)setIndexToAuthorIDOfFormattingChange:(unsigned short)formattingChange;	// 0x3460dfb1
// converted property setter: - (void)setJustification:(int)justification;	// 0x344c9b21
// converted property setter: - (void)setLeftDistanceFromText:(long)text;	// 0x3456aa6d
// converted property setter: - (void)setResolveMode:(int)mode;	// 0x344b3239
// converted property setter: - (void)setRightDistanceFromText:(long)text;	// 0x3456aac5
// converted property setter: - (void)setTopDistanceFromText:(long)text;	// 0x3460d355
// converted property setter: - (void)setVerticalAnchor:(int)anchor;	// 0x3455d7b9
// converted property setter: - (void)setVerticalPosition:(long)position;	// 0x3455d869
// converted property setter: - (void)setWidth:(long)width;	// 0x344c9b79
// converted property setter: - (void)setWidthType:(int)type;	// 0x344c9bd1
- (id)shading;	// 0x3460c67d
- (id)topBorder;	// 0x344ca065
// converted property getter: - (long)topDistanceFromText;	// 0x3460d2c5
// converted property getter: - (int)verticalAnchor;	// 0x3455d9a9
// converted property getter: - (long)verticalPosition;	// 0x3455d919
// converted property getter: - (long)width;	// 0x3460ca55
// converted property getter: - (int)widthType;	// 0x3460cb9d
@end


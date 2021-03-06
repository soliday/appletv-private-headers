/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADProperties.h"

@class OADTextWarp, OADTextBodyAutoFit;

__attribute__((visibility("hidden")))
@interface OADTextBodyProperties : OADProperties {
@private
	OADTextBodyAutoFit *mAutoFit;	// 12 = 0xc
	OADTextWarp *mTextWarp;	// 16 = 0x10
	double mTopInset;	// 20 = 0x14
	double mLeftInset;	// 28 = 0x1c
	double mBottomInset;	// 36 = 0x24
	double mRightInset;	// 44 = 0x2c
	double mRotation;	// 52 = 0x34
	double mColumnSpacing;	// 60 = 0x3c
	unsigned short mColumnCount;	// 68 = 0x44
	unsigned short mTextBodyId;	// 70 = 0x46
	unsigned char mTextAnchorType;	// 72 = 0x48
	unsigned char mVerticalType;	// 73 = 0x49
	unsigned char mWrapType;	// 74 = 0x4a
	unsigned char mVerticalOverflowType;	// 75 = 0x4b
	unsigned char mHorizontalOverflowType;	// 76 = 0x4c
	unsigned mRepectFirstLastParagraphSpacing : 1;	// 77 = 0x4d
	unsigned mIsUpright : 1;	// 77 = 0x4d
	unsigned mIsAnchorCenter : 1;	// 77 = 0x4d
	unsigned mIsLeftToRightColumns : 1;	// 77 = 0x4d
	unsigned mHasVerticalOverflowType : 1;	// 77 = 0x4d
	unsigned mHasHorizontalOverflowType : 1;	// 77 = 0x4d
	unsigned mHasTextBodyId : 1;	// 77 = 0x4d
	unsigned mHasVerticalType : 1;	// 77 = 0x4d
	unsigned mHasWrapType : 1;	// 78 = 0x4e
	unsigned mHasTextAnchorType : 1;	// 78 = 0x4e
	unsigned mHasIsAnchorCenter : 1;	// 78 = 0x4e
	unsigned mHasIsUpright : 1;	// 78 = 0x4e
	unsigned mHasRotation : 1;	// 78 = 0x4e
	unsigned mHasColumnCount : 1;	// 78 = 0x4e
	unsigned mHasColumnSpacing : 1;	// 78 = 0x4e
	unsigned mHasIsLeftToRightColumns : 1;	// 78 = 0x4e
	unsigned mHasRepectFirstLastParagraphSpacing : 1;	// 79 = 0x4f
	unsigned mHasTopInset : 1;	// 79 = 0x4f
	unsigned mHasLeftInset : 1;	// 79 = 0x4f
	unsigned mHasRightInset : 1;	// 79 = 0x4f
	unsigned mHasBottomInset : 1;	// 79 = 0x4f
}
@property(retain) id autoFit;	// G=0x30ca4ded; S=0x30ca0831; converted property
@property(assign) double bottomInset;	// G=0x30be6255; S=0x30ca0715; converted property
@property(assign) int columnCount;	// G=0x30ca4dbd; S=0x30ca076d; converted property
@property(assign) double columnSpacing;	// G=0x30c67c31; S=0x30ca0791; converted property
@property(assign) int horizontalOverflowType;	// G=0x30e8b3c9; S=0x30c654ad; converted property
@property(assign) BOOL isAnchorCenter;	// G=0x30ca4ec9; S=0x30ca08d9; converted property
@property(assign) BOOL isLeftToRightColumns;	// G=0x30c67c69; S=0x30ca07bd; converted property
@property(assign) BOOL isUpright;	// G=0x30c67b8d; S=0x30c65369; converted property
@property(assign) double leftInset;	// G=0x30be61e1; S=0x30ca06e9; converted property
@property(assign) BOOL respectLastFirstLineSpacing;	// G=0x30e8b435; S=0x30ca0689; converted property
@property(assign) double rightInset;	// G=0x30be62c9; S=0x30ca0741; converted property
@property(assign) double rotation;	// G=0x30ca4f05; S=0x30ca0935; converted property
@property(assign) int textAnchorType;	// G=0x30be6351; S=0x30ca090d; converted property
@property(assign) int textBodyId;	// G=0x30e8a765; S=0x30e8a775; converted property
@property(retain) id textWarp;	// G=0x30da1039; S=0x30ca0899; converted property
@property(assign) double topInset;	// G=0x30be5f25; S=0x30ca06bd; converted property
@property(assign) int verticalOverflowType;	// G=0x30c67a91; S=0x30c654d1; converted property
@property(assign) int verticalType;	// G=0x30c679e9; S=0x30c65459; converted property
@property(assign) int wrapType;	// G=0x30ca4e99; S=0x30ca0875; converted property
+ (id)defaultEscherWordArtProperties;	// 0x30d61225
+ (id)defaultProperties;	// 0x30bec62d
- (id)init;	// 0x30bec601
- (id)initWithDefaults;	// 0x30ca0465
// converted property getter: - (id)autoFit;	// 0x30ca4ded
// converted property getter: - (double)bottomInset;	// 0x30be6255
// converted property getter: - (int)columnCount;	// 0x30ca4dbd
// converted property getter: - (double)columnSpacing;	// 0x30c67c31
- (void)dealloc;	// 0x30c64321
- (BOOL)hasAutoFit;	// 0x30c67979
- (BOOL)hasBottomInset;	// 0x30be6219
- (BOOL)hasColumnCount;	// 0x30c678c9
- (BOOL)hasColumnSpacing;	// 0x30c67905
- (BOOL)hasHorizontalOverflowType;	// 0x30e8b3f9
- (BOOL)hasIsAnchorCenter;	// 0x30c67b15
- (BOOL)hasIsLeftToRightColumns;	// 0x30c67941
- (BOOL)hasIsUpright;	// 0x30c67b51
- (BOOL)hasLeftInset;	// 0x30be61a5
- (BOOL)hasRespectLastFirstLineSpacing;	// 0x30c6788d
- (BOOL)hasRightInset;	// 0x30be628d
- (BOOL)hasRotation;	// 0x30c67bc9
- (BOOL)hasTextAnchorType;	// 0x30be6381
- (BOOL)hasTextBodyId;	// 0x30c67ac1
- (BOOL)hasTextWarp;	// 0x30c67add
- (BOOL)hasTopInset;	// 0x30be5ee9
- (BOOL)hasVerticalOverflowType;	// 0x30c67a55
- (BOOL)hasVerticalType;	// 0x30c679b1
- (BOOL)hasWrapType;	// 0x30c67a19
- (unsigned)hash;	// 0x30e8b1b9
// converted property getter: - (int)horizontalOverflowType;	// 0x30e8b3c9
// converted property getter: - (BOOL)isAnchorCenter;	// 0x30ca4ec9
- (BOOL)isEqual:(id)equal;	// 0x30e8a925
// converted property getter: - (BOOL)isLeftToRightColumns;	// 0x30c67c69
// converted property getter: - (BOOL)isUpright;	// 0x30c67b8d
// converted property getter: - (double)leftInset;	// 0x30be61e1
- (void)removeUnnecessaryOverrides;	// 0x30c66eed
// converted property getter: - (BOOL)respectLastFirstLineSpacing;	// 0x30e8b435
// converted property getter: - (double)rightInset;	// 0x30be62c9
// converted property getter: - (double)rotation;	// 0x30ca4f05
// converted property setter: - (void)setAutoFit:(id)fit;	// 0x30ca0831
// converted property setter: - (void)setBottomInset:(double)inset;	// 0x30ca0715
// converted property setter: - (void)setColumnCount:(int)count;	// 0x30ca076d
// converted property setter: - (void)setColumnSpacing:(double)spacing;	// 0x30ca0791
// converted property setter: - (void)setHorizontalOverflowType:(int)type;	// 0x30c654ad
// converted property setter: - (void)setIsAnchorCenter:(BOOL)center;	// 0x30ca08d9
// converted property setter: - (void)setIsLeftToRightColumns:(BOOL)rightColumns;	// 0x30ca07bd
// converted property setter: - (void)setIsUpright:(BOOL)upright;	// 0x30c65369
// converted property setter: - (void)setLeftInset:(double)inset;	// 0x30ca06e9
// converted property setter: - (void)setRespectLastFirstLineSpacing:(BOOL)spacing;	// 0x30ca0689
// converted property setter: - (void)setRightInset:(double)inset;	// 0x30ca0741
// converted property setter: - (void)setRotation:(double)rotation;	// 0x30ca0935
// converted property setter: - (void)setTextAnchorType:(int)type;	// 0x30ca090d
// converted property setter: - (void)setTextBodyId:(int)anId;	// 0x30e8a775
// converted property setter: - (void)setTextWarp:(id)warp;	// 0x30ca0899
// converted property setter: - (void)setTopInset:(double)inset;	// 0x30ca06bd
// converted property setter: - (void)setVerticalOverflowType:(int)type;	// 0x30c654d1
// converted property setter: - (void)setVerticalType:(int)type;	// 0x30c65459
// converted property setter: - (void)setWrapType:(int)type;	// 0x30ca0875
// converted property getter: - (int)textAnchorType;	// 0x30be6351
// converted property getter: - (int)textBodyId;	// 0x30e8a765
// converted property getter: - (id)textWarp;	// 0x30da1039
// converted property getter: - (double)topInset;	// 0x30be5f25
// converted property getter: - (int)verticalOverflowType;	// 0x30c67a91
// converted property getter: - (int)verticalType;	// 0x30c679e9
// converted property getter: - (int)wrapType;	// 0x30ca4e99
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class EDContentFormatsCollection, EDStylesCollection, EDCollection, EDLinksCollection, EDFontsCollection, EDColorsCollection, EDTableStylesCollection;

__attribute__((visibility("hidden")))
@interface EDResources : NSObject {
@private
	EDCollection *mStrings;	// 4 = 0x4
	EDContentFormatsCollection *mContentFormats;	// 8 = 0x8
	EDFontsCollection *mFonts;	// 12 = 0xc
	EDCollection *mAlignmentInfos;	// 16 = 0x10
	EDStylesCollection *mStyles;	// 20 = 0x14
	EDColorsCollection *mColors;	// 24 = 0x18
	EDColorsCollection *mThemes;	// 28 = 0x1c
	EDCollection *mNames;	// 32 = 0x20
	EDLinksCollection *mLinks;	// 36 = 0x24
	EDCollection *mBorders;	// 40 = 0x28
	EDCollection *mBorder;	// 44 = 0x2c
	EDCollection *mFills;	// 48 = 0x30
	EDCollection *mDifferentialStyles;	// 52 = 0x34
	EDTableStylesCollection *mTableStyles;	// 56 = 0x38
}
@property(retain) id colors;	// G=0x310c420d; S=0x3109e841; converted property
@property(retain) id themes;	// G=0x3110bfe9; S=0x3119c811; converted property
- (id)initWithStringOptimization:(bool)stringOptimization;	// 0x310952e5
- (id)alignmentInfos;	// 0x3109c855
- (id)border;	// 0x3109cd79
- (id)borders;	// 0x3109d095
// converted property getter: - (id)colors;	// 0x310c420d
- (id)contentFormats;	// 0x31099c59
- (void)dealloc;	// 0x310c4ff1
- (id)differentialStyles;	// 0x3110e751
- (id)fills;	// 0x3109d34d
- (id)fonts;	// 0x310988ad
- (id)links;	// 0x310a1509
- (id)names;	// 0x310a18cd
// converted property setter: - (void)setColors:(id)colors;	// 0x3109e841
// converted property setter: - (void)setThemes:(id)themes;	// 0x3119c811
- (id)strings;	// 0x310a44ed
- (id)styles;	// 0x3109b5b1
- (id)tableStyles;	// 0x3110e8c1
// converted property getter: - (id)themes;	// 0x3110bfe9
@end

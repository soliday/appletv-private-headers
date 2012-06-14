/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class WDTableCellProperties, WDCharacterProperties, WDTableRowProperties, WDTableStyleOverride, WDStyleSheet, NSString, WDParagraphProperties;

__attribute__((visibility("hidden")))
@interface WDStyle : NSObject <NSCopying> {
@private
	WDParagraphProperties *mParagraphProperties;	// 4 = 0x4
	WDCharacterProperties *mCharacterProperties;	// 8 = 0x8
	WDTableRowProperties *mTableRowProperties;	// 12 = 0xc
	WDTableCellProperties *mTableCellProperties;	// 16 = 0x10
	WDTableStyleOverride *mTableStyleOverrides[12];	// 20 = 0x14
	WDStyleSheet *mStyleSheet;	// 68 = 0x44
	WDStyle *mBaseStyle;	// 72 = 0x48
	WDStyle *mNextStyle;	// 76 = 0x4c
	BOOL mHidden;	// 80 = 0x50
	NSString *mName;	// 84 = 0x54
	NSString *mId;	// 88 = 0x58
	int mStyleType;	// 92 = 0x5c
}
@property(retain) id baseStyle;	// G=0x31177159; S=0x3120fa95; converted property
@property(assign) BOOL hidden;	// G=0x31378fb9; S=0x3120fa85; converted property
@property(retain) id name;	// G=0x31210ea5; S=0x3120f621; converted property
@property(retain) id nextStyle;	// G=0x31378fc9; S=0x3120faad; converted property
+ (id)newIDFromName:(id)name;	// 0x31378fd9
- (id)initWithStyleSheet:(id)styleSheet id:(id)anId type:(int)type;	// 0x3120f401
// converted property getter: - (id)baseStyle;	// 0x31177159
- (id)characterProperties;	// 0x311819fd
- (id)copyWithZone:(NSZone *)zone;	// 0x313790e5
- (void)dealloc;	// 0x31188ce9
// converted property getter: - (BOOL)hidden;	// 0x31378fb9
- (id)id;	// 0x312726c5
- (BOOL)isAnythingOverridden;	// 0x31379251
// converted property getter: - (id)name;	// 0x31210ea5
// converted property getter: - (id)nextStyle;	// 0x31378fc9
- (id)paragraphProperties;	// 0x31177169
// converted property setter: - (void)setBaseStyle:(id)style;	// 0x3120fa95
// converted property setter: - (void)setHidden:(BOOL)hidden;	// 0x3120fa85
// converted property setter: - (void)setName:(id)name;	// 0x3120f621
// converted property setter: - (void)setNextStyle:(id)style;	// 0x3120faad
- (id)styleSheet;	// 0x3120fabd
- (id)tableCellProperties;	// 0x31233f95
- (id)tableProperties;	// 0x312728a1
- (id)tableRowProperties;	// 0x31233ddd
- (id)tableStyleOverrideForPart:(int)part;	// 0x31234275
- (int)type;	// 0x31210e95
@end


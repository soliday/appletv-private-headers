/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableString, WDCharacterProperties, WDOfficeArt, WDParagraphProperties;

__attribute__((visibility("hidden")))
@interface WDListLevel : NSObject {
@private
	WDParagraphProperties *mParagraphProperties;	// 4 = 0x4
	WDCharacterProperties *mCharacterProperties;	// 8 = 0x8
	WDOfficeArt *mImage;	// 12 = 0xc
	int mStartNumber;	// 16 = 0x10
	int mNumberFormat;	// 20 = 0x14
	BOOL mRestartNumbering;	// 24 = 0x18
	BOOL mLegal;	// 25 = 0x19
	int mSuffix;	// 28 = 0x1c
	NSMutableString *mText;	// 32 = 0x20
	BOOL mLegacy;	// 36 = 0x24
	int mLegacySpace;	// 40 = 0x28
	int mLegacyIndent;	// 44 = 0x2c
	int mJustification;	// 48 = 0x30
}
@property(retain) id image;	// G=0x3576e7f5; S=0x3563b44d; converted property
@property(assign) int justification;	// G=0x3576e875; S=0x3561b6b1; converted property
@property(assign) BOOL legacy;	// G=0x3576e845; S=0x3561b681; converted property
@property(assign) long legacyIndent;	// G=0x3576e865; S=0x3561b6a1; converted property
@property(assign) long legacySpace;	// G=0x3576e855; S=0x3561b691; converted property
@property(assign) BOOL legal;	// G=0x3576e819; S=0x3561b63d; converted property
@property(assign) int numberFormat;	// G=0x35582765; S=0x3561b61d; converted property
@property(assign) BOOL restartNumbering;	// G=0x3576e805; S=0x3561b62d; converted property
@property(assign) long startNumber;	// G=0x35582219; S=0x3561b60d; converted property
@property(assign) int suffix;	// G=0x3576e82d; S=0x3561b64d; converted property
@property(retain) id text;	// G=0x355827f1; S=0x3561b65d; converted property
- (id)initWithDocument:(id)document;	// 0x3561b0a9
- (id)characterProperties;	// 0x35582f25
- (void)dealloc;	// 0x355838cd
// converted property getter: - (id)image;	// 0x3576e7f5
- (BOOL)imageBullet;	// 0x3576e8ad
- (BOOL)imageBulletOverridden;	// 0x3576e889
// converted property getter: - (int)justification;	// 0x3576e875
- (BOOL)justificationOverridden;	// 0x3576e885
// converted property getter: - (BOOL)legacy;	// 0x3576e845
// converted property getter: - (long)legacyIndent;	// 0x3576e865
// converted property getter: - (long)legacySpace;	// 0x3576e855
// converted property getter: - (BOOL)legal;	// 0x3576e819
- (BOOL)legalOverridden;	// 0x3576e829
// converted property getter: - (int)numberFormat;	// 0x35582765
- (BOOL)numberFormatOverridden;	// 0x3576e7f1
- (id)paragraphProperties;	// 0x355822ad
// converted property getter: - (BOOL)restartNumbering;	// 0x3576e805
- (BOOL)restartNumberingOverridden;	// 0x3576e815
// converted property setter: - (void)setImage:(id)image;	// 0x3563b44d
// converted property setter: - (void)setJustification:(int)justification;	// 0x3561b6b1
// converted property setter: - (void)setLegacy:(BOOL)legacy;	// 0x3561b681
// converted property setter: - (void)setLegacyIndent:(long)indent;	// 0x3561b6a1
// converted property setter: - (void)setLegacySpace:(long)space;	// 0x3561b691
// converted property setter: - (void)setLegal:(BOOL)legal;	// 0x3561b63d
// converted property setter: - (void)setNumberFormat:(int)format;	// 0x3561b61d
// converted property setter: - (void)setRestartNumbering:(BOOL)numbering;	// 0x3561b62d
// converted property setter: - (void)setStartNumber:(long)number;	// 0x3561b60d
// converted property setter: - (void)setSuffix:(int)suffix;	// 0x3561b64d
// converted property setter: - (void)setText:(id)text;	// 0x3561b65d
// converted property getter: - (long)startNumber;	// 0x35582219
- (BOOL)startNumberOverridden;	// 0x3576e7ed
// converted property getter: - (int)suffix;	// 0x3576e82d
- (BOOL)suffixOverridden;	// 0x3576e83d
// converted property getter: - (id)text;	// 0x355827f1
- (BOOL)textOverridden;	// 0x3576e841
@end


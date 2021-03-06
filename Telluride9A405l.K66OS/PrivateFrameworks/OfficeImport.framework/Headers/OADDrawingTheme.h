/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class OADFontScheme, OADDefaultProperties, OADColorMap, OADStyleMatrix, OADColorScheme;
@protocol OADColorPalette;

__attribute__((visibility("hidden")))
@interface OADDrawingTheme : NSObject {
@private
	OADDefaultProperties *mShapeDefaults;	// 4 = 0x4
	OADDefaultProperties *mLineDefaults;	// 8 = 0x8
	OADDefaultProperties *mTextDefaults;	// 12 = 0xc
	OADStyleMatrix *mStyleMatrix;	// 16 = 0x10
	OADFontScheme *mFontScheme;	// 20 = 0x14
	OADColorScheme *mColorScheme;	// 24 = 0x18
	OADColorMap *mColorMap;	// 28 = 0x1c
	id<OADColorPalette> mColorPalette;	// 32 = 0x20
}
@property(readonly, assign, nonatomic) OADColorMap *colorMap;	// G=0x30e90d31; @synthesize=mColorMap
@property(retain, nonatomic) id<OADColorPalette> colorPalette;	// G=0x30e90d21; S=0x30e90f49; @synthesize=mColorPalette
@property(readonly, assign, nonatomic) OADColorScheme *colorScheme;	// G=0x30e90d41; @synthesize=mColorScheme
@property(readonly, assign, nonatomic) OADFontScheme *fontScheme;	// G=0x30e90d51; @synthesize=mFontScheme
@property(readonly, assign, nonatomic) OADDefaultProperties *lineDefaults;	// G=0x30e90d81; @synthesize=mLineDefaults
@property(readonly, assign, nonatomic) OADDefaultProperties *shapeDefaults;	// G=0x30e90d91; @synthesize=mShapeDefaults
@property(readonly, assign, nonatomic) OADStyleMatrix *styleMatrix;	// G=0x30e90d61; @synthesize=mStyleMatrix
@property(readonly, assign, nonatomic) OADDefaultProperties *textDefaults;	// G=0x30e90d71; @synthesize=mTextDefaults
- (id)initWithTheme:(id)theme colorMap:(id)map colorPalette:(id)palette;	// 0x30e90da1
- (void)applyThemeOverrides:(id)overrides colorMapOverride:(id)override;	// 0x30e91049
// declared property getter: - (id)colorMap;	// 0x30e90d31
// declared property getter: - (id)colorPalette;	// 0x30e90d21
// declared property getter: - (id)colorScheme;	// 0x30e90d41
- (void)dealloc;	// 0x30e90f71
// declared property getter: - (id)fontScheme;	// 0x30e90d51
// declared property getter: - (id)lineDefaults;	// 0x30e90d81
// declared property setter: - (void)setColorPalette:(id)palette;	// 0x30e90f49
// declared property getter: - (id)shapeDefaults;	// 0x30e90d91
// declared property getter: - (id)styleMatrix;	// 0x30e90d61
// declared property getter: - (id)textDefaults;	// 0x30e90d71
@end


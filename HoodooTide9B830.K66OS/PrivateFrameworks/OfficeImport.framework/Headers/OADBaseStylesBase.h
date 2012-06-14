/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class OADStyleMatrix, OADColorScheme, OADFontScheme;

__attribute__((visibility("hidden")))
@interface OADBaseStylesBase : NSObject {
@private
	OADColorScheme *mColorScheme;	// 4 = 0x4
	OADStyleMatrix *mStyleMatrix;	// 8 = 0x8
	OADFontScheme *mFontScheme;	// 12 = 0xc
}
@property(retain, nonatomic) OADFontScheme *fontScheme;	// G=0x310e95ed; S=0x311a36e5; @synthesize=mFontScheme
- (id)colorScheme;	// 0x3116e41d
- (void)dealloc;	// 0x31170211
// declared property getter: - (id)fontScheme;	// 0x310e95ed
// declared property setter: - (void)setFontScheme:(id)scheme;	// 0x311a36e5
- (id)styleMatrix;	// 0x3126c219
@end

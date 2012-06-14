/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADEffect.h"

@class OADFill;

__attribute__((visibility("hidden")))
@interface OADFillOverlayEffect : OADEffect {
@private
	int mBlendMode;	// 8 = 0x8
	OADFill *mFill;	// 12 = 0xc
}
@property(assign) int blendMode;	// G=0x313802c5; S=0x312ccfc9; converted property
@property(retain) id fill;	// G=0x313802d5; S=0x312ccfd9; converted property
- (id)init;	// 0x312ccf31
// converted property getter: - (int)blendMode;	// 0x313802c5
- (void)dealloc;	// 0x312cd73d
// converted property getter: - (id)fill;	// 0x313802d5
- (unsigned)hash;	// 0x313803c5
- (BOOL)isEqual:(id)equal;	// 0x313802e5
// converted property setter: - (void)setBlendMode:(int)mode;	// 0x312ccfc9
// converted property setter: - (void)setFill:(id)fill;	// 0x312ccfd9
@end


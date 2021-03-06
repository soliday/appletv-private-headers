/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OADBlipEffect.h"


__attribute__((visibility("hidden")))
@interface OADLuminanceEffect : OADBlipEffect {
@private
	float mBrightness;	// 8 = 0x8
	float mContrast;	// 12 = 0xc
}
@property(assign) float brightness;	// G=0x345876b5; S=0x34459041; converted property
@property(assign) float contrast;	// G=0x345876c5; S=0x3445901d; converted property
- (id)init;	// 0x34458ff1
// converted property getter: - (float)brightness;	// 0x345876b5
// converted property getter: - (float)contrast;	// 0x345876c5
- (id)copyWithZone:(NSZone *)zone;	// 0x34587dc9
- (unsigned)hash;	// 0x34459079
- (BOOL)isEqual:(id)equal;	// 0x34587ced
// converted property setter: - (void)setBrightness:(float)brightness;	// 0x34459041
// converted property setter: - (void)setContrast:(float)contrast;	// 0x3445901d
@end


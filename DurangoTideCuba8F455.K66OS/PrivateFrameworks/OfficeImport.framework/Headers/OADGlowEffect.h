/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OADEffect.h"

@class OADColor;

__attribute__((visibility("hidden")))
@interface OADGlowEffect : OADEffect {
@private
	OADColor *mColor;	// 8 = 0x8
	float mRadius;	// 12 = 0xc
}
@property(retain) id color;	// G=0x32ce0f95; S=0x32c917c5; converted property
@property(assign) float radius;	// G=0x32ce0fa5; S=0x32c917b5; converted property
- (id)init;	// 0x32c91705
// converted property getter: - (id)color;	// 0x32ce0f95
- (id)copyWithZone:(NSZone *)zone;	// 0x32cb2f15
- (void)dealloc;	// 0x32c9180d
- (unsigned)hash;	// 0x32ce1099
- (BOOL)isEqual:(id)equal;	// 0x32ce0fb5
// converted property getter: - (float)radius;	// 0x32ce0fa5
// converted property setter: - (void)setColor:(id)color;	// 0x32c917c5
// converted property setter: - (void)setRadius:(float)radius;	// 0x32c917b5
@end


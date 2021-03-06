/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADShadowEffect.h"
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface OADOuterShadowEffect : OADShadowEffect {
@private
	float mXScale;	// 24 = 0x18
	float mYScale;	// 28 = 0x1c
	float mXSkew;	// 32 = 0x20
	float mYSkew;	// 36 = 0x24
	int mAlignment;	// 40 = 0x28
	BOOL mRotateWithShape;	// 44 = 0x2c
}
@property(assign) int alignment;	// G=0x30da3c41; S=0x30da86ed; converted property
@property(assign) BOOL rotateWithShape;	// G=0x30da3c51; S=0x30d6b925; converted property
@property(assign) float xScale;	// G=0x30da3c01; S=0x30db388d; converted property
@property(assign) float xSkew;	// G=0x30da3c21; S=0x30db4e7d; converted property
@property(assign) float yScale;	// G=0x30da3c11; S=0x30db4e6d; converted property
@property(assign) float ySkew;	// G=0x30da3c31; S=0x30db387d; converted property
- (id)init;	// 0x30d2fa49
// converted property getter: - (int)alignment;	// 0x30da3c41
- (id)copyWithZone:(NSZone *)zone;	// 0x30da72f9
- (unsigned)hash;	// 0x30e85d51
- (BOOL)isEqual:(id)equal;	// 0x30da3a65
// converted property getter: - (BOOL)rotateWithShape;	// 0x30da3c51
// converted property setter: - (void)setAlignment:(int)alignment;	// 0x30da86ed
// converted property setter: - (void)setRotateWithShape:(BOOL)shape;	// 0x30d6b925
// converted property setter: - (void)setXScale:(float)scale;	// 0x30db388d
// converted property setter: - (void)setXSkew:(float)skew;	// 0x30db4e7d
// converted property setter: - (void)setYScale:(float)scale;	// 0x30db4e6d
// converted property setter: - (void)setYSkew:(float)skew;	// 0x30db387d
// converted property getter: - (float)xScale;	// 0x30da3c01
// converted property getter: - (float)xSkew;	// 0x30da3c21
// converted property getter: - (float)yScale;	// 0x30da3c11
// converted property getter: - (float)ySkew;	// 0x30da3c31
@end


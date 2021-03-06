/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface OADOrientedBounds : NSObject {
@private
	CGRect mBounds;	// 4 = 0x4
	float mRotation;	// 20 = 0x14
	unsigned mFlipX : 1;	// 24 = 0x18
	unsigned mFlipY : 1;	// 24 = 0x18
}
@property(assign) CGRect bounds;	// G=0x318f4e69; S=0x319639bd; converted property
@property(assign) BOOL flipX;	// G=0x318f54b1; S=0x31963985; converted property
@property(assign) BOOL flipY;	// G=0x318f549d; S=0x319639a1; converted property
@property(assign) float rotation;	// G=0x318f4df1; S=0x31963975; converted property
+ (BOOL)directionCloserToVerticalThanToHorizontal:(float)horizontal;	// 0x318f4e01
+ (id)orientedBoundsWithBounds:(CGRect)bounds;	// 0x3195c0d5
+ (id)orientedBoundsWithBounds:(CGRect)bounds rotation:(float)rotation flipX:(BOOL)x flipY:(BOOL)y;	// 0x3195c129
- (id)init;	// 0x319638e1
- (id)initWithBounds:(CGRect)bounds;	// 0x319d5a45
- (id)initWithBounds:(CGRect)bounds rotation:(float)rotation flipX:(BOOL)x flipY:(BOOL)y;	// 0x3195c1b9
// converted property getter: - (CGRect)bounds;	// 0x318f4e69
// converted property getter: - (BOOL)flipX;	// 0x318f54b1
// converted property getter: - (BOOL)flipY;	// 0x318f549d
- (unsigned)hash;	// 0x31ab4981
- (BOOL)isEqual:(id)equal;	// 0x31973765
- (BOOL)isEqualToOrientedBounds:(id)orientedBounds;	// 0x31ab4a05
// converted property getter: - (float)rotation;	// 0x318f4df1
// converted property setter: - (void)setBounds:(CGRect)bounds;	// 0x319639bd
// converted property setter: - (void)setFlipX:(BOOL)x;	// 0x31963985
// converted property setter: - (void)setFlipY:(BOOL)y;	// 0x319639a1
- (void)setOrientedBounds:(id)bounds;	// 0x31ab490d
// converted property setter: - (void)setRotation:(float)rotation;	// 0x31963975
@end


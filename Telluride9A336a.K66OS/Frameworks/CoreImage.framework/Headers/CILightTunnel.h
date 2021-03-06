/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CIFilter.h"
#import "CoreImage-Structs.h"

@class CIVector, CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CILightTunnel : CIFilter {
@private
	CIImage *inputImage;	// 36 = 0x24
	CIVector *inputPoint;	// 40 = 0x28
	NSNumber *inputRotation;	// 44 = 0x2c
	NSNumber *inputRadius;	// 48 = 0x30
}
@property(retain, nonatomic) CIImage *inputImage;	// G=0x34598305; S=0x34598315; @synthesize
@property(copy, nonatomic) CIVector *inputPoint;	// G=0x34598339; S=0x34598349; @synthesize
@property(copy, nonatomic) NSNumber *inputRadius;	// G=0x345983a1; S=0x345983b1; @synthesize
@property(copy, nonatomic) NSNumber *inputRotation;	// G=0x3459836d; S=0x3459837d; @synthesize
+ (id)customAttributes;	// 0x34597b89
- (id)_kernel;	// 0x34597e3d
// declared property getter: - (id)inputImage;	// 0x34598305
// declared property getter: - (id)inputPoint;	// 0x34598339
// declared property getter: - (id)inputRadius;	// 0x345983a1
// declared property getter: - (id)inputRotation;	// 0x3459836d
- (id)outputImage;	// 0x34598089
- (void)setDefaults;	// 0x34598001
// declared property setter: - (void)setInputImage:(id)image;	// 0x34598315
// declared property setter: - (void)setInputPoint:(id)point;	// 0x34598349
// declared property setter: - (void)setInputRadius:(id)radius;	// 0x345983b1
// declared property setter: - (void)setInputRotation:(id)rotation;	// 0x3459837d
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CIFilter.h"
#import "CoreImage-Structs.h"

@class NSNumber, CIImage, CIColor;

__attribute__((visibility("hidden")))
@interface CIColorBalance : CIFilter {
@private
	CIImage *inputImage;	// 36 = 0x24
	CIColor *inputColor;	// 40 = 0x28
	NSNumber *inputStrength;	// 44 = 0x2c
	NSNumber *inputWarmth;	// 48 = 0x30
	NSNumber *inputDamping;	// 52 = 0x34
}
@property(copy, nonatomic) CIColor *inputColor;	// G=0x36e3efcd; S=0x36e3efdd; @synthesize
@property(copy, nonatomic) NSNumber *inputDamping;	// G=0x36e3f069; S=0x36e3f079; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x36e3ef99; S=0x36e3efa9; @synthesize
@property(copy, nonatomic) NSNumber *inputStrength;	// G=0x36e3f001; S=0x36e3f011; @synthesize
@property(copy, nonatomic) NSNumber *inputWarmth;	// G=0x36e3f035; S=0x36e3f045; @synthesize
+ (id)customAttributes;	// 0x36e3e55d
- (id)_kernel;	// 0x36e3eab9
// declared property getter: - (id)inputColor;	// 0x36e3efcd
// declared property getter: - (id)inputDamping;	// 0x36e3f069
// declared property getter: - (id)inputImage;	// 0x36e3ef99
// declared property getter: - (id)inputStrength;	// 0x36e3f001
// declared property getter: - (id)inputWarmth;	// 0x36e3f035
- (id)outputImage;	// 0x36e3ec75
- (void)setDefaults;	// 0x36e3ea19
// declared property setter: - (void)setInputColor:(id)color;	// 0x36e3efdd
// declared property setter: - (void)setInputDamping:(id)damping;	// 0x36e3f079
// declared property setter: - (void)setInputImage:(id)image;	// 0x36e3efa9
// declared property setter: - (void)setInputStrength:(id)strength;	// 0x36e3f011
// declared property setter: - (void)setInputWarmth:(id)warmth;	// 0x36e3f045
@end


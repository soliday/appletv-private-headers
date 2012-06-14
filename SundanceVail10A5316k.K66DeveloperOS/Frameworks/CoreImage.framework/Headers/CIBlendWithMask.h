/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CIFilter.h"
#import "CoreImage-Structs.h"

@class CIImage;

__attribute__((visibility("hidden")))
@interface CIBlendWithMask : CIFilter {
@private
	CIImage *inputImage;	// 36 = 0x24
	CIImage *inputBackgroundImage;	// 40 = 0x28
	CIImage *inputMaskImage;	// 44 = 0x2c
}
@property(retain, nonatomic) CIImage *inputBackgroundImage;	// G=0x36c0d171; S=0x36c0d181; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x36c0d13d; S=0x36c0d14d; @synthesize
@property(retain, nonatomic) CIImage *inputMaskImage;	// G=0x36c0d1a5; S=0x36c0d1b5; @synthesize
+ (id)customAttributes;	// 0x36c0c8a9
- (id)_kernel;	// 0x36c0c969
- (id)_kernelNoB;	// 0x36c0cb19
- (id)_kernelNoF;	// 0x36c0ccbd
// declared property getter: - (id)inputBackgroundImage;	// 0x36c0d171
// declared property getter: - (id)inputImage;	// 0x36c0d13d
// declared property getter: - (id)inputMaskImage;	// 0x36c0d1a5
- (id)outputImage;	// 0x36c0ce61
// declared property setter: - (void)setInputBackgroundImage:(id)image;	// 0x36c0d181
// declared property setter: - (void)setInputImage:(id)image;	// 0x36c0d14d
// declared property setter: - (void)setInputMaskImage:(id)image;	// 0x36c0d1b5
@end

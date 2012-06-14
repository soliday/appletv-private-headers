/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CIFilter.h"
#import "CoreImage-Structs.h"

@class NSNumber, CIVector, CIColor;

__attribute__((visibility("hidden")))
@interface CIStripesGenerator : CIFilter {
@private
	CIVector *inputCenter;	// 36 = 0x24
	CIColor *inputColor0;	// 40 = 0x28
	CIColor *inputColor1;	// 44 = 0x2c
	NSNumber *inputWidth;	// 48 = 0x30
	NSNumber *inputSharpness;	// 52 = 0x34
}
@property(retain, nonatomic) CIVector *inputCenter;	// G=0x36e3a641; S=0x36e3a651; @synthesize
@property(retain, nonatomic) CIColor *inputColor0;	// G=0x36e3a675; S=0x36e3a685; @synthesize
@property(retain, nonatomic) CIColor *inputColor1;	// G=0x36e3a6a9; S=0x36e3a6b9; @synthesize
@property(retain, nonatomic) NSNumber *inputSharpness;	// G=0x36e3a711; S=0x36e3a721; @synthesize
@property(retain, nonatomic) NSNumber *inputWidth;	// G=0x36e3a6dd; S=0x36e3a6ed; @synthesize
+ (id)customAttributes;	// 0x36e39fcd
- (id)_kernel;	// 0x36e39db5
// declared property getter: - (id)inputCenter;	// 0x36e3a641
// declared property getter: - (id)inputColor0;	// 0x36e3a675
// declared property getter: - (id)inputColor1;	// 0x36e3a6a9
// declared property getter: - (id)inputSharpness;	// 0x36e3a711
// declared property getter: - (id)inputWidth;	// 0x36e3a6dd
- (id)outputImage;	// 0x36e3a499
- (void)setDefaults;	// 0x36e3a38d
// declared property setter: - (void)setInputCenter:(id)center;	// 0x36e3a651
// declared property setter: - (void)setInputColor0:(id)a0;	// 0x36e3a685
// declared property setter: - (void)setInputColor1:(id)a1;	// 0x36e3a6b9
// declared property setter: - (void)setInputSharpness:(id)sharpness;	// 0x36e3a721
// declared property setter: - (void)setInputWidth:(id)width;	// 0x36e3a6ed
@end


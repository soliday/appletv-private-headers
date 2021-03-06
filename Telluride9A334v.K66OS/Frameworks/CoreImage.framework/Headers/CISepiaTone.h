/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CIFilter.h"
#import "CoreImage-Structs.h"

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CISepiaTone : CIFilter {
@private
	CIImage *inputImage;	// 36 = 0x24
	NSNumber *inputIntensity;	// 40 = 0x28
}
@property(retain, nonatomic) CIImage *inputImage;	// G=0x358836b5; S=0x358836c5; @synthesize
@property(copy, nonatomic) NSNumber *inputIntensity;	// G=0x358836e9; S=0x358836f9; @synthesize
+ (id)customAttributes;	// 0x35883149
- (BOOL)_isIdentity;	// 0x35883559
- (id)_kernel;	// 0x3588337d
// declared property getter: - (id)inputImage;	// 0x358836b5
// declared property getter: - (id)inputIntensity;	// 0x358836e9
- (id)outputImage;	// 0x358835a1
- (void)setDefaults;	// 0x3588350d
// declared property setter: - (void)setInputImage:(id)image;	// 0x358836c5
// declared property setter: - (void)setInputIntensity:(id)intensity;	// 0x358836f9
@end


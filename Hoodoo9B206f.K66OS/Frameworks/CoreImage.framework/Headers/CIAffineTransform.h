/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CIFilter.h"
#import "CoreImage-Structs.h"

@class NSValue, CIImage;

__attribute__((visibility("hidden")))
@interface CIAffineTransform : CIFilter {
@private
	CIImage *inputImage;	// 36 = 0x24
	NSValue *inputTransform;	// 40 = 0x28
}
@property(retain, nonatomic) CIImage *inputImage;	// G=0x36df9041; S=0x36df9051; @synthesize
@property(copy, nonatomic) NSValue *inputTransform;	// G=0x36df9075; S=0x36df9085; @synthesize
+ (id)customAttributes;	// 0x36df8cd5
- (id)_initFromProperties:(id)properties;	// 0x36df920d
- (id)_outputProperties;	// 0x36df90a9
// declared property getter: - (id)inputImage;	// 0x36df9041
// declared property getter: - (id)inputTransform;	// 0x36df9075
- (id)outputImage;	// 0x36df8e7d
- (void)setDefaults;	// 0x36df8e2d
// declared property setter: - (void)setInputImage:(id)image;	// 0x36df9051
// declared property setter: - (void)setInputTransform:(id)transform;	// 0x36df9085
@end


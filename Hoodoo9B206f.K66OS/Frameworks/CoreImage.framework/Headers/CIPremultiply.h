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
@interface CIPremultiply : CIFilter {
@private
	CIImage *inputImage;	// 36 = 0x24
}
@property(retain, nonatomic) CIImage *inputImage;	// G=0x36e35b41; S=0x36e35b51; @synthesize
+ (id)customAttributes;	// 0x36e35951
// declared property getter: - (id)inputImage;	// 0x36e35b41
- (id)outputImage;	// 0x36e35a49
// declared property setter: - (void)setInputImage:(id)image;	// 0x36e35b51
@end


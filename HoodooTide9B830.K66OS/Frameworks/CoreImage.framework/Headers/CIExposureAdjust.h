/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CIFilter.h"
#import "CoreImage-Structs.h"

@class NSNumber, CIImage;

__attribute__((visibility("hidden")))
@interface CIExposureAdjust : CIFilter {
@private
	CIImage *inputImage;	// 36 = 0x24
	NSNumber *inputEV;	// 40 = 0x28
}
@property(copy, nonatomic) NSNumber *inputEV;	// G=0x349fc215; S=0x349fc225; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x349fc1e1; S=0x349fc1f1; @synthesize
+ (id)customAttributes;	// 0x349fbded
- (BOOL)_isIdentity;	// 0x349fc02d
// declared property getter: - (id)inputEV;	// 0x349fc215
// declared property getter: - (id)inputImage;	// 0x349fc1e1
- (id)outputImage;	// 0x349fc075
- (void)setDefaults;	// 0x349fbfe1
// declared property setter: - (void)setInputEV:(id)ev;	// 0x349fc225
// declared property setter: - (void)setInputImage:(id)image;	// 0x349fc1f1
@end


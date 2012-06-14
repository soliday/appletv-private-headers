/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CIFilter.h"
#import "CoreImage-Structs.h"

@class NSNumber, CIVector, CIImage;

__attribute__((visibility("hidden")))
@interface CIMirror : CIFilter {
@private
	CIImage *inputImage;	// 36 = 0x24
	CIVector *inputPoint;	// 40 = 0x28
	NSNumber *inputOrientation;	// 44 = 0x2c
	NSNumber *inputMirroredStatus;	// 48 = 0x30
}
@property(retain, nonatomic) CIImage *inputImage;	// G=0x36e2dbf9; S=0x36e2dc09; @synthesize
@property(copy, nonatomic) NSNumber *inputMirroredStatus;	// G=0x36e2dc95; S=0x36e2dca5; @synthesize
@property(copy, nonatomic) NSNumber *inputOrientation;	// G=0x36e2dc61; S=0x36e2dc71; @synthesize
@property(copy, nonatomic) CIVector *inputPoint;	// G=0x36e2dc2d; S=0x36e2dc3d; @synthesize
+ (id)customAttributes;	// 0x36e2d455
- (id)_kernel;	// 0x36e2d699
// declared property getter: - (id)inputImage;	// 0x36e2dbf9
// declared property getter: - (id)inputMirroredStatus;	// 0x36e2dc95
// declared property getter: - (id)inputOrientation;	// 0x36e2dc61
// declared property getter: - (id)inputPoint;	// 0x36e2dc2d
- (id)outputImage;	// 0x36e2d905
- (void)setDefaults;	// 0x36e2d87d
// declared property setter: - (void)setInputImage:(id)image;	// 0x36e2dc09
// declared property setter: - (void)setInputMirroredStatus:(id)status;	// 0x36e2dca5
// declared property setter: - (void)setInputOrientation:(id)orientation;	// 0x36e2dc71
// declared property setter: - (void)setInputPoint:(id)point;	// 0x36e2dc3d
@end


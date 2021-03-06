/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CIFilter.h"
#import "CoreImage-Structs.h"

@class CIVector, CIImage;

__attribute__((visibility("hidden")))
@interface CIToneCurve : CIFilter {
@private
	CIImage *inputImage;	// 36 = 0x24
	CIVector *inputPoint0;	// 40 = 0x28
	CIVector *inputPoint1;	// 44 = 0x2c
	CIVector *inputPoint2;	// 48 = 0x30
	CIVector *inputPoint3;	// 52 = 0x34
	CIVector *inputPoint4;	// 56 = 0x38
	CIImage *_curveImage;	// 60 = 0x3c
}
@property(retain, nonatomic) CIImage *inputImage;	// G=0x36e1032d; S=0x36e1033d; @synthesize
@property(copy, nonatomic) CIVector *inputPoint0;	// G=0x36e10361; S=0x36e0ee21; @synthesize
@property(copy, nonatomic) CIVector *inputPoint1;	// G=0x36e10371; S=0x36e0ee89; @synthesize
@property(copy, nonatomic) CIVector *inputPoint2;	// G=0x36e10381; S=0x36e0eef1; @synthesize
@property(copy, nonatomic) CIVector *inputPoint3;	// G=0x36e10391; S=0x36e0ef59; @synthesize
@property(copy, nonatomic) CIVector *inputPoint4;	// G=0x36e103a1; S=0x36e0efc1; @synthesize
+ (id)curveImageFromPoints:(const CGPoint *)points;	// 0x36e0fd75
+ (id)curveImageFromPoints:(const CGPoint *)points linear:(BOOL)linear;	// 0x36e0fb79
+ (id)customAttributes;	// 0x36e0f029
+ (void)splineCurveTable:(float *)table tableSize:(int)size gamma:(float)gamma from:(const CGPoint *)from;	// 0x36e0fd95
- (id)_initFromProperties:(id)properties;	// 0x36e10b49
- (BOOL)_isIdentity;	// 0x36e0f7a9
- (id)_kernel16;	// 0x36e0f619
- (id)_kernel8;	// 0x36e0f489
- (id)_outputProperties;	// 0x36e103b1
- (void)dealloc;	// 0x36e0edcd
// declared property getter: - (id)inputImage;	// 0x36e1032d
// declared property getter: - (id)inputPoint0;	// 0x36e10361
// declared property getter: - (id)inputPoint1;	// 0x36e10371
// declared property getter: - (id)inputPoint2;	// 0x36e10381
// declared property getter: - (id)inputPoint3;	// 0x36e10391
// declared property getter: - (id)inputPoint4;	// 0x36e103a1
- (id)outputImage;	// 0x36e0f939
- (void)setDefaults;	// 0x36e0f3b9
// declared property setter: - (void)setInputImage:(id)image;	// 0x36e1033d
// declared property setter: - (void)setInputPoint0:(id)a0;	// 0x36e0ee21
// declared property setter: - (void)setInputPoint1:(id)a1;	// 0x36e0ee89
// declared property setter: - (void)setInputPoint2:(id)a2;	// 0x36e0eef1
// declared property setter: - (void)setInputPoint3:(id)a3;	// 0x36e0ef59
// declared property setter: - (void)setInputPoint4:(id)a4;	// 0x36e0efc1
@end


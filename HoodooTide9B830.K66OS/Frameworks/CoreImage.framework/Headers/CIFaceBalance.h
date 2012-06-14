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
@interface CIFaceBalance : CIFilter {
@private
	CIImage *inputImage;	// 36 = 0x24
	NSNumber *inputOrigI;	// 40 = 0x28
	NSNumber *inputOrigQ;	// 44 = 0x2c
	NSNumber *inputStrength;	// 48 = 0x30
	NSNumber *inputWarmth;	// 52 = 0x34
}
@property(retain, nonatomic) CIImage *inputImage;	// G=0x34a141d9; S=0x34a141e9; @synthesize
@property(copy, nonatomic) NSNumber *inputOrigI;	// G=0x34a1420d; S=0x34a1421d; @synthesize
@property(copy, nonatomic) NSNumber *inputOrigQ;	// G=0x34a14241; S=0x34a14251; @synthesize
@property(copy, nonatomic) NSNumber *inputStrength;	// G=0x34a14275; S=0x34a14285; @synthesize
@property(copy, nonatomic) NSNumber *inputWarmth;	// G=0x34a142a9; S=0x34a142b9; @synthesize
+ (id)customAttributes;	// 0x34a135ed
- (id)_initFromProperties:(id)properties;	// 0x34a145d5
- (BOOL)_isIdentity;	// 0x34a13d9d
- (id)_kernel;	// 0x34a13c0d
- (id)_outputProperties;	// 0x34a142dd
// declared property getter: - (id)inputImage;	// 0x34a141d9
// declared property getter: - (id)inputOrigI;	// 0x34a1420d
// declared property getter: - (id)inputOrigQ;	// 0x34a14241
// declared property getter: - (id)inputStrength;	// 0x34a14275
// declared property getter: - (id)inputWarmth;	// 0x34a142a9
- (id)outputImage;	// 0x34a13ecd
- (void)setDefaults;	// 0x34a13b35
// declared property setter: - (void)setInputImage:(id)image;	// 0x34a141e9
// declared property setter: - (void)setInputOrigI:(id)i;	// 0x34a1421d
// declared property setter: - (void)setInputOrigQ:(id)q;	// 0x34a14251
// declared property setter: - (void)setInputStrength:(id)strength;	// 0x34a14285
// declared property setter: - (void)setInputWarmth:(id)warmth;	// 0x34a142b9
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface NSColorStub : NSObject {
@private
	CGColorRef cgColor;	// 4 = 0x4
}
+ (id)blackColor;	// 0x351edce9
+ (id)clearColor;	// 0x35242fbd
+ (id)colorWithBGR:(unsigned long)bgr;	// 0x353f15a5
+ (id)colorWithBGRValue:(long)bgrvalue;	// 0x351febf9
+ (id)colorWithBinaryRed:(int)binaryRed green:(int)green blue:(int)blue;	// 0x353f14a9
+ (id)colorWithBinaryRed:(int)binaryRed green:(int)green blue:(int)blue alpha:(int)alpha;	// 0x353f1521
+ (id)colorWithCalibratedHue:(float)calibratedHue saturation:(float)saturation brightness:(float)brightness alpha:(float)alpha;	// 0x353f55e5
+ (id)colorWithCalibratedRed:(float)calibratedRed green:(float)green blue:(float)blue alpha:(float)alpha;	// 0x3512cf3d
+ (id)colorWithCsColour:(const CsColour *)csColour;	// 0x35261049
+ (id)colorWithCsColour:(const CsColour *)csColour;	// 0x353d34f1
+ (id)colorWithDeviceRed:(float)deviceRed green:(float)green blue:(float)blue alpha:(float)alpha;	// 0x352610c1
+ (id)colorWithEshColor:(const EshColor *)eshColor;	// 0x353928e5
+ (id)colorWithEshColor:(const EshColor *)eshColor;	// 0x353d3569
+ (id)colorWithPatternImage:(CGImageRef)patternImage;	// 0x352e683d
+ (id)colorWithRGBBytes:(unsigned char)rgbbytes :(unsigned char)arg2 :(unsigned char)arg3;	// 0x351bd061
+ (id)colorWithRGBValue:(long)rgbvalue;	// 0x352feb15
+ (id)colorWithSystemColorID:(int)systemColorID;	// 0x352075b9
+ (id)stringForColor:(id)color;	// 0x353f1629
+ (id)stringForSystemColorID:(int)systemColorID;	// 0x353f1281
+ (id)whiteColor;	// 0x3522cffd
- (id)init;	// 0x353f55a5
- (id)initWithGCColor:(CGColorRef)gccolor;	// 0x351bcce5
- (float)alphaComponent;	// 0x351ee641
- (id)blendedColorWithFraction:(float)fraction ofColor:(id)color;	// 0x352e202d
- (float)blueComponent;	// 0x351ee619
- (CGColorRef)cgColorRef;	// 0x351bfc5d
- (id)colorSpaceName;	// 0x353f5595
- (id)colorUsingColorSpaceName:(id)name;	// 0x351f49c1
- (id)colorWithAlphaComponent:(float)alphaComponent;	// 0x351f5f95
- (id)colorWithShadeValue:(double)shadeValue;	// 0x352e1f9d
- (id)colorWithTintValue:(double)tintValue;	// 0x352f7545
- (id)copyWithZone:(NSZone *)zone;	// 0x351bcc99
- (CsColour)csColour;	// 0x35392861
- (CsColour)csColour;	// 0x353d346d
- (void)dealloc;	// 0x351b7ef5
- (id)description;	// 0x353f5601
- (EshColor)eshColor;	// 0x35392899
- (EshColor)eshColor;	// 0x353d34a5
- (void)getRGBBytes:(char *)bytes :(char *)arg2 :(char *)arg3;	// 0x352e67a5
- (void)getRed:(float *)red green:(float *)green blue:(float *)blue alpha:(float *)alpha;	// 0x3512d679
- (float)greenComponent;	// 0x351ee5f1
- (BOOL)isBlack;	// 0x351ee535
- (BOOL)isEqualToColor:(id)color;	// 0x35224e29
- (float)redComponent;	// 0x351ee5c9
- (id)rgbColor;	// 0x351f49bd
- (void)set;	// 0x351c1059
- (id)solidColoredBitmap:(CGSize)bitmap;	// 0x353f1279
- (id)solidColoredPngImage;	// 0x353f127d
- (unsigned long)toBGR;	// 0x353f16ed
- (tagRgbQuad)ttColor;	// 0x351f48f5
@end


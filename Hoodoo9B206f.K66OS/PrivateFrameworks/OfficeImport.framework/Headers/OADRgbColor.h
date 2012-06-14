/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADColor.h"
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface OADRgbColor : OADColor {
@private
	float mRed;	// 8 = 0x8
	float mGreen;	// 12 = 0xc
	float mBlue;	// 16 = 0x10
}
+ (id)black;	// 0x3441f55d
+ (id)rgbColorWithNSColor:(id)nscolor;	// 0x3461371d
+ (id)rgbColorWithRed:(float)red green:(float)green blue:(float)blue;	// 0x346138a1
+ (id)rgbColorWithRedByte:(float)redByte greenByte:(float)byte blueByte:(float)byte3;	// 0x34613845
+ (id)rgbColorWithWhite:(float)white;	// 0x346137fd
+ (id)rgbColorWithWhiteByte:(float)whiteByte;	// 0x346137b5
+ (id)white;	// 0x34440bd5
- (id)initWithRed:(float)red green:(float)green blue:(float)blue;	// 0x3441f5ad
- (id)initWithRedByte:(float)redByte greenByte:(float)byte blueByte:(float)byte3;	// 0x34433f35
- (id)initWithWhite:(float)white;	// 0x34613a89
- (id)initWithWhiteByte:(float)whiteByte;	// 0x34613a11
- (float)blue;	// 0x3437aed1
- (unsigned char)blueByte;	// 0x343faeed
- (id)copyWithZone:(NSZone *)zone;	// 0x34539471
- (float)green;	// 0x3437aee1
- (unsigned char)greenByte;	// 0x343fae7d
- (unsigned)hash;	// 0x343fad9d
- (BOOL)isEqual:(id)equal;	// 0x343facf9
- (float)red;	// 0x3437aef1
- (unsigned char)redByte;	// 0x343fae0d
- (id)rgbColorWithFraction:(float)fraction ofRgbColor:(id)rgbColor;	// 0x346138fd
@end


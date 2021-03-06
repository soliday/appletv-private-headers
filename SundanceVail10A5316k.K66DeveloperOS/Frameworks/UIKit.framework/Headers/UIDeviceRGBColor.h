/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIColor.h"


__attribute__((visibility("hidden")))
@interface UIDeviceRGBColor : UIColor {
@private
	float redComponent;	// 8 = 0x8
	float greenComponent;	// 12 = 0xc
	float blueComponent;	// 16 = 0x10
	float alphaComponent;	// 20 = 0x14
	CGColorRef cachedColor;	// 24 = 0x18
}
@property(readonly, assign) float alphaComponent;	// G=0x30154d75; converted property
- (id)initWithCGColor:(CGColorRef)cgcolor;	// 0x300f9995
- (id)initWithHue:(float)hue saturation:(float)saturation brightness:(float)brightness alpha:(float)alpha;	// 0x302acfd9
- (id)initWithRed:(float)red green:(float)green blue:(float)blue alpha:(float)alpha;	// 0x300d1415
- (CGColorRef)CGColor;	// 0x3009bd39
- (CGColorRef)_createCGColorWithAlpha:(float)alpha;	// 0x300d18c9
- (BOOL)_getWhite:(float *)white alpha:(float *)alpha;	// 0x302ad341
// converted property getter: - (float)alphaComponent;	// 0x30154d75
- (id)colorSpaceName;	// 0x30152995
- (id)colorWithAlphaComponent:(float)alphaComponent;	// 0x30154d85
- (id)copyWithZone:(NSZone *)zone;	// 0x302ad145
- (void)dealloc;	// 0x300f1729
- (id)description;	// 0x302ad189
- (BOOL)getHue:(float *)hue saturation:(float *)saturation brightness:(float *)brightness alpha:(float *)alpha;	// 0x302ad23d
- (BOOL)getRed:(float *)red green:(float *)green blue:(float *)blue alpha:(float *)alpha;	// 0x302ad2c9
- (unsigned)hash;	// 0x30151711
- (BOOL)isEqual:(id)equal;	// 0x30152869
- (void)set;	// 0x3009bcd9
- (void)setFill;	// 0x3014e18d
- (void)setStroke;	// 0x302ad159
@end


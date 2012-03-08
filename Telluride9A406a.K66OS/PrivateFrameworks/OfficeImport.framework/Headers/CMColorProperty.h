/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMProperty.h"
#import "OfficeImport-Structs.h"

@class NSColorStub;

__attribute__((visibility("hidden")))
@interface CMColorProperty : CMProperty {
@private
	NSColorStub *wdValue;	// 8 = 0x8
}
+ (CGColorRef)createCGColorFromOADColor:(id)oadcolor state:(id)state;	// 0x32b0ec91
+ (CGColorRef)createCGColorFromOADFill:(id)oadfill state:(id)state;	// 0x32994d0d
+ (id)cssStringFromNSColorStub:(id)nscolorStub;	// 0x32824615
+ (id)cssStringFromOADColor:(id)oadcolor;	// 0x32962339
+ (id)cssStringFromOADGradientFill:(id)oadgradientFill state:(id)state;	// 0x328eb1b5
+ (id)cssStringFromRed:(float)red green:(float)green blue:(float)blue;	// 0x328246a9
+ (id)nsColorFromOADColor:(id)oadcolor state:(id)state;	// 0x3282394d
+ (id)nsColorFromOADFill:(id)oadfill state:(id)state;	// 0x3282360d
+ (id)nsColorFromShading:(id)shading;	// 0x3295fd09
+ (float)resolveColorValueWithPercentage:(float)percentage foregroundComponent:(float)component backgroundComponent:(float)component3;	// 0x32960369
+ (id)resolveStyleColorWithPercentage:(float)percentage foregroundColor:(id)color backgroundColor:(id)color3;	// 0x329601e9
+ (id)resolveStyleColorWithPercentage:(float)percentage shading:(id)shading;	// 0x3296016d
+ (float)transformedAlphaFromOADColor:(id)oadcolor;	// 0x328ec5cd
- (id)initWithColor:(id)color;	// 0x32960391
- (id)cssString;	// 0x32960401
- (id)cssStringForName:(id)name;	// 0x329603d1
- (BOOL)isEqualTo:(id)to;	// 0x32b0ed0d
- (id)value;	// 0x32b0ec81
@end

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
+ (CGColorRef)createCGColorFromOADColor:(id)oadcolor state:(id)state;	// 0x32cc31c1
+ (CGColorRef)createCGColorFromOADFill:(id)oadfill state:(id)state;	// 0x32c3d2e9
+ (id)cssStringFromNSColorStub:(id)nscolorStub;	// 0x32b0f455
+ (id)cssStringFromOADColor:(id)oadcolor;	// 0x32c140c1
+ (id)cssStringFromOADGradientFill:(id)oadgradientFill state:(id)state;	// 0x32bf7c11
+ (id)cssStringFromRed:(float)red green:(float)green blue:(float)blue;	// 0x32b0f49d
+ (id)nsColorFromOADColor:(id)oadcolor state:(id)state;	// 0x32b19a49
+ (id)nsColorFromOADFill:(id)oadfill state:(id)state;	// 0x32b196b1
+ (id)nsColorFromShading:(id)shading;	// 0x32c12599
+ (float)resolveColorValueWithPercentage:(float)percentage foregroundComponent:(float)component backgroundComponent:(float)component3;	// 0x32c12b6d
+ (id)resolveStyleColorWithPercentage:(float)percentage foregroundColor:(id)color backgroundColor:(id)color3;	// 0x32c12a1d
+ (id)resolveStyleColorWithPercentage:(float)percentage shading:(id)shading;	// 0x32c129a9
+ (float)transformedAlphaFromOADColor:(id)oadcolor;	// 0x32b80e55
- (id)initWithColor:(id)color;	// 0x32b82a75
- (id)cssString;	// 0x32b82add
- (id)cssStringForName:(id)name;	// 0x32b82ab1
- (BOOL)isEqualTo:(id)to;	// 0x32cc3189
- (id)value;	// 0x32cc3179
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface OABColor : NSObject {
}
+ (float)applyAlphaTransform:(id)transform toAlpha:(float)alpha;	// 0x3123c1e5
+ (id)applyExpTransformWithValue:(float)value toRgbColor:(id)rgbColor;	// 0x3123c601
+ (id)applyHSLTransform:(id)transform toRgbColor:(id)rgbColor;	// 0x3123c3e9
+ (id)applyRGBTransform:(id)transform toRgbColor:(id)rgbColor;	// 0x3123c25d
+ (id)applyTransforms:(id)transforms toRgbColor:(id)rgbColor;	// 0x3123c701
+ (unsigned short)eshSchemeColorIndexWithOADMapColorIndex:(int)oadmapColorIndex;	// 0x3123c131
+ (int)oadMapColorIndexWithEshSchemeColorIndex:(unsigned short)eshSchemeColorIndex;	// 0x310185d5
+ (EshColor)propertyColor:(int)color colorPropertiesManager:(id)manager;	// 0x31087179
+ (id)readColor:(const EshColor *)color colorPropertiesManager:(id)manager colorPalette:(id)palette;	// 0x3101f321
+ (int)readColorAdjustmentType:(int)type;	// 0x31087231
+ (int)readSystemColorID:(int)anId;	// 0x3123c159
+ (EshColor)writeColor:(id)color flatten:(BOOL)flatten state:(id)state;	// 0x3123bcc5
+ (EshColor)writeColor:(id)color state:(id)state;	// 0x3123bc99
+ (float)writeOpacityOfColor:(id)color;	// 0x3123c07d
+ (int)writeSystemColorID:(int)anId;	// 0x3123bc11
@end


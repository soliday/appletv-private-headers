/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface OAXFill : NSObject {
}
+ (int)blipTypeForExtension:(id)extension;	// 0x3138dc45
+ (id)pathGradientFillTypeEnumMap;	// 0x3126db1d
+ (id)presetPatternFillTypeEnumMap;	// 0x312d50bd
+ (id)readBlipRefFromXmlNode:(xmlNode *)xmlNode packagePart:(id)part drawingState:(id)state forBullet:(BOOL)bullet;	// 0x31278869
+ (id)readFillFromXmlNode:(xmlNode *)xmlNode packagePart:(id)part drawingState:(id)state;	// 0x3126c451
+ (id)readGradientFillFromXmlNode:(xmlNode *)xmlNode;	// 0x3126c709
+ (void)readGradientFillFromXmlNode:(xmlNode *)xmlNode toGradientFill:(id)gradientFill;	// 0x3126c8bd
+ (id)readGroupFillFromXmlNode:(xmlNode *)xmlNode;	// 0x312c07cd
+ (id)readImageFillFromXmlNode:(xmlNode *)xmlNode packagePart:(id)part drawingState:(id)state;	// 0x3127866d
+ (id)readLinearGradientFillFromXmlNode:(xmlNode *)xmlNode;	// 0x3126c755
+ (id)readNullFillFromXmlNode:(xmlNode *)xmlNode;	// 0x31278511
+ (id)readPathGradientFillFromXmlNode:(xmlNode *)xmlNode;	// 0x3126d97d
+ (id)readPresetPatternFillFromXmlNode:(xmlNode *)xmlNode;	// 0x312d4f31
+ (id)readSolidFillFromXmlNode:(xmlNode *)xmlNode;	// 0x3126c545
+ (void)readStretch:(xmlNode *)stretch stretch:(id)stretch2;	// 0x31278865
+ (void)readTile:(xmlNode *)tile tile:(id)tile2;	// 0x312b4a15
+ (id)tileFlipModeEnumMap;	// 0x312b4c11
@end


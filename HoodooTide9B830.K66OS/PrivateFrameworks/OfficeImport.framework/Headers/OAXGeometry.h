/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface OAXGeometry : NSObject {
}
+ (void)addFormulasFromFile:(id)file toCustomGeometry:(id)customGeometry formulaNameToIndexMap:(id)indexMap;	// 0x3129dee9
+ (int)adjustValueWithGuideXmlNode:(xmlNode *)guideXmlNode;	// 0x312affdd
+ (id)formulaKeywordEnumMap;	// 0x3129e639
+ (id)formulaTypeEnumMap;	// 0x3129e5e1
+ (id)pathFillModeEnumMap;	// 0x312d4ed9
+ (OADAdjustCoord)readAdjustCoordFromXmlNode:(xmlNode *)xmlNode name:(const char *)name formulaNameToIndexMap:(id)indexMap;	// 0x3129e811
+ (void)readAdjustValuesFromCustomGeometryXmlNode:(xmlNode *)customGeometryXmlNode toCustomGeometry:(id)customGeometry adjustValueNameToIndexMap:(id)indexMap;	// 0x3129ddfd
+ (id)readCustomGeometryFromXmlNode:(xmlNode *)xmlNode hasImplicitFormulas:(BOOL)formulas;	// 0x3129dc89
+ (void)readFormulasFromCustomGeometryXmlNode:(xmlNode *)customGeometryXmlNode toCustomGeometry:(id)customGeometry adjustValueNameToIndexMap:(id)indexMap formulaNameToIndexMap:(id)indexMap4;	// 0x3129e05d
+ (id)readFromParentXmlNode:(xmlNode *)parentXmlNode;	// 0x31279991
+ (id)readFromParentXmlNode:(xmlNode *)parentXmlNode;	// 0x3138ddc9
+ (void)readPathsFromCustomGeometryXmlNode:(xmlNode *)customGeometryXmlNode toCustomGeometry:(id)customGeometry formulaNameToIndexMap:(id)indexMap;	// 0x3129e875
+ (id)readPresetGeometryFromXmlNode:(xmlNode *)xmlNode;	// 0x31279a01
+ (void)readTextRectFromCustomGeometryXmlNode:(xmlNode *)customGeometryXmlNode toCustomGeometry:(id)customGeometry formulaNameToIndexMap:(id)indexMap;	// 0x3129e6d5
+ (id)shapeTypeEnumMap;	// 0x31279b4d
+ (int)shapeTypeForString:(id)string;	// 0x31279b21
+ (id)stringForShapeType:(int)shapeType;	// 0x312b4dd5
@end


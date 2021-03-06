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
+ (void)addFormulasFromFile:(id)file toCustomGeometry:(id)customGeometry formulaNameToIndexMap:(id)indexMap;	// 0x30d9bee9
+ (int)adjustValueWithGuideXmlNode:(xmlNode *)guideXmlNode;	// 0x30dadfdd
+ (id)formulaKeywordEnumMap;	// 0x30d9c639
+ (id)formulaTypeEnumMap;	// 0x30d9c5e1
+ (id)pathFillModeEnumMap;	// 0x30dd2ed9
+ (OADAdjustCoord)readAdjustCoordFromXmlNode:(xmlNode *)xmlNode name:(const char *)name formulaNameToIndexMap:(id)indexMap;	// 0x30d9c811
+ (void)readAdjustValuesFromCustomGeometryXmlNode:(xmlNode *)customGeometryXmlNode toCustomGeometry:(id)customGeometry adjustValueNameToIndexMap:(id)indexMap;	// 0x30d9bdfd
+ (id)readCustomGeometryFromXmlNode:(xmlNode *)xmlNode hasImplicitFormulas:(BOOL)formulas;	// 0x30d9bc89
+ (void)readFormulasFromCustomGeometryXmlNode:(xmlNode *)customGeometryXmlNode toCustomGeometry:(id)customGeometry adjustValueNameToIndexMap:(id)indexMap formulaNameToIndexMap:(id)indexMap4;	// 0x30d9c05d
+ (id)readFromParentXmlNode:(xmlNode *)parentXmlNode;	// 0x30d77991
+ (id)readFromParentXmlNode:(xmlNode *)parentXmlNode;	// 0x30e8bdc9
+ (void)readPathsFromCustomGeometryXmlNode:(xmlNode *)customGeometryXmlNode toCustomGeometry:(id)customGeometry formulaNameToIndexMap:(id)indexMap;	// 0x30d9c875
+ (id)readPresetGeometryFromXmlNode:(xmlNode *)xmlNode;	// 0x30d77a01
+ (void)readTextRectFromCustomGeometryXmlNode:(xmlNode *)customGeometryXmlNode toCustomGeometry:(id)customGeometry formulaNameToIndexMap:(id)indexMap;	// 0x30d9c6d5
+ (id)shapeTypeEnumMap;	// 0x30d77b4d
+ (int)shapeTypeForString:(id)string;	// 0x30d77b21
+ (id)stringForShapeType:(int)shapeType;	// 0x30db2dd5
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface OAXColor : NSObject {
}
+ (id)presetColorEnumMap;	// 0x3567dc05
+ (id)readColorFromNode:(xmlNode *)node;	// 0x35668b2d
+ (id)readColorFromParentXmlNode:(xmlNode *)parentXmlNode;	// 0x35668ae1
+ (id)readHslColorFromXmlNode:(xmlNode *)xmlNode;	// 0x3578ab2d
+ (id)readPresetColorFromAttribute:(id)attribute;	// 0x3567d509
+ (id)readPresetColorFromXmlNode:(xmlNode *)xmlNode;	// 0x356921f1
+ (id)readSRgbColorFromXmlNode:(xmlNode *)xmlNode attribute:(const char *)attribute;	// 0x35668f49
+ (id)readScRgbColorFromXmlNode:(xmlNode *)xmlNode;	// 0x356a8cd1
+ (id)readSchemeColorFromXmlNode:(xmlNode *)xmlNode;	// 0x356695c1
+ (id)readSystemColorFromAttribute:(id)attribute;	// 0x35668dad
+ (id)readSystemColorFromXmlNode:(xmlNode *)xmlNode;	// 0x35668cb5
+ (id)schemeColorEnumMap;	// 0x3566968d
+ (id)systemColorEnumMap;	// 0x35668e5d
@end


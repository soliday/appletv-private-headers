/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface CHXChart : NSObject {
}
+ (int)chdDisplayBlanksAsEnumFromXmlElement:(xmlNode *)xmlElement;	// 0x312caab1
+ (void)readChartFromXmlNode:(xmlNode *)xmlNode chart:(id)chart state:(id)state;	// 0x312c4af5
+ (void)readDefaultTextPropertiesFromXmlNode:(xmlNode *)xmlNode chart:(id)chart state:(id)state;	// 0x312c3fb9
+ (id)readFromState:(id)state;	// 0x312c3d29
@end


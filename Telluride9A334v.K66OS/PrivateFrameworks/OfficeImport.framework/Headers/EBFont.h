/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface EBFont : NSObject {
}
+ (int)convertEDScriptEnumToXl:(int)xl;	// 0x3573c4f9
+ (int)convertEDUnderlineEnumToXl:(int)xl;	// 0x3573c509
+ (int)convertXlScriptEnumToED:(int)ed;	// 0x355bd2ad
+ (int)convertXlUnderlineEnumToED:(int)ed;	// 0x355bd2dd
+ (id)edFontFromXlDXfFont:(XlDXfFont *)xlDXfFont edResources:(id)resources;	// 0x355efce9
+ (id)edFontFromXlFont:(XlFont *)xlFont edResources:(id)resources;	// 0x355bc8a1
@end


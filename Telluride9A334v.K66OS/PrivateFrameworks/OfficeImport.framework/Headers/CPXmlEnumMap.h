/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface CPXmlEnumMap : NSObject {
@private
	CFDictionaryRef mNameToValueMap;	// 4 = 0x4
}
- (id)initWithDescriptions:(const CPXmlEnumDescription *)descriptions;	// 0x35692011
- (void)dealloc;	// 0x357af6cd
- (int)readFromNode:(xmlNode *)node ns:(const char *)ns name:(const char *)name;	// 0x356920c9
- (int)readFromNode:(xmlNode *)node ns:(const char *)ns name:(const char *)name def:(int)def;	// 0x356a9559
- (BOOL)readFromNode:(xmlNode *)node ns:(const char *)ns name:(const char *)name value:(int *)value;	// 0x3569212d
@end


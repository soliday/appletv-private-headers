/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface CHXData : NSObject {
}
+ (id)chdDataFromXmlDataElement:(xmlNode *)xmlDataElement state:(id)state;	// 0x32ca4221
+ (bool)isHiddenDataElement:(xmlNode *)element data:(id)data;	// 0x32ca4771
+ (void)readNumDataFromXmlNumDataElement:(xmlNode *)xmlNumDataElement data:(id)data state:(id)state;	// 0x32ca462d
+ (void)readStrDataFromXmlMultiLevelStrDataElement:(xmlNode *)xmlMultiLevelStrDataElement data:(id)data state:(id)state;	// 0x32ca45c5
+ (void)readStrDataFromXmlStrDataElement:(xmlNode *)xmlStrDataElement data:(id)data state:(id)state;	// 0x32ca4525
@end

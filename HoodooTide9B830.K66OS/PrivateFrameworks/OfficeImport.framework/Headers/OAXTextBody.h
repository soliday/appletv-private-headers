/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface OAXTextBody : NSObject {
}
+ (int)readAnchorType:(id)type;	// 0x312927c5
+ (int)readHorizontalOverflowType:(id)type;	// 0x312c0ab5
+ (void)readHorizontalOverflowType:(id)type textBodyProperties:(id)properties;	// 0x3138df55
+ (void)readTextBodyFromXmlNode:(xmlNode *)xmlNode textBody:(id)body drawingState:(id)state;	// 0x31292031
+ (void)readTextBodyProperties:(xmlNode *)properties textBodyProperties:(id)properties2 drawingState:(id)state;	// 0x31292189
+ (void)readVerticalOverflowType:(id)type textBodyProperties:(id)properties;	// 0x312e711d
+ (int)readVerticalType:(id)type;	// 0x3129288d
+ (void)readVerticalType:(id)type textBodyProperties:(id)properties;	// 0x3129285d
+ (void)readWrapType:(id)type textBodyProperties:(id)properties;	// 0x3129fe49
@end


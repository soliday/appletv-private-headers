/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface OAXTextCharPropertyBag : NSObject {
}
+ (void)readCharacterProperties:(xmlNode *)properties characterProperties:(id)properties2 drawingState:(id)state;	// 0x30d8dda9
+ (void)readFont:(xmlNode *)font characterProperties:(id)properties;	// 0x30d8e3f1
+ (void)readFormatting:(xmlNode *)formatting characterProperties:(id)properties drawingState:(id)state;	// 0x30e8c0b1
+ (void)readUnderlineFill:(xmlNode *)fill underline:(id)underline drawingState:(id)state;	// 0x30e8bf85
+ (void)readUnderlineType:(id)type underline:(id)underline;	// 0x30da7d2d
@end


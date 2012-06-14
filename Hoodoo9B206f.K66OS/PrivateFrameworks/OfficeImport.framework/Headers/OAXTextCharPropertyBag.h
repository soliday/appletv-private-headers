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
+ (void)readCharacterProperties:(xmlNode *)properties characterProperties:(id)properties2 drawingState:(id)state;	// 0x3451fda9
+ (void)readFont:(xmlNode *)font characterProperties:(id)properties;	// 0x345203f1
+ (void)readFormatting:(xmlNode *)formatting characterProperties:(id)properties drawingState:(id)state;	// 0x3461e0b1
+ (void)readUnderlineFill:(xmlNode *)fill underline:(id)underline drawingState:(id)state;	// 0x3461df85
+ (void)readUnderlineType:(id)type underline:(id)underline;	// 0x34539d2d
@end


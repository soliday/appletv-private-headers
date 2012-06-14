/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface OABFill : NSObject {
}
+ (void)addStopsFromArray:(const OABGradientStop *)array stopCount:(int)count inverted:(BOOL)inverted startPos:(float)pos endPos:(float)pos5 toGradientFill:(id)gradientFill fillPropertiesManager:(id)manager;	// 0x311b16f9
+ (id)readFillFromFillPropertiesManager:(id)fillPropertiesManager colorPalette:(id)palette;	// 0x310eeee1
+ (void)readGradientFill:(id)fill fromFillPropertiesManager:(id)fillPropertiesManager colorPalette:(id)palette;	// 0x311b0e91
+ (void)readImageFill:(id)fill fromFillPropertiesManager:(id)fillPropertiesManager colorPalette:(id)palette;	// 0x311ab221
@end


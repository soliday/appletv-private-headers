/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADGraphicProperties.h"

@class OADImageFill;

__attribute__((visibility("hidden")))
@interface OADImageProperties : OADGraphicProperties {
@private
	OADImageFill *mImageFill;	// 52 = 0x34
}
@property(retain) id imageFill;	// G=0x32b83155; S=0x32b98ad1; converted property
+ (id)defaultProperties;	// 0x32b98019
- (void)dealloc;	// 0x32b13465
- (BOOL)hasImageFill;	// 0x32b830b5
// converted property getter: - (id)imageFill;	// 0x32b83155
// converted property setter: - (void)setImageFill:(id)fill;	// 0x32b98ad1
@end


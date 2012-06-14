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
@property(retain) id imageFill;	// G=0x31179251; S=0x311a68b1; converted property
+ (id)defaultProperties;	// 0x311a56b5
- (void)dealloc;	// 0x31170e39
- (BOOL)hasImageFill;	// 0x31179281
// converted property getter: - (id)imageFill;	// 0x31179251
// converted property setter: - (void)setImageFill:(id)fill;	// 0x311a68b1
@end

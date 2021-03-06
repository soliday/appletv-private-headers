/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface OADColor : NSObject <NSCopying> {
@private
	NSMutableArray *mTransforms;	// 4 = 0x4
}
@property(retain) id transforms;	// G=0x310eb249; S=0x3124ecc1; converted property
+ (id)basicMapOfColor:(id)color colorMap:(id)map colorScheme:(id)scheme colorPalette:(id)palette;	// 0x310eaa71
+ (id)colorWithRedByte:(unsigned char)redByte greenByte:(unsigned char)byte blueByte:(unsigned char)byte3;	// 0x311b2a9d
+ (id)mapAdjustedColor:(id)color colorMap:(id)map colorScheme:(id)scheme colorPalette:(id)palette;	// 0x311b2699
+ (int)mapSchemeColorID:(int)anId colorMap:(id)map;	// 0x310eacd1
+ (id)nsColorWithOADColor:(id)oadcolor;	// 0x313835d9
+ (id)nsColorWithOADColor:(id)oadcolor colorMap:(id)map colorScheme:(id)scheme colorPalette:(id)palette;	// 0x310eaa05
+ (id)nsColorWithRed:(float)red green:(float)green blue:(float)blue;	// 0x310eaf01
- (void)addTransform:(id)transform;	// 0x311b34b9
- (void)addTransformOfType:(int)type;	// 0x31383575
- (void)addTransformOfType:(int)type value:(float)value;	// 0x312c5525
- (id)colorForStyleColor:(id)styleColor;	// 0x312a957d
- (id)copyWithZone:(NSZone *)zone;	// 0x31383561
- (void)dealloc;	// 0x3116afa9
- (unsigned)hash;	// 0x3116aacd
- (BOOL)isEqual:(id)equal;	// 0x3116aaed
// converted property setter: - (void)setTransforms:(id)transforms;	// 0x3124ecc1
// converted property getter: - (id)transforms;	// 0x310eb249
@end


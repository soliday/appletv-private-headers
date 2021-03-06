/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class NSColorStub;

__attribute__((visibility("hidden")))
@interface WDBorder : NSObject <NSCopying> {
@private
	int mStyle;	// 4 = 0x4
	NSColorStub *mColor;	// 8 = 0x8
	unsigned char mWidth;	// 12 = 0xc
	unsigned char mSpace;	// 13 = 0xd
	BOOL mShadow;	// 14 = 0xe
	BOOL mFrame;	// 15 = 0xf
}
@property(retain) id color;	// G=0x34468809; S=0x344990b5; converted property
@property(assign) BOOL frame;	// G=0x345d2dbd; S=0x3449911d; converted property
@property(assign) BOOL shadow;	// G=0x345d2dad; S=0x3449910d; converted property
@property(assign) unsigned char space;	// G=0x345d2d9d; S=0x344990fd; converted property
@property(assign) int style;	// G=0x344687e9; S=0x344990a5; converted property
@property(assign) unsigned char width;	// G=0x344687f9; S=0x344990ed; converted property
- (id)init;	// 0x344803b5
// converted property getter: - (id)color;	// 0x34468809
- (id)copyWithZone:(NSZone *)zone;	// 0x345d2dcd
- (void)dealloc;	// 0x3446cefd
// converted property getter: - (BOOL)frame;	// 0x345d2dbd
- (BOOL)isEqual:(id)equal;	// 0x345d3061
- (BOOL)isEqualToBorder:(id)border;	// 0x345d30b5
- (void)setBorder:(id)border;	// 0x345d2f7d
// converted property setter: - (void)setColor:(id)color;	// 0x344990b5
// converted property setter: - (void)setFrame:(BOOL)frame;	// 0x3449911d
- (void)setNullBorder;	// 0x345d2ef1
// converted property setter: - (void)setShadow:(BOOL)shadow;	// 0x3449910d
- (void)setSingleBlackBorder;	// 0x345d2e65
// converted property setter: - (void)setSpace:(unsigned char)space;	// 0x344990fd
// converted property setter: - (void)setStyle:(int)style;	// 0x344990a5
// converted property setter: - (void)setWidth:(unsigned char)width;	// 0x344990ed
// converted property getter: - (BOOL)shadow;	// 0x345d2dad
// converted property getter: - (unsigned char)space;	// 0x345d2d9d
// converted property getter: - (int)style;	// 0x344687e9
// converted property getter: - (unsigned char)width;	// 0x344687f9
@end


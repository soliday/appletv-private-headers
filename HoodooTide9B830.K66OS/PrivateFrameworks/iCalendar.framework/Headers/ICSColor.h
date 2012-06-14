/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import "NSCoding.h"
#import <NSObject.h> // Unknown library


@interface ICSColor : NSObject <NSCoding> {
	unsigned char _red;	// 4 = 0x4
	unsigned char _green;	// 5 = 0x5
	unsigned char _blue;	// 6 = 0x6
}
@property(readonly, assign) unsigned char blue;	// G=0x32800c0d; converted property
@property(readonly, assign) unsigned char green;	// G=0x32800bfd; converted property
@property(readonly, assign) unsigned char red;	// G=0x32800bed; converted property
- (id)initWithCoder:(id)coder;	// 0x32800c95
- (id)initWithRed:(unsigned char)red green:(unsigned char)green blue:(unsigned char)blue;	// 0x32800b8d
// converted property getter: - (unsigned char)blue;	// 0x32800c0d
- (void)encodeWithCoder:(id)coder;	// 0x32800c1d
// converted property getter: - (unsigned char)green;	// 0x32800bfd
// converted property getter: - (unsigned char)red;	// 0x32800bed
@end


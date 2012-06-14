/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BREvent.h"


@interface BRHIDEvent : BREvent {
@private
	unsigned short _page;	// 30 = 0x1e
	unsigned short _usage;	// 32 = 0x20
	unsigned long long _extendedSignature;	// 36 = 0x24
}
@property(readonly, assign) unsigned long long extendedSignature;	// G=0x329b05fd; converted property
@property(readonly, assign) unsigned short page;	// G=0x329b05dd; converted property
@property(readonly, assign) unsigned short usage;	// G=0x329b05ed; converted property
+ (id)eventWithPage:(unsigned short)page usage:(unsigned short)usage value:(int)value;	// 0x329b00fd
+ (id)eventWithPage:(unsigned short)page usage:(unsigned short)usage value:(int)value atTime:(double)time;	// 0x329b00ad
+ (id)eventWithPage:(unsigned short)page usage:(unsigned short)usage value:(int)value extendedSignature:(unsigned long long)signature;	// 0x329b0059
+ (id)eventWithPage:(unsigned short)page usage:(unsigned short)usage value:(int)value extendedSignature:(unsigned long long)signature atTime:(double)time;	// 0x329afffd
- (id)initWithPage:(unsigned short)page usage:(unsigned short)usage value:(int)value;	// 0x329b0145
- (id)initWithPage:(unsigned short)page usage:(unsigned short)usage value:(int)value atTime:(double)time;	// 0x329b01c9
- (id)initWithPage:(unsigned short)page usage:(unsigned short)usage value:(int)value extendedSignature:(unsigned long long)signature;	// 0x329b0181
- (id)initWithPage:(unsigned short)page usage:(unsigned short)usage value:(int)value extendedSignature:(unsigned long long)signature atTime:(double)time;	// 0x329b01fd
- (id)description;	// 0x329b03b5
// converted property getter: - (unsigned long long)extendedSignature;	// 0x329b05fd
- (BOOL)isEqual:(id)equal;	// 0x329b04e9
// converted property getter: - (unsigned short)page;	// 0x329b05dd
// converted property getter: - (unsigned short)usage;	// 0x329b05ed
@end


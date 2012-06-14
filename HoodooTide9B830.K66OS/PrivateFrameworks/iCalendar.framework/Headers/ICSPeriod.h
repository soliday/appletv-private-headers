/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class ICSDuration, ICSDateValue;

@interface ICSPeriod : NSObject <NSCoding> {
	ICSDateValue *_start;	// 4 = 0x4
	ICSDateValue *_end;	// 8 = 0x8
	ICSDuration *_duration;	// 12 = 0xc
}
@property(readonly, retain) ICSDuration *duration;	// G=0x32823d25; converted property
@property(readonly, retain) ICSDateValue *end;	// G=0x32823d15; converted property
@property(readonly, retain) ICSDateValue *start;	// G=0x32823d05; converted property
- (id)initWithCoder:(id)coder;	// 0x32823dcd
- (id)initWithStart:(id)start;	// 0x32823bbd
- (id)initWithStart:(id)start duration:(id)duration;	// 0x32823c51
- (id)initWithStart:(id)start end:(id)end;	// 0x32823c11
- (void)_ICSStringWithOptions:(unsigned)options appendingToString:(id)string;	// 0x327ff21d
- (void)dealloc;	// 0x32823c91
// converted property getter: - (id)duration;	// 0x32823d25
- (void)encodeWithCoder:(id)coder;	// 0x32823d55
// converted property getter: - (id)end;	// 0x32823d15
- (BOOL)isDurationBased;	// 0x32823d35
// converted property getter: - (id)start;	// 0x32823d05
@end


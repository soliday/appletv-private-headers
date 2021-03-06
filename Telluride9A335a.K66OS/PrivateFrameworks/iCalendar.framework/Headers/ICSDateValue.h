/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import "NSCoding.h"
#import <NSObject.h> // Unknown library


@interface ICSDateValue : NSObject <NSCoding> {
	int _year;	// 4 = 0x4
	int _month;	// 8 = 0x8
	int _day;	// 12 = 0xc
}
@property(readonly, assign) int day;	// G=0x3679d245; @synthesize=_day
@property(readonly, assign) int month;	// G=0x3679d235; @synthesize=_month
@property(readonly, assign) int year;	// G=0x3679d225; @synthesize=_year
+ (id)dateFromICSString:(id)icsstring;	// 0x3679cdd9
+ (id)dateFromICSUTF8String:(const char *)icsutf8String;	// 0x3679d255
- (id)initWithCoder:(id)coder;	// 0x3679d185
- (id)initWithYear:(int)year month:(int)month day:(int)day;	// 0x3679ce09
- (void)_ICSStringWithOptions:(unsigned)options appendingToString:(id)string;	// 0x36778cb5
- (int)compare:(id)compare;	// 0x3679cf11
- (id)components;	// 0x3679ce69
- (int)dateType;	// 0x3679d4d9
// declared property getter: - (int)day;	// 0x3679d245
- (id)description;	// 0x3679d0f9
- (void)encodeWithCoder:(id)coder;	// 0x3679d10d
- (id)icsString;	// 0x3679d0e5
// declared property getter: - (int)month;	// 0x3679d235
// declared property getter: - (int)year;	// 0x3679d225
@end


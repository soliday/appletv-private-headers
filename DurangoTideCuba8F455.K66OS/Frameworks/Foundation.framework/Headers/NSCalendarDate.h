/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSDate.h> // Unknown library
#import "Foundation-Structs.h"

@class NSString, NSTimeZone;

@interface NSCalendarDate : NSDate {
@private
	unsigned refCount;	// 4 = 0x4
	double _timeIntervalSinceReferenceDate;	// 8 = 0x8
	NSTimeZone *_timeZone;	// 16 = 0x10
	NSString *_formatString;	// 20 = 0x14
	void *_reserved;	// 24 = 0x18
}
@property(retain) id calendarFormat;	// G=0x310421e9; S=0x31027025; converted property
@property(readonly, assign) double timeIntervalSinceReferenceDate;	// G=0x30ff983d; converted property
@property(retain) NSTimeZone *timeZone;	// G=0x310421d9; S=0x31026fd1; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x30ff96b1
+ (id)calendarDate;	// 0x310427c5
+ (id)dateWithNaturalLanguageString:(id)naturalLanguageString date:(id)date locale:(id)locale;	// 0x310450f5
+ (id)dateWithString:(id)string calendarFormat:(id)format;	// 0x3104245d
+ (id)dateWithString:(id)string calendarFormat:(id)format locale:(id)locale;	// 0x31042419
+ (id)dateWithYear:(int)year month:(unsigned)month day:(unsigned)day hour:(unsigned)hour minute:(unsigned)minute second:(unsigned)second timeZone:(id)zone;	// 0x3102a731
+ (id)distantFuture;	// 0x3104283d
+ (id)distantPast;	// 0x310427f9
- (id)init;	// 0x30ff9735
- (id)initWithCoder:(id)coder;	// 0x31042525
- (id)initWithString:(id)string;	// 0x310429d5
- (id)initWithString:(id)string calendarFormat:(id)format;	// 0x310424a1
- (id)initWithString:(id)string calendarFormat:(id)format locale:(id)locale;	// 0x31043acd
- (id)initWithTimeIntervalSinceReferenceDate:(double)timeIntervalSinceReferenceDate;	// 0x30ff9759
- (id)initWithYear:(int)year month:(unsigned)month day:(unsigned)day hour:(unsigned)hour minute:(unsigned)minute second:(unsigned)second timeZone:(id)zone;	// 0x3102a785
- (id)addTimeInterval:(double)interval;	// 0x31026f49
// converted property getter: - (id)calendarFormat;	// 0x310421e9
- (Class)classForCoder;	// 0x31042a01
- (id)copyWithZone:(NSZone *)zone;	// 0x31042a0d
- (id)dateByAddingYears:(int)years months:(int)months days:(int)days hours:(int)hours minutes:(int)minutes seconds:(int)seconds;	// 0x31042ba5
- (int)dayOfCommonEra;	// 0x31042739
- (int)dayOfMonth;	// 0x31042a81
- (int)dayOfWeek;	// 0x31042ae1
- (int)dayOfYear;	// 0x31042b29
- (void)dealloc;	// 0x30ff98e9
- (id)description;	// 0x31042501
- (id)descriptionWithCalendarFormat:(id)calendarFormat;	// 0x310424c5
- (id)descriptionWithCalendarFormat:(id)calendarFormat locale:(id)locale;	// 0x31042e21
- (id)descriptionWithLocale:(id)locale;	// 0x310424dd
- (void)encodeWithCoder:(id)coder;	// 0x31042635
- (int)hourOfDay;	// 0x31046189
- (int)microsecondOfSecond;	// 0x31042b51
- (int)minuteOfHour;	// 0x31026ec9
- (int)monthOfYear;	// 0x31042ab1
- (oneway void)release;	// 0x30ff984d
- (int)secondOfMinute;	// 0x30ff97c1
// converted property setter: - (void)setCalendarFormat:(id)format;	// 0x31027025
// converted property setter: - (void)setTimeZone:(id)zone;	// 0x31026fd1
// converted property getter: - (double)timeIntervalSinceReferenceDate;	// 0x30ff983d
// converted property getter: - (id)timeZone;	// 0x310421d9
- (id)timeZoneDetail;	// 0x310427b1
- (int)yearOfCommonEra;	// 0x3102a701
- (void)years:(int *)years months:(int *)months days:(int *)days hours:(int *)hours minutes:(int *)minutes seconds:(int *)seconds sinceDate:(id)date;	// 0x31042c89
@end


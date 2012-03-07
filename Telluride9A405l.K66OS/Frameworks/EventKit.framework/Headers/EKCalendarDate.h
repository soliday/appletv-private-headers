/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "NSCopying.h"
#import "NSMutableCopying.h"
#import "EventKit-Structs.h"
#import <NSObject.h> // Unknown library

@class EKTimeZone;

@interface EKCalendarDate : NSObject <NSCopying, NSMutableCopying> {
	XXStruct_lQVxyC _dateGr;	// 4 = 0x4
	double _dateAbs;	// 20 = 0x14
	EKTimeZone *_timeZone;	// 28 = 0x1c
	unsigned _flags;	// 32 = 0x20
}
@property(readonly, retain) EKTimeZone *timeZone;	// G=0x331d2f85; converted property
+ (id)calendarDateWithAbsoluteTime:(double)absoluteTime timeZone:(id)zone;	// 0x331c5989
+ (id)calendarDateWithDate:(id)date timeZone:(id)zone;	// 0x331c861d
+ (id)calendarDateWithDateComponents:(id)dateComponents timeZone:(id)zone;	// 0x331c6fbd
+ (id)calendarDateWithGregorianDate:(XXStruct_lQVxyC)gregorianDate timeZone:(id)zone;	// 0x331d4775
- (id)initWithAbsoluteTime:(double)absoluteTime internalTimeZone:(id)zone;	// 0x3321fbf9
- (id)initWithAbsoluteTime:(double)absoluteTime timeZone:(id)zone;	// 0x331c59d1
- (id)initWithDate:(id)date timeZone:(id)zone;	// 0x331c865d
- (id)initWithDateComponents:(id)dateComponents timeZone:(id)zone;	// 0x331c6ffd
- (id)initWithGregorianDate:(XXStruct_lQVxyC)gregorianDate internalTimeZone:(id)zone;	// 0x331c6f29
- (id)initWithGregorianDate:(XXStruct_lQVxyC)gregorianDate timeZone:(id)zone;	// 0x331d47c9
- (double)absoluteTime;	// 0x331c6391
- (id)calendarDateByAddingDays:(int)days;	// 0x331c7325
- (id)calendarDateByAddingGregorianUnits:(XXStruct_mY3THC)units;	// 0x331c7351
- (id)calendarDateByAddingWeeks:(int)weeks;	// 0x3321fdb5
- (id)calendarDateForDay;	// 0x331c71b5
- (id)calendarDateForEndOfDay;	// 0x331c7441
- (id)calendarDateForEndOfMonth;	// 0x331cc0d9
- (id)calendarDateForEndOfWeekWithWeekStart:(unsigned)weekStart;	// 0x331cbf09
- (id)calendarDateForMonth;	// 0x331cbfe5
- (id)calendarDateForWeekWithWeekStart:(unsigned)weekStart;	// 0x331c62dd
- (id)calendarDateForWeekWithWeekStart:(unsigned)weekStart daysSinceWeekStart:(int *)start;	// 0x331c62f1
- (id)calendarDateForYear;	// 0x3321ffb1
- (id)calendarDateInTimeZone:(id)timeZone;	// 0x331ddce1
- (id)calendarDateWithDate:(id)date;	// 0x3321fde5
- (int)compare:(id)compare;	// 0x331c95c1
- (id)components;	// 0x331ddde5
- (id)copyWithZone:(NSZone *)zone;	// 0x331c62cd
- (id)date;	// 0x331c7545
- (unsigned)day;	// 0x331e2745
- (unsigned)dayOfWeek;	// 0x331e19e9
- (unsigned)dayOfYear;	// 0x3321febd
- (unsigned)daysInMonth;	// 0x331cc1e5
- (unsigned)daysInYear;	// 0x3321ff1d
- (void)dealloc;	// 0x331c8869
- (id)description;	// 0x3321fc75
- (XXStruct_mY3THC)differenceAsGregorianUnits:(id)units flags:(unsigned long)flags;	// 0x331c8fbd
- (int)differenceInDays:(id)days;	// 0x331cbed1
- (int)differenceInMonths:(id)months;	// 0x331e26ed
- (int)differenceInYears:(id)years;	// 0x3321fe21
- (id)earlierDate:(id)date;	// 0x331e2c59
- (XXStruct_lQVxyC)gregorianDate;	// 0x331c7299
- (unsigned)hour;	// 0x331e1121
- (BOOL)isEqual:(id)equal;	// 0x331d3bc5
- (id)laterDate:(id)date;	// 0x332200b1
- (unsigned)minute;	// 0x331e1155
- (unsigned)month;	// 0x3321fe89
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x331e1945
- (double)second;	// 0x331e1189
- (int)secondsFromGMT;	// 0x3321fd79
// converted property getter: - (id)timeZone;	// 0x331d2f85
- (unsigned)weekOfYear;	// 0x3321feed
- (unsigned)weeksInYear;	// 0x3321ff65
- (unsigned)year;	// 0x3321fe59
@end

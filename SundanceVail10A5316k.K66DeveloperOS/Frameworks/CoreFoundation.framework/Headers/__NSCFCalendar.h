/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSCalendar.h"


__attribute__((visibility("hidden")))
@interface __NSCFCalendar : NSCalendar {
}
@property(assign) unsigned firstWeekday;	// G=0x37140a35; S=0x371409a1; converted property
@property(retain) id gregorianStartDate;	// G=0x37140dd9; S=0x37140c29; converted property
@property(retain) id locale;	// G=0x370d23b1; S=0x370c17c1; converted property
@property(assign) unsigned minimumDaysInFirstWeek;	// G=0x37140b41; S=0x37140aad; converted property
@property(retain) id timeZone;	// G=0x370c28f5; S=0x370c16cd; converted property
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x3714092d
- (id)initWithCalendarIdentifier:(id)calendarIdentifier;	// 0x370c16a1
- (BOOL)_isDeallocating;	// 0x371408dd
- (BOOL)_tryRetain;	// 0x371408cd
- (id)calendarIdentifier;	// 0x370c81b9
- (id)components:(unsigned)components fromDate:(id)date;	// 0x370c17c9
- (id)components:(unsigned)components fromDate:(id)date toDate:(id)date3 options:(unsigned)options;	// 0x370d18d9
- (id)copyWithZone:(NSZone *)zone;	// 0x370c4291
- (id)dateByAddingComponents:(id)components toDate:(id)date options:(unsigned)options;	// 0x370c33b9
- (id)dateFromComponents:(id)components;	// 0x370c23f9
- (void)finalize;	// 0x371408ed
// converted property getter: - (unsigned)firstWeekday;	// 0x37140a35
// converted property getter: - (id)gregorianStartDate;	// 0x37140dd9
- (unsigned)hash;	// 0x371408b5
- (BOOL)isEqual:(id)equal;	// 0x370c339d
// converted property getter: - (id)locale;	// 0x370d23b1
- (NSRange)maximumRangeOfUnit:(unsigned)unit;	// 0x371410b5
// converted property getter: - (unsigned)minimumDaysInFirstWeek;	// 0x37140b41
- (NSRange)minimumRangeOfUnit:(unsigned)unit;	// 0x37140e85
- (unsigned)ordinalityOfUnit:(unsigned)unit inUnit:(unsigned)unit2 forDate:(id)date;	// 0x371410e9
- (NSRange)rangeOfUnit:(unsigned)unit inUnit:(unsigned)unit2 forDate:(id)date;	// 0x370d054d
- (BOOL)rangeOfUnit:(unsigned)unit startDate:(id *)date interval:(double *)interval forDate:(id)date4;	// 0x37141181
- (oneway void)release;	// 0x370c4331
- (id)retain;	// 0x371408b9
- (unsigned)retainCount;	// 0x371408e9
// converted property setter: - (void)setFirstWeekday:(unsigned)weekday;	// 0x371409a1
// converted property setter: - (void)setGregorianStartDate:(id)date;	// 0x37140c29
// converted property setter: - (void)setLocale:(id)locale;	// 0x370c17c1
// converted property setter: - (void)setMinimumDaysInFirstWeek:(unsigned)firstWeek;	// 0x37140aad
// converted property setter: - (void)setTimeZone:(id)zone;	// 0x370c16cd
// converted property getter: - (id)timeZone;	// 0x370c28f5
@end

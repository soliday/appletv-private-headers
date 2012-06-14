/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKPersistentObject.h"
#import "NSCopying.h"
#import "EventKit-Structs.h"

@class NSArray, EKRecurrenceEnd, NSString, EKPersistentCalendarItem, NSDate;

@interface EKPersistentRecurrenceRule : EKPersistentObject <NSCopying> {
@private
	id _helper;	// 32 = 0x20
	EKRecurrenceEnd *_recurrenceEnd;	// 36 = 0x24
}
@property(readonly, assign, nonatomic) NSString *UUID;	// G=0x31f558fd; 
@property(readonly, assign, nonatomic) NSString *calendarIdentifier;	// G=0x31f55c69; 
@property(assign, nonatomic) int count;	// G=0x31eff021; S=0x31efbbe1; 
@property(copy, nonatomic) NSArray *daysOfTheMonth;	// G=0x31eff339; S=0x31efb975; 
@property(copy, nonatomic) NSArray *daysOfTheWeek;	// G=0x31eff0ad; S=0x31efb16d; 
@property(copy, nonatomic) NSArray *daysOfTheYear;	// G=0x31eff26d; S=0x31efba55; 
@property(copy, nonatomic) NSDate *endDate;	// G=0x31eff005; S=0x31efb799; 
@property(assign, nonatomic) int firstDayOfTheWeek;	// G=0x31eff225; S=0x31f55cbd; 
@property(assign, nonatomic) int frequency;	// G=0x31eff1b1; S=0x31ef7461; 
@property(assign, nonatomic) int interval;	// G=0x31eff135; S=0x31ef7569; 
@property(copy, nonatomic) NSArray *monthsOfTheYear;	// G=0x31eff069; S=0x31efb7b5; 
@property(retain, nonatomic) EKPersistentCalendarItem *owner;	// G=0x31efd211; S=0x31efbb35; 
@property(copy, nonatomic) NSArray *setPositions;	// G=0x31eff2b1; S=0x31efb6b9; 
@property(readonly, assign, nonatomic) BOOL shouldPinMonthDays;	// G=0x31f55919; 
@property(copy, nonatomic) NSArray *weeksOfTheYear;	// G=0x31eff2f5; S=0x31efb895; 
+ (id)relations;	// 0x31efbb51
- (id)init;	// 0x31ef73cd
// declared property getter: - (id)UUID;	// 0x31f558fd
- (id)_helper;	// 0x31efb199
- (id)cachedEndDate;	// 0x31f55ca1
// declared property getter: - (id)calendarIdentifier;	// 0x31f55c69
- (id)copyWithZone:(NSZone *)zone;	// 0x31f55a55
// declared property getter: - (int)count;	// 0x31eff021
// declared property getter: - (id)daysOfTheMonth;	// 0x31eff339
// declared property getter: - (id)daysOfTheWeek;	// 0x31eff0ad
// declared property getter: - (id)daysOfTheYear;	// 0x31eff26d
- (void)dealloc;	// 0x31f009b9
- (id)description;	// 0x31f55971
// declared property getter: - (id)endDate;	// 0x31eff005
- (int)entityType;	// 0x31efb169
// declared property getter: - (int)firstDayOfTheWeek;	// 0x31eff225
// declared property getter: - (int)frequency;	// 0x31eff1b1
- (XXStruct_mY3THC)gregorianUnits;	// 0x31f55bd9
// declared property getter: - (int)interval;	// 0x31eff135
- (BOOL)isDirty;	// 0x31f55b81
// declared property getter: - (id)monthsOfTheYear;	// 0x31eff069
// declared property getter: - (id)owner;	// 0x31efd211
// declared property setter: - (void)setCount:(int)count;	// 0x31efbbe1
// declared property setter: - (void)setDaysOfTheMonth:(id)theMonth;	// 0x31efb975
// declared property setter: - (void)setDaysOfTheWeek:(id)theWeek;	// 0x31efb16d
// declared property setter: - (void)setDaysOfTheYear:(id)theYear;	// 0x31efba55
// declared property setter: - (void)setEndDate:(id)date;	// 0x31efb799
// declared property setter: - (void)setFirstDayOfTheWeek:(int)theWeek;	// 0x31f55cbd
// declared property setter: - (void)setFrequency:(int)frequency;	// 0x31ef7461
// declared property setter: - (void)setInterval:(int)interval;	// 0x31ef7569
// declared property setter: - (void)setMonthsOfTheYear:(id)theYear;	// 0x31efb7b5
// declared property setter: - (void)setOwner:(id)owner;	// 0x31efbb35
// declared property getter: - (id)setPositions;	// 0x31eff2b1
// declared property setter: - (void)setSetPositions:(id)positions;	// 0x31efb6b9
// declared property setter: - (void)setWeeksOfTheYear:(id)theYear;	// 0x31efb895
// declared property getter: - (BOOL)shouldPinMonthDays;	// 0x31f55919
- (BOOL)validate:(id *)validate;	// 0x31efd15d
// declared property getter: - (id)weeksOfTheYear;	// 0x31eff2f5
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "NSCoding.h"
#import "ASItem.h"

@class NSNumber, NSDate, ASEvent;

@interface ASRecurrence : ASItem <NSCoding> {
	NSNumber *_type;	// 40 = 0x28
	NSNumber *_interval;	// 44 = 0x2c
	NSNumber *_dayOfWeek;	// 48 = 0x30
	NSNumber *_dayOfMonth;	// 52 = 0x34
	NSNumber *_weekOfMonth;	// 56 = 0x38
	NSNumber *_monthOfYear;	// 60 = 0x3c
	NSDate *_until;	// 64 = 0x40
	NSNumber *_occurrences;	// 68 = 0x44
	NSNumber *_calendarType;	// 72 = 0x48
	ASEvent *_parentEvent;	// 76 = 0x4c
}
@property(retain) NSNumber *calendarType;	// G=0x32f16161; S=0x32f162d9; @synthesize=_calendarType
@property(retain) NSNumber *dayOfMonth;	// G=0x32f160e9; S=0x32f161fd; @synthesize=_dayOfMonth
@property(retain) NSNumber *dayOfWeek;	// G=0x32f160d1; S=0x32f161d1; @synthesize=_dayOfWeek
@property(retain) NSNumber *interval;	// G=0x32f160b9; S=0x32f161a5; @synthesize=_interval
@property(retain) NSNumber *monthOfYear;	// G=0x32f16119; S=0x32f16255; @synthesize=_monthOfYear
@property(retain) NSNumber *occurrences;	// G=0x32f16149; S=0x32f162ad; @synthesize=_occurrences
@property(retain) NSNumber *type;	// G=0x32f160a1; S=0x32f16179; @synthesize=_type
@property(retain) NSDate *until;	// G=0x32f16131; S=0x32f16281; @synthesize=_until
@property(retain) NSNumber *weekOfMonth;	// G=0x32f16101; S=0x32f16229; @synthesize=_weekOfMonth
+ (BOOL)acceptsTopLevelLeaves;	// 0x32f1592d
+ (BOOL)frontingBasicTypes;	// 0x32f15855
+ (BOOL)notifyOfUnknownTokens;	// 0x32f1580d
+ (BOOL)parsingLeafNode;	// 0x32f158e5
+ (BOOL)parsingWithSubItems;	// 0x32f1589d
- (id)initWithCalRecurrence:(void *)calRecurrence parentEvent:(id)event;	// 0x32f15c71
- (id)initWithCoder:(id)coder;	// 0x32f15975
- (BOOL)_loadAttributesFromCalRecurrence:(void *)calRecurrence parentStartDate:(id)date parentItem:(id)item;	// 0x32f16305
- (void *)_newRecurrence;	// 0x32f169e5
- (BOOL)_requiresParentEvent;	// 0x32f14835
- (id)_transformedUntilDateForActiveSync:(id)activeSync;	// 0x32f155cd
- (id)_untilDateForCalFramework;	// 0x32f156d5
- (void)appendActiveSyncDataForTask:(id)task toWBXMLData:(id)wbxmldata;	// 0x32f14f75
- (id)asParseRules;	// 0x32f151c5
// declared property getter: - (id)calendarType;	// 0x32f16161
// declared property getter: - (id)dayOfMonth;	// 0x32f160e9
// declared property getter: - (id)dayOfWeek;	// 0x32f160d1
- (void)dealloc;	// 0x32f15b99
- (void)encodeWithCoder:(id)coder;	// 0x32f14da9
// declared property getter: - (id)interval;	// 0x32f160b9
// declared property getter: - (id)monthOfYear;	// 0x32f16119
// declared property getter: - (id)occurrences;	// 0x32f16149
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x32f15cf9
- (void)saveToCalendarWithParentASEvent:(id)parentASEvent existingRecord:(void *)record shouldMergeProperties:(BOOL)properties outMergeDidChooseLocalProperties:(BOOL *)outMerge;	// 0x32f1603d
// declared property setter: - (void)setCalendarType:(id)type;	// 0x32f162d9
// declared property setter: - (void)setDayOfMonth:(id)month;	// 0x32f161fd
// declared property setter: - (void)setDayOfWeek:(id)week;	// 0x32f161d1
// declared property setter: - (void)setInterval:(id)interval;	// 0x32f161a5
// declared property setter: - (void)setMonthOfYear:(id)year;	// 0x32f16255
// declared property setter: - (void)setOccurrences:(id)occurrences;	// 0x32f162ad
- (void)setParentEvent:(id)event;	// 0x32f14825
// declared property setter: - (void)setType:(id)type;	// 0x32f16179
// declared property setter: - (void)setUntil:(id)until;	// 0x32f16281
- (void)setUntilString:(id)string;	// 0x32f14f41
// declared property setter: - (void)setWeekOfMonth:(id)month;	// 0x32f16229
// declared property getter: - (id)type;	// 0x32f160a1
// declared property getter: - (id)until;	// 0x32f16131
// declared property getter: - (id)weekOfMonth;	// 0x32f16101
@end


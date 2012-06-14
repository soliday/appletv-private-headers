/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EventKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface EKRecurrenceHelper : NSObject {
@private
	NSString *_specifier;	// 4 = 0x4
	BOOL _dirty;	// 8 = 0x8
	BOOL _parsed;	// 9 = 0x9
	NSArray *_daysOfTheWeek;	// 12 = 0xc
	NSArray *_daysOfTheMonth;	// 16 = 0x10
	NSArray *_daysOfTheYear;	// 20 = 0x14
	NSArray *_weeksOfTheYear;	// 24 = 0x18
	NSArray *_monthsOfTheYear;	// 28 = 0x1c
	NSArray *_setPositions;	// 32 = 0x20
}
@property(copy, nonatomic) NSArray *daysOfTheMonth;	// G=0x3246ba09; S=0x3246b9a1; 
@property(copy, nonatomic) NSArray *daysOfTheWeek;	// G=0x3246b2c9; S=0x3246b261; 
@property(copy, nonatomic) NSArray *daysOfTheYear;	// G=0x3246bae9; S=0x3246ba81; 
@property(readonly, assign, nonatomic) BOOL isDirty;	// G=0x3246d201; 
@property(copy, nonatomic) NSArray *monthsOfTheYear;	// G=0x3246b849; S=0x3246b7e1; 
@property(copy, nonatomic) NSArray *setPositions;	// G=0x3246b74d; S=0x3246b6e5; 
@property(copy, nonatomic) NSString *specifier;	// G=0x324c0051; S=0x324c00ad; 
@property(copy, nonatomic) NSArray *weeksOfTheYear;	// G=0x3246b929; S=0x3246b8c1; 
- (id)initWithSpecifier:(id)specifier;	// 0x3246b20d
- (void)_appendDaysOfTheWeek:(id)theWeek toSpecifier:(id)specifier;	// 0x324c0309
- (void)_appendIndexList:(id)list toSpecifier:(id)specifier propertyKey:(unsigned short)key;	// 0x324c0465
- (void)_clearArrays;	// 0x3246b601
- (id)_parseDaysOfWeek:(XXStruct_1STaIB *)week range:(XXStruct_K5nmsA)range;	// 0x324c0571
- (id)_parseIndexList:(XXStruct_1STaIB *)list range:(XXStruct_K5nmsA)range;	// 0x324c0879
- (void)_parseSpecifierIfNeeded;	// 0x3246b315
- (void)_updateSpecifier;	// 0x324c0141
// declared property getter: - (id)daysOfTheMonth;	// 0x3246ba09
// declared property getter: - (id)daysOfTheWeek;	// 0x3246b2c9
// declared property getter: - (id)daysOfTheYear;	// 0x3246bae9
- (void)dealloc;	// 0x324bfdf1
// declared property getter: - (BOOL)isDirty;	// 0x3246d201
- (BOOL)isEqual:(id)equal;	// 0x324bffa5
// declared property getter: - (id)monthsOfTheYear;	// 0x3246b849
- (void)revert;	// 0x324bfeb5
// declared property setter: - (void)setDaysOfTheMonth:(id)theMonth;	// 0x3246b9a1
// declared property setter: - (void)setDaysOfTheWeek:(id)theWeek;	// 0x3246b261
// declared property setter: - (void)setDaysOfTheYear:(id)theYear;	// 0x3246ba81
// declared property setter: - (void)setMonthsOfTheYear:(id)theYear;	// 0x3246b7e1
// declared property getter: - (id)setPositions;	// 0x3246b74d
// declared property setter: - (void)setSetPositions:(id)positions;	// 0x3246b6e5
// declared property setter: - (void)setSpecifier:(id)specifier;	// 0x324c00ad
// declared property setter: - (void)setWeeksOfTheYear:(id)theYear;	// 0x3246b8c1
// declared property getter: - (id)specifier;	// 0x324c0051
// declared property getter: - (id)weeksOfTheYear;	// 0x3246b929
@end


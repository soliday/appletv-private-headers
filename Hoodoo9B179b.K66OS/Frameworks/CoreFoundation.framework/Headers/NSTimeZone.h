/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSObject.h"
#import "CoreFoundation-Structs.h"
#import "NSCopying.h"
#import "NSCoding.h"


@interface NSTimeZone : NSObject <NSCopying, NSCoding> {
}
+ (id)abbreviationDictionary;	// 0x30d2fc51
+ (id)allocWithZone:(NSZone *)zone;	// 0x30d05429
+ (id)defaultTimeZone;	// 0x30d05145
+ (id)knownTimeZoneNames;	// 0x30da5e11
+ (id)localTimeZone;	// 0x30da5dcd
+ (void)resetSystemTimeZone;	// 0x30da5d5d
+ (void)setAbbreviationDictionary:(id)dictionary;	// 0x30da9779
+ (void)setDefaultTimeZone:(id)zone;	// 0x30da5d75
+ (id)systemTimeZone;	// 0x30d051c1
+ (id)timeZoneDataVersion;	// 0x30da97c5
+ (id)timeZoneForSecondsFromGMT:(int)gmt;	// 0x30d35711
+ (id)timeZoneWithAbbreviation:(id)abbreviation;	// 0x30da9add
+ (id)timeZoneWithName:(id)name;	// 0x30d053ed
+ (id)timeZoneWithName:(id)name data:(id)data;	// 0x30da9a55
- (id)initWithCoder:(id)coder;	// 0x30da9be9
- (id)initWithName:(id)name;	// 0x30da9ab9
- (id)initWithName:(id)name data:(id)data;	// 0x30da9a95
- (unsigned long)_cfTypeID;	// 0x30da5cc5
- (id)abbreviation;	// 0x30da984d
- (id)abbreviationForDate:(id)date;	// 0x30da5c61
- (id)copyWithZone:(NSZone *)zone;	// 0x30d2e3ad
- (id)data;	// 0x30da5c19
- (double)daylightSavingTimeOffset;	// 0x30da98c1
- (double)daylightSavingTimeOffsetForDate:(id)date;	// 0x30da5ca9
- (id)description;	// 0x30da99a1
- (void)encodeWithCoder:(id)coder;	// 0x30da9bed
- (unsigned)hash;	// 0x30da993d
- (BOOL)isDaylightSavingTime;	// 0x30da9889
- (BOOL)isDaylightSavingTimeForDate:(id)date;	// 0x30da5c85
- (BOOL)isEqual:(id)equal;	// 0x30da9959
- (BOOL)isEqualToTimeZone:(id)timeZone;	// 0x30d2f595
- (BOOL)isNSTimeZone__;	// 0x30da5cc1
- (id)localizedName:(int)name locale:(id)locale;	// 0x30da9939
- (id)name;	// 0x30da5bf5
- (id)nextDaylightSavingTimeTransition;	// 0x30da98fd
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)date;	// 0x30da5cbd
- (int)secondsFromGMT;	// 0x30da9811
- (int)secondsFromGMTForDate:(id)date;	// 0x30da5c3d
@end

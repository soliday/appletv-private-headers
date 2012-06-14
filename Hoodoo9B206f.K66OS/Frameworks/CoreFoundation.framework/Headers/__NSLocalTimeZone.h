/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSTimeZone.h"


__attribute__((visibility("hidden")))
@interface __NSLocalTimeZone : NSTimeZone {
}
- (id)initWithCoder:(id)coder;	// 0x31a6fe55
- (id)abbreviationForDate:(id)date;	// 0x31a6fc91
- (Class)classForCoder;	// 0x31a6fe9d
- (id)copyWithZone:(NSZone *)zone;	// 0x31a6fe1d
- (id)data;	// 0x31a6fc25
- (double)daylightSavingTimeOffsetForDate:(id)date;	// 0x31a6fd01
- (id)description;	// 0x31a6fdad
- (void)encodeWithCoder:(id)coder;	// 0x31a6fe99
- (BOOL)isDaylightSavingTimeForDate:(id)date;	// 0x31a6fcc9
- (id)localizedName:(int)name locale:(id)locale;	// 0x31a6fd71
- (id)name;	// 0x31a6fbf1
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)date;	// 0x31a6fd39
- (oneway void)release;	// 0x31a6fe11
- (id)replacementObjectForPortCoder:(id)portCoder;	// 0x31a6feb9
- (id)retain;	// 0x31a6fe0d
- (unsigned)retainCount;	// 0x31a6fe15
- (int)secondsFromGMTForDate:(id)date;	// 0x31a6fc59
@end


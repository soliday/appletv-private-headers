/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "EventKit-Structs.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface EKTimeZone : NSObject <NSCopying> {
@private
	NSString *_name;	// 4 = 0x4
	void *_internal;	// 8 = 0x8
	long _lastStart;	// 12 = 0xc
	long _lastEnd;	// 16 = 0x10
	unsigned _lastIndex;	// 20 = 0x14
	double _offset;	// 24 = 0x18
}
@property(readonly, retain) NSString *name;	// G=0x30c55741; converted property
+ (id)timeZoneWithNSTimeZone:(id)nstimeZone;	// 0x30bfb6e5
+ (id)timeZoneWithName:(id)name;	// 0x30bf9a31
- (id)initWithName:(id)name;	// 0x30bf9b8d
- (id)initWithOffset:(double)offset name:(id)name;	// 0x30c55491
- (id)NSTimeZone;	// 0x30c07041
- (id)_abbreviationForIndex:(unsigned)index;	// 0x30c55779
- (unsigned)_indexForAbsoluteTime:(double)absoluteTime;	// 0x30bfa53d
- (id)abbreviation;	// 0x30c558b1
- (id)abbreviationForAbsoluteTime:(double)absoluteTime;	// 0x30c5584d
- (id)abbreviationForDate:(id)date;	// 0x30c55819
- (id)copyWithZone:(NSZone *)zone;	// 0x30bfaf95
- (void)dealloc;	// 0x30c555e5
- (id)description;	// 0x30c556e1
- (unsigned)hash;	// 0x30c556c1
- (BOOL)isEqual:(id)equal;	// 0x30c55649
// converted property getter: - (id)name;	// 0x30c55741
- (double)nextDaylightSavingTimeTransitionAfterAbsoluteTime:(double)time;	// 0x30bfaea1
- (double)secondsFromGMT;	// 0x30c558d5
- (double)secondsFromGMTForAbsoluteTime:(double)absoluteTime;	// 0x30bfa4d5
- (double)secondsFromGMTForDate:(id)date;	// 0x30c557e5
@end


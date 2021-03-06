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
@property(readonly, retain) NSString *name;	// G=0x31f43741; converted property
+ (id)timeZoneWithNSTimeZone:(id)nstimeZone;	// 0x31ee96e5
+ (id)timeZoneWithName:(id)name;	// 0x31ee7a31
- (id)initWithName:(id)name;	// 0x31ee7b8d
- (id)initWithOffset:(double)offset name:(id)name;	// 0x31f43491
- (id)NSTimeZone;	// 0x31ef5041
- (id)_abbreviationForIndex:(unsigned)index;	// 0x31f43779
- (unsigned)_indexForAbsoluteTime:(double)absoluteTime;	// 0x31ee853d
- (id)abbreviation;	// 0x31f438b1
- (id)abbreviationForAbsoluteTime:(double)absoluteTime;	// 0x31f4384d
- (id)abbreviationForDate:(id)date;	// 0x31f43819
- (id)copyWithZone:(NSZone *)zone;	// 0x31ee8f95
- (void)dealloc;	// 0x31f435e5
- (id)description;	// 0x31f436e1
- (unsigned)hash;	// 0x31f436c1
- (BOOL)isEqual:(id)equal;	// 0x31f43649
// converted property getter: - (id)name;	// 0x31f43741
- (double)nextDaylightSavingTimeTransitionAfterAbsoluteTime:(double)time;	// 0x31ee8ea1
- (double)secondsFromGMT;	// 0x31f438d5
- (double)secondsFromGMTForAbsoluteTime:(double)absoluteTime;	// 0x31ee84d5
- (double)secondsFromGMTForDate:(id)date;	// 0x31f437e5
@end


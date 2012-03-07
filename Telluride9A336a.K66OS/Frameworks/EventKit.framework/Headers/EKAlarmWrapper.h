/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EventKit-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface EKAlarmWrapper : NSObject {
@private
	CalAlarmOccurrence *_alarm;	// 4 = 0x4
}
+ (id)wrapperWithAlarmOccurrence:(CalAlarmOccurrence *)alarmOccurrence;	// 0x313cc3ed
- (id)initWithAlarmOccurrence:(CalAlarmOccurrence *)alarmOccurrence;	// 0x313cc429
- (void)dealloc;	// 0x313cc471
- (id)description;	// 0x313cc5cd
- (double)fireDate;	// 0x313cc4b5
- (unsigned)hash;	// 0x313cc595
- (BOOL)isEqual:(id)equal;	// 0x313cc501
- (id)occurrence;	// 0x313cc4c9
@end

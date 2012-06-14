/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKPersistentObject.h"

@class NSString, EKPersistentCalendar, NSDate;

__attribute__((visibility("hidden")))
@interface EKPersistentInviteReplyNotification : EKPersistentObject {
}
@property(readonly, assign, nonatomic) BOOL alerted;	// G=0x30e7046d; 
@property(readonly, assign, nonatomic) EKPersistentCalendar *calendar;	// G=0x30e7048d; 
@property(readonly, assign, nonatomic) NSString *calendarName;	// G=0x30e70391; 
@property(readonly, assign, nonatomic) NSDate *creationDate;	// G=0x30e70451; 
@property(readonly, assign, nonatomic) NSString *shareeAddress;	// G=0x30e703c9; 
@property(readonly, assign, nonatomic) NSString *shareeName;	// G=0x30e703ad; 
@property(readonly, assign, nonatomic) int status;	// G=0x30e70435; 
+ (id)defaultPropertiesToLoad;	// 0x30e7029d
+ (id)relations;	// 0x30e70309
// declared property getter: - (BOOL)alerted;	// 0x30e7046d
// declared property getter: - (id)calendar;	// 0x30e7048d
// declared property getter: - (id)calendarName;	// 0x30e70391
// declared property getter: - (id)creationDate;	// 0x30e70451
// declared property getter: - (id)shareeAddress;	// 0x30e703c9
// declared property getter: - (id)shareeName;	// 0x30e703ad
// declared property getter: - (int)status;	// 0x30e70435
@end

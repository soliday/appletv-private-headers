/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "DACalendarObject.h"

@class DACalendarEvent, NSDate;

@interface DACalendarEventOccurrence : DACalendarObject {
}
@property(readonly, assign, nonatomic) BOOL canBeDetached;	// G=0x31ec4749; 
@property(readonly, assign, nonatomic) NSDate *date;	// G=0x31ec4711; 
@property(readonly, assign, nonatomic) DACalendarEvent *event;	// G=0x31ec46ad; 
// declared property getter: - (BOOL)canBeDetached;	// 0x31ec4749
// declared property getter: - (id)date;	// 0x31ec4711
- (id)detachAndFuture:(BOOL)future;	// 0x31ec4789
// declared property getter: - (id)event;	// 0x31ec46ad
- (void)removeAndFuture:(BOOL)future;	// 0x31ec4765
@end


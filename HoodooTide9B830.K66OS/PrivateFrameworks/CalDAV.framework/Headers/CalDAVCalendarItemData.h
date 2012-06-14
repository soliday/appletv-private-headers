/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVLeafDataPayload.h> // Unknown library
#import "CalDAVCalendarItemProtocol.h"

@class NSString, CalDAVCalendarServerScheduleChangesItem;

@interface CalDAVCalendarItemData : CoreDAVLeafDataPayload <CalDAVCalendarItemProtocol> {
	NSString *_scheduleTag;	// 16 = 0x10
	CalDAVCalendarServerScheduleChangesItem *_scheduleChanges;	// 20 = 0x14
}
@property(retain) CalDAVCalendarServerScheduleChangesItem *scheduleChanges;	// G=0x31476aed; S=0x31476ac9; @synthesize=_scheduleChanges
@property(retain) NSString *scheduleTag;	// G=0x31476b29; S=0x31476b05; @synthesize=_scheduleTag
- (void)dealloc;	// 0x31476a75
// declared property getter: - (id)scheduleChanges;	// 0x31476aed
// declared property getter: - (id)scheduleTag;	// 0x31476b29
// declared property setter: - (void)setScheduleChanges:(id)changes;	// 0x31476ac9
// declared property setter: - (void)setScheduleTag:(id)tag;	// 0x31476b05
@end


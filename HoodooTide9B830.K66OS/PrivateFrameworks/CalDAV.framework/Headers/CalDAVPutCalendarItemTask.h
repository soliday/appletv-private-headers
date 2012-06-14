/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVPutTask.h> // Unknown library

@class NSString;
@protocol CalDAVPutCalendarItemTaskDelegate;

@interface CalDAVPutCalendarItemTask : CoreDAVPutTask {
	NSString *_previousScheduleTag;	// 168 = 0xa8
}
@property(assign, nonatomic) id<CalDAVPutCalendarItemTaskDelegate> delegate;	// @dynamic
@property(retain) NSString *previousScheduleTag;	// G=0x31476f11; S=0x31476eed; @synthesize=_previousScheduleTag
- (id)initWithDataPayload:(id)dataPayload dataContentType:(id)type atURL:(id)url previousETag:(id)tag;	// 0x31476e99
- (id)additionalHeaderValues;	// 0x31476f29
- (void)dealloc;	// 0x31477079
- (id)description;	// 0x31477001
// declared property getter: - (id)previousScheduleTag;	// 0x31476f11
// declared property setter: - (void)setPreviousScheduleTag:(id)tag;	// 0x31476eed
@end


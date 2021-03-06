/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVPostTask.h> // Unknown library

@class NSString;
@protocol CalDAVPostCalendarItemTaskDelegate;

@interface CalDAVPostCalendarItemTask : CoreDAVPostTask {
	NSString *_previousScheduleTag;	// 164 = 0xa4
}
@property(assign, nonatomic) id<CalDAVPostCalendarItemTaskDelegate> delegate;	// @dynamic
@property(retain) NSString *previousScheduleTag;	// G=0x36e4d011; S=0x36e4d025; @synthesize=_previousScheduleTag
- (id)initWithDataPayload:(id)dataPayload dataContentType:(id)type atURL:(id)url previousETag:(id)tag;	// 0x36e4cd85
- (id)additionalHeaderValues;	// 0x36e4ce89
- (void)dealloc;	// 0x36e4cdd5
- (id)description;	// 0x36e4ce19
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x36e4cf79
// declared property getter: - (id)previousScheduleTag;	// 0x36e4d011
// declared property setter: - (void)setPreviousScheduleTag:(id)tag;	// 0x36e4d025
@end


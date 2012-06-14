/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVPostTask.h> // Unknown library

@class NSString, NSArray, CalDAVScheduleResponseItem;

@interface CalDAVScheduleTask : CoreDAVPostTask {
	NSArray *_attendees;	// 164 = 0xa4
	NSString *_originator;	// 168 = 0xa8
	CalDAVScheduleResponseItem *_scheduleResponse;	// 172 = 0xac
}
@property(retain) NSArray *attendees;	// G=0x302e9eb5; S=0x302e9e91; @synthesize=_attendees
@property(retain) NSString *originator;	// G=0x302e9e79; S=0x302e9e55; @synthesize=_originator
@property(retain) CalDAVScheduleResponseItem *scheduleResponse;	// G=0x302e9e3d; S=0x302e9e19; @synthesize=_scheduleResponse
- (id)initWithOriginator:(id)originator attendees:(id)attendees outboxURL:(id)url payload:(id)payload;	// 0x302ea0a1
- (id)additionalHeaderValues;	// 0x302e9fa1
// declared property getter: - (id)attendees;	// 0x302e9eb5
- (id)copyDefaultParserForContentType:(id)contentType;	// 0x302e9d0d
- (void)dealloc;	// 0x302e9da5
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x302e9ecd
// declared property getter: - (id)originator;	// 0x302e9e79
// declared property getter: - (id)scheduleResponse;	// 0x302e9e3d
// declared property setter: - (void)setAttendees:(id)attendees;	// 0x302e9e91
// declared property setter: - (void)setOriginator:(id)originator;	// 0x302e9e55
// declared property setter: - (void)setScheduleResponse:(id)response;	// 0x302e9e19
@end


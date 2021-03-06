/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVTaskGroup.h> // Unknown library
#import "CoreDAVPropFindTaskDelegate.h"

@class NSURL, CoreDAVPropFindTask, ICSDocument;
@protocol CoreDAVTaskGroupDelegate;

@interface CalDAVGetOfficeHoursTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate> {
	NSURL *_inboxURL;	// 44 = 0x2c
	CoreDAVPropFindTask *_fetchTask;	// 48 = 0x30
	ICSDocument *_calendarAvailability;	// 52 = 0x34
}
@property(retain) ICSDocument *calendarAvailability;	// G=0x302d65c1; S=0x302d659d; @synthesize=_calendarAvailability
@property(assign, nonatomic) id<CoreDAVTaskGroupDelegate> delegate;	// @dynamic
@property(retain) CoreDAVPropFindTask *fetchTask;	// G=0x302d65fd; S=0x302d65d9; @synthesize=_fetchTask
@property(retain) NSURL *inboxURL;	// G=0x302d6585; S=0x302d6561; @synthesize=_inboxURL
- (id)initWithAccountInfoProvider:(id)accountInfoProvider inboxURL:(id)url taskManager:(id)manager;	// 0x302d6615
- (void)_finishWithError:(id)error;	// 0x302d63cd
// declared property getter: - (id)calendarAvailability;	// 0x302d65c1
- (void)dealloc;	// 0x302d64f9
// declared property getter: - (id)fetchTask;	// 0x302d65fd
// declared property getter: - (id)inboxURL;	// 0x302d6585
- (void)propFindTask:(id)task parsedResponses:(id)responses error:(id)error;	// 0x302d63dd
// declared property setter: - (void)setCalendarAvailability:(id)availability;	// 0x302d659d
// declared property setter: - (void)setFetchTask:(id)task;	// 0x302d65d9
// declared property setter: - (void)setInboxURL:(id)url;	// 0x302d6561
- (void)startTaskGroup;	// 0x302d61f5
@end


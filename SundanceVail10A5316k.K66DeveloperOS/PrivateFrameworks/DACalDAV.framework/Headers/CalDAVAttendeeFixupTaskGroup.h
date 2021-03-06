/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import "CoreDAVTaskDelegate.h"
#import <CoreDAVTaskGroup.h> // Unknown library

@class MobileCalDAVPrincipal, MobileCalDAVCalendar, CalDAVPrincipalResult;

@interface CalDAVAttendeeFixupTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate> {
	MobileCalDAVPrincipal *_principal;	// 44 = 0x2c
	MobileCalDAVCalendar *_calendar;	// 48 = 0x30
	void *_calItem;	// 52 = 0x34
	CalDAVPrincipalResult *_userInfo;	// 56 = 0x38
@private
	BOOL _shouldSave;	// 60 = 0x3c
}
@property(readonly, assign) BOOL shouldSave;	// G=0x34177249; @synthesize=_shouldSave
+ (id)_userInfoCache;	// 0x34175b0d
- (id)initWithPrincipal:(id)principal calendar:(id)calendar calendarItem:(void *)item;	// 0x34175b79
- (void)_addOrganizerToItem;	// 0x341763f9
- (id)_getUserInfoFromAddressBook;	// 0x34175c5d
- (BOOL)_organizerIsMe:(void *)me;	// 0x341768fd
- (void)_setOrganizerInfo;	// 0x3417618d
- (void)dealloc;	// 0x34175bf9
// declared property getter: - (BOOL)shouldSave;	// 0x34177249
- (void)startTaskGroup;	// 0x34176ad9
- (void)task:(id)task didFinishWithError:(id)error;	// 0x34176f35
@end


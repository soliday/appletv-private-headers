/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import "CoreDAVTaskDelegate.h"
#import <CoreDAVTaskGroup.h> // Unknown library

@class MobileCalDAVCalendar, CalDAVPrincipalResult, MobileCalDAVPrincipal;

@interface CalDAVAttendeeFixupTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate> {
	MobileCalDAVPrincipal *_principal;	// 44 = 0x2c
	MobileCalDAVCalendar *_calendar;	// 48 = 0x30
	void *_calItem;	// 52 = 0x34
	CalDAVPrincipalResult *_userInfo;	// 56 = 0x38
@private
	BOOL _shouldSave;	// 60 = 0x3c
}
@property(readonly, assign) BOOL shouldSave;	// G=0x3307296d; @synthesize=_shouldSave
+ (id)_userInfoCache;	// 0x3307126d
- (id)initWithPrincipal:(id)principal calendar:(id)calendar calendarItem:(void *)item;	// 0x330712d9
- (void)_addOrganizerToItem;	// 0x33071b85
- (id)_getUserInfoFromAddressBook;	// 0x330713c5
- (BOOL)_organizerIsMe:(void *)me;	// 0x33071fd5
- (void)_setOrganizerInfo;	// 0x33071911
- (void)dealloc;	// 0x3307135d
// declared property getter: - (BOOL)shouldSave;	// 0x3307296d
- (void)startTaskGroup;	// 0x330721d1
- (void)task:(id)task didFinishWithError:(id)error;	// 0x3307268d
@end


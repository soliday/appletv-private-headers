/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVResourceTypeItem.h> // Unknown library

@class CoreDAVItemWithNoChildren;

@interface CalDAVResourceTypeItem : CoreDAVResourceTypeItem {
	CoreDAVItemWithNoChildren *_calendar;	// 48 = 0x30
	CoreDAVItemWithNoChildren *_scheduleInbox;	// 52 = 0x34
	CoreDAVItemWithNoChildren *_scheduleOutbox;	// 56 = 0x38
	CoreDAVItemWithNoChildren *_notification;	// 60 = 0x3c
	CoreDAVItemWithNoChildren *_subscribed;	// 64 = 0x40
	CoreDAVItemWithNoChildren *_sharedOwner;	// 68 = 0x44
}
@property(retain) CoreDAVItemWithNoChildren *calendar;	// G=0x338ce759; S=0x338ce735; @synthesize=_calendar
@property(retain) CoreDAVItemWithNoChildren *notification;	// G=0x338ce80d; S=0x338ce7e9; @synthesize=_notification
@property(retain) CoreDAVItemWithNoChildren *scheduleInbox;	// G=0x338ce795; S=0x338ce771; @synthesize=_scheduleInbox
@property(retain) CoreDAVItemWithNoChildren *scheduleOutbox;	// G=0x338ce7d1; S=0x338ce7ad; @synthesize=_scheduleOutbox
@property(retain) CoreDAVItemWithNoChildren *sharedOwner;	// G=0x338ce885; S=0x338ce861; @synthesize=_sharedOwner
@property(retain) CoreDAVItemWithNoChildren *subscribed;	// G=0x338ce849; S=0x338ce825; @synthesize=_subscribed
- (id)initWithNameSpace:(id)nameSpace andName:(id)name;	// 0x338cf1dd
// declared property getter: - (id)calendar;	// 0x338ce759
- (id)copyParseRules;	// 0x338cebf5
- (void)dealloc;	// 0x338cf139
- (id)description;	// 0x338ce709
// declared property getter: - (id)notification;	// 0x338ce80d
// declared property getter: - (id)scheduleInbox;	// 0x338ce795
// declared property getter: - (id)scheduleOutbox;	// 0x338ce7d1
// declared property setter: - (void)setCalendar:(id)calendar;	// 0x338ce735
// declared property setter: - (void)setNotification:(id)notification;	// 0x338ce7e9
// declared property setter: - (void)setScheduleInbox:(id)inbox;	// 0x338ce771
// declared property setter: - (void)setScheduleOutbox:(id)outbox;	// 0x338ce7ad
// declared property setter: - (void)setSharedOwner:(id)owner;	// 0x338ce861
// declared property setter: - (void)setSubscribed:(id)subscribed;	// 0x338ce825
// declared property getter: - (id)sharedOwner;	// 0x338ce885
// declared property getter: - (id)subscribed;	// 0x338ce849
- (void)write:(id)write;	// 0x338ce89d
@end


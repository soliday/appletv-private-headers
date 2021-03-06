/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVContainer.h> // Unknown library

@class ICSDuration, NSURL, NSSet, NSString, NSTimeZone;

@interface CalDAVContainer : CoreDAVContainer {
	NSString *_calendarDescription;	// 76 = 0x4c
	NSString *_ctag;	// 80 = 0x50
	NSString *_calendarColor;	// 84 = 0x54
	NSString *_calendarOrder;	// 88 = 0x58
	NSString *_xmppURI;	// 92 = 0x5c
	NSString *_xmppServer;	// 96 = 0x60
	NSSet *_supportedCalendarComponentSet;	// 100 = 0x64
	BOOL _subscribedStripAlarms;	// 104 = 0x68
	BOOL _subscribedStripTodos;	// 105 = 0x69
	BOOL _subscribedStripAttachments;	// 106 = 0x6a
	ICSDuration *_subscribedRefreshRate;	// 108 = 0x6c
	NSURL *_publishURL;	// 112 = 0x70
	BOOL _isScheduleTransparent;	// 116 = 0x74
	NSTimeZone *_timeZone;	// 120 = 0x78
	BOOL _canBePublished;	// 124 = 0x7c
	NSURL *_source;	// 128 = 0x80
	NSSet *_freeBusySet;	// 132 = 0x84
	NSURL *_scheduleDefaultCalendarURL;	// 136 = 0x88
}
@property(retain) NSString *calendarColor;	// G=0x3324cc39; S=0x3324cc15; @synthesize=_calendarColor
@property(retain) NSString *calendarDescription;	// G=0x3324cbc1; S=0x3324cb9d; @synthesize=_calendarDescription
@property(retain) NSString *calendarOrder;	// G=0x3324cc75; S=0x3324cc51; @synthesize=_calendarOrder
@property(assign) BOOL canBePublished;	// G=0x3324c215; S=0x3324c225; @synthesize=_canBePublished
@property(retain) NSString *ctag;	// G=0x3324cbfd; S=0x3324cbd9; @synthesize=_ctag
@property(retain) NSSet *freeBusySet;	// G=0x3324ce55; S=0x3324ce31; @synthesize=_freeBusySet
@property(readonly, assign) BOOL isCalendar;	// G=0x3324c2f1; 
@property(readonly, assign) BOOL isEventContainer;	// G=0x3324c4b1; 
@property(readonly, assign) BOOL isNotification;	// G=0x3324c3b1; 
@property(readonly, assign) BOOL isScheduleInbox;	// G=0x3324c331; 
@property(readonly, assign) BOOL isScheduleOutbox;	// G=0x3324c371; 
@property(assign) BOOL isScheduleTransparent;	// G=0x3324c235; S=0x3324c245; @synthesize=_isScheduleTransparent
@property(readonly, assign) BOOL isShared;	// G=0x3324c471; 
@property(readonly, assign) BOOL isSharedOwner;	// G=0x3324c431; 
@property(readonly, assign) BOOL isSubscribed;	// G=0x3324c3f1; 
@property(readonly, assign) BOOL isTaskContainer;	// G=0x3324c4d5; 
@property(retain) NSURL *publishURL;	// G=0x3324cda1; S=0x3324cd7d; @synthesize=_publishURL
@property(retain) NSURL *scheduleDefaultCalendarURL;	// G=0x3324ce91; S=0x3324ce6d; @synthesize=_scheduleDefaultCalendarURL
@property(retain) NSURL *source;	// G=0x3324ce19; S=0x3324cdf5; @synthesize=_source
@property(retain) ICSDuration *subscribedRefreshRate;	// G=0x3324cd65; S=0x3324cd41; @synthesize=_subscribedRefreshRate
@property(assign) BOOL subscribedStripAlarms;	// G=0x3324c295; S=0x3324c2a5; @synthesize=_subscribedStripAlarms
@property(assign) BOOL subscribedStripAttachments;	// G=0x3324c255; S=0x3324c265; @synthesize=_subscribedStripAttachments
@property(assign) BOOL subscribedStripTodos;	// G=0x3324c275; S=0x3324c285; @synthesize=_subscribedStripTodos
@property(retain) NSSet *supportedCalendarComponentSet;	// G=0x3324cd29; S=0x3324cd05; @synthesize=_supportedCalendarComponentSet
@property(readonly, assign) BOOL supportsFreebusy;	// G=0x3324c4f9; 
@property(retain) NSTimeZone *timeZone;	// G=0x3324cddd; S=0x3324cdb9; @synthesize=_timeZone
@property(retain) NSString *xmppServer;	// G=0x3324cced; S=0x3324ccc9; @synthesize=_xmppServer
@property(retain) NSString *xmppURI;	// G=0x3324ccb1; S=0x3324cc8d; @synthesize=_xmppURI
+ (id)copyPropertyMappingsForParser;	// 0x3324c519
- (BOOL)_isComponentSupportedForString:(id)string;	// 0x3324c2b5
- (void)_setTimeZoneFromProperties:(id)properties onCalendar:(id)calendar;	// 0x3324cea9
- (void)applyParsedProperties:(id)properties;	// 0x3324d105
// declared property getter: - (id)calendarColor;	// 0x3324cc39
// declared property getter: - (id)calendarDescription;	// 0x3324cbc1
// declared property getter: - (id)calendarOrder;	// 0x3324cc75
// declared property getter: - (BOOL)canBePublished;	// 0x3324c215
// declared property getter: - (id)ctag;	// 0x3324cbfd
- (void)dealloc;	// 0x3324ca59
- (id)description;	// 0x3324d5bd
// declared property getter: - (id)freeBusySet;	// 0x3324ce55
// declared property getter: - (BOOL)isCalendar;	// 0x3324c2f1
// declared property getter: - (BOOL)isEventContainer;	// 0x3324c4b1
// declared property getter: - (BOOL)isNotification;	// 0x3324c3b1
// declared property getter: - (BOOL)isScheduleInbox;	// 0x3324c331
// declared property getter: - (BOOL)isScheduleOutbox;	// 0x3324c371
// declared property getter: - (BOOL)isScheduleTransparent;	// 0x3324c235
// declared property getter: - (BOOL)isShared;	// 0x3324c471
// declared property getter: - (BOOL)isSharedOwner;	// 0x3324c431
// declared property getter: - (BOOL)isSubscribed;	// 0x3324c3f1
// declared property getter: - (BOOL)isTaskContainer;	// 0x3324c4d5
// declared property getter: - (id)publishURL;	// 0x3324cda1
// declared property getter: - (id)scheduleDefaultCalendarURL;	// 0x3324ce91
// declared property setter: - (void)setCalendarColor:(id)color;	// 0x3324cc15
// declared property setter: - (void)setCalendarDescription:(id)description;	// 0x3324cb9d
// declared property setter: - (void)setCalendarOrder:(id)order;	// 0x3324cc51
// declared property setter: - (void)setCanBePublished:(BOOL)published;	// 0x3324c225
// declared property setter: - (void)setCtag:(id)ctag;	// 0x3324cbd9
// declared property setter: - (void)setFreeBusySet:(id)set;	// 0x3324ce31
// declared property setter: - (void)setIsScheduleTransparent:(BOOL)transparent;	// 0x3324c245
// declared property setter: - (void)setPublishURL:(id)url;	// 0x3324cd7d
// declared property setter: - (void)setScheduleDefaultCalendarURL:(id)url;	// 0x3324ce6d
// declared property setter: - (void)setSource:(id)source;	// 0x3324cdf5
// declared property setter: - (void)setSubscribedRefreshRate:(id)rate;	// 0x3324cd41
// declared property setter: - (void)setSubscribedStripAlarms:(BOOL)alarms;	// 0x3324c2a5
// declared property setter: - (void)setSubscribedStripAttachments:(BOOL)attachments;	// 0x3324c265
// declared property setter: - (void)setSubscribedStripTodos:(BOOL)todos;	// 0x3324c285
// declared property setter: - (void)setSupportedCalendarComponentSet:(id)set;	// 0x3324cd05
// declared property setter: - (void)setTimeZone:(id)zone;	// 0x3324cdb9
// declared property setter: - (void)setXmppServer:(id)server;	// 0x3324ccc9
// declared property setter: - (void)setXmppURI:(id)uri;	// 0x3324cc8d
// declared property getter: - (id)source;	// 0x3324ce19
// declared property getter: - (id)subscribedRefreshRate;	// 0x3324cd65
// declared property getter: - (BOOL)subscribedStripAlarms;	// 0x3324c295
// declared property getter: - (BOOL)subscribedStripAttachments;	// 0x3324c255
// declared property getter: - (BOOL)subscribedStripTodos;	// 0x3324c275
// declared property getter: - (id)supportedCalendarComponentSet;	// 0x3324cd29
// declared property getter: - (BOOL)supportsFreebusy;	// 0x3324c4f9
// declared property getter: - (id)timeZone;	// 0x3324cddd
// declared property getter: - (id)xmppServer;	// 0x3324cced
// declared property getter: - (id)xmppURI;	// 0x3324ccb1
@end


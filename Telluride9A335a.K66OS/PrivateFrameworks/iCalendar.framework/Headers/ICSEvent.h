/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import "ICSComponent.h"

@class NSArray, ICSDate, NSString, ICSUserAddress, NSURL, ICSDuration, ICSStructuredLocation;

@interface ICSEvent : ICSComponent {
}
@property(retain) NSArray *attach;	// @dynamic
@property(retain) NSArray *attendee;	// @dynamic
@property(assign) int classification;	// @dynamic
@property(retain) NSArray *conferences;	// @dynamic
@property(retain) ICSDate *created;	// @dynamic
@property(retain) NSString *description;	// @dynamic
@property(retain) ICSDate *dtend;	// @dynamic
@property(retain) ICSDate *dtstamp;	// @dynamic
@property(retain) ICSDate *dtstart;	// @dynamic
@property(retain) ICSDuration *duration;	// @dynamic
@property(retain) NSArray *exdate;	// @dynamic
@property(retain) NSArray *exrule;	// @dynamic
@property(readonly, assign) BOOL isAllDay;	// @dynamic
@property(retain) ICSDate *last_modified;	// @dynamic
@property(retain) NSString *location;	// @dynamic
@property(retain) ICSUserAddress *organizer;	// @dynamic
@property(retain) NSArray *rdate;	// @dynamic
@property(retain) ICSDate *recurrence_id;	// @dynamic
@property(retain) NSArray *rrule;	// @dynamic
@property(assign) unsigned sequence;	// @dynamic
@property(assign) int status;	// @dynamic
@property(retain) NSString *summary;	// @dynamic
@property(assign) int transp;	// G=0x36775e2d; S=0x36775e9d; 
@property(retain) NSString *uid;	// @dynamic
@property(retain) NSURL *url;	// @dynamic
@property(assign) BOOL x_apple_dontschedule;	// G=0x36776019; S=0x36775f9d; 
@property(retain) NSString *x_apple_dropbox;	// @dynamic
@property(assign) int x_apple_ews_busystatus;	// G=0x36776395; S=0x36776405; 
@property(retain) NSString *x_apple_ews_changekey;	// @dynamic
@property(retain) NSString *x_apple_ews_itemid;	// @dynamic
@property(assign) BOOL x_apple_ews_needsserverconfirmation;	// @dynamic
@property(retain) NSString *x_apple_ews_permission;	// @dynamic
@property(assign) BOOL x_apple_ignore_on_restore;	// @dynamic
@property(assign) BOOL x_apple_needs_reply;	// G=0x3677606d; S=0x367760c1; @dynamic
@property(retain) ICSStructuredLocation *x_apple_structured_location;	// @dynamic
@property(retain) NSArray *x_calendarserver_attendee_comment;	// G=0x36775ef5; S=0x36775f15; 
@property(retain) NSString *x_calendarserver_private_comment;	// G=0x36775f35; S=0x36775f7d; 
@property(assign) BOOL x_wr_itipalreadysent;	// G=0x36776155; S=0x3677611d; @dynamic
@property(assign) BOOL x_wr_itipstatusattendeeml;	// G=0x367761bd; S=0x36776185; @dynamic
@property(assign) BOOL x_wr_itipstatusml;	// G=0x367762b5; S=0x36776235; @dynamic
@property(assign) BOOL x_wr_rsvpneeded;	// G=0x36776365; S=0x3677632d; @dynamic
+ (id)name;	// 0x36775b41
- (void)fixComponent;	// 0x36773f09
// declared property setter: - (void)setTransp:(int)transp;	// 0x36775e9d
// declared property setter: - (void)setX_apple_dontschedule:(BOOL)dontschedule;	// 0x36775f9d
// declared property setter: - (void)setX_apple_ews_busystatus:(int)busystatus;	// 0x36776405
// declared property setter: - (void)setX_apple_needs_reply:(BOOL)reply;	// 0x367760c1
// declared property setter: - (void)setX_calendarserver_attendee_comment:(id)comment;	// 0x36775f15
// declared property setter: - (void)setX_calendarserver_private_comment:(id)comment;	// 0x36775f7d
// declared property setter: - (void)setX_wr_itipalreadysent:(BOOL)itipalreadysent;	// 0x3677611d
// declared property setter: - (void)setX_wr_itipstatusattendeeml:(BOOL)itipstatusattendeeml;	// 0x36776185
// declared property setter: - (void)setX_wr_itipstatusml:(BOOL)itipstatusml;	// 0x36776235
// declared property setter: - (void)setX_wr_rsvpneeded:(BOOL)rsvpneeded;	// 0x3677632d
// declared property getter: - (int)transp;	// 0x36775e2d
- (BOOL)validate:(id *)validate;	// 0x36775b4d
// declared property getter: - (BOOL)x_apple_dontschedule;	// 0x36776019
// declared property getter: - (int)x_apple_ews_busystatus;	// 0x36776395
// declared property getter: - (BOOL)x_apple_needs_reply;	// 0x3677606d
// declared property getter: - (id)x_calendarserver_attendee_comment;	// 0x36775ef5
// declared property getter: - (id)x_calendarserver_private_comment;	// 0x36775f35
// declared property getter: - (BOOL)x_wr_itipalreadysent;	// 0x36776155
// declared property getter: - (BOOL)x_wr_itipstatusattendeeml;	// 0x367761bd
// declared property getter: - (BOOL)x_wr_itipstatusml;	// 0x367762b5
// declared property getter: - (BOOL)x_wr_rsvpneeded;	// 0x36776365
@end


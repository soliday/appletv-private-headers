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
@property(assign) int transp;	// G=0x327fbd05; S=0x327fbd75; 
@property(retain) NSString *uid;	// @dynamic
@property(retain) NSURL *url;	// @dynamic
@property(assign) BOOL x_apple_dontschedule;	// G=0x327fbef1; S=0x327fbe75; 
@property(retain) NSString *x_apple_dropbox;	// @dynamic
@property(assign) int x_apple_ews_busystatus;	// G=0x327fc26d; S=0x327fc2dd; 
@property(retain) NSString *x_apple_ews_changekey;	// @dynamic
@property(retain) NSString *x_apple_ews_itemid;	// @dynamic
@property(assign) BOOL x_apple_ews_needsserverconfirmation;	// @dynamic
@property(retain) NSString *x_apple_ews_permission;	// @dynamic
@property(assign) BOOL x_apple_ignore_on_restore;	// @dynamic
@property(assign) BOOL x_apple_needs_reply;	// G=0x327fbf45; S=0x327fbf99; @dynamic
@property(retain) ICSStructuredLocation *x_apple_structured_location;	// @dynamic
@property(retain) NSArray *x_calendarserver_attendee_comment;	// G=0x327fbdcd; S=0x327fbded; 
@property(retain) NSString *x_calendarserver_private_comment;	// G=0x327fbe0d; S=0x327fbe55; 
@property(assign) BOOL x_wr_itipalreadysent;	// G=0x327fc02d; S=0x327fbff5; @dynamic
@property(assign) BOOL x_wr_itipstatusattendeeml;	// G=0x327fc095; S=0x327fc05d; @dynamic
@property(assign) BOOL x_wr_itipstatusml;	// G=0x327fc18d; S=0x327fc10d; @dynamic
@property(assign) BOOL x_wr_rsvpneeded;	// G=0x327fc23d; S=0x327fc205; @dynamic
+ (id)name;	// 0x327fba19
- (void)fixComponent;	// 0x327f9de1
// declared property setter: - (void)setTransp:(int)transp;	// 0x327fbd75
// declared property setter: - (void)setX_apple_dontschedule:(BOOL)dontschedule;	// 0x327fbe75
// declared property setter: - (void)setX_apple_ews_busystatus:(int)busystatus;	// 0x327fc2dd
// declared property setter: - (void)setX_apple_needs_reply:(BOOL)reply;	// 0x327fbf99
// declared property setter: - (void)setX_calendarserver_attendee_comment:(id)comment;	// 0x327fbded
// declared property setter: - (void)setX_calendarserver_private_comment:(id)comment;	// 0x327fbe55
// declared property setter: - (void)setX_wr_itipalreadysent:(BOOL)itipalreadysent;	// 0x327fbff5
// declared property setter: - (void)setX_wr_itipstatusattendeeml:(BOOL)itipstatusattendeeml;	// 0x327fc05d
// declared property setter: - (void)setX_wr_itipstatusml:(BOOL)itipstatusml;	// 0x327fc10d
// declared property setter: - (void)setX_wr_rsvpneeded:(BOOL)rsvpneeded;	// 0x327fc205
// declared property getter: - (int)transp;	// 0x327fbd05
- (BOOL)validate:(id *)validate;	// 0x327fba25
// declared property getter: - (BOOL)x_apple_dontschedule;	// 0x327fbef1
// declared property getter: - (int)x_apple_ews_busystatus;	// 0x327fc26d
// declared property getter: - (BOOL)x_apple_needs_reply;	// 0x327fbf45
// declared property getter: - (id)x_calendarserver_attendee_comment;	// 0x327fbdcd
// declared property getter: - (id)x_calendarserver_private_comment;	// 0x327fbe0d
// declared property getter: - (BOOL)x_wr_itipalreadysent;	// 0x327fc02d
// declared property getter: - (BOOL)x_wr_itipstatusattendeeml;	// 0x327fc095
// declared property getter: - (BOOL)x_wr_itipstatusml;	// 0x327fc18d
// declared property getter: - (BOOL)x_wr_rsvpneeded;	// 0x327fc23d
@end


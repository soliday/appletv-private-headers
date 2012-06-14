/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVItem.h> // Unknown library

@class CoreDAVItemWithNoChildren;

@interface CalDAVCalendarServerNotificationTypeItem : CoreDAVItem {
	CoreDAVItemWithNoChildren *_inviteNotification;	// 24 = 0x18
	CoreDAVItemWithNoChildren *_inviteReply;	// 28 = 0x1c
}
@property(retain) CoreDAVItemWithNoChildren *inviteNotification;	// G=0x3147c27d; S=0x3147c259; @synthesize=_inviteNotification
@property(retain) CoreDAVItemWithNoChildren *inviteReply;	// G=0x3147c2b9; S=0x3147c295; @synthesize=_inviteReply
@property(readonly, assign) BOOL isInviteNotification;	// G=0x3147c2f1; 
@property(readonly, assign) BOOL isInviteReply;	// G=0x3147c2d1; 
- (id)initWithNameSpace:(id)nameSpace andName:(id)name;	// 0x3147c1f9
- (id)copyParseRules;	// 0x3147c3c9
- (void)dealloc;	// 0x3147c595
- (id)description;	// 0x3147c311
// declared property getter: - (id)inviteNotification;	// 0x3147c27d
// declared property getter: - (id)inviteReply;	// 0x3147c2b9
// declared property getter: - (BOOL)isInviteNotification;	// 0x3147c2f1
// declared property getter: - (BOOL)isInviteReply;	// 0x3147c2d1
// declared property setter: - (void)setInviteNotification:(id)notification;	// 0x3147c259
// declared property setter: - (void)setInviteReply:(id)reply;	// 0x3147c295
@end


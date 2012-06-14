/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVTaskGroup.h> // Unknown library
#import "CoreDAVPropPatchTaskDelegate.h"

@class NSURL;

@interface CalDAVModifyCalendarSharingLevelTaskGroup : CoreDAVTaskGroup <CoreDAVPropPatchTaskDelegate> {
	int _action;	// 44 = 0x2c
	NSURL *_url;	// 48 = 0x30
	int _state;	// 52 = 0x34
}
@property(assign) int action;	// G=0x302dbb95; S=0x302dbba5; @synthesize=_action
@property(assign) int state;	// G=0x302dbb75; S=0x302dbb85; @synthesize=_state
@property(retain) NSURL *url;	// G=0x302dc535; S=0x302dc511; @synthesize=_url
- (id)initWithAccountInfoProvider:(id)accountInfoProvider taskManager:(id)manager;	// 0x302dc451
- (id)initWithSharingAction:(int)sharingAction atCalendarURL:(id)calendarURL accountInfoProvider:(id)provider taskManager:(id)manager;	// 0x302dc499
// declared property getter: - (int)action;	// 0x302dbb95
- (void)dealloc;	// 0x302dc579
- (id)description;	// 0x302dc54d
- (void)finishWithError:(id)error;	// 0x302dc441
// declared property setter: - (void)setAction:(int)action;	// 0x302dbba5
// declared property setter: - (void)setState:(int)state;	// 0x302dbb85
// declared property setter: - (void)setUrl:(id)url;	// 0x302dc511
- (void)startTaskGroup;	// 0x302dbbb5
// declared property getter: - (int)state;	// 0x302dbb75
- (void)task:(id)task didFinishWithError:(id)error;	// 0x302dc051
// declared property getter: - (id)url;	// 0x302dc535
@end


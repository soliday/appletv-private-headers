/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VisualAlert.framework/VisualAlert
 */

#import "AXLocalNotificationHandler.h"


@interface AXAutoForwardingLocalNotificationHandler : AXLocalNotificationHandler {
	SEL *_possibleHandlers;	// 28 = 0x1c
	unsigned long _possibleHandlersCount;	// 32 = 0x20
}
- (id)initWithNotificationName:(id)notificationName target:(id)target dispatcher:(id)dispatcher possibleHandlers:(SEL)handlers;	// 0x307984e5
- (id)initWithNotificationName:(id)notificationName target:(id)target dispatcher:(id)dispatcher startObserving:(BOOL)observing;	// 0x3079842d
- (id)initWithNotificationName:(id)notificationName target:(id)target handler:(SEL)handler;	// 0x307983c9
- (id)_forwardDistributedNotificationNameForHandler:(SEL)handler;	// 0x30798781
- (BOOL)_handleForwardDistributedNotificationWithName:(id)name object:(const void *)object userInfo:(id)info;	// 0x307987d1
- (id)_notificationTypeDescription;	// 0x30798a45
- (id)_prefixForForwardDistributedNotificationName;	// 0x307986e5
- (void)_startObserving;	// 0x30798855
- (void)_stopObserving;	// 0x30798981
- (void)dealloc;	// 0x3079860d
- (void)processHandler:(SEL)handler;	// 0x30798665
@end


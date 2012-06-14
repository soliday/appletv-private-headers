/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VisualAlert.framework/VisualAlert
 */

#import "AXNotificationHandler.h"


@interface AXLocalNotificationHandler : AXNotificationHandler {
	id _opaqueObserver;	// 24 = 0x18
}
@property(retain, nonatomic, setter=_setOpaqueObserver:) id _opaqueObserver;	// G=0x361c4395; S=0x361c43a5; @synthesize
- (id)_notificationTypeDescription;	// 0x361c4389
// declared property getter: - (id)_opaqueObserver;	// 0x361c4395
// declared property setter: - (void)_setOpaqueObserver:(id)observer;	// 0x361c43a5
- (void)_startObserving;	// 0x361c4361
- (void)_startObservingWithObject:(id)object;	// 0x361c4175
- (void)_stopObserving;	// 0x361c4375
- (void)_stopObservingWithObject:(id)object;	// 0x361c42d5
@end


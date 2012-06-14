/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIInternalEvent.h"


__attribute__((visibility("hidden")))
@interface UIRemoteControlEvent : UIInternalEvent {
@private
	int _subtype;	// 16 = 0x10
}
@property(readonly, assign) int subtype;	// G=0x3553a979; converted property
- (id)_init;	// 0x35335a45
- (void)_setSubtype:(int)subtype;	// 0x3553a989
- (void)_simpleRemoteActionNotification:(id)notification;	// 0x3553a999
- (void)dealloc;	// 0x3553a8f9
// converted property getter: - (int)subtype;	// 0x3553a979
- (int)type;	// 0x3553a975
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIAnimation.h"


__attribute__((visibility("hidden")))
@interface UITableCellFadeAnimation : UIAnimation {
@private
	BOOL _select;	// 44 = 0x2c
}
- (id)initWithTarget:(id)target select:(BOOL)select;	// 0x301f2345
- (void)_appSuspended:(id)suspended;	// 0x301f243d
- (void)dealloc;	// 0x301f23e1
- (void)setProgress:(float)progress;	// 0x301f24c5
@end

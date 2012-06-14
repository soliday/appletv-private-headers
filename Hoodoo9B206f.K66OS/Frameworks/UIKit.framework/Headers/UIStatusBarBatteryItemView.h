/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIStatusBarItemView.h"


__attribute__((visibility("hidden")))
@interface UIStatusBarBatteryItemView : UIStatusBarItemView {
@private
	int _capacity;	// 76 = 0x4c
	int _state;	// 80 = 0x50
}
- (id)contentsImageForStyle:(int)style;	// 0x3533cfc5
- (float)extraRightPadding;	// 0x3531c69d
- (BOOL)updateForNewData:(id)newData actions:(int)actions;	// 0x3531aecd
@end

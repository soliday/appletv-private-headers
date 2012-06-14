/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIStatusBarItemView.h"


__attribute__((visibility("hidden")))
@interface UIStatusBarBluetoothItemView : UIStatusBarItemView {
@private
	BOOL _connected;	// 76 = 0x4c
	BOOL _shouldAnimateConnection;	// 77 = 0x4d
}
- (id)contentsImageForStyle:(int)style;	// 0x3561e2bd
- (void)performPendedActions;	// 0x3561e121
- (BOOL)updateForNewData:(id)newData actions:(int)actions;	// 0x3561e0cd
@end


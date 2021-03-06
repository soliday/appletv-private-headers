/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIWindow.h"


@interface UIAutoRotatingWindow : UIWindow {
	int _interfaceOrientation;	// 132 = 0x84
}
+ (id)sharedPopoverHostingWindow;	// 0x302a4721
- (id)initWithFrame:(CGRect)frame;	// 0x30099c95
- (void)_didRemoveSubview:(id)subview;	// 0x300f984d
- (void)dealloc;	// 0x302a4879
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x300f72a9
- (void)updateForOrientation:(int)orientation;	// 0x30099db5
@end


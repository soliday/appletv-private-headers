/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIPageViewController;

__attribute__((visibility("hidden")))
@interface _UIPageViewControllerContentView : UIView {
@private
	UIPageViewController *_pageViewController;	// 48 = 0x30
}
@property(assign, nonatomic, setter=_setPageViewController:) UIPageViewController *_pageViewController;	// G=0x35697931; S=0x35697941; @synthesize
- (id)initWithFrame:(CGRect)frame andPageViewController:(id)controller;	// 0x3569780d
// declared property getter: - (id)_pageViewController;	// 0x35697931
// declared property setter: - (void)_setPageViewController:(id)controller;	// 0x35697941
- (void)setFrame:(CGRect)frame;	// 0x35697855
@end


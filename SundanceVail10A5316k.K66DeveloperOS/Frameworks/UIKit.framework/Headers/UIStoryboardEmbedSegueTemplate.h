/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIStoryboardSegueTemplate.h"

@class UIView;

__attribute__((visibility("hidden")))
@interface UIStoryboardEmbedSegueTemplate : UIStoryboardSegueTemplate {
@private
	UIView *_containerView;	// 24 = 0x18
}
@property(retain, nonatomic) UIView *containerView;	// G=0x304bc441; S=0x304bc451; @synthesize=_containerView
- (id)initWithCoder:(id)coder;	// 0x304bc31d
// declared property getter: - (id)containerView;	// 0x304bc441
- (void)dealloc;	// 0x304bc2d1
- (id)defaultSegueClassName;	// 0x304bc3dd
- (void)encodeWithCoder:(id)coder;	// 0x304bc37d
- (id)segueWithDestinationViewController:(id)destinationViewController;	// 0x304bc3e9
// declared property setter: - (void)setContainerView:(id)view;	// 0x304bc451
@end

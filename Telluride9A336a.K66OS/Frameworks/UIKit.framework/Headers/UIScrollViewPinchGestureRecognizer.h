/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIPinchGestureRecognizer.h"
#import "UIKit-Structs.h"

@class UIScrollView;

__attribute__((visibility("hidden")))
@interface UIScrollViewPinchGestureRecognizer : UIPinchGestureRecognizer {
@private
	UIScrollView *_scrollView;	// 136 = 0x88
	SEL _scrollViewAction;	// 140 = 0x8c
	unsigned _hasParentScrollView : 1;	// 144 = 0x90
}
@property(assign, nonatomic) UIScrollView *scrollView;	// G=0x351608f5; S=0x35160851; @synthesize=_scrollView
- (id)initWithTarget:(id)target action:(SEL)action;	// 0x35160655
- (float)_hysteresis;	// 0x352314a5
- (void)removeTarget:(id)target action:(SEL)action;	// 0x353c2031
// declared property getter: - (id)scrollView;	// 0x351608f5
- (void)setDelegate:(id)delegate;	// 0x35160861
// declared property setter: - (void)setScrollView:(id)view;	// 0x35160851
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x352085c1
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x35230b59
@end


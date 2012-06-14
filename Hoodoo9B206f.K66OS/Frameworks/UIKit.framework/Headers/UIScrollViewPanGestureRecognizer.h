/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIPanGestureRecognizer.h"

@class UIScrollView;

__attribute__((visibility("hidden")))
@interface UIScrollViewPanGestureRecognizer : UIPanGestureRecognizer {
@private
	UIScrollView *_scrollView;	// 120 = 0x78
	SEL _scrollViewAction;	// 124 = 0x7c
	CGPoint _reconsideredLockingLocation;	// 128 = 0x80
	unsigned _lastLockingAxis : 2;	// 136 = 0x88
	unsigned _lockingAxis : 2;	// 136 = 0x88
	unsigned _hasChildScrollView : 1;	// 136 = 0x88
	unsigned _hasParentScrollView : 1;	// 136 = 0x88
	unsigned _caughtDeceleratingScrollView : 1;	// 136 = 0x88
	unsigned _directionalLockEnabled : 1;	// 136 = 0x88
	unsigned _waitingForParentScrollView : 1;	// 137 = 0x89
}
@property(assign, nonatomic, getter=isDirectionalLockEnabled) BOOL directionalLockEnabled;	// G=0x35618d99; S=0x3534dca1; 
@property(assign, nonatomic) UIScrollView *scrollView;	// G=0x3534dc6d; S=0x3534dbc9; @synthesize=_scrollView
- (id)initWithTarget:(id)target action:(SEL)action;	// 0x3534d9dd
- (CGPoint)_adjustScreenLocation:(CGPoint)location;	// 0x35429525
- (void)_centroidMovedTo:(CGPoint)to atTime:(double)time;	// 0x35428fb9
- (float)_hysteresis;	// 0x3542a311
- (void)_resetGestureRecognizer;	// 0x3540e8e5
- (void)_scrollViewDidEndZooming;	// 0x35483ee5
- (BOOL)_shouldTryToBeginWithEvent:(id)event;	// 0x354296b5
- (BOOL)canBePreventedByGestureRecognizer:(id)recognizer;	// 0x354084b1
// declared property getter: - (BOOL)isDirectionalLockEnabled;	// 0x35618d99
- (void)removeTarget:(id)target action:(SEL)action;	// 0x35618c65
// declared property getter: - (id)scrollView;	// 0x3534dc6d
- (void)setDelegate:(id)delegate;	// 0x3534dbd9
// declared property setter: - (void)setDirectionalLockEnabled:(BOOL)enabled;	// 0x3534dca1
// declared property setter: - (void)setScrollView:(id)view;	// 0x3534dbc9
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x35406025
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x354495d9
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x35428d0d
- (CGPoint)translationInView:(id)view;	// 0x3542a0e9
- (CGPoint)velocityInView:(id)view;	// 0x3542bf49
@end


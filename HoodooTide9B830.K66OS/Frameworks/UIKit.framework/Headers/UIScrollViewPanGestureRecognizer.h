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
@property(assign, nonatomic, getter=isDirectionalLockEnabled) BOOL directionalLockEnabled;	// G=0x3032bd99; S=0x30060ca1; 
@property(assign, nonatomic) UIScrollView *scrollView;	// G=0x30060c6d; S=0x30060bc9; @synthesize=_scrollView
- (id)initWithTarget:(id)target action:(SEL)action;	// 0x300609dd
- (CGPoint)_adjustScreenLocation:(CGPoint)location;	// 0x3013c525
- (void)_centroidMovedTo:(CGPoint)to atTime:(double)time;	// 0x3013bfb9
- (float)_hysteresis;	// 0x3013d311
- (void)_resetGestureRecognizer;	// 0x301218e5
- (void)_scrollViewDidEndZooming;	// 0x30196ee5
- (BOOL)_shouldTryToBeginWithEvent:(id)event;	// 0x3013c6b5
- (BOOL)canBePreventedByGestureRecognizer:(id)recognizer;	// 0x3011b4b1
// declared property getter: - (BOOL)isDirectionalLockEnabled;	// 0x3032bd99
- (void)removeTarget:(id)target action:(SEL)action;	// 0x3032bc65
// declared property getter: - (id)scrollView;	// 0x30060c6d
- (void)setDelegate:(id)delegate;	// 0x30060bd9
// declared property setter: - (void)setDirectionalLockEnabled:(BOOL)enabled;	// 0x30060ca1
// declared property setter: - (void)setScrollView:(id)view;	// 0x30060bc9
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x30119025
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x3015c5d9
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x3013bd0d
- (CGPoint)translationInView:(id)view;	// 0x3013d0e9
- (CGPoint)velocityInView:(id)view;	// 0x3013ef49
@end


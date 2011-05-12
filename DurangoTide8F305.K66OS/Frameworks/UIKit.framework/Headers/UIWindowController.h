/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"

@class UITransitionView, UIViewController, UIWindow;

@interface UIWindowController : NSObject {
	UITransitionView *_transitionView;	// 4 = 0x4
	UIWindow *_window;	// 8 = 0x8
	int _currentTransition;	// 12 = 0xc
	id _target;	// 16 = 0x10
	SEL _didEndSelector;	// 20 = 0x14
	UIViewController *_fromViewController;	// 24 = 0x18
	UIViewController *_toViewController;	// 28 = 0x1c
	CGPoint _beginOriginForToView;	// 32 = 0x20
	CGPoint _endOriginForToView;	// 40 = 0x28
	BOOL _presenting;	// 48 = 0x30
	int _toModalStyle;	// 52 = 0x34
}
@property(assign, nonatomic) BOOL presenting;	// G=0x321c4dd1; S=0x3201ebdd; @synthesize=_presenting
@property(readonly, assign, nonatomic) UITransitionView *transitionView;	// G=0x32049db5; @synthesize=_transitionView
@property(assign, nonatomic) UIWindow *window;	// G=0x321c4dc1; S=0x3201ebcd; @synthesize=_window
+ (id)windowControllerForWindow:(id)window;	// 0x3201eb05
+ (void)windowWillBeDeallocated:(id)window;	// 0x3207ad15
- (CGPoint)_adjustOrigin:(CGPoint)origin givenOtherOrigin:(CGPoint)origin2 forTransition:(int)transition;	// 0x32024f55
- (CGRect)_boundsForViewController:(id)viewController transition:(int)transition orientation:(int)orientation fullScreenLayout:(BOOL)layout inWindow:(id)window;	// 0x320244fd
- (CGSize)_flipSize:(CGSize)size;	// 0x321c4dad
- (CGPoint)_originForViewController:(id)viewController orientation:(int)orientation actualStatusBarHeight:(float)height fullScreenLayout:(BOOL)layout inWindow:(id)window;	// 0x32024411
- (void)_prepareKeyboardForTransition:(int)transition fromView:(id)view;	// 0x3202468d
- (void)_transplantView:(id)view toSuperview:(id)superview atIndex:(unsigned)index;	// 0x3202434d
- (void)dealloc;	// 0x321c4e39
- (double)durationForTransition:(int)transition;	// 0x32024db5
// declared property getter: - (BOOL)presenting;	// 0x321c4dd1
// declared property setter: - (void)setPresenting:(BOOL)presenting;	// 0x3201ebdd
// declared property setter: - (void)setWindow:(id)window;	// 0x3201ebcd
- (void)transition:(int)transition fromViewController:(id)viewController toViewController:(id)viewController3 target:(id)target didEndSelector:(SEL)selector;	// 0x3201ebed
// declared property getter: - (id)transitionView;	// 0x32049db5
- (CGPoint)transitionView:(id)view beginOriginForToView:(id)view2 forTransition:(int)transition defaultOrigin:(CGPoint)origin;	// 0x32024ec9
- (CGPoint)transitionView:(id)view endOriginForFromView:(id)view2 forTransition:(int)transition defaultOrigin:(CGPoint)origin;	// 0x32049e8d
- (CGPoint)transitionView:(id)view endOriginForToView:(id)view2 forTransition:(int)transition defaultOrigin:(CGPoint)origin;	// 0x32025c21
- (void)transitionView:(id)view startCustomTransitionWithDuration:(double)duration;	// 0x321c4de1
- (void)transitionViewDidComplete:(id)transitionView fromView:(id)view toView:(id)view3;	// 0x320280b1
- (void)transitionViewDidStart:(id)transitionView;	// 0x32024dd5
// declared property getter: - (id)window;	// 0x321c4dc1
@end

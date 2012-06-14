/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UIView.h"

@class UIWindow;

@interface UINavigationTransitionView : UIView <NSCoding> {
@private
	id _delegate;	// 48 = 0x30
	UIView *_fromView;	// 52 = 0x34
	UIView *_toView;	// 56 = 0x38
	int _transition;	// 60 = 0x3c
	UIResponder *_firstResponderToRestore;	// 64 = 0x40
	UIWindow *_originalWindow;	// 68 = 0x44
	float _fromViewAlpha;	// 72 = 0x48
	unsigned _isTransitioning : 1;	// 76 = 0x4c
	unsigned _popoverWillCleanUpNavigationTransition : 1;	// 76 = 0x4c
	unsigned _usesRoundedCorners : 1;	// 76 = 0x4c
}
@property(assign, nonatomic) id delegate;	// G=0x355af135; S=0x35344915; @synthesize=_delegate
@property(readonly, assign) UIView *fromView;	// G=0x355af145; @synthesize=_fromView
@property(readonly, assign) BOOL isTransitioning;	// G=0x355aeef1; 
@property(assign, nonatomic) BOOL popoverWillCleanUpNavigationTransition;	// G=0x355aed09; S=0x355aece1; 
@property(assign, nonatomic) BOOL usesRoundedCorners;	// G=0x355af121; S=0x355aefb1; 
+ (double)defaultDurationForTransition:(int)transition;	// 0x35363fb9
- (id)initWithCoder:(id)coder;	// 0x355aed1d
- (id)initWithFrame:(CGRect)frame;	// 0x353448b1
- (void)_cleanupTransition;	// 0x35364a31
- (void)_cleanupTransitionFromPopover;	// 0x355aef71
- (BOOL)_isTransitioningFromView:(id)view;	// 0x355aef05
- (void)_navigationTransitionDidStop;	// 0x353649f1
- (void)_notifyDelegateTransitionDidStopWithContext:(id)_notifyDelegateTransition;	// 0x35364e7d
- (void)dealloc;	// 0x353d184d
// declared property getter: - (id)delegate;	// 0x355af135
- (void)encodeWithCoder:(id)coder;	// 0x355aee0d
// declared property getter: - (id)fromView;	// 0x355af145
// declared property getter: - (BOOL)isTransitioning;	// 0x355aeef1
// declared property getter: - (BOOL)popoverWillCleanUpNavigationTransition;	// 0x355aed09
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x35344915
// declared property setter: - (void)setPopoverWillCleanUpNavigationTransition:(BOOL)cleanUpNavigationTransition;	// 0x355aece1
// declared property setter: - (void)setUsesRoundedCorners:(BOOL)corners;	// 0x355aefb1
- (BOOL)transition:(int)transition fromView:(id)view toView:(id)view3;	// 0x3536375d
- (BOOL)transition:(int)transition toView:(id)view;	// 0x3536373d
// declared property getter: - (BOOL)usesRoundedCorners;	// 0x355af121
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UISelectionGrabberDot, UITextRangeView;

__attribute__((visibility("hidden")))
@interface UISelectionGrabber : UIView {
@private
	UISelectionGrabberDot *m_dotView;	// 48 = 0x30
	BOOL m_isDotted;	// 52 = 0x34
	BOOL m_isStart;	// 53 = 0x35
	BOOL m_activeFlattened;	// 54 = 0x36
	BOOL m_alertFlattened;	// 55 = 0x37
	BOOL m_navigationTransitionFlattened;	// 56 = 0x38
	BOOL m_animating;	// 57 = 0x39
}
@property(assign, nonatomic) BOOL activeFlattened;	// G=0x302e8fe5; S=0x302e8ff5; @synthesize=m_activeFlattened
@property(assign, nonatomic) BOOL alertFlattened;	// G=0x302e8fc5; S=0x302e8fd5; @synthesize=m_alertFlattened
@property(assign, nonatomic) BOOL animating;	// G=0x302e9015; S=0x302e8e3d; @synthesize=m_animating
@property(readonly, assign, nonatomic) UITextRangeView *hostView;	// G=0x3011ed3d; 
@property(assign, nonatomic) BOOL isDotted;	// G=0x3011ed0d; S=0x3011ed1d; @synthesize=m_isDotted
@property(assign, nonatomic) BOOL isStart;	// G=0x302e8fb5; S=0x3011ed4d; @synthesize=m_isStart
@property(assign, nonatomic) BOOL navigationTransitionFlattened;	// G=0x302e9005; S=0x301b81d5; @synthesize=m_navigationTransitionFlattened
+ (id)_grabberDot;	// 0x302e9025
- (id)initWithFrame:(CGRect)frame;	// 0x3011e2f5
// declared property getter: - (BOOL)activeFlattened;	// 0x302e8fe5
// declared property getter: - (BOOL)alertFlattened;	// 0x302e8fc5
// declared property getter: - (BOOL)animating;	// 0x302e9015
- (BOOL)autoscrolled;	// 0x302e8c75
- (void)canExpandAfterAlert:(id)alert;	// 0x302e8b15
- (void)canExpandAfterBecomeActive:(id)active;	// 0x302e8b75
- (void)canExpandAfterNavigationTransition:(id)transition;	// 0x302e8ba5
- (BOOL)clipDot:(CGRect)dot;	// 0x302e8c9d
- (void)dealloc;	// 0x301362b9
- (void)didMoveToSuperview;	// 0x301385b5
- (void)drawRect:(CGRect)rect;	// 0x302e8e5d
// declared property getter: - (id)hostView;	// 0x3011ed3d
- (BOOL)inputViewIsChanging;	// 0x302e8c4d
// declared property getter: - (BOOL)isDotted;	// 0x3011ed0d
- (BOOL)isRotating;	// 0x302e8c25
- (BOOL)isScaling;	// 0x302e8bfd
- (BOOL)isScrolling;	// 0x302e8bd5
// declared property getter: - (BOOL)isStart;	// 0x302e8fb5
- (void)mustFlattenForAlert:(id)alert;	// 0x302e8ae5
- (void)mustFlattenForNavigationTransition:(id)navigationTransition;	// 0x301b81a5
- (void)mustFlattenForResignActive:(id)resignActive;	// 0x302e8b45
// declared property getter: - (BOOL)navigationTransitionFlattened;	// 0x302e9005
- (void)removeFromSuperview;	// 0x301260d1
// declared property setter: - (void)setActiveFlattened:(BOOL)flattened;	// 0x302e8ff5
// declared property setter: - (void)setAlertFlattened:(BOOL)flattened;	// 0x302e8fd5
// declared property setter: - (void)setAnimating:(BOOL)animating;	// 0x302e8e3d
- (void)setFrame:(CGRect)frame;	// 0x3011e4b5
- (void)setHidden:(BOOL)hidden;	// 0x3011edb5
// declared property setter: - (void)setIsDotted:(BOOL)dotted;	// 0x3011ed1d
// declared property setter: - (void)setIsStart:(BOOL)start;	// 0x3011ed4d
// declared property setter: - (void)setNavigationTransitionFlattened:(BOOL)flattened;	// 0x301b81d5
- (void)updateDot;	// 0x3011e4fd
@end


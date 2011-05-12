/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSMutableArray, UISelectionGrabber, UITouch, NSArray, UITextSelectionView;
@protocol UITextSelectingContainer;

__attribute__((visibility("hidden")))
@interface UITextRangeView : UIView {
@private
	UITextSelectionView *m_selectionView;	// 44 = 0x2c
	UIView<UITextSelectingContainer> *m_container;	// 48 = 0x30
	int m_mode;	// 52 = 0x34
	NSArray *m_rects;	// 56 = 0x38
	NSMutableArray *m_rectViews;	// 60 = 0x3c
	UITouch *m_activeTouch;	// 64 = 0x40
	CGRect m_startEdge;	// 68 = 0x44
	CGRect m_endEdge;	// 84 = 0x54
	CGPoint m_basePoint;	// 100 = 0x64
	CGPoint m_extentPoint;	// 108 = 0x6c
	CGPoint m_initialBasePoint;	// 116 = 0x74
	CGPoint m_initialExtentPoint;	// 124 = 0x7c
	float m_initialDistance;	// 132 = 0x84
	CGPoint m_touchOffset;	// 136 = 0x88
	double m_firstMovedTime;	// 144 = 0x90
	UISelectionGrabber *m_startGrabber;	// 152 = 0x98
	UISelectionGrabber *m_endGrabber;	// 156 = 0x9c
	BOOL m_animateUpdate;	// 160 = 0xa0
	BOOL m_baseIsStart;	// 161 = 0xa1
	BOOL m_commandsWereShowing;	// 162 = 0xa2
	BOOL m_inGesture;	// 163 = 0xa3
	BOOL m_magnifying;	// 164 = 0xa4
	BOOL m_scrolling;	// 165 = 0xa5
	BOOL m_scaling;	// 166 = 0xa6
	BOOL m_rotating;	// 167 = 0xa7
}
@property(retain, nonatomic) UITouch *activeTouch;	// G=0x320ba269; S=0x321c82d1; @synthesize=m_activeTouch
@property(assign, nonatomic) BOOL animateUpdate;	// G=0x321c684d; S=0x321c685d; @synthesize=m_animateUpdate
@property(readonly, assign, nonatomic) BOOL autoscrolled;	// G=0x321c6a51; 
@property(assign, nonatomic) BOOL baseIsStart;	// G=0x320b8f0d; S=0x321c6971; @synthesize=m_baseIsStart
@property(assign, nonatomic) CGPoint basePoint;	// G=0x321c6959; S=0x320b8f39; @synthesize=m_basePoint
@property(assign, nonatomic) BOOL commandsWereShowing;	// G=0x321c682d; S=0x321c683d; @synthesize=m_commandsWereShowing
@property(readonly, assign, nonatomic) UIView<UITextSelectingContainer> *container;	// G=0x320b8da5; 
@property(assign, nonatomic) CGRect endEdge;	// G=0x320b8f1d; S=0x320b8df1; @synthesize=m_endEdge
@property(retain, nonatomic) UISelectionGrabber *endGrabber;	// G=0x320ba2e9; S=0x321c8321; @synthesize=m_endGrabber
@property(assign, nonatomic) CGPoint extentPoint;	// G=0x321c6941; S=0x320b8f6d; @synthesize=m_extentPoint
@property(assign, nonatomic) double firstMovedTime;	// G=0x321c686d; S=0x321c687d; @synthesize=m_firstMovedTime
@property(assign, nonatomic) BOOL inGesture;	// G=0x320b9fed; S=0x320ba309; @synthesize=m_inGesture
@property(assign, nonatomic) CGPoint initialBasePoint;	// G=0x321c6911; S=0x321c6929; @synthesize=m_initialBasePoint
@property(assign, nonatomic) float initialDistance;	// G=0x321c68c1; S=0x321c68d1; @synthesize=m_initialDistance
@property(assign, nonatomic) CGPoint initialExtentPoint;	// G=0x321c68e1; S=0x321c68f9; @synthesize=m_initialExtentPoint
@property(assign, nonatomic) BOOL isScrolling;	// G=0x320ba055; S=0x320ba2f9; @synthesize=m_scrolling
@property(assign, nonatomic) BOOL magnifying;	// G=0x321c680d; S=0x321c681d; @synthesize=m_magnifying
@property(assign, nonatomic) int mode;	// G=0x320b92b5; S=0x320ba10d; @synthesize=m_mode
@property(copy, nonatomic) NSArray *rects;	// G=0x320b8db5; S=0x320b8c31; @synthesize=m_rects
@property(assign, nonatomic) BOOL rotating;	// G=0x320ba021; S=0x321c67ed; @synthesize=m_rotating
@property(assign, nonatomic) BOOL scaling;	// G=0x320ba089; S=0x321c67fd; @synthesize=m_scaling
@property(readonly, assign, nonatomic) UITextSelectionView *selectionView;	// G=0x321c67dd; 
@property(assign, nonatomic) CGRect startEdge;	// G=0x320b8f51; S=0x320b8dc5; @synthesize=m_startEdge
@property(retain, nonatomic) UISelectionGrabber *startGrabber;	// G=0x320ba299; S=0x321c82f9; @synthesize=m_startGrabber
@property(assign, nonatomic) CGPoint touchOffset;	// G=0x321c6891; S=0x321c68a9; @synthesize=m_touchOffset
- (id)initWithFrame:(CGRect)frame selectionView:(id)view;	// 0x320b88cd
- (id)initWithFrame:(CGRect)frame textContainer:(id)container;	// 0x321c6f89
// declared property getter: - (id)activeTouch;	// 0x320ba269
// declared property getter: - (BOOL)animateUpdate;	// 0x321c684d
- (CGPoint)applyTouchOffset:(CGPoint)offset;	// 0x321c7111
// declared property getter: - (BOOL)autoscrolled;	// 0x321c6a51
// declared property getter: - (BOOL)baseIsStart;	// 0x320b8f0d
// declared property getter: - (CGPoint)basePoint;	// 0x321c6959
- (void)beginMagnifying;	// 0x321c7051
- (void)cancelDelayedActions;	// 0x320ba279
// declared property getter: - (BOOL)commandsWereShowing;	// 0x321c682d
// declared property getter: - (id)container;	// 0x320b8da5
- (CGPoint)convertFromMagnifierPoint:(CGPoint)magnifierPoint;	// 0x321c6fdd
- (void)dealloc;	// 0x320ba319
- (void)didRotate;	// 0x321c6bbd
- (void)didScroll;	// 0x321c6c79
- (void)doneMagnifying;	// 0x321c6cc9
// declared property getter: - (CGRect)endEdge;	// 0x320b8f1d
// declared property getter: - (id)endGrabber;	// 0x320ba2e9
// declared property getter: - (CGPoint)extentPoint;	// 0x321c6941
// declared property getter: - (double)firstMovedTime;	// 0x321c686d
// declared property getter: - (BOOL)inGesture;	// 0x320b9fed
// declared property getter: - (CGPoint)initialBasePoint;	// 0x321c6911
// declared property getter: - (float)initialDistance;	// 0x321c68c1
// declared property getter: - (CGPoint)initialExtentPoint;	// 0x321c68e1
// declared property getter: - (BOOL)isScrolling;	// 0x320ba055
- (CGPoint)magnifierPoint;	// 0x321c8349
// declared property getter: - (BOOL)magnifying;	// 0x321c680d
// declared property getter: - (int)mode;	// 0x320b92b5
- (BOOL)pointCloserToEnd:(CGPoint)end startEdge:(CGRect)edge endEdge:(CGRect)edge3;	// 0x321c8275
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x321c7a41
- (void)prepareForMagnification;	// 0x321c6d2d
// declared property getter: - (id)rects;	// 0x320b8db5
- (void)removeFromSuperview;	// 0x320ba169
// declared property getter: - (BOOL)rotating;	// 0x320ba021
- (void)scaleDidChange;	// 0x321c6c29
- (void)scaleWillChange;	// 0x321c6c51
// declared property getter: - (BOOL)scaling;	// 0x320ba089
- (void)selectionAnimationDidStop:(id)selectionAnimation finished:(id)finished;	// 0x321c6d91
// declared property getter: - (id)selectionView;	// 0x321c67dd
// declared property setter: - (void)setActiveTouch:(id)touch;	// 0x321c82d1
// declared property setter: - (void)setAnimateUpdate:(BOOL)update;	// 0x321c685d
// declared property setter: - (void)setBaseIsStart:(BOOL)start;	// 0x321c6971
// declared property setter: - (void)setBasePoint:(CGPoint)point;	// 0x320b8f39
// declared property setter: - (void)setCommandsWereShowing:(BOOL)showing;	// 0x321c683d
- (void)setEnclosingScrollViewsEnabled:(BOOL)enabled;	// 0x321c6a15
// declared property setter: - (void)setEndEdge:(CGRect)edge;	// 0x320b8df1
// declared property setter: - (void)setEndGrabber:(id)grabber;	// 0x321c8321
// declared property setter: - (void)setExtentPoint:(CGPoint)point;	// 0x320b8f6d
// declared property setter: - (void)setFirstMovedTime:(double)time;	// 0x321c687d
// declared property setter: - (void)setInGesture:(BOOL)gesture;	// 0x320ba309
// declared property setter: - (void)setInitialBasePoint:(CGPoint)point;	// 0x321c6929
// declared property setter: - (void)setInitialDistance:(float)distance;	// 0x321c68d1
// declared property setter: - (void)setInitialExtentPoint:(CGPoint)point;	// 0x321c68f9
// declared property setter: - (void)setIsScrolling:(BOOL)scrolling;	// 0x320ba2f9
// declared property setter: - (void)setMagnifying:(BOOL)magnifying;	// 0x321c681d
// declared property setter: - (void)setMode:(int)mode;	// 0x320ba10d
// declared property setter: - (void)setRects:(id)rects;	// 0x320b8c31
// declared property setter: - (void)setRotating:(BOOL)rotating;	// 0x321c67ed
// declared property setter: - (void)setScaling:(BOOL)scaling;	// 0x321c67fd
// declared property setter: - (void)setStartEdge:(CGRect)edge;	// 0x320b8dc5
// declared property setter: - (void)setStartGrabber:(id)grabber;	// 0x321c82f9
// declared property setter: - (void)setTouchOffset:(CGPoint)offset;	// 0x321c68a9
- (void)setTouchOffset:(CGPoint)offset touchPoint:(CGPoint)point;	// 0x321c6a85
// declared property getter: - (CGRect)startEdge;	// 0x320b8f51
// declared property getter: - (id)startGrabber;	// 0x320ba299
// declared property getter: - (CGPoint)touchOffset;	// 0x321c6891
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x321c7ae1
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x321c6ea5
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x321c76e1
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x321c7f31
- (void)updateBaseAndExtentPointsFromEdges;	// 0x320b8e1d
- (void)updateBaseIsStartWithContentPoint:(CGPoint)contentPoint;	// 0x321c74f1
- (void)updateDots;	// 0x321c6b05
- (void)updateGrabbers;	// 0x320b92c5
- (void)updateRectViews;	// 0x320b8f85
- (void)updateSelectionWithContentPoint:(CGPoint)contentPoint;	// 0x321c6dd1
- (void)updateSelectionWithPoint:(CGPoint)point;	// 0x321c75ad
- (void)updateWithMagnifierTerminalPoint:(BOOL)magnifierTerminalPoint;	// 0x321c7181
- (void)willRotate;	// 0x321c6c01
- (void)willScroll;	// 0x321c6ca1
@end

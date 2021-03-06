/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSCoding.h"
#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImageView, NSArray;
@protocol UIScrollViewDelegate;

@interface UIScrollView : UIView <NSCoding> {
@private
	CGSize _contentSize;	// 44 = 0x2c
	UIEdgeInsets _contentInset;	// 52 = 0x34
	id _delegate;	// 68 = 0x44
	UIImageView *_verticalScrollIndicator;	// 72 = 0x48
	UIImageView *_horizontalScrollIndicator;	// 76 = 0x4c
	UIEdgeInsets _scrollIndicatorInset;	// 80 = 0x50
	struct {
		unsigned tracking : 1;
		unsigned dragging : 1;
		unsigned verticalBounceEnabled : 1;
		unsigned horizontalBounceEnabled : 1;
		unsigned verticalBouncing : 1;
		unsigned horizontalBouncing : 1;
		unsigned bouncesZoom : 1;
		unsigned zoomBouncing : 1;
		unsigned alwaysBounceHorizontal : 1;
		unsigned alwaysBounceVertical : 1;
		unsigned canCancelContentTouches : 1;
		unsigned delaysContentTouches : 1;
		unsigned programmaticScrollDisabled : 1;
		unsigned scrollDisabled : 1;
		unsigned zoomDisabled : 1;
		unsigned scrollTriggered : 1;
		unsigned scrollDisabledOnTouchBegan : 1;
		unsigned ignoreNextTouchesMoved : 1;
		unsigned cancelNextContentTouchEnded : 1;
		unsigned inContentViewCall : 1;
		unsigned dontSelect : 1;
		unsigned contentTouched : 1;
		unsigned cantCancel : 1;
		unsigned directionalLockEnabled : 1;
		unsigned directionalLockAutoEnabled : 1;
		unsigned lockVertical : 1;
		unsigned lockHorizontal : 1;
		unsigned keepLocked : 1;
		unsigned showsHorizontalScrollIndicator : 1;
		unsigned showsVerticalScrollIndicator : 1;
		unsigned indicatorStyle : 2;
		unsigned inZoom : 1;
		unsigned hideIndicatorsInZoom : 1;
		unsigned pushedTrackingMode : 1;
		unsigned multipleDrag : 1;
		unsigned displayingScrollIndicators : 1;
		unsigned verticalIndicatorShrunk : 1;
		unsigned horizontalIndicatorShrunk : 1;
		unsigned contentFitDisableScrolling : 1;
		unsigned pagingEnabled : 1;
		unsigned pagingLeft : 1;
		unsigned pagingRight : 1;
		unsigned pagingUp : 1;
		unsigned pagingDown : 1;
		unsigned lastHorizontalDirection : 1;
		unsigned lastVerticalDirection : 1;
		unsigned dontScrollToTop : 1;
		unsigned scrollingToTop : 1;
		unsigned useGestureRecognizers : 1;
		unsigned autoscrolling : 1;
		unsigned automaticContentOffsetAdjustmentDisabled : 1;
		unsigned skipStartOffsetAdjustment : 1;
		unsigned delegateScrollViewDidScroll : 1;
		unsigned delegateScrollViewDidZoom : 1;
		unsigned delegateContentSizeForZoomScale : 1;
		unsigned preserveCenterDuringRotation : 1;
		unsigned delaysTrackingWhileDecelerating : 1;
		unsigned pinnedZoomMin : 1;
		unsigned pinnedXMin : 1;
		unsigned pinnedYMin : 1;
		unsigned pinnedXMax : 1;
		unsigned pinnedYMax : 1;
		unsigned skipLinkChecks : 1;
		unsigned wasIgnoringTapsInDimmingView : 1;
		unsigned isAnimatingScroll : 1;
		unsigned isAnimatingZoom : 1;
		unsigned staysCenteredDuringPinch : 1;
		unsigned wasDelayingPinchForSystemGestures : 1;
		unsigned systemGesturesRecognitionPossible : 1;
	} _scrollViewFlags;	// 96 = 0x60
	float _farthestDistance;	// 108 = 0x6c
	CGPoint _initialTouchPosition;	// 112 = 0x70
	CGPoint _startTouchPosition;	// 120 = 0x78
	double _startTouchTime;	// 128 = 0x80
	double _startOffsetX;	// 136 = 0x88
	double _startOffsetY;	// 144 = 0x90
	double _lastUpdateOffsetX;	// 152 = 0x98
	double _lastUpdateOffsetY;	// 160 = 0xa0
	CGPoint _lastTouchPosition;	// 168 = 0xa8
	double _lastTouchTime;	// 176 = 0xb0
	double _lastUpdateTime;	// 184 = 0xb8
	CGPoint _zoomAnchorPoint;	// 192 = 0xc0
	UIView *_contentView;	// 200 = 0xc8
	float _minimumZoomScale;	// 204 = 0xcc
	float _maximumZoomScale;	// 208 = 0xd0
	int _zoomRubberBandHysteresisCount;	// 212 = 0xd4
	UIView *_zoomView;	// 216 = 0xd8
	double _horizontalVelocity;	// 220 = 0xdc
	double _verticalVelocity;	// 228 = 0xe4
	double _previousHorizontalVelocity;	// 236 = 0xec
	double _previousVerticalVelocity;	// 244 = 0xf4
	CGPoint _stopOffset;	// 252 = 0xfc
	void *_scrollHeartbeat;	// 260 = 0x104
	CGPoint _pageDecelerationTarget;	// 264 = 0x108
	CGSize _decelerationFactor;	// 272 = 0x110
	double _decelerationLnFactorH;	// 280 = 0x118
	double _decelerationLnFactorV;	// 288 = 0x120
	NSArray *_deferredBeginTouchesInfo;	// 296 = 0x128
	UIImageView **_shadows;	// 300 = 0x12c
	id _scrollNotificationViews;	// 304 = 0x130
	double _contentOffsetAnimationDuration;	// 308 = 0x134
	id _animation;	// 316 = 0x13c
	id _pinch;	// 320 = 0x140
	id _pan;	// 324 = 0x144
	id _swipe;	// 328 = 0x148
	float _pagingSpringPull;	// 332 = 0x14c
	float _pagingFriction;	// 336 = 0x150
	int _fastScrollCount;	// 340 = 0x154
	float _fastScrollMultiplier;	// 344 = 0x158
	float _fastScrollStartMultiplier;	// 348 = 0x15c
	double _fastScrollEndTime;	// 352 = 0x160
	CGPoint _parentAdjustment;	// 360 = 0x168
	CGPoint _rotationCenterPoint;	// 368 = 0x170
	float _accuracy;	// 376 = 0x178
	float _hysteresis;	// 380 = 0x17c
	unsigned _zoomAnimationCount;	// 384 = 0x180
}
@property(assign) BOOL allowsMultipleFingers;	// G=0x306f604d; S=0x306f6079; converted property
@property(assign, nonatomic) BOOL alwaysBounceHorizontal;	// G=0x305db8e9; S=0x306f614d; 
@property(assign, nonatomic) BOOL alwaysBounceVertical;	// G=0x305dba31; S=0x30611755; 
@property(assign) CGPoint autoscrollContentOffset;	// G=0x306f6cfd; S=0x306f5a11; converted property
@property(assign, nonatomic) BOOL bounces;	// G=0x306f539d; S=0x3062ab91; 
@property(assign) BOOL bouncesHorizontally;	// G=0x306f53d5; S=0x306f53b9; converted property
@property(assign) BOOL bouncesVertically;	// G=0x306f5405; S=0x306f53e9; converted property
@property(assign, nonatomic) BOOL bouncesZoom;	// G=0x306f5565; S=0x30611739; 
@property(assign, nonatomic) BOOL canCancelContentTouches;	// G=0x306f5579; S=0x306f5591; 
@property(assign, nonatomic) UIEdgeInsets contentInset;	// G=0x305db4e1; S=0x30619125; @synthesize=_contentInset
@property(assign, nonatomic) CGPoint contentOffset;	// G=0x305b020d; S=0x305db531; 
@property(assign, nonatomic) CGSize contentSize;	// G=0x305e9699; S=0x305e0aa1; @synthesize=_contentSize
@property(readonly, assign, nonatomic, getter=isDecelerating) BOOL decelerating;	// G=0x3062f6c9; 
@property(assign, nonatomic) float decelerationRate;	// G=0x306f5471; S=0x306f5481; 
@property(assign, nonatomic) BOOL delaysContentTouches;	// G=0x3062fc95; S=0x30610975; 
@property(assign, nonatomic) id<UIScrollViewDelegate> delegate;	// G=0x305de14d; S=0x305de15d; @synthesize=_delegate
@property(assign, nonatomic, getter=isDirectionalLockEnabled) BOOL directionalLockEnabled;	// G=0x306f61c1; S=0x30610925; 
@property(readonly, assign, nonatomic, getter=isDragging) BOOL dragging;	// G=0x3062e86d; 
@property(assign) float horizontalScrollDecelerationFactor;	// G=0x306f54d5; S=0x30610905; converted property
@property(assign, nonatomic) int indicatorStyle;	// G=0x306f54c1; S=0x306f60a5; 
@property(readonly, assign, nonatomic, getter=_isAnimatingScroll) BOOL isAnimatingScroll;	// G=0x306f5729; 
@property(readonly, assign, nonatomic, getter=_isAnimatingZoom) BOOL isAnimatingZoom;	// G=0x306f56f5; 
@property(readonly, assign, nonatomic, getter=_isHorizontalBouncing) BOOL isHorizontalBouncing;	// G=0x306f542d; 
@property(readonly, assign, nonatomic, getter=_isVerticalBouncing) BOOL isVerticalBouncing;	// G=0x306f5419; 
@property(assign, nonatomic) float maximumZoomScale;	// G=0x306f5341; S=0x30616b69; @synthesize=_maximumZoomScale
@property(assign, nonatomic) float minimumZoomScale;	// G=0x306f5331; S=0x30616b35; 
@property(assign) CGPoint offset;	// G=0x3068c55d; S=0x306f5e09; converted property
@property(assign, nonatomic, getter=isPagingEnabled) BOOL pagingEnabled;	// G=0x306f5389; S=0x306f617d; 
@property(assign) BOOL preservesCenterDuringRotation;	// G=0x306f551d; S=0x306f5f01; converted property
@property(assign, nonatomic, getter=isProgrammaticScrollEnabled) BOOL programmaticScrollEnabled;	// G=0x306f536d; S=0x3068d3d1; 
@property(assign, nonatomic, getter=isScrollEnabled) BOOL scrollEnabled;	// G=0x3068d3b5; S=0x3062ac0d; 
@property(assign, nonatomic) UIEdgeInsets scrollIndicatorInsets;	// G=0x30612a55; S=0x30612a71; 
@property(assign, nonatomic) BOOL scrollsToTop;	// G=0x306f55ad; S=0x306116c1; 
@property(assign, nonatomic) BOOL showsHorizontalScrollIndicator;	// G=0x306f5441; S=0x305e09a9; 
@property(assign, nonatomic) BOOL showsVerticalScrollIndicator;	// G=0x306f5459; S=0x305e0a25; 
@property(readonly, assign, nonatomic, getter=isTracking) BOOL tracking;	// G=0x305db51d; 
@property(assign) BOOL tracksImmediatelyWhileDecelerating;	// G=0x30637b05; S=0x306f54f5; converted property
@property(assign) BOOL usesGestureRecognizers;	// G=0x305dbe91; S=0x305dbea9; converted property
@property(assign) float verticalScrollDecelerationFactor;	// G=0x306f54e5; S=0x30610915; converted property
@property(readonly, assign, nonatomic, getter=isZoomBouncing) BOOL zoomBouncing;	// G=0x306f56e5; 
@property(assign, getter=isZoomEnabled) BOOL zoomEnabled;	// G=0x306f5351; S=0x30616c2d; converted property
@property(assign, nonatomic) float zoomScale;	// G=0x30612879; S=0x306f5e1d; 
@property(readonly, assign, nonatomic, getter=isZooming) BOOL zooming;	// G=0x3062ad79; 
+ (float)_cancelSelectDistance;	// 0x3065aa89
- (id)initWithCoder:(id)coder;	// 0x306f7115
- (id)initWithFrame:(CGRect)frame;	// 0x305da541
- (void)_addContentSubview:(id)subview atBack:(BOOL)back;	// 0x305e7ae9
- (void)_addScrollNotificationView:(id)view;	// 0x306169b9
- (void)_adjustBackgroundShadowsForContentSizeForcedVisible:(BOOL)contentSizeForcedVisible;	// 0x30610b9d
- (void)_adjustBackgroundShadowsForContentSizeForcedVisible:(BOOL)contentSizeForcedVisible withOffset:(float)offset;	// 0x30610bd1
- (void)_adjustContentOffsetIfNecessary;	// 0x305daa79
- (void)_adjustContentSizeForView:(id)view atScale:(float)scale;	// 0x3062b95d
- (void)_adjustForAutomaticKeyboardInfo:(id)automaticKeyboardInfo animated:(BOOL)animated lastAdjustment:(float *)adjustment;	// 0x306725ed
- (void)_adjustScrollerIndicators:(BOOL)indicators alwaysShowingThem:(BOOL)them;	// 0x305e2a59
- (void)_adjustShadowsIfNecessary;	// 0x305db791
- (void)_adjustShadowsIfNecessaryForOffset:(float)offset;	// 0x306f59e9
- (id)_backgroundShadowForSlideAnimation;	// 0x306f7bc9
- (void)_beginTouchesInContentView:(id)contentView touches:(id)touches withEvent:(id)event;	// 0x306f7831
- (BOOL)_beginTrackingWithEvent:(id)event;	// 0x3062e881
- (BOOL)_canCancelContentTouches:(id)touches;	// 0x3063231d
- (BOOL)_canScrollX;	// 0x305db7b5
- (BOOL)_canScrollY;	// 0x305db8fd
- (BOOL)_cancelContentTouchWithEvent:(id)event forced:(BOOL)forced;	// 0x306b0d1d
- (void)_cancelPendingAnimations;	// 0x306f57ed
- (void)_centerContentIfNecessary;	// 0x30617721
- (void)_changedGesture:(id)gesture withEvent:(id)event;	// 0x306f7ce1
- (void)_clearContentOffsetAnimation;	// 0x306da8cd
- (double)_contentOffsetAnimationDuration;	// 0x306b1fad
- (BOOL)_continueScrollingAtOffset:(CGPoint)offset;	// 0x306f57d1
- (id)_defaultHitTest:(CGPoint)test withEvent:(id)event;	// 0x30643c45
- (void)_deferredBeginTouchesInContentView;	// 0x306f5851
- (void)_didMoveFromWindow:(id)window toWindow:(id)window2;	// 0x305e5b3d
- (void)_disableScrollingIfNecessary;	// 0x307e0989
- (void)_enableScrollingIfNecessary;	// 0x307e09b5
- (void)_endGesture:(id)gesture withEvent:(id)event;	// 0x306f5bf5
- (void)_endPanWithEvent:(id)event;	// 0x3063498d
- (void)_forceDelegateScrollViewDidZoom:(BOOL)_forceDelegateScrollView;	// 0x306f570d
- (BOOL)_gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;	// 0x3062e709
- (BOOL)_gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)gestureRecognizer;	// 0x30632da1
- (id)_gestureTargetHitTest:(CGPoint)test withEvent:(id)event;	// 0x306f6d49
- (BOOL)_getBouncingDecelerationOffset:(double *)offset forTimeInterval:(double)timeInterval lastUpdateOffset:(double)offset3 min:(double)min max:(double)max decelerationFactor:(double)factor decelerationLnFactor:(double)factor7 velocity:(double *)velocity;	// 0x306365c5
- (id)_getDelegateZoomView;	// 0x30612925
- (BOOL)_getPagingDecelerationOffset:(CADoublePoint *)offset forTimeInterval:(double)timeInterval;	// 0x306f6339
- (void)_getStandardDecelerationOffset:(double *)offset forTimeInterval:(double)timeInterval min:(double)min max:(double)max decelerationFactor:(double)factor decelerationLnFactor:(double)factor6 velocity:(double *)velocity;	// 0x306f81ed
- (void)_handleSwipe:(id)swipe;	// 0x306f5e8d
- (void)_hideScrollIndicators;	// 0x305e44b5
- (id)_hitTestForContentView:(CGPoint)contentView withEvent:(id)event;	// 0x306f6205
- (double)_horizontalVelocity;	// 0x3069aaa9
- (BOOL)_ignoreLinkedOnChecks;	// 0x306f55c5
- (BOOL)_isAnimatingContentOffset;	// 0x306f57a5
// declared property getter: - (BOOL)_isAnimatingScroll;	// 0x306f5729
// declared property getter: - (BOOL)_isAnimatingZoom;	// 0x306f56f5
- (BOOL)_isAutoscrolling;	// 0x306f578d
// declared property getter: - (BOOL)_isHorizontalBouncing;	// 0x306f542d
- (BOOL)_isIgnoringPopoverDimmingViewTaps;	// 0x3063323d
- (BOOL)_isRectFullyVisible:(CGRect)visible;	// 0x306d4099
- (BOOL)_isScrollingEnabled;	// 0x306d3f95
// declared property getter: - (BOOL)_isVerticalBouncing;	// 0x306f5419
- (void)_moveContentSubview:(id)subview toBack:(BOOL)back;	// 0x30606ead
- (void)_notifyDidScroll;	// 0x30608759
- (void)_notifyPopOverIsScrolling:(BOOL)scrolling;	// 0x30633139
- (void)_notifyPopOverStoppedScrolling;	// 0x30636f0d
- (void)_notifyPopOverStoppedScrollingLater;	// 0x30636b59
- (CGPoint)_originalOffsetForAnimatedSetContentOffset;	// 0x306da555
- (CGPoint)_pageDecelerationTarget;	// 0x306f57b9
- (BOOL)_pagingLeft;	// 0x306f575d
- (BOOL)_pagingRight;	// 0x306f5775
- (id)_panGesture;	// 0x3062c99d
- (id)_parentScrollView;	// 0x3062f6dd
- (id)_pinchGesture;	// 0x306f5321
- (void)_popTrackingRunLoopMode;	// 0x30636a49
- (id)_popoverSuperview;	// 0x30633265
- (void)_populateArchivedSubviews:(id)subviews;	// 0x306f6279
- (void)_prepareToPageWithHorizontalVelocity:(float)horizontalVelocity verticalVelocity:(float)velocity;	// 0x3063429d
- (void)_registerForRotation:(BOOL)rotation ofWindow:(id)window;	// 0x306f5f55
- (void)_removeScrollNotificationView:(id)view;	// 0x3068d759
- (BOOL)_resetScrollingForGestureEvent:(id)gestureEvent;	// 0x306f5b45
- (void)_resetScrollingWithEvent:(GSEventRef)event;	// 0x306f80a5
- (void)_resetScrollingWithUIEvent:(id)uievent;	// 0x3062f075
- (CADoublePoint)_rubberBandContentOffsetForOffset:(CADoublePoint)offset outsideX:(BOOL *)x outsideY:(BOOL *)y;	// 0x3062ba65
- (void)_runLoopModePopped:(id)popped;	// 0x306f58e5
- (float)_scrollHysteresis;	// 0x306daa3d
- (BOOL)_scrollToTop;	// 0x306f87a1
- (void)_scrollViewAnimationEnded;	// 0x306da7bd
- (void)_scrollViewDidEndDecelerating;	// 0x30636b0d
- (void)_scrollViewDidEndDraggingWithDeceleration:(BOOL)_scrollView;	// 0x306353a9
- (void)_scrollViewDidEndZooming;	// 0x306e2b81
- (id)_scrollViewTouchDelayGesture;	// 0x3062ac95
- (void)_scrollViewWillBeginDragging;	// 0x30633069
- (void)_scrollViewWillBeginZooming;	// 0x306e2851
- (BOOL)_scrollsToMakeFirstResponderVisible;	// 0x306f5741
- (void)_setAutomaticContentOffsetAdjustmentEnabled:(BOOL)enabled;	// 0x3068cf79
- (void)_setAutoscrolling:(BOOL)autoscrolling;	// 0x306f5a25
- (void)_setContentOffset:(CGPoint)offset animated:(BOOL)animated animationCurve:(int)curve;	// 0x305e1fe5
- (void)_setContentOffset:(CGPoint)offset duration:(double)duration animationCurve:(int)curve;	// 0x306f5ab5
- (void)_setContentOffsetAnimationDuration:(double)duration;	// 0x306b1fbd
- (void)_setContentOffsetPinned:(CGPoint)pinned;	// 0x30698679
- (void)_setIgnoreLinkedOnChecks:(BOOL)checks;	// 0x3062ab75
- (void)_setIgnorePopoverDimmingViewTaps:(BOOL)taps;	// 0x306332c9
- (void)_setShowsBackgroundShadow:(BOOL)shadow;	// 0x30610991
- (void)_setStaysCenteredDuringPinch:(BOOL)pinch;	// 0x306f5531
- (void)_setZoomAnchorPoint:(CADoublePoint)point;	// 0x3062b031
- (float)_shadowHeightOffset;	// 0x30610bcd
- (void)_shiftOffset:(CGSize)offset;	// 0x306f86e1
- (BOOL)_showsBackgroundShadow;	// 0x306c51c1
- (void)_skipNextStartOffsetAdjustment;	// 0x306da781
- (void)_smoothScroll:(double)scroll;	// 0x30635ae9
- (void)_startGesture:(id)gesture withEvent:(id)event;	// 0x306f5d4d
- (void)_startTimer:(BOOL)timer;	// 0x30635625
- (BOOL)_staysCenteredDuringPinch;	// 0x306e27d9
- (CGPoint)_stopOffset;	// 0x306f5745
- (void)_stopScrollDecelerationNotify:(BOOL)notify;	// 0x30636915
- (void)_stopScrollingNotify:(BOOL)notify dealloc:(BOOL)dealloc pin:(BOOL)pin;	// 0x3060eb05
- (void)_systemGestureStateChanged:(id)changed;	// 0x306f7b05
- (double)_touchDelayForScrollDetection;	// 0x3062fcad
- (CGPoint)_touchPositionForTouches:(id)touches;	// 0x30664a2d
- (id)_touchedContentView;	// 0x306459c5
- (void)_touchesEnded:(id)ended withEvent:(id)event wasCancelled:(BOOL)cancelled;	// 0x30645a11
- (void)_updatePagingGesture;	// 0x305dcdc9
- (void)_updatePanGesture;	// 0x306fac5d
- (void)_updatePinchGesture;	// 0x305dcc59
- (void)_updatePinchGestureForState:(int)state;	// 0x306fa38d
- (BOOL)_updateTouchPanWithStartDelta:(CGSize)startDelta event:(id)event ignoringDirectionalScroll:(BOOL)scroll;	// 0x306f8a2d
- (BOOL)_usesDifferentHitTestForGestures;	// 0x30664a11
- (double)_verticalVelocity;	// 0x3069aa99
- (void)_willMoveToWindow:(id)window;	// 0x305e5ac9
- (CADoublePoint)_zoomAnchorPoint;	// 0x3062b9dd
- (void)_zoomAnimationDidStop;	// 0x306e3369
- (float)_zoomAnimationDurationForScale:(float)scale;	// 0x306f7f75
- (float)_zoomRubberBandScaleForScale:(float)scale;	// 0x306f55d9
- (float)_zoomScaleForRubberBandScale:(float)rubberBandScale;	// 0x306f5659
- (float)_zoomScaleFromPresentationLayer:(BOOL)presentationLayer;	// 0x30612891
- (void)_zoomToCenter:(CGPoint)center scale:(float)scale duration:(double)duration;	// 0x306e3135
- (void)_zoomToCenter:(CGPoint)center scale:(float)scale duration:(double)duration force:(BOOL)force;	// 0x306e3169
// converted property getter: - (BOOL)allowsMultipleFingers;	// 0x306f604d
// declared property getter: - (BOOL)alwaysBounceHorizontal;	// 0x305db8e9
// declared property getter: - (BOOL)alwaysBounceVertical;	// 0x305dba31
// converted property getter: - (CGPoint)autoscrollContentOffset;	// 0x306f6cfd
// declared property getter: - (BOOL)bounces;	// 0x306f539d
// converted property getter: - (BOOL)bouncesHorizontally;	// 0x306f53d5
// converted property getter: - (BOOL)bouncesVertically;	// 0x306f5405
// declared property getter: - (BOOL)bouncesZoom;	// 0x306f5565
// declared property getter: - (BOOL)canCancelContentTouches;	// 0x306f5579
- (BOOL)canHandleSwipes;	// 0x30611785
- (BOOL)cancelMouseTracking;	// 0x306f5e35
- (void)cancelNextContentTouchEnded;	// 0x306f554d
- (BOOL)cancelTouchTracking;	// 0x306942b9
- (id)commonHitTest:(id)test;	// 0x3062e421
- (CGRect)contentFrameForView:(id)view;	// 0x306f6c5d
// declared property getter: - (UIEdgeInsets)contentInset;	// 0x305db4e1
// declared property getter: - (CGPoint)contentOffset;	// 0x305b020d
// declared property getter: - (CGSize)contentSize;	// 0x305e9699
- (void)dealloc;	// 0x306f76e9
// declared property getter: - (float)decelerationRate;	// 0x306f5471
- (void)delayed:(id)delayed;	// 0x306f5519
// declared property getter: - (BOOL)delaysContentTouches;	// 0x3062fc95
// declared property getter: - (id)delegate;	// 0x305de14d
- (id)description;	// 0x306f8009
- (void)didFinishGesture:(int)gesture inView:(id)view forEvent:(GSEventRef)event;	// 0x306f5b5d
- (void)encodeWithCoder:(id)coder;	// 0x306f82d1
- (void)flashScrollIndicators;	// 0x305e28dd
- (BOOL)gestureRecognizer:(id)recognizer canPreventGestureRecognizer:(id)recognizer2;	// 0x30632e8d
- (BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;	// 0x3062e771
- (void)gestureRecognizerFailed:(id)failed;	// 0x30633909
- (void)handlePan:(id)pan;	// 0x30632f51
- (void)handlePinch:(id)pinch;	// 0x306e27ad
- (id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;	// 0x306f6235
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x3062e3dd
// converted property getter: - (float)horizontalScrollDecelerationFactor;	// 0x306f54d5
// declared property getter: - (int)indicatorStyle;	// 0x306f54c1
// declared property getter: - (BOOL)isDecelerating;	// 0x3062f6c9
// declared property getter: - (BOOL)isDirectionalLockEnabled;	// 0x306f61c1
// declared property getter: - (BOOL)isDragging;	// 0x3062e86d
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x307a63e1
// declared property getter: - (BOOL)isPagingEnabled;	// 0x306f5389
// declared property getter: - (BOOL)isProgrammaticScrollEnabled;	// 0x306f536d
// declared property getter: - (BOOL)isScrollEnabled;	// 0x3068d3b5
// declared property getter: - (BOOL)isTracking;	// 0x305db51d
// declared property getter: - (BOOL)isZoomBouncing;	// 0x306f56e5
// converted property getter: - (BOOL)isZoomEnabled;	// 0x306f5351
// declared property getter: - (BOOL)isZooming;	// 0x3062ad79
- (void)layoutSubviews;	// 0x306176e5
- (float)maxVelocityInDirection:(int)direction;	// 0x307ed531
// declared property getter: - (float)maximumZoomScale;	// 0x306f5341
// declared property getter: - (float)minimumZoomScale;	// 0x306f5331
// converted property getter: - (CGPoint)offset;	// 0x3068c55d
// converted property getter: - (BOOL)preservesCenterDuringRotation;	// 0x306f551d
- (void)removeFromSuperview;	// 0x3063769d
// declared property getter: - (UIEdgeInsets)scrollIndicatorInsets;	// 0x30612a55
- (void)scrollRectToVisible:(CGRect)visible animated:(BOOL)animated;	// 0x3068ad41
- (int)scrollableDirections;	// 0x307ecf3d
// declared property getter: - (BOOL)scrollsToTop;	// 0x306f55ad
// converted property setter: - (void)setAllowsMultipleFingers:(BOOL)fingers;	// 0x306f6079
// declared property setter: - (void)setAlwaysBounceHorizontal:(BOOL)horizontal;	// 0x306f614d
// declared property setter: - (void)setAlwaysBounceVertical:(BOOL)vertical;	// 0x30611755
// converted property setter: - (void)setAutoscrollContentOffset:(CGPoint)offset;	// 0x306f5a11
// declared property setter: - (void)setBounces:(BOOL)bounces;	// 0x3062ab91
// converted property setter: - (void)setBouncesHorizontally:(BOOL)horizontally;	// 0x306f53b9
// converted property setter: - (void)setBouncesVertically:(BOOL)vertically;	// 0x306f53e9
// declared property setter: - (void)setBouncesZoom:(BOOL)zoom;	// 0x30611739
- (void)setBounds:(CGRect)bounds;	// 0x3060749d
// declared property setter: - (void)setCanCancelContentTouches:(BOOL)touches;	// 0x306f5591
// declared property setter: - (void)setContentInset:(UIEdgeInsets)inset;	// 0x30619125
// declared property setter: - (void)setContentOffset:(CGPoint)offset;	// 0x305db531
- (void)setContentOffset:(CGPoint)offset animated:(BOOL)animated;	// 0x305e1fb9
// declared property setter: - (void)setContentSize:(CGSize)size;	// 0x305e0aa1
// declared property setter: - (void)setDecelerationRate:(float)rate;	// 0x306f5481
// declared property setter: - (void)setDelaysContentTouches:(BOOL)touches;	// 0x30610975
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x305de15d
// declared property setter: - (void)setDirectionalLockEnabled:(BOOL)enabled;	// 0x30610925
- (void)setFrame:(CGRect)frame;	// 0x305da859
// converted property setter: - (void)setHorizontalScrollDecelerationFactor:(float)factor;	// 0x30610905
// declared property setter: - (void)setIndicatorStyle:(int)style;	// 0x306f60a5
// declared property setter: - (void)setMaximumZoomScale:(float)scale;	// 0x30616b69
// declared property setter: - (void)setMinimumZoomScale:(float)scale;	// 0x30616b35
// converted property setter: - (void)setOffset:(CGPoint)offset;	// 0x306f5e09
// declared property setter: - (void)setPagingEnabled:(BOOL)enabled;	// 0x306f617d
// converted property setter: - (void)setPreservesCenterDuringRotation:(BOOL)rotation;	// 0x306f5f01
// declared property setter: - (void)setProgrammaticScrollEnabled:(BOOL)enabled;	// 0x3068d3d1
// declared property setter: - (void)setScrollEnabled:(BOOL)enabled;	// 0x3062ac0d
// declared property setter: - (void)setScrollIndicatorInsets:(UIEdgeInsets)insets;	// 0x30612a71
- (void)setScrollingEnabled:(BOOL)enabled;	// 0x306f5df1
// declared property setter: - (void)setScrollsToTop:(BOOL)top;	// 0x306116c1
- (void)setShowBackgroundShadow:(BOOL)shadow;	// 0x306f5ee9
// declared property setter: - (void)setShowsHorizontalScrollIndicator:(BOOL)indicator;	// 0x305e09a9
// declared property setter: - (void)setShowsVerticalScrollIndicator:(BOOL)indicator;	// 0x305e0a25
// converted property setter: - (void)setTracksImmediatelyWhileDecelerating:(BOOL)decelerating;	// 0x306f54f5
// converted property setter: - (void)setUsesGestureRecognizers:(BOOL)recognizers;	// 0x305dbea9
// converted property setter: - (void)setVerticalScrollDecelerationFactor:(float)factor;	// 0x30610915
// converted property setter: - (void)setZoomEnabled:(BOOL)enabled;	// 0x30616c2d
// declared property setter: - (void)setZoomScale:(float)scale;	// 0x306f5e1d
- (void)setZoomScale:(float)scale animated:(BOOL)animated;	// 0x3062ad8d
- (void)setZoomScale:(float)scale withAnchorPoint:(CGPoint)anchorPoint validatingScrollOffset:(BOOL)offset allowRubberbanding:(BOOL)rubberbanding animated:(BOOL)animated duration:(double)duration notifyDelegate:(BOOL)delegate;	// 0x3062b125
- (void)setZoomScale:(float)scale withAnchorPoint:(CGPoint)anchorPoint validatingScrollOffset:(BOOL)offset allowRubberbanding:(BOOL)rubberbanding animated:(BOOL)animated duration:(double)duration notifyDelegate:(BOOL)delegate force:(BOOL)force;	// 0x3062b189
// declared property getter: - (BOOL)showsHorizontalScrollIndicator;	// 0x306f5441
// declared property getter: - (BOOL)showsVerticalScrollIndicator;	// 0x306f5459
- (int)swipe:(int)swipe withEvent:(GSEventRef)event;	// 0x306f5e4d
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x30645169
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x3068dab5
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x306459ed
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x306e2cf1
- (BOOL)touchesShouldBegin:(id)touches withEvent:(id)event inContentView:(id)contentView;	// 0x306433d1
- (BOOL)touchesShouldCancelInContentView:(id)touches;	// 0x306e2731
// converted property getter: - (BOOL)tracksImmediatelyWhileDecelerating;	// 0x30637b05
// converted property getter: - (BOOL)usesGestureRecognizers;	// 0x305dbe91
// converted property getter: - (float)verticalScrollDecelerationFactor;	// 0x306f54e5
- (void)willAnimateRotationToInterfaceOrientation:(id)interfaceOrientation;	// 0x306f9a35
- (void)willRotateToInterfaceOrientation:(id)interfaceOrientation;	// 0x306f6dc9
// declared property getter: - (float)zoomScale;	// 0x30612879
- (void)zoomToRect:(CGRect)rect animated:(BOOL)animated;	// 0x306f9d4d
@end


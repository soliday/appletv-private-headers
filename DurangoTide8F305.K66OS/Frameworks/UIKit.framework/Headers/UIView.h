/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITextEffectsOrdering.h"
#import "NSCoding.h"
#import "UIResponder.h"

@class NSMutableArray, UIViewController, CALayer, NSArray;

@interface UIView : UIResponder <UITextEffectsOrdering, NSCoding> {
@private
	CALayer *_layer;	// 4 = 0x4
	id _tapInfo;	// 8 = 0x8
	id _gestureInfo;	// 12 = 0xc
	NSMutableArray *_gestureRecognizers;	// 16 = 0x10
	NSArray *_subviewCache;	// 20 = 0x14
	float _charge;	// 24 = 0x18
	int _tag;	// 28 = 0x1c
	UIViewController *_viewDelegate;	// 32 = 0x20
	struct {
		unsigned userInteractionDisabled : 1;
		unsigned implementsDrawRect : 1;
		unsigned implementsDidScroll : 1;
		unsigned implementsMouseTracking : 1;
		unsigned hasBackgroundColor : 1;
		unsigned isOpaque : 1;
		unsigned becomeFirstResponderWhenCapable : 1;
		unsigned interceptMouseEvent : 1;
		unsigned deallocating : 1;
		unsigned debugFlash : 1;
		unsigned debugSkippedSetNeedsDisplay : 1;
		unsigned debugScheduledDisplayIsRequired : 1;
		unsigned isInAWindow : 1;
		unsigned isAncestorOfFirstResponder : 1;
		unsigned dontAutoresizeSubviews : 1;
		unsigned autoresizeMask : 6;
		unsigned patternBackground : 1;
		unsigned fixedBackgroundPattern : 1;
		unsigned dontAnimate : 1;
		unsigned superLayerIsView : 1;
		unsigned layerKitPatternDrawing : 1;
		unsigned multipleTouchEnabled : 1;
		unsigned exclusiveTouch : 1;
		unsigned hasViewController : 1;
		unsigned needsDidAppearOrDisappear : 1;
		unsigned gesturesEnabled : 1;
		unsigned deliversTouchesForGesturesToSuperview : 1;
		unsigned chargeEnabled : 1;
		unsigned skipsSubviewEnumeration : 1;
		unsigned needsDisplayOnBoundsChange : 1;
		unsigned hasTiledLayer : 1;
		unsigned hasLargeContent : 1;
		unsigned alwaysScaleContent : 1;
	} _viewFlags;	// 36 = 0x24
}
@property(assign) float alpha;	// G=0x31f79555; S=0x31f79535; converted property
@property(assign) BOOL autoresizesSubviews;	// G=0x3207ca2d; S=0x32002e99; converted property
@property(assign) unsigned autoresizingMask;	// G=0x31fcb1f1; S=0x31f9a92d; converted property
@property(retain) id backgroundColor;	// G=0x31fed2f5; S=0x31fb19fd; converted property
@property(assign) CGRect bounds;	// G=0x31f791ad; S=0x31fabec9; converted property
@property(assign) CGPoint center;	// G=0x31f96235; S=0x31fac355; converted property
@property(assign) float charge;	// G=0x31f8e9cd; S=0x31fac4fd; converted property
@property(assign) BOOL clearsContextBeforeDrawing;	// G=0x320d8955; S=0x3201d9a5; converted property
@property(assign) BOOL clipsToBounds;	// G=0x3207ca09; S=0x31f87061; converted property
@property(assign) int contentMode;	// G=0x31fa64f1; S=0x31f9a745; converted property
@property(assign) float contentScaleFactor;	// G=0x31f947dd; S=0x31f99b39; converted property
@property(assign) CGRect contentStretch;	// G=0x320d9001; S=0x31fa73e5; converted property
@property(assign, nonatomic) BOOL deliversTouchesForGesturesToSuperview;	// G=0x31f8f2fd; S=0x31feca3d; 
@property(assign, getter=isEnabled) BOOL enabled;	// G=0x31fbae7d; S=0x31f9e489; converted property
@property(assign) int enabledGestures;	// G=0x31ffa13d; S=0x31ffb8e1; converted property
@property(assign, getter=isExclusiveTouch) BOOL exclusiveTouch;	// G=0x31f8edc9; S=0x31feca59; converted property
@property(assign) CGRect frame;	// G=0x31f79239; S=0x31f79399; converted property
@property(assign) CGPoint frameOrigin;	// G=0x32072801; S=0x31f791e5; converted property
@property(assign) id gestureDelegate;	// G=0x321131d5; S=0x31ff5735; converted property
@property(retain) NSMutableArray *gestureRecognizers;	// G=0x31f8f311; S=0x320d9199; converted property
@property(assign, nonatomic) BOOL gesturesEnabled;	// G=0x32016695; S=0x31f8ff3d; 
@property(assign, getter=isHidden) BOOL hidden;	// G=0x31f8de21; S=0x31f9d065; converted property
@property(readonly, retain, nonatomic) CALayer *layer;	// G=0x31f79605; @synthesize=_layer
@property(assign, getter=isMultipleTouchEnabled) BOOL multipleTouchEnabled;	// G=0x32097ddd; S=0x31fc1d49; converted property
@property(assign) BOOL needsDisplayOnBoundsChange;	// G=0x32083ce9; S=0x31faec65; converted property
@property(assign, getter=isOpaque) BOOL opaque;	// G=0x31f99b25; S=0x31f9cfad; converted property
@property(assign) CGPoint origin;	// G=0x320727e9; S=0x31f791d1; converted property
@property(assign) CGPoint position;	// G=0x320c7fcd; S=0x320d8b7d; converted property
@property(assign) CGSize size;	// G=0x31f89b41; S=0x31fbf1c5; converted property
@property(assign, nonatomic) BOOL skipsSubviewEnumeration;	// G=0x320d7aa1; S=0x320d7ab9; 
@property(assign, nonatomic) int tag;	// G=0x31fd1391; S=0x31fbbc61; @synthesize=_tag
@property(assign) id tapDelegate;	// G=0x320d7951; S=0x320d8de5; converted property
@property(assign) CGAffineTransform transform;	// G=0x31f9ff59; S=0x31f96259; converted property
@property(assign, nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;	// G=0x31f8de09; S=0x31f88b2d; 
@property(assign, nonatomic, getter=_viewDelegate, setter=_setViewDelegate:) UIViewController *viewDelegate;	// G=0x31fb5189; S=0x31fad9f1; 
+ (void)_animateWithDuration:(double)duration delay:(double)delay options:(unsigned)options animations:(id)animations start:(id)start completion:(id)completion;	// 0x32058fa5
+ (void)_beginDisablingPromoteDescendantToFirstResponder;	// 0x320243ed
+ (float)_currentAnimationDuration;	// 0x320d79b9
+ (void)_endDisablingPromoteDescendantToFirstResponder;	// 0x320243fd
+ (void)_inheritAnimationParameters;	// 0x32073369
+ (BOOL)_invalidatesViewUponCreation;	// 0x31ff9561
+ (BOOL)_isInAnimationBlock;	// 0x31f79615
+ (void)_performWithoutAnimation:(id)animation;	// 0x31fac375
+ (void)_setAnimationAttributes:(id)attributes;	// 0x320d880d
+ (void)_setAnimationFilter:(int)filter forView:(id)view;	// 0x320d8721
+ (void)_setAnimationFilterValue:(float)value;	// 0x320d7a4d
+ (void)_setInvalidatesViewUponCreation:(BOOL)creation;	// 0x31ff9571
+ (void)_setIsResponderAncestorOfFirstResponder:(BOOL)firstResponder startingAtFirstResponder:(id)firstResponder2;	// 0x31f7a6a5
+ (void)_setupAnimationWithDuration:(double)duration delay:(double)delay view:(id)view options:(unsigned)options animations:(id)animations start:(id)start completion:(id)completion;	// 0x31f97155
+ (id)_tintColorForStyle:(int)style;	// 0x320d7af5
+ (id)_topMostView:(id)view;	// 0x320d8a15
+ (void)animateWithDuration:(double)duration animations:(id)animations;	// 0x320d86c1
+ (void)animateWithDuration:(double)duration animations:(id)animations completion:(id)completion;	// 0x32095759
+ (void)animateWithDuration:(double)duration delay:(double)delay options:(unsigned)options animations:(id)animations completion:(id)completion;	// 0x31f9710d
+ (BOOL)areAnimationsEnabled;	// 0x31f8b78d
+ (void)beginAnimations:(id)animations;	// 0x31f97939
+ (void)beginAnimations:(id)animations context:(void *)context;	// 0x31f8b3d9
+ (void)commitAnimations;	// 0x31f8bd65
+ (void)disableAnimation;	// 0x31f9bcc1
+ (void)enableAnimation;	// 0x31ffdf01
+ (void)endAnimations;	// 0x32013bd5
+ (void)flush;	// 0x320d8fd1
+ (Class)layerClass;	// 0x31f99b05
+ (void)setAnimationAutoreverses:(BOOL)autoreverses;	// 0x320d87c1
+ (void)setAnimationBeginsFromCurrentState:(BOOL)currentState;	// 0x31f8b519
+ (void)setAnimationCurve:(int)curve;	// 0x31f97979
+ (void)setAnimationDelay:(double)delay;	// 0x3206aa4d
+ (void)setAnimationDelegate:(id)delegate;	// 0x31f8b4b5
+ (void)setAnimationDidStopSelector:(SEL)stopSelector;	// 0x31f8b4fd
+ (void)setAnimationDuration:(double)duration;	// 0x31f8b495
+ (void)setAnimationFrameInterval:(double)interval;	// 0x320711c5
+ (void)setAnimationFromCurrentState:(BOOL)currentState;	// 0x320ab9e5
+ (void)setAnimationPosition:(CGPoint)position;	// 0x320d79e9
+ (void)setAnimationRepeatAutoreverses:(BOOL)autoreverses;	// 0x320d7a25
+ (void)setAnimationRepeatCount:(float)count;	// 0x320d7a09
+ (void)setAnimationRoundsToInteger:(BOOL)integer;	// 0x31fcc7d5
+ (void)setAnimationStartDate:(id)date;	// 0x320d87d9
+ (void)setAnimationStartTime:(double)time;	// 0x31f97959
+ (void)setAnimationTransition:(int)transition forView:(id)view;	// 0x320d84f5
+ (void)setAnimationTransition:(int)transition forView:(id)view cache:(BOOL)cache;	// 0x320d875d
+ (void)setAnimationWillStartSelector:(SEL)startSelector;	// 0x320c99dd
+ (void)setAnimationsEnabled:(BOOL)enabled;	// 0x31f8b7a1
+ (void)throttledFlush;	// 0x320d8f85
+ (void)transitionFromView:(id)view toView:(id)view2 duration:(double)duration options:(unsigned)options completion:(id)completion;	// 0x320d8555
+ (void)transitionWithView:(id)view duration:(double)duration options:(unsigned)options animations:(id)animations completion:(id)completion;	// 0x320d867d
- (id)init;	// 0x31fa4529
- (id)initWithCoder:(id)coder;	// 0x320da919
- (id)initWithFrame:(CGRect)frame;	// 0x31f9944d
- (id)initWithSize:(CGSize)size;	// 0x31ffaf3d
- (void)_addSubview:(id)subview positioned:(int)positioned relativeTo:(id)to;	// 0x31f79975
- (BOOL)_alwaysHandleInteractionEvents;	// 0x320d7a6d
- (BOOL)_alwaysHandleScrollerMouseEvent;	// 0x3203ee75
- (void)_animateToScrollPoint:(CGPoint)scrollPoint;	// 0x32114109
- (void)_animateZoomFailureToWindowPoint:(CGPoint)windowPoint scale:(float)scale duration:(float)duration;	// 0x32113311
- (BOOL)_animationIsPaused;	// 0x3205a4b9
- (void)_appendDescriptionToString:(id)string atLevel:(int)level;	// 0x320d9395
- (id)_autoresizingDescription;	// 0x320d8101
- (CGColorRef)_backgroundCGColor;	// 0x31f9e40d
- (id)_backgroundColor;	// 0x31f9e3dd
- (BOOL)_becomeFirstResponderWhenPossible;	// 0x31f96141
- (BOOL)_canDrawContent;	// 0x31f870dd
- (BOOL)_canHandleStatusBarMouseEvents:(GSEventRef)events;	// 0x320d82cd
- (BOOL)_canStartRotationFromEvent:(GSEventRef)event;	// 0x32115435
- (BOOL)_canStartZoomFromEvent:(GSEventRef)event;	// 0x321150dd
- (BOOL)_cancelTapDelegateTracking;	// 0x32047cc1
- (void)_clearAnimationFilters;	// 0x320c5c1d
- (void)_clearBecomeFirstResponderWhenCapable;	// 0x31f95fad
- (void)_clearBecomeFirstResponderWhenCapableOnSubtree;	// 0x32000345
- (void)_collectKeyViews:(id)views;	// 0x320d9289
- (CGPoint)_constrainedScrollPoint:(CGPoint)point contentSize:(CGSize)size;	// 0x32115861
- (BOOL)_containedInAbsoluteResponderChain;	// 0x31f7a5f9
- (int)_containerStyle;	// 0x320191ad
- (id)_containingScrollView;	// 0x31fee6a1
- (CGPoint)_convertOffset:(CGPoint)offset fromView:(id)view;	// 0x320d9e79
- (CGPoint)_convertOffset:(CGPoint)offset toView:(id)view;	// 0x320d9f01
- (void *)_createIOSurfaceWithPadding:(UIEdgeInsets)padding;	// 0x320da229
- (void)_createLayerWithFrame:(CGRect)frame;	// 0x31f99831
- (int)_depthFirstCompare:(id)compare;	// 0x3201623d
- (void)_didMoveFromWindow:(id)window toWindow:(id)window2;	// 0x31f943ad
- (void)_didRemoveSubview:(id)subview;	// 0x31f9bd05
- (void)_didScroll;	// 0x320d7a69
- (BOOL)_doesViewControllerExistForAncestorOfView:(id)view;	// 0x31fb5139
- (void)_enableLayerKitPatternDrawing:(BOOL)drawing;	// 0x31ff8c21
- (id)_enclosingScrollableScrollerIncludingSelf;	// 0x320b9f4d
- (id)_enclosingScrollerIncludingSelf;	// 0x320d8f05
- (id)_findFirstSubviewWantingToBecomeFirstResponder;	// 0x31f88c81
- (void)_gestureChanged:(int)changed event:(GSEventRef)event;	// 0x32113e69
- (void)_gestureEnded:(GSEventRef)ended;	// 0x31f9470d
- (id)_gestureInfo;	// 0x31ff5759
- (id)_gestureRecognizers;	// 0x32016355
- (id)_gestureTargetHitTest:(CGPoint)test withEvent:(id)event;	// 0x3203ef41
- (id)_interceptEvent:(id)event;	// 0x320d83d5
- (id)_interceptMouseEvent:(GSEventRef)event;	// 0x320d8415
- (float)_internalScaleForScale:(float)scale;	// 0x321139d5
- (void)_invalidateLayerContents;	// 0x320d8455
- (void)_invalidateSubviewCache;	// 0x31f79d2d
- (BOOL)_isAncestorOfFirstResponder;	// 0x31f79d15
- (BOOL)_isChargeEnabled;	// 0x320144cd
- (BOOL)_isInAWindow;	// 0x320d7a71
- (BOOL)_isRootForKeyResponderCycle;	// 0x320d7a89
- (BOOL)_isRubberBanding;	// 0x32113ad9
- (BOOL)_isScrollingEnabled;	// 0x320d7ad9
- (id)_layer;	// 0x31f8e8fd
- (void)_makeSubtreePerformSelector:(SEL)selector withObject:(id)object;	// 0x31f79da1
- (void)_makeSubtreePerformSelector:(SEL)selector withObject:(id)object withObject:(id)object3 copySublayers:(BOOL)sublayers;	// 0x31f79dc9
- (float)_minimumZoomScaleDelta;	// 0x321131b5
- (void)_mouseDown:(GSEventRef)down;	// 0x320d8355
- (void)_mouseDragged:(GSEventRef)dragged;	// 0x320d8325
- (void)_mouseUp:(GSEventRef)up;	// 0x320d82f5
- (void)_movedToFront;	// 0x31fd0efd
- (id)_nextKeyResponder;	// 0x320d8cb9
- (void)_populateArchivedSubviews:(id)subviews;	// 0x320d8255
- (void)_postMovedFromSuperview:(id)superview;	// 0x31f942c5
- (id)_previousKeyResponder;	// 0x320d8b91
- (Class)_printFormatterClass;	// 0x3224846d
- (void)_promoteDescendantToFirstResponderIfNecessary;	// 0x31f88c39
- (void)_removeAllAnimations:(BOOL)animations;	// 0x31fde789
- (void)_removeFirstResponderFromSubtree;	// 0x3208c4fd
- (void)_renderSnapshotWithRect:(CGRect)rect inContext:(CGContextRef)context;	// 0x320da06d
- (void)_resetZoomingWithEvent:(GSEventRef)event;	// 0x32115029
- (id)_rootForKeyResponderCycle;	// 0x320d8385
- (void)_rotateFromEvent:(GSEventRef)event;	// 0x321152d1
- (void)_rotateToDegrees:(float)degrees duration:(float)duration event:(GSEventRef)event;	// 0x32113765
- (float)_rubberBandScaleForScale:(float)scale;	// 0x32114cd1
- (void)_rubberbandZoomToEvent:(GSEventRef)event scale:(float)scale;	// 0x32114af5
- (float)_scaleForInternalScale:(float)internalScale;	// 0x321138bd
- (id)_scriptingInfo;	// 0x3207b1ad
- (CGPoint)_scrollPointForPoint:(CGPoint)point scale:(float)scale constrain:(BOOL)constrain snapToEdge:(BOOL)edge;	// 0x32114795
- (id)_scroller;	// 0x31ffbde9
- (CGSize)_scrollerContentSize;	// 0x321144ad
- (void)_setAlwaysScaleContent:(BOOL)content;	// 0x31faed09
- (void)_setBackgroundCGColor:(CGColorRef)color;	// 0x31fb1a6d
- (void)_setBackgroundColor:(id)color;	// 0x31fb1a11
- (void)_setChargeEnabled:(BOOL)enabled;	// 0x320702b1
- (void)_setContentImage:(id)image;	// 0x31fbff89
- (void)_setContentsTransform:(CGAffineTransform)transform;	// 0x320d8281
- (void)_setGestureInfoZoomScale:(float)scale;	// 0x32113b3d
- (void)_setInterceptMouseEvent:(BOOL)event;	// 0x31fde2f9
- (void)_setIsAncestorOfFirstResponder:(BOOL)firstResponder;	// 0x31f7a751
- (void)_setRotationAnimationProgress:(id)progress;	// 0x321136e1
- (void)_setShouldRasterize:(BOOL)_set;	// 0x320d899d
// declared property setter: - (void)_setViewDelegate:(id)delegate;	// 0x31fad9f1
- (void)_setZoomAnimationProgress:(id)progress;	// 0x32114ea9
- (void)_setZoomScale:(float)scale duration:(double)duration;	// 0x3211592d
- (BOOL)_shouldAnimatePropertyWithKey:(id)key;	// 0x31f97995
- (BOOL)_shouldResignFirstResponderWithInteractionDisabled;	// 0x31f95e1d
- (BOOL)_shouldTryPromoteDescendantToFirstResponder;	// 0x31f79d01
- (void)_startGesture:(int)gesture event:(GSEventRef)event;	// 0x32113fd1
- (BOOL)_startRotationFromEvent:(GSEventRef)event;	// 0x3211368d
- (BOOL)_startZoomFromEvent:(GSEventRef)event;	// 0x32115181
- (void)_stopGesture:(int)gesture event:(GSEventRef)event;	// 0x32113ed1
- (void)_stopRotationFromEvent:(GSEventRef)event;	// 0x32113599
- (void)_stopZoomFromEvent:(GSEventRef)event;	// 0x32114551
- (int)_style;	// 0x320191f5
- (BOOL)_subclassImplementsDrawRect;	// 0x31f997fd
- (void)_subscribeToScrollNotificationsIfNecessary:(id)scrollNotificationsIfNecessary;	// 0x31f79d71
- (id)_syntheticTouch;	// 0x32149991
- (id)_syntheticUIEventWithGSEvent:(GSEventRef)gsevent touchPhase:(int)phase;	// 0x32149c49
- (int)_topToBottomLeftToRightViewCompare:(id)rightViewCompare;	// 0x320d9ce5
- (void)_unsubscribeToScrollNotificationsIfNecessary:(id)scrollNotificationsIfNecessary;	// 0x31f94295
- (void)_updateNeedsDisplayOnBoundsChange;	// 0x31faec95
- (BOOL)_usesDifferentHitTestForGestures;	// 0x31f8e93d
- (id)_viewControllerForAncestor;	// 0x320d8475
// declared property getter: - (id)_viewDelegate;	// 0x31fb5189
- (id)_viewIndexPath;	// 0x320d8abd
- (void)_willMoveToWindow:(id)window;	// 0x31f941bd
- (void)_willMoveToWindow:(id)window withAncestorView:(id)ancestorView;	// 0x31f940f5
- (id)_window;	// 0x31f7a831
- (float)_zoomAnimationDurationForScale:(float)scale;	// 0x32114c31
- (float)_zoomAnimationProgress;	// 0x321132ed
- (float)_zoomScale;	// 0x32113221
- (void)_zoomToEvent:(GSEventRef)event scale:(float)scale animate:(BOOL)animate constrainScrollPoint:(BOOL)point;	// 0x32114bc9
- (void)_zoomToScale:(float)scale event:(GSEventRef)event;	// 0x321146c9
- (void)_zoomToScrollPoint:(CGPoint)scrollPoint scale:(float)scale duration:(float)duration event:(GSEventRef)event;	// 0x321142b9
- (void)_zoomToWindowPoint:(CGPoint)windowPoint scale:(float)scale duration:(float)duration constrainScrollPoint:(BOOL)point event:(GSEventRef)event;	// 0x32114239
- (BOOL)_zoomWithEvent:(GSEventRef)event;	// 0x32115a89
- (id)actionForLayer:(id)layer forKey:(id)key;	// 0x31f79829
- (void)addAnimation:(id)animation forKey:(id)key;	// 0x320d8701
- (void)addGestureRecognizer:(id)recognizer;	// 0x31fc2819
- (void)addSubview:(id)subview;	// 0x31f79955
// converted property getter: - (float)alpha;	// 0x31f79555
- (void)animator:(id)animator startAnimation:(id)animation;	// 0x320449ed
- (void)animator:(id)animator stopAnimation:(id)animation;	// 0x32113b61
// converted property getter: - (BOOL)autoresizesSubviews;	// 0x3207ca2d
// converted property getter: - (unsigned)autoresizingMask;	// 0x31fcb1f1
// converted property getter: - (id)backgroundColor;	// 0x31fed2f5
// converted property getter: - (CGRect)bounds;	// 0x31f791ad
- (void)bringSubviewToFront:(id)front;	// 0x31fd0e09
- (BOOL)canHandleGestures;	// 0x321131bd
- (BOOL)canHandleSwipes;	// 0x31f94709
- (BOOL)cancelMouseTracking;	// 0x320d7971
- (BOOL)cancelTouchTracking;	// 0x320d7989
// converted property getter: - (CGPoint)center;	// 0x31f96235
// converted property getter: - (float)charge;	// 0x31f8e9cd
// converted property getter: - (BOOL)clearsContextBeforeDrawing;	// 0x320d8955
// converted property getter: - (BOOL)clipsToBounds;	// 0x3207ca09
- (int)compareTextEffectsOrdering:(id)ordering;	// 0x3205cc99
- (BOOL)containsView:(id)view;	// 0x31fe7b29
// converted property getter: - (int)contentMode;	// 0x31fa64f1
// converted property getter: - (float)contentScaleFactor;	// 0x31f947dd
// converted property getter: - (CGRect)contentStretch;	// 0x320d9001
- (CGPoint)convertPoint:(CGPoint)point fromView:(id)view;	// 0x31f8dfd5
- (CGPoint)convertPoint:(CGPoint)point toView:(id)view;	// 0x32028b91
- (CGRect)convertRect:(CGRect)rect fromView:(id)view;	// 0x31fec3c9
- (CGRect)convertRect:(CGRect)rect toView:(id)view;	// 0x31fb582d
- (CGSize)convertSize:(CGSize)size fromView:(id)view;	// 0x320d9f89
- (CGSize)convertSize:(CGSize)size toView:(id)view;	// 0x320d90b5
- (CGImageRef)createSnapshotWithRect:(CGRect)rect;	// 0x320d84b5
- (void)dealloc;	// 0x31f9bd49
- (void)deferredBecomeFirstResponder;	// 0x320988d1
// declared property getter: - (BOOL)deliversTouchesForGesturesToSuperview;	// 0x31f8f2fd
- (id)description;	// 0x3207c4bd
- (void)didAddSubview:(id)subview;	// 0x31f79f41
- (void)didMoveToSuperview;	// 0x31f94805
- (void)didMoveToWindow;	// 0x31f947fd
- (void)drawLayer:(id)layer inContext:(CGContextRef)context;	// 0x31f898fd
- (void)drawRect:(CGRect)rect;	// 0x320d79ad
- (void)drawRect:(CGRect)rect forViewPrintFormatter:(id)viewPrintFormatter;	// 0x322483e9
// converted property getter: - (int)enabledGestures;	// 0x31ffa13d
- (void)encodeWithCoder:(id)coder;	// 0x320da445
- (BOOL)endEditing:(BOOL)editing;	// 0x3200c541
- (void)exchangeSubviewAtIndex:(int)index withSubviewAtIndex:(int)index2;	// 0x32049dc5
- (CGRect)extent;	// 0x320da3b1
- (void)forceDisplayIfNeeded;	// 0x320d88a9
// converted property getter: - (CGRect)frame;	// 0x31f79239
// converted property getter: - (CGPoint)frameOrigin;	// 0x32072801
- (void)gestureChanged:(GSEventRef)changed;	// 0x32115635
// converted property getter: - (id)gestureDelegate;	// 0x321131d5
- (void)gestureEnded:(GSEventRef)ended;	// 0x321155f5
// converted property getter: - (id)gestureRecognizers;	// 0x31f8f311
- (void)gestureStarted:(GSEventRef)started;	// 0x32115745
// declared property getter: - (BOOL)gesturesEnabled;	// 0x32016695
- (CGRect)hitRect;	// 0x32073aed
- (id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;	// 0x3203ebe9
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x31f8dc95
- (BOOL)ignoresMouseEvents;	// 0x31f8dda1
- (void)insertSubview:(id)subview above:(id)above;	// 0x320d8b5d
- (void)insertSubview:(id)subview aboveSubview:(id)subview2;	// 0x31fa8205
- (void)insertSubview:(id)subview atIndex:(int)index;	// 0x31f9d089
- (void)insertSubview:(id)subview below:(id)below;	// 0x3206aa2d
- (void)insertSubview:(id)subview belowSubview:(id)subview2;	// 0x31fad7b1
- (BOOL)isAccessibilityElementByDefault;	// 0x3218c421
- (BOOL)isDescendantOfView:(id)view;	// 0x31f8fed5
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x3218c425
// converted property getter: - (BOOL)isEnabled;	// 0x31fbae7d
// converted property getter: - (BOOL)isExclusiveTouch;	// 0x31f8edc9
// converted property getter: - (BOOL)isHidden;	// 0x31f8de21
- (BOOL)isHiddenOrHasHiddenAncestor;	// 0x320d88ed
// converted property getter: - (BOOL)isMultipleTouchEnabled;	// 0x32097ddd
// converted property getter: - (BOOL)isOpaque;	// 0x31f99b25
// declared property getter: - (BOOL)isUserInteractionEnabled;	// 0x31f8de09
// declared property getter: - (id)layer;	// 0x31f79605
- (void)layoutBelowIfNeeded;	// 0x31fac3c9
- (void)layoutIfNeeded;	// 0x31f795c1
- (void)layoutSublayersOfLayer:(id)layer;	// 0x31f795e1
- (void)layoutSubviews;	// 0x31f92a01
- (void)movedFromSuperview:(id)superview;	// 0x31f94801
- (void)movedFromWindow:(id)window;	// 0x31f9bd01
- (void)movedToSuperview:(id)superview;	// 0x31f79f3d
- (void)movedToWindow:(id)window;	// 0x31f947d9
- (BOOL)needsDisplay;	// 0x320d8979
// converted property getter: - (BOOL)needsDisplayOnBoundsChange;	// 0x32083ce9
- (BOOL)needsWebDocumentViewEventsDirectly;	// 0x3214a441
- (CGImageRef)newSnapshotWithRect:(CGRect)rect;	// 0x320d96bd
- (id)nextResponder;	// 0x31f7a435
// converted property getter: - (CGPoint)origin;	// 0x320727e9
- (BOOL)pointInside:(CGPoint)inside forEvent:(GSEventRef)event;	// 0x3203ed3d
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x31f8de45
// converted property getter: - (CGPoint)position;	// 0x320c7fcd
- (id)recursiveDescription;	// 0x320d80c9
- (void)recursivelyForceDisplayIfNeeded;	// 0x320d882d
- (void)reduceWidth:(float)width;	// 0x320ba7f9
- (void)removeAllGestureRecognizers;	// 0x31f9bf21
- (void)removeFromSuperview;	// 0x31f88489
- (void)removeGestureRecognizer:(id)recognizer;	// 0x31ffb1c9
- (void)resizeSubviewsWithOldSize:(CGSize)oldSize;	// 0x31f94045
- (void)resizeWithOldSuperviewSize:(CGSize)oldSuperviewSize;	// 0x31fc7cfd
- (void)rotateToDegrees:(float)degrees;	// 0x3211527d
- (float)rotationDegrees;	// 0x321131f9
- (id)scriptingInfoWithChildren;	// 0x3207b07d
- (void)sendSubviewToBack:(id)back;	// 0x31fd0cc5
// converted property setter: - (void)setAlpha:(float)alpha;	// 0x31f79535
// converted property setter: - (void)setAutoresizesSubviews:(BOOL)subviews;	// 0x32002e99
// converted property setter: - (void)setAutoresizingMask:(unsigned)mask;	// 0x31f9a92d
// converted property setter: - (void)setBackgroundColor:(id)color;	// 0x31fb19fd
// converted property setter: - (void)setBounds:(CGRect)bounds;	// 0x31fabec9
// converted property setter: - (void)setCenter:(CGPoint)center;	// 0x31fac355
// converted property setter: - (void)setCharge:(float)charge;	// 0x31fac4fd
- (void)setClearsContext:(BOOL)context;	// 0x320d88c9
// converted property setter: - (void)setClearsContextBeforeDrawing:(BOOL)drawing;	// 0x3201d9a5
- (void)setClipsSubviews:(BOOL)subviews;	// 0x31fb1fa1
// converted property setter: - (void)setClipsToBounds:(BOOL)bounds;	// 0x31f87061
// converted property setter: - (void)setContentMode:(int)mode;	// 0x31f9a745
// converted property setter: - (void)setContentScaleFactor:(float)factor;	// 0x31f99b39
// converted property setter: - (void)setContentStretch:(CGRect)stretch;	// 0x31fa73e5
- (void)setContentsPosition:(int)position;	// 0x31fb1e01
// declared property setter: - (void)setDeliversTouchesForGesturesToSuperview:(BOOL)superview;	// 0x31feca3d
// converted property setter: - (void)setEnabled:(BOOL)enabled;	// 0x31f9e489
// converted property setter: - (void)setEnabledGestures:(int)gestures;	// 0x31ffb8e1
// converted property setter: - (void)setExclusiveTouch:(BOOL)touch;	// 0x31feca59
- (void)setFixedBackgroundPattern:(BOOL)pattern;	// 0x3200ddb5
// converted property setter: - (void)setFrame:(CGRect)frame;	// 0x31f79399
- (void)setFrame:(CGRect)frame forFields:(int)fields;	// 0x320d9025
// converted property setter: - (void)setFrameOrigin:(CGPoint)origin;	// 0x31f791e5
// converted property setter: - (void)setGestureDelegate:(id)delegate;	// 0x31ff5735
// converted property setter: - (void)setGestureRecognizers:(id)recognizers;	// 0x320d9199
// declared property setter: - (void)setGesturesEnabled:(BOOL)enabled;	// 0x31f8ff3d
// converted property setter: - (void)setHidden:(BOOL)hidden;	// 0x31f9d065
// converted property setter: - (void)setMultipleTouchEnabled:(BOOL)enabled;	// 0x31fc1d49
- (void)setNeedsDisplay;	// 0x31f87085
- (void)setNeedsDisplayInRect:(CGRect)rect;	// 0x31f90fbd
// converted property setter: - (void)setNeedsDisplayOnBoundsChange:(BOOL)change;	// 0x31faec65
- (void)setNeedsLayout;	// 0x31f795a1
// converted property setter: - (void)setOpaque:(BOOL)opaque;	// 0x31f9cfad
// converted property setter: - (void)setOrigin:(CGPoint)origin;	// 0x31f791d1
// converted property setter: - (void)setPosition:(CGPoint)position;	// 0x320d8b7d
- (void)setRotationBy:(float)by;	// 0x320d9511
- (void)setRotationDegrees:(float)degrees duration:(double)duration;	// 0x321133c9
// converted property setter: - (void)setSize:(CGSize)size;	// 0x31fbf1c5
// declared property setter: - (void)setSkipsSubviewEnumeration:(BOOL)enumeration;	// 0x320d7ab9
// declared property setter: - (void)setTag:(int)tag;	// 0x31fbbc61
// converted property setter: - (void)setTapDelegate:(id)delegate;	// 0x320d8de5
// converted property setter: - (void)setTransform:(CGAffineTransform)transform;	// 0x31f96259
// declared property setter: - (void)setUserInteractionEnabled:(BOOL)enabled;	// 0x31f88b2d
- (void)setValue:(id)value forGestureAttribute:(int)gestureAttribute;	// 0x31ffbbe1
- (void)setValue:(id)value forKey:(id)key;	// 0x320d9815
// converted property getter: - (CGSize)size;	// 0x31f89b41
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x320c4329
- (void)sizeToFit;	// 0x31f9fe91
// declared property getter: - (BOOL)skipsSubviewEnumeration;	// 0x320d7aa1
- (void)startHeartbeat:(SEL)heartbeat inRunLoopMode:(id)runLoopMode;	// 0x32074bcd
- (int)stateForGestureType:(int)gestureType;	// 0x32113249
- (void)stopHeartbeat:(SEL)heartbeat;	// 0x3207ad5d
- (id)subviews;	// 0x31f8de69
- (id)superview;	// 0x31f79179
- (int)swipe:(int)swipe withEvent:(GSEventRef)event;	// 0x320d79a1
// declared property getter: - (int)tag;	// 0x31fd1391
// converted property getter: - (id)tapDelegate;	// 0x320d7951
- (int)textEffectsVisibilityLevel;	// 0x3205cd0d
- (int)textEffectsVisibilityLevelWhenKey;	// 0x321894c5
- (id)textInputView;	// 0x320581ed
// converted property getter: - (CGAffineTransform)transform;	// 0x31f9ff59
- (BOOL)useBlockyMagnificationInClassic;	// 0x320d7ad5
- (id)valueForGestureAttribute:(int)gestureAttribute;	// 0x32113441
- (void)viewDidMoveToSuperview;	// 0x320d79a9
- (id)viewPrintFormatter;	// 0x32248429
- (void)viewWillMoveToSuperview:(id)view;	// 0x320d79a5
- (id)viewWithTag:(int)tag;	// 0x31fb6955
- (CGRect)visibleBounds;	// 0x31fcdd0d
- (void)willMoveToSuperview:(id)superview;	// 0x31f94291
- (void)willMoveToWindow:(id)window;	// 0x31f9428d
- (void)willRemoveSubview:(id)subview;	// 0x31f9bcd1
- (id)window;	// 0x31f79cf5
- (void)zoomToScale:(float)scale;	// 0x321149a9
@end


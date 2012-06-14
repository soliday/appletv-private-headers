/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UIResponder.h"
#import "UIAppearance.h"
#import "UIAppearanceContainer.h"
#import "UITextEffectsOrdering.h"

@class NSArray, CALayer, NSString, NSMutableArray, UIViewController;

@interface UIView : UIResponder <UITextEffectsOrdering, NSCoding, UIAppearance, UIAppearanceContainer> {
@private
	CALayer *_layer;	// 4 = 0x4
	id _tapInfo;	// 8 = 0x8
	id _gestureInfo;	// 12 = 0xc
	NSMutableArray *_gestureRecognizers;	// 16 = 0x10
	NSArray *_subviewCache;	// 20 = 0x14
	float _charge;	// 24 = 0x18
	int _tag;	// 28 = 0x1c
	UIViewController *_viewDelegate;	// 32 = 0x20
	NSString *_backgroundColorSystemColorName;	// 36 = 0x24
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
		unsigned isInAnimatedVCTransition : 1;
		unsigned traversalMark : 1;
		unsigned appearanceIsInvalid : 1;
		unsigned monitorsSubtree : 1;
	} _viewFlags;	// 40 = 0x28
}
@property(assign) float alpha;	// G=0x3530a73d; S=0x35307905; converted property
@property(assign) BOOL autoresizesSubviews;	// G=0x354c65f9; S=0x3538a3b9; converted property
@property(assign) unsigned autoresizingMask;	// G=0x353484c5; S=0x3532c671; converted property
@property(retain) id backgroundColor;	// G=0x3534f511; S=0x3534ed39; converted property
@property(retain, nonatomic, getter=_backgroundColorSystemColorName, setter=_setBackgroundColorSystemColorName:) NSString *backgroundColorSystemColorName;	// G=0x3534f5f1; S=0x3534f3d5; 
@property(assign) CGRect bounds;	// G=0x353073e9; S=0x35341dc9; converted property
@property(readonly, assign, nonatomic, getter=_caretRect) CGRect caretRect;	// G=0x3565b475; 
@property(assign) CGPoint center;	// G=0x35329791; S=0x35326775; converted property
@property(assign) float charge;	// G=0x3531f2c1; S=0x35344781; converted property
@property(assign) BOOL clearsContextBeforeDrawing;	// G=0x354c724d; S=0x35473f6d; converted property
@property(assign) BOOL clipsToBounds;	// G=0x353d1c05; S=0x3531ad89; converted property
@property(assign) int contentMode;	// G=0x35325be1; S=0x3532c481; converted property
@property(assign) float contentScaleFactor;	// G=0x35309c61; S=0x35324c05; converted property
@property(assign) CGRect contentStretch;	// G=0x354c7179; S=0x3533c225; converted property
@property(assign, nonatomic) BOOL deliversTouchesForGesturesToSuperview;	// G=0x3531fe79; S=0x353a2e81; 
@property(assign, getter=isEnabled) BOOL enabled;	// G=0x353a5911; S=0x35391e05; converted property
@property(assign) int enabledGestures;	// G=0x3550ac69; S=0x3550ac41; converted property
@property(assign, getter=isExclusiveTouch) BOOL exclusiveTouch;	// G=0x3531f749; S=0x353a2e9d; converted property
@property(assign) CGRect frame;	// G=0x35307489; S=0x35307781; converted property
@property(assign) CGPoint frameOrigin;	// G=0x353d65e9; S=0x3530742d; converted property
@property(assign) id gestureDelegate;	// G=0x3550ac1d; S=0x353a6d69; converted property
@property(retain) NSMutableArray *gestureRecognizers;	// G=0x353081f9; S=0x354c87d9; converted property
@property(assign, nonatomic) BOOL gesturesEnabled;	// G=0x354069fd; S=0x35320c09; 
@property(assign, getter=isHidden) BOOL hidden;	// G=0x3531e619; S=0x35326531; converted property
@property(assign, nonatomic, getter=isInAnimatedVCTransition) BOOL inAnimatedVCTransition;	// G=0x35348771; S=0x354c7c0d; 
@property(readonly, assign, nonatomic) CALayer *layer;	// G=0x35309f4d; @synthesize=_layer
@property(assign, nonatomic, getter=_monitorsSubtree, setter=_setMonitorsSubtree:) BOOL monitorsSubtree;	// G=0x354c8799; S=0x35430ce5; 
@property(assign, getter=isMultipleTouchEnabled) BOOL multipleTouchEnabled;	// G=0x35482405; S=0x3534ce15; converted property
@property(assign) BOOL needsDisplayOnBoundsChange;	// G=0x3545d20d; S=0x35345fbd; converted property
@property(assign, getter=isOpaque) BOOL opaque;	// G=0x35324bf1; S=0x35324ed9; converted property
@property(assign) CGPoint origin;	// G=0x353d65c9; S=0x3530741d; converted property
@property(assign) CGPoint position;	// G=0x354c6c35; S=0x3544e99d; converted property
@property(assign) CGSize size;	// G=0x35309cd9; S=0x35393975; converted property
@property(assign, nonatomic) BOOL skipsSubviewEnumeration;	// G=0x354c84b5; S=0x354c84cd; 
@property(assign, nonatomic) int tag;	// G=0x353b155d; S=0x353a203d; @synthesize=_tag
@property(assign) id tapDelegate;	// G=0x354c5929; S=0x354c5891; converted property
@property(assign) CGAffineTransform transform;	// G=0x35333dc1; S=0x353297c1; converted property
@property(assign, nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;	// G=0x3531e601; S=0x35307925; 
@property(assign, nonatomic, getter=_viewDelegate, setter=_setViewDelegate:) UIViewController *viewDelegate;	// G=0x35309f39; S=0x35344b51; 
@property(assign, nonatomic) BOOL viewTraversalMark;	// G=0x3530a181; S=0x35307ee1; 
+ (void)_animateWithDuration:(double)duration delay:(double)delay options:(unsigned)options animations:(id)animations start:(id)start completion:(id)completion;	// 0x353e5a35
+ (void)_beginDisablingPromoteDescendantToFirstResponder;	// 0x353ead35
+ (float)_currentAnimationDuration;	// 0x35329bad
+ (void)_endDisablingPromoteDescendantToFirstResponder;	// 0x353ead49
+ (void)_inheritAnimationParameters;	// 0x3543464d
+ (BOOL)_invalidatesViewUponCreation;	// 0x35390ac9
+ (BOOL)_isInAnimationBlock;	// 0x35309f5d
+ (void)_performCustomizableAppearanceModifications:(id)modifications;	// 0x353a3f41
+ (void)_performWithoutAnimation:(id)animation;	// 0x3532db09
+ (void)_setAnimationAttributes:(id)attributes;	// 0x354c7431
+ (void)_setAnimationFilter:(int)filter forView:(id)view;	// 0x354c759d
+ (void)_setAnimationFilterValue:(float)value;	// 0x354c75e5
+ (void)_setInvalidatesViewUponCreation:(BOOL)creation;	// 0x35390ad9
+ (void)_setIsResponderAncestorOfFirstResponder:(BOOL)firstResponder startingAtFirstResponder:(id)firstResponder2;	// 0x3530acb9
+ (void)_setupAnimationWithDuration:(double)duration delay:(double)delay view:(id)view options:(unsigned)options animations:(id)animations start:(id)start completion:(id)completion;	// 0x35329845
+ (id)_tintColorForStyle:(int)style;	// 0x354c9eb9
+ (id)_topMostView:(id)view;	// 0x35486d35
+ (void)_transitionFromView:(id)view toView:(id)view2 duration:(double)duration options:(unsigned)options animations:(id)animations completion:(id)completion;	// 0x354c7c35
+ (void)animateWithDuration:(double)duration animations:(id)animations;	// 0x354c7755
+ (void)animateWithDuration:(double)duration animations:(id)animations completion:(id)completion;	// 0x3538aafd
+ (void)animateWithDuration:(double)duration delay:(double)delay options:(unsigned)options animations:(id)animations completion:(id)completion;	// 0x35329805
+ (id)appearance;	// 0x354c4d01
+ (id)appearanceWhenContainedIn:(Class)anIn;	// 0x354c4d21
+ (BOOL)areAnimationsEnabled;	// 0x3531a6d1
+ (void)beginAnimations:(id)animations;	// 0x3532ad0d
+ (void)beginAnimations:(id)animations context:(void *)context;	// 0x3531a2c5
+ (void)commitAnimations;	// 0x3531af31
+ (void)disableAnimation;	// 0x3532daf9
+ (void)enableAnimation;	// 0x3537c475
+ (void)endAnimations;	// 0x35332029
+ (void)flush;	// 0x3545ee0d
+ (Class)layerClass;	// 0x35324bd5
+ (void)setAnimationAutoreverses:(BOOL)autoreverses;	// 0x354c750d
+ (void)setAnimationBeginsFromCurrentState:(BOOL)currentState;	// 0x3531a429
+ (void)setAnimationCurve:(int)curve;	// 0x3532ad55
+ (void)setAnimationDelay:(double)delay;	// 0x35447b69
+ (void)setAnimationDelegate:(id)delegate;	// 0x3531a3b5
+ (void)setAnimationDidStopSelector:(SEL)stopSelector;	// 0x3531a409
+ (void)setAnimationDuration:(double)duration;	// 0x3531a38d
+ (void)setAnimationFrameInterval:(double)interval;	// 0x3547216d
+ (void)setAnimationFromCurrentState:(BOOL)currentState;	// 0x35437f45
+ (void)setAnimationPosition:(CGPoint)position;	// 0x354c7459
+ (void)setAnimationRepeatAutoreverses:(BOOL)autoreverses;	// 0x354c74e9
+ (void)setAnimationRepeatCount:(float)count;	// 0x354c74bd
+ (void)setAnimationRoundsToInteger:(BOOL)integer;	// 0x353649cd
+ (void)setAnimationStartDate:(id)date;	// 0x354c747d
+ (void)setAnimationStartTime:(double)time;	// 0x3532ad2d
+ (void)setAnimationTransition:(int)transition forView:(id)view;	// 0x354c79c9
+ (void)setAnimationTransition:(int)transition forView:(id)view cache:(BOOL)cache;	// 0x354c751d
+ (void)setAnimationWillStartSelector:(SEL)startSelector;	// 0x354c757d
+ (void)setAnimationsEnabled:(BOOL)enabled;	// 0x3531a6e5
+ (void)throttledFlush;	// 0x354c73dd
+ (void)transitionFromView:(id)view toView:(id)view2 duration:(double)duration options:(unsigned)options completion:(id)completion;	// 0x354c77c9
+ (void)transitionWithView:(id)view duration:(double)duration options:(unsigned)options animations:(id)animations completion:(id)completion;	// 0x354c7789
- (id)init;	// 0x3533961d
- (id)initWithCoder:(id)coder;	// 0x354c4e25
- (id)initWithFrame:(CGRect)frame;	// 0x353244d9
- (id)initWithSize:(CGSize)size;	// 0x3537a139
- (void)_addSubview:(id)subview positioned:(int)positioned relativeTo:(id)to;	// 0x3530937d
- (BOOL)_alwaysHandleInteractionEvents;	// 0x354c7ff9
- (BOOL)_alwaysHandleScrollerMouseEvent;	// 0x354c7ff5
- (void)_animateToScrollPoint:(CGPoint)scrollPoint;	// 0x3550ba65
- (void)_animateZoomFailureToWindowPoint:(CGPoint)windowPoint scale:(float)scale duration:(float)duration;	// 0x3550bbc5
- (BOOL)_animationIsPaused;	// 0x35331e01
- (id)_appearanceContainer;	// 0x354c4de5
- (BOOL)_appearanceIsInvalid;	// 0x354c5f3d
- (BOOL)_appliesExclusiveTouchToSubviewTree;	// 0x3531f7bd
- (id)_asTextSelection;	// 0x3565b471
- (BOOL)_associatedViewControllerForwardsAppearanceCallbacks:(id)callbacks performHierarchyCheck:(BOOL)check isRoot:(BOOL)root;	// 0x35348555
- (id)_autoresizingDescription;	// 0x354c896d
- (CGColorRef)_backgroundCGColor;	// 0x35324f95
- (id)_backgroundColor;	// 0x3534f521
// declared property getter: - (id)_backgroundColorSystemColorName;	// 0x3534f5f1
- (BOOL)_becomeFirstResponderWhenPossible;	// 0x35329655
- (BOOL)_canDrawContent;	// 0x35309c3d
- (BOOL)_canHandleStatusBarTouchAtLocation:(CGPoint)location;	// 0x354c8249
- (BOOL)_canStartRotationFromEvent:(GSEventRef)event;	// 0x3550a84d
- (BOOL)_canStartZoomFromEvent:(GSEventRef)event;	// 0x3550a2a1
- (BOOL)_cancelTapDelegateTracking;	// 0x354c8225
// declared property getter: - (CGRect)_caretRect;	// 0x3565b475
- (void)_clearAnimationFilters;	// 0x354c7611
- (void)_clearBecomeFirstResponderWhenCapable;	// 0x353087cd
- (void)_clearBecomeFirstResponderWhenCapableOnSubtree;	// 0x35386b29
- (void)_collectKeyViews:(id)views;	// 0x354c8071
- (CGPoint)_constrainedScrollPoint:(CGPoint)point contentSize:(CGSize)size;	// 0x3550b621
- (BOOL)_containedInAbsoluteResponderChain;	// 0x3530ac09
- (id)_containerLayoutViewForFastMode;	// 0x354c9f05
- (int)_containerStyle;	// 0x353e5641
- (id)_containingScrollView;	// 0x35360bd5
- (BOOL)_controlsOwnScaleFactor;	// 0x354c7f31
- (CGPoint)_convertOffset:(CGPoint)offset fromView:(id)view;	// 0x354c641d
- (CGPoint)_convertOffset:(CGPoint)offset toView:(id)view;	// 0x354c6379
- (void *)_createIOSurfaceFromRect:(CGRect)rect padding:(UIEdgeInsets)padding;	// 0x35487dad
- (void *)_createIOSurfaceWithPadding:(UIEdgeInsets)padding;	// 0x354c7371
- (void)_createLayerWithFrame:(CGRect)frame;	// 0x3532487d
- (int)_depthFirstCompare:(id)compare;	// 0x354066c9
- (void)_descendent:(id)descendent didMoveFromSuperview:(id)superview toSuperview:(id)superview3;	// 0x354c87b5
- (void)_descendent:(id)descendent willMoveFromSuperview:(id)superview toSuperview:(id)superview3;	// 0x354c87b1
- (void)_didMoveFromWindow:(id)window toWindow:(id)window2;	// 0x35308db9
- (void)_didRemoveSubview:(id)subview;	// 0x35309355
- (void)_didScroll;	// 0x354c7ec5
- (void)_enableLayerKitPatternDrawing:(BOOL)drawing;	// 0x354c736d
- (id)_enclosingScrollableScrollerIncludingSelf;	// 0x354a7d7d
- (id)_enclosingScrollerIncludingSelf;	// 0x354ca2f9
- (void)_encodeBackgroundColorWithCoder:(id)coder;	// 0x354c8649
- (void)_encodeFrameWithCoder:(id)coder;	// 0x354c84f1
- (id)_findFirstSubviewWantingToBecomeFirstResponder;	// 0x35307a89
- (id)_firstResponder;	// 0x353087e5
- (void)_gestureChanged:(int)changed event:(GSEventRef)event;	// 0x35508de1
- (void)_gestureEnded:(GSEventRef)ended;	// 0x35309255
- (id)_gestureInfo;	// 0x353a6d91
- (id)_gestureRecognizers;	// 0x354067d1
- (id)_gestureTargetHitTest:(CGPoint)test withEvent:(id)event;	// 0x354c86b5
- (BOOL)_hasOpaqueBackground;	// 0x3534f365
- (id)_interceptEvent:(id)event;	// 0x3544de1d
- (id)_interceptMouseEvent:(GSEventRef)event;	// 0x354c7ee9
- (float)_internalScaleForScale:(float)scale;	// 0x35509a99
- (void)_invalidateAppearanceForSubviewsOfClass:(Class)aClass;	// 0x354c5e4d
- (void)_invalidateLayerContents;	// 0x354c7ec9
- (void)_invalidateSubviewCache;	// 0x353089e9
- (BOOL)_isAncestorOfFirstResponder;	// 0x353098e1
- (BOOL)_isChargeEnabled;	// 0x353e462d
- (BOOL)_isInAWindow;	// 0x35448085
- (BOOL)_isInExclusiveTouchSubviewTree;	// 0x3531f75d
- (BOOL)_isInTransitionBlock;	// 0x35348871
- (BOOL)_isRootForKeyResponderCycle;	// 0x354c7ffd
- (BOOL)_isRubberBanding;	// 0x3550985d
- (BOOL)_isScrollingEnabled;	// 0x354ca39d
- (id)_layer;	// 0x3531f1d5
- (void)_makeSubtreePerformSelector:(SEL)selector withObject:(id)object;	// 0x35308bc9
- (void)_makeSubtreePerformSelector:(SEL)selector withObject:(id)object withObject:(id)object3 copySublayers:(BOOL)sublayers;	// 0x35308821
- (float)_minimumZoomScaleDelta;	// 0x35509ccd
// declared property getter: - (BOOL)_monitorsSubtree;	// 0x354c8799
- (void)_mouseDown:(GSEventRef)down;	// 0x354c817d
- (void)_mouseDragged:(GSEventRef)dragged;	// 0x354c81b5
- (void)_mouseUp:(GSEventRef)up;	// 0x354c81ed
- (void)_movedToFront;	// 0x35309e19
- (BOOL)_needsLayoutOnAnimatedBoundsChangeForNewBounds:(CGRect)newBounds;	// 0x354c6bcd
- (BOOL)_needsLayoutOnAnimatedFrameChangeForNewFrame:(CGRect)newFrame;	// 0x354c6039
- (id)_nextKeyResponder;	// 0x354c5bb9
- (void)_populateArchivedSubviews:(id)subviews;	// 0x354c8685
- (void)_postMovedFromSuperview:(id)superview;	// 0x35308cb9
- (id)_previousKeyResponder;	// 0x354c5cf5
- (Class)_printFormatterClass;	// 0x35662975
- (void)_promoteDescendantToFirstResponderIfNecessary;	// 0x35307a35
- (void)_reconsiderFastModeGivenScrollViewInNotification:(id)notification;	// 0x354ca0f1
- (void)_removeAllAnimations:(BOOL)animations;	// 0x353e3661
- (void)_removeFirstResponderFromSubtree;	// 0x353e6f7d
- (void)_renderSnapshotWithRect:(CGRect)rect inContext:(CGContextRef)context;	// 0x354c8309
- (void)_resetContentStretch;	// 0x354c7121
- (void)_resetZoomingWithEvent:(GSEventRef)event;	// 0x3550b221
- (void)_resizeWithOldSuperviewSize:(CGSize)oldSuperviewSize;	// 0x353480b5
- (void)_resizeWithOldSuperviewSize_ancient:(CGSize)oldSuperviewSize_ancient;	// 0x354c6649
- (id)_rootForKeyResponderCycle;	// 0x354c8011
- (void)_rotateFromEvent:(GSEventRef)event;	// 0x3550a98d
- (void)_rotateToDegrees:(float)degrees duration:(float)duration event:(GSEventRef)event;	// 0x3550a645
- (float)_rubberBandScaleForScale:(float)scale;	// 0x35509cd9
- (void)_rubberbandZoomToEvent:(GSEventRef)event scale:(float)scale;	// 0x35509769
- (float)_scaleForInternalScale:(float)internalScale;	// 0x35509bad
- (id)_scriptingInfo;	// 0x3544f0b5
- (CGPoint)_scrollPointForPoint:(CGPoint)point scale:(float)scale constrain:(BOOL)constrain snapToEdge:(BOOL)edge;	// 0x35509189
- (id)_scroller;	// 0x35393a81
- (CGSize)_scrollerContentSize;	// 0x3550b561
- (void)_setAppearanceIsInvalid:(BOOL)invalid;	// 0x354c5f55
- (void)_setBackgroundCGColor:(CGColorRef)color;	// 0x354c87c5
- (void)_setBackgroundCGColor:(CGColorRef)color withSystemColorName:(id)systemColorName;	// 0x3534ee5d
- (void)_setBackgroundColor:(id)color;	// 0x3534ed49
// declared property setter: - (void)_setBackgroundColorSystemColorName:(id)name;	// 0x3534f3d5
- (void)_setChargeEnabled:(BOOL)enabled;	// 0x353db0a9
- (void)_setContainerLayoutViewForFastMode:(id)fastMode;	// 0x354c9f3d
- (void)_setContentImage:(id)image;	// 0x353eb715
- (void)_setContentStretchInPixels:(CGRect)pixels forContentSize:(CGSize)contentSize shouldTile:(BOOL)tile;	// 0x35326355
- (void)_setContentsTransform:(CGAffineTransform)transform;	// 0x354c82c5
- (void)_setGestureInfoZoomScale:(float)scale;	// 0x355095e1
- (void)_setInterceptMouseEvent:(BOOL)event;	// 0x353e0b91
- (void)_setIsAncestorOfFirstResponder:(BOOL)firstResponder;	// 0x3530ad89
// declared property setter: - (void)_setMonitorsSubtree:(BOOL)subtree;	// 0x35430ce5
- (void)_setRotationAnimationProgress:(id)progress;	// 0x3550a7c1
- (void)_setShouldRasterize:(BOOL)_set;	// 0x354c71ad
// declared property setter: - (void)_setViewDelegate:(id)delegate;	// 0x35344b51
- (void)_setZoomAnimationProgress:(id)progress;	// 0x355098c5
- (void)_setZoomScale:(float)scale duration:(double)duration;	// 0x3550b015
- (BOOL)_shouldAnimatePropertyWithKey:(id)key;	// 0x3532add9
- (BOOL)_shouldApplyExclusiveTouch;	// 0x3531f705
- (BOOL)_shouldResignFirstResponderWithInteractionDisabled;	// 0x35328be9
- (BOOL)_shouldTryPromoteDescendantToFirstResponder;	// 0x353098c9
- (void)_startGesture:(int)gesture event:(GSEventRef)event;	// 0x35508b85
- (BOOL)_startRotationFromEvent:(GSEventRef)event;	// 0x3550a92d
- (BOOL)_startZoomFromEvent:(GSEventRef)event;	// 0x3550a341
- (void)_stopGesture:(int)gesture event:(GSEventRef)event;	// 0x35508cd5
- (void)_stopRotationFromEvent:(GSEventRef)event;	// 0x3550ab01
- (void)_stopZoomFromEvent:(GSEventRef)event;	// 0x3550a445
- (int)_style;	// 0x353e5685
- (BOOL)_subclassImplementsDrawRect;	// 0x3532483d
- (void)_subscribeToScrollNotificationsIfNecessary:(id)scrollNotificationsIfNecessary;	// 0x35309b55
- (id)_superDescription;	// 0x354c9161
- (id)_syntheticTouch;	// 0x3553b449
- (id)_syntheticUIEventWithGSEvent:(GSEventRef)gsevent touchPhase:(int)phase;	// 0x3553b44d
- (int)_topToBottomLeftToRightViewCompare:(id)rightViewCompare;	// 0x354c594d
- (void)_unsubscribeToScrollNotificationsIfNecessary:(id)scrollNotificationsIfNecessary;	// 0x35308bed
- (void)_updateNeedsDisplayOnBoundsChange;	// 0x35345ff1
- (BOOL)_usesDifferentHitTestForGestures;	// 0x3531f225
- (id)_viewControllerForAncestor;	// 0x35348711
// declared property getter: - (id)_viewDelegate;	// 0x35309f39
- (id)_viewIndexPath;	// 0x35486ded
- (BOOL)_wantsCornerSnapshotsForScrolling;	// 0x353e56c5
- (void)_webCustomViewWasAddedAsSubviewOfView:(id)view;	// 0x354c7f35
- (void)_webCustomViewWasRemovedFromSuperview:(id)superview;	// 0x354c7fb9
- (void)_webCustomViewWillBeRemovedFromSuperview;	// 0x354c7f81
- (void)_willMoveToWindow:(id)window;	// 0x35307f05
- (void)_willMoveToWindow:(id)window withAncestorView:(id)ancestorView;	// 0x353098f5
- (id)_window;	// 0x3530ae81
- (float)_zoomAnimationDurationForScale:(float)scale;	// 0x3550b90d
- (float)_zoomAnimationProgress;	// 0x3550bc7d
- (float)_zoomScale;	// 0x3550b1a5
- (void)_zoomToEvent:(GSEventRef)event scale:(float)scale animate:(BOOL)animate constrainScrollPoint:(BOOL)point;	// 0x355096f1
- (void)_zoomToScale:(float)scale event:(GSEventRef)event;	// 0x35509609
- (void)_zoomToScrollPoint:(CGPoint)scrollPoint scale:(float)scale duration:(float)duration event:(GSEventRef)event;	// 0x3550b6e9
- (void)_zoomToWindowPoint:(CGPoint)windowPoint scale:(float)scale duration:(float)duration constrainScrollPoint:(BOOL)point event:(GSEventRef)event;	// 0x3550b9b9
- (BOOL)_zoomWithEvent:(GSEventRef)event;	// 0x35509ea9
- (id)actionForLayer:(id)layer forKey:(id)key;	// 0x35308a39
- (void)addAnimation:(id)animation forKey:(id)key;	// 0x354c7735
- (void)addGestureRecognizer:(id)recognizer;	// 0x3534d82d
- (void)addSubview:(id)subview;	// 0x35309359
// converted property getter: - (float)alpha;	// 0x3530a73d
- (void)animator:(id)animator startAnimation:(id)animation;	// 0x3549c04d
- (void)animator:(id)animator stopAnimation:(id)animation;	// 0x35508e55
// converted property getter: - (BOOL)autoresizesSubviews;	// 0x354c65f9
// converted property getter: - (unsigned)autoresizingMask;	// 0x353484c5
// converted property getter: - (id)backgroundColor;	// 0x3534f511
// converted property getter: - (CGRect)bounds;	// 0x353073e9
- (void)bringSubviewToFront:(id)front;	// 0x35309d11
- (BOOL)canHandleGestures;	// 0x3550ac01
- (BOOL)canHandleSwipes;	// 0x35309251
- (BOOL)cancelMouseTracking;	// 0x35475b99
- (BOOL)cancelTouchTracking;	// 0x354c5e31
// converted property getter: - (CGPoint)center;	// 0x35329791
// converted property getter: - (float)charge;	// 0x3531f2c1
// converted property getter: - (BOOL)clearsContextBeforeDrawing;	// 0x354c724d
// converted property getter: - (BOOL)clipsToBounds;	// 0x353d1c05
- (int)compareTextEffectsOrdering:(id)ordering;	// 0x3538a7d1
- (BOOL)containsView:(id)view;	// 0x353ec8a5
// converted property getter: - (int)contentMode;	// 0x35325be1
// converted property getter: - (float)contentScaleFactor;	// 0x35309c61
// converted property getter: - (CGRect)contentStretch;	// 0x354c7179
- (CGPoint)convertPoint:(CGPoint)point fromView:(id)view;	// 0x3531e839
- (CGPoint)convertPoint:(CGPoint)point toView:(id)view;	// 0x353e4429
- (CGRect)convertRect:(CGRect)rect fromView:(id)view;	// 0x3535613d
- (CGRect)convertRect:(CGRect)rect toView:(id)view;	// 0x353497e5
- (CGSize)convertSize:(CGSize)size fromView:(id)view;	// 0x354c6285
- (CGSize)convertSize:(CGSize)size toView:(id)view;	// 0x354c6191
- (CGImageRef)createSnapshotWithRect:(CGRect)rect;	// 0x354c7be9
- (void)dealloc;	// 0x3532ff95
- (void)deferredBecomeFirstResponder;	// 0x353ec9e9
// declared property getter: - (BOOL)deliversTouchesForGesturesToSuperview;	// 0x3531fe79
- (id)description;	// 0x354c8ae1
- (void)didAddSubview:(id)subview;	// 0x35309cd5
- (void)didMoveToSuperview;	// 0x35309351
- (void)didMoveToWindow;	// 0x35309349
- (void)drawLayer:(id)layer inContext:(CGContextRef)context;	// 0x35315051
- (void)drawRect:(CGRect)rect;	// 0x35448a65
- (void)drawRect:(CGRect)rect forViewPrintFormatter:(id)viewPrintFormatter;	// 0x356629e1
// converted property getter: - (int)enabledGestures;	// 0x3550ac69
- (void)encodeWithCoder:(id)coder;	// 0x354c5415
- (BOOL)endEditing:(BOOL)editing;	// 0x353d8af5
- (void)exchangeSubviewAtIndex:(int)index withSubviewAtIndex:(int)index2;	// 0x35443edd
- (CGRect)extent;	// 0x354c5f79
- (void)forceDisplayIfNeeded;	// 0x354c734d
// converted property getter: - (CGRect)frame;	// 0x35307489
// converted property getter: - (CGPoint)frameOrigin;	// 0x353d65e9
- (void)gestureChanged:(GSEventRef)changed;	// 0x3550b3fd
// converted property getter: - (id)gestureDelegate;	// 0x3550ac1d
- (void)gestureEnded:(GSEventRef)ended;	// 0x3550b519
// converted property getter: - (id)gestureRecognizers;	// 0x353081f9
- (void)gestureStarted:(GSEventRef)started;	// 0x3550b2c1
// declared property getter: - (BOOL)gesturesEnabled;	// 0x354069fd
- (CGRect)hitRect;	// 0x3547a57d
- (id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;	// 0x354c79ed
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x3531e09d
- (void)insertSubview:(id)subview above:(id)above;	// 0x3538a64d
- (void)insertSubview:(id)subview aboveSubview:(id)subview2;	// 0x35331c29
- (void)insertSubview:(id)subview atIndex:(int)index;	// 0x3532502d
- (void)insertSubview:(id)subview below:(id)below;	// 0x353a27d1
- (void)insertSubview:(id)subview belowSubview:(id)subview2;	// 0x35325055
- (BOOL)isAccessibilityElementByDefault;	// 0x35595585
- (BOOL)isDescendantOfView:(id)view;	// 0x35320039
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x35595589
// converted property getter: - (BOOL)isEnabled;	// 0x353a5911
// converted property getter: - (BOOL)isExclusiveTouch;	// 0x3531f749
// converted property getter: - (BOOL)isHidden;	// 0x3531e619
- (BOOL)isHiddenOrHasHiddenAncestor;	// 0x353e3a89
// declared property getter: - (BOOL)isInAnimatedVCTransition;	// 0x35348771
// converted property getter: - (BOOL)isMultipleTouchEnabled;	// 0x35482405
// converted property getter: - (BOOL)isOpaque;	// 0x35324bf1
// declared property getter: - (BOOL)isUserInteractionEnabled;	// 0x3531e601
// declared property getter: - (id)layer;	// 0x35309f4d
- (void)layoutBelowIfNeeded;	// 0x3532b21d
- (void)layoutIfNeeded;	// 0x35309e61
- (void)layoutSublayersOfLayer:(id)layer;	// 0x35309e81
- (void)layoutSubviews;	// 0x35309f49
- (void)movedFromSuperview:(id)superview;	// 0x3530934d
- (void)movedFromWindow:(id)window;	// 0x35309345
- (void)movedToSuperview:(id)superview;	// 0x35309cd1
- (void)movedToWindow:(id)window;	// 0x35309c39
- (BOOL)needsDisplay;	// 0x354c7229
// converted property getter: - (BOOL)needsDisplayOnBoundsChange;	// 0x3545d20d
- (BOOL)needsWebDocumentViewEventsDirectly;	// 0x35542569
- (CGImageRef)newSnapshotWithRect:(CGRect)rect;	// 0x354c7291
- (id)nextResponder;	// 0x3530aa69
// converted property getter: - (CGPoint)origin;	// 0x353d65c9
- (BOOL)pointInside:(CGPoint)inside forEvent:(GSEventRef)event;	// 0x354c7bc1
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x3531e63d
// converted property getter: - (CGPoint)position;	// 0x354c6c35
- (id)recursiveDescription;	// 0x354c918d
- (void)recursivelyForceDisplayIfNeeded;	// 0x354b2d61
- (void)reduceWidth:(float)width;	// 0x354abf11
- (void)removeAllGestureRecognizers;	// 0x35330211
- (void)removeFromSuperview;	// 0x35307c85
- (void)removeGestureRecognizer:(id)recognizer;	// 0x3534dff9
- (void)resizeForKeyplaneSize:(CGSize)keyplaneSize;	// 0x3567b23d
- (void)resizeSubviewsWithOldSize:(CGSize)oldSize;	// 0x35328839
- (void)resizeWithOldSuperviewSize:(CGSize)oldSuperviewSize;	// 0x35348079
- (void)rotateToDegrees:(float)degrees;	// 0x3550a5e5
- (float)rotationDegrees;	// 0x3550afe5
- (id)scriptingInfoWithChildren;	// 0x3544ef19
- (void)sendSubviewToBack:(id)back;	// 0x353735a1
// converted property setter: - (void)setAlpha:(float)alpha;	// 0x35307905
// converted property setter: - (void)setAutoresizesSubviews:(BOOL)subviews;	// 0x3538a3b9
// converted property setter: - (void)setAutoresizingMask:(unsigned)mask;	// 0x3532c671
// converted property setter: - (void)setBackgroundColor:(id)color;	// 0x3534ed39
// converted property setter: - (void)setBounds:(CGRect)bounds;	// 0x35341dc9
// converted property setter: - (void)setCenter:(CGPoint)center;	// 0x35326775
// converted property setter: - (void)setCharge:(float)charge;	// 0x35344781
- (void)setClearsContext:(BOOL)context;	// 0x354c7271
// converted property setter: - (void)setClearsContextBeforeDrawing:(BOOL)drawing;	// 0x35473f6d
- (void)setClipsSubviews:(BOOL)subviews;	// 0x35351671
// converted property setter: - (void)setClipsToBounds:(BOOL)bounds;	// 0x3531ad89
// converted property setter: - (void)setContentMode:(int)mode;	// 0x3532c481
// converted property setter: - (void)setContentScaleFactor:(float)factor;	// 0x35324c05
// converted property setter: - (void)setContentStretch:(CGRect)stretch;	// 0x3533c225
- (void)setContentsPosition:(int)position;	// 0x353514c9
// declared property setter: - (void)setDeliversTouchesForGesturesToSuperview:(BOOL)superview;	// 0x353a2e81
// converted property setter: - (void)setEnabled:(BOOL)enabled;	// 0x35391e05
// converted property setter: - (void)setEnabledGestures:(int)gestures;	// 0x3550ac41
// converted property setter: - (void)setExclusiveTouch:(BOOL)touch;	// 0x353a2e9d
- (void)setFixedBackgroundPattern:(BOOL)pattern;	// 0x353d8d21
// converted property setter: - (void)setFrame:(CGRect)frame;	// 0x35307781
- (void)setFrame:(CGRect)frame forFields:(int)fields;	// 0x354c64c1
// converted property setter: - (void)setFrameOrigin:(CGPoint)origin;	// 0x3530742d
// converted property setter: - (void)setGestureDelegate:(id)delegate;	// 0x353a6d69
// converted property setter: - (void)setGestureRecognizers:(id)recognizers;	// 0x354c87d9
// declared property setter: - (void)setGesturesEnabled:(BOOL)enabled;	// 0x35320c09
// converted property setter: - (void)setHidden:(BOOL)hidden;	// 0x35326531
// declared property setter: - (void)setInAnimatedVCTransition:(BOOL)animatedVCTransition;	// 0x354c7c0d
// converted property setter: - (void)setMultipleTouchEnabled:(BOOL)enabled;	// 0x3534ce15
- (void)setNeedsDisplay;	// 0x3530a375
- (void)setNeedsDisplayInRect:(CGRect)rect;	// 0x35321ef5
// converted property setter: - (void)setNeedsDisplayOnBoundsChange:(BOOL)change;	// 0x35345fbd
- (void)setNeedsLayout;	// 0x35309e41
// converted property setter: - (void)setOpaque:(BOOL)opaque;	// 0x35324ed9
// converted property setter: - (void)setOrigin:(CGPoint)origin;	// 0x3530741d
// converted property setter: - (void)setPosition:(CGPoint)position;	// 0x3544e99d
- (void)setRotationBy:(float)by;	// 0x354c654d
- (void)setRotationDegrees:(float)degrees duration:(double)duration;	// 0x3550af65
// converted property setter: - (void)setSize:(CGSize)size;	// 0x35393975
// declared property setter: - (void)setSkipsSubviewEnumeration:(BOOL)enumeration;	// 0x354c84cd
// declared property setter: - (void)setTag:(int)tag;	// 0x353a203d
// converted property setter: - (void)setTapDelegate:(id)delegate;	// 0x354c5891
// converted property setter: - (void)setTransform:(CGAffineTransform)transform;	// 0x353297c1
// declared property setter: - (void)setUserInteractionEnabled:(BOOL)enabled;	// 0x35307925
- (void)setValue:(id)value forGestureAttribute:(int)gestureAttribute;	// 0x3550ac8d
- (void)setValue:(id)value forKey:(id)key;	// 0x354c88c9
// declared property setter: - (void)setViewTraversalMark:(BOOL)mark;	// 0x35307ee1
// converted property getter: - (CGSize)size;	// 0x35309cd9
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x353d1bcd
- (void)sizeToFit;	// 0x35333cb9
// declared property getter: - (BOOL)skipsSubviewEnumeration;	// 0x354c84b5
- (void)startHeartbeat:(SEL)heartbeat inRunLoopMode:(id)runLoopMode;	// 0x35475439
- (int)stateForGestureType:(int)gestureType;	// 0x3550b1d5
- (void)stopHeartbeat:(SEL)heartbeat;	// 0x3547c1ad
- (id)subviews;	// 0x3531e665
- (id)superview;	// 0x353073a5
- (int)swipe:(int)swipe withEvent:(GSEventRef)event;	// 0x354c5e49
// declared property getter: - (int)tag;	// 0x353b155d
// converted property getter: - (id)tapDelegate;	// 0x354c5929
- (int)textEffectsVisibilityLevel;	// 0x355918d5
- (int)textEffectsVisibilityLevelWhenKey;	// 0x355918dd
- (id)textInputView;	// 0x353fe539
// converted property getter: - (CGAffineTransform)transform;	// 0x35333dc1
- (BOOL)useBlockyMagnificationInClassic;	// 0x354ca2f5
- (id)valueForGestureAttribute:(int)gestureAttribute;	// 0x3550adf1
- (void)viewDidMoveToSuperview;	// 0x354c711d
- (id)viewPrintFormatter;	// 0x35662991
// declared property getter: - (BOOL)viewTraversalMark;	// 0x3530a181
- (void)viewWillMoveToSuperview:(id)view;	// 0x354c7119
- (id)viewWithTag:(int)tag;	// 0x3530a239
- (CGRect)visibleBounds;	// 0x35365b81
- (void)willMoveToSuperview:(id)superview;	// 0x35307edd
- (void)willMoveToWindow:(id)window;	// 0x3530881d
- (void)willRemoveSubview:(id)subview;	// 0x35307ed9
- (id)window;	// 0x35307d5d
- (void)zoomToScale:(float)scale;	// 0x35509421
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"

@class UIEvent, UIView, NSMutableArray, NSMutableSet;
@protocol UIGestureRecognizerDelegate;

@interface UIGestureRecognizer : NSObject {
@private
	NSMutableArray *_targets;	// 4 = 0x4
	NSMutableArray *_delayedTouches;	// 8 = 0x8
	UIView *_view;	// 12 = 0xc
	UIEvent *_updateEvent;	// 16 = 0x10
	id<UIGestureRecognizerDelegate> _delegate;	// 20 = 0x14
	NSMutableSet *_failureRequirements;	// 24 = 0x18
	NSMutableSet *_failureDependents;	// 28 = 0x1c
	NSMutableSet *_dynamicFailureRequirements;	// 32 = 0x20
	NSMutableSet *_dynamicFailureDependents;	// 36 = 0x24
	NSMutableSet *_unfailedGestures;	// 40 = 0x28
	NSMutableSet *_unfailedGesturesForReset;	// 44 = 0x2c
	NSMutableSet *_friends;	// 48 = 0x30
	int _state;	// 52 = 0x34
	struct {
		unsigned delegateShouldBegin : 1;
		unsigned delegateCanPrevent : 1;
		unsigned delegateCanBePrevented : 1;
		unsigned delegateShouldRecognizeSimultaneously : 1;
		unsigned delegateShouldReceiveTouch : 1;
		unsigned delegateShouldRequireFailure : 1;
		unsigned delegateFailed : 1;
		unsigned privateDelegateShouldBegin : 1;
		unsigned privateDelegateShouldRecognizeSimultaneously : 1;
		unsigned privateDelegateShouldReceiveTouch : 1;
		unsigned subclassShouldRequireFailure : 1;
		unsigned cancelsTouchesInView : 1;
		unsigned delaysTouchesBegan : 1;
		unsigned delaysTouchesEnded : 1;
		unsigned notExclusive : 1;
		unsigned disabled : 1;
		unsigned dirty : 1;
		unsigned queriedFailureRequirements : 1;
		unsigned delivered : 1;
		unsigned continuous : 1;
		unsigned requiresDelayedBegan : 1;
	} _gestureFlags;	// 56 = 0x38
}
@property(assign, nonatomic) BOOL cancelsTouchesInView;	// G=0x307d6fd9; S=0x3062c9ad; 
@property(assign, nonatomic) BOOL delaysTouchesBegan;	// G=0x307d6ff1; S=0x305dc641; 
@property(assign, nonatomic) BOOL delaysTouchesEnded;	// G=0x307d7009; S=0x305dcc2d; 
@property(assign, nonatomic) id<UIGestureRecognizerDelegate> delegate;	// G=0x3068ab55; S=0x305dc475; @synthesize=_delegate
@property(assign, nonatomic, getter=isEnabled) BOOL enabled;	// G=0x30614065; S=0x305dc65d; 
@property(assign, getter=isExclusive) BOOL exclusive;	// G=0x306306ad; S=0x30604129; converted property
@property(readonly, assign, nonatomic) int state;	// G=0x30623c19; 
@property(readonly, assign, nonatomic) UIView *view;	// G=0x305dc8c1; 
+ (BOOL)_touchesBeganWasDelayedForTouch:(id)touch;	// 0x3063371d
- (id)init;	// 0x307d7199
- (id)initWithTarget:(id)target action:(SEL)action;	// 0x305dc219
- (id)_activeTouchesForEvent:(id)event;	// 0x3062fea9
- (void)_addDynamicFailureDependent:(id)dependent;	// 0x307d7bfd
- (void)_addFailureDependent:(id)dependent;	// 0x30613ff9
- (void)_addFriendGesture:(id)gesture;	// 0x307d7139
- (void)_addUnfailedGestureForReset:(id)reset;	// 0x307d7119
- (BOOL)_affectedByGesture:(id)gesture;	// 0x306306c9
- (void)_appendDescription:(id)description forDependencies:(id)dependencies toString:(id)string atLevel:(int)level;	// 0x307d7829
- (void)_appendDescriptionToString:(id)string atLevel:(int)level includingDependencies:(BOOL)dependencies;	// 0x307d7319
- (void)_appendSubclassDescription:(id)description;	// 0x307d702d
- (id)_briefDescription;	// 0x307d7729
- (CGPoint)_centroidOfTouches:(id)touches excludingEnded:(BOOL)ended;	// 0x3062f94d
- (void)_checkExclusivity;	// 0x30630365
- (void)_clearDelayedTouches;	// 0x305f3cf5
- (void)_clearUpdateTimer;	// 0x30623c95
- (void)_delayTouch:(id)touch forEvent:(id)event;	// 0x30630725
- (void)_delayTouchesForEvent:(id)event;	// 0x306256a5
- (void)_delayedUpdateGesture;	// 0x30624d41
- (BOOL)_delegateCanPreventGestureRecognizer:(id)recognizer;	// 0x30632dd1
- (BOOL)_delegateShouldReceiveTouch:(id)_delegate;	// 0x3062e685
- (int)_depthFirstViewCompare:(id)compare;	// 0x3063019d
- (void)_detach;	// 0x307e99e1
- (float)_distanceBetweenTouches:(id)touches;	// 0x306e22b5
- (void)_enqueueDelayedTouchToSend:(id)send;	// 0x30633aad
- (void)_enqueueDelayedTouchesToSend;	// 0x305f3b25
- (void)_invalidate;	// 0x307d7031
- (BOOL)_isDirty;	// 0x305b62b5
- (BOOL)_isExcludedFromGestures:(id)gestures;	// 0x30630425
- (BOOL)_isFriendWithGesture:(id)gesture;	// 0x30632d6d
- (BOOL)_isRecognized;	// 0x30623bdd
- (BOOL)_isWaitingForGesturesToFail;	// 0x30632f0d
- (void)_queryFailureRequirements;	// 0x30624b19
- (void)_queueForResetIfFinished;	// 0x305b62c9
- (void)_relatedGestureFinished:(id)finished withEvent:(id)event;	// 0x3062386d
- (void)_relatedGestureRecognizer:(id)recognizer wasEnabled:(BOOL)enabled;	// 0x30623795
- (void)_relatedGestureReleased:(id)released;	// 0x3068ab65
- (void)_removeFailureDependent:(id)dependent;	// 0x307d70b9
- (BOOL)_requiresGestureRecognizerToFail:(id)fail;	// 0x3065f851
- (void)_resetGestureRecognizer;	// 0x30633d6d
- (void)_resetIfFinished;	// 0x30633c01
- (void)_setDirty;	// 0x3062fab5
- (BOOL)_shouldRequireFailureOfGestureRecognizer:(id)gestureRecognizer;	// 0x3065f965
- (void)_touchWasCancelled:(id)cancelled;	// 0x30633791
- (void)_updateGestureStateWithEvent:(id)event afterDelay:(BOOL)delay;	// 0x30623c29
- (void)_updateGestureWithEvent:(id)event;	// 0x30624d61
- (void)addTarget:(id)target action:(SEL)action;	// 0x307d7955
- (BOOL)canBePreventedByGestureRecognizer:(id)recognizer;	// 0x30632d9d
- (BOOL)canPreventGestureRecognizer:(id)recognizer;	// 0x30632d31
// declared property getter: - (BOOL)cancelsTouchesInView;	// 0x307d6fd9
- (void)dealloc;	// 0x305f397d
// declared property getter: - (BOOL)delaysTouchesBegan;	// 0x307d6ff1
// declared property getter: - (BOOL)delaysTouchesEnded;	// 0x307d7009
// declared property getter: - (id)delegate;	// 0x3068ab55
- (id)description;	// 0x307d7049
- (void)ignoreTouch:(id)touch forEvent:(id)event;	// 0x30633a6d
// declared property getter: - (BOOL)isEnabled;	// 0x30614065
// converted property getter: - (BOOL)isExclusive;	// 0x306306ad
- (CGPoint)locationInView:(id)view;	// 0x307d7c69
- (CGPoint)locationOfTouch:(unsigned)touch inView:(id)view;	// 0x307d7aa5
- (unsigned)numberOfTouches;	// 0x306e28d9
- (void)removeFailureRequirement:(id)requirement;	// 0x307d708d
- (void)removeTarget:(id)target action:(SEL)action;	// 0x30613a99
- (void)requireGestureRecognizerToFail:(id)fail;	// 0x30613f25
- (void)requireOtherGestureToFail:(id)fail;	// 0x30613f11
- (void)reset;	// 0x3060449d
// declared property setter: - (void)setCancelsTouchesInView:(BOOL)view;	// 0x3062c9ad
// declared property setter: - (void)setDelaysTouchesBegan:(BOOL)began;	// 0x305dc641
// declared property setter: - (void)setDelaysTouchesEnded:(BOOL)ended;	// 0x305dcc2d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x305dc475
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x305dc65d
// converted property setter: - (void)setExclusive:(BOOL)exclusive;	// 0x30604129
- (void)setState:(int)state;	// 0x30632131
- (void)setView:(id)view;	// 0x305dc8d1
// declared property getter: - (int)state;	// 0x30623c19
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x307d7021
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x307d7029
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x307d7025
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x3068db31
// declared property getter: - (id)view;	// 0x305dc8c1
@end


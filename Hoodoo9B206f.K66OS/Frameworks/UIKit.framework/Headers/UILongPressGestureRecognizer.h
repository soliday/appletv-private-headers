/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIGestureRecognizer.h"
#import "UIKit-Structs.h"

@class NSMutableSet, NSArray;

@interface UILongPressGestureRecognizer : UIGestureRecognizer {
@private
	NSArray *_touches;	// 56 = 0x38
	NSMutableSet *_activeTouches;	// 60 = 0x3c
	int _numberOfTouchesRequired;	// 64 = 0x40
	double _minimumPressDuration;	// 68 = 0x44
	float _allowableMovement;	// 76 = 0x4c
	CGPoint _startPointScreen;	// 80 = 0x50
	id _enoughTimeElapsed;	// 88 = 0x58
	id _tooMuchTimeElapsed;	// 92 = 0x5c
	id _imp;	// 96 = 0x60
	unsigned _gotTouchEnd : 1;	// 100 = 0x64
	unsigned _gotTooMany : 1;	// 100 = 0x64
	unsigned _gotEnoughTaps : 1;	// 100 = 0x64
	unsigned _cancelPastAllowableMovement : 1;	// 100 = 0x64
}
@property(assign, nonatomic) float allowableMovement;	// G=0x355cd8e1; S=0x35352b4d; @synthesize=_allowableMovement
@property(assign, nonatomic) BOOL cancelPastAllowableMovement;	// G=0x355cd629; S=0x355cd63d; 
@property(readonly, assign, nonatomic) CGPoint centroid;	// G=0x354058c5; 
@property(assign, nonatomic) double delay;	// G=0x35405c69; S=0x353918dd; @synthesize=_minimumPressDuration
@property(assign, nonatomic) double minimumPressDuration;	// G=0x355cd611; S=0x35368d01; 
@property(assign, nonatomic) int numberOfTapsRequired;	// G=0x3540854d; S=0x355cd5c9; 
@property(assign, nonatomic) int numberOfTouchesRequired;	// G=0x3540853d; S=0x35352b15; @synthesize=_numberOfTouchesRequired
@property(readonly, assign, nonatomic) CGPoint startPoint;	// G=0x3545bcf1; 
@property(readonly, assign, nonatomic) NSArray *touches;	// G=0x35405a39; @synthesize=_touches
- (id)initWithCoder:(id)coder;	// 0x355cd349
- (id)initWithTarget:(id)target action:(SEL)action;	// 0x353529e1
- (void)_resetGestureRecognizer;	// 0x3540e7cd
- (void)_startTapFinishedTimer;	// 0x355cd669
// declared property getter: - (float)allowableMovement;	// 0x355cd8e1
- (BOOL)canPreventGestureRecognizer:(id)recognizer;	// 0x3545b4ad
// declared property getter: - (BOOL)cancelPastAllowableMovement;	// 0x355cd629
// declared property getter: - (CGPoint)centroid;	// 0x354058c5
- (CGPoint)centroidScreen;	// 0x3540584d
- (void)clearTimer;	// 0x35330bf1
- (void)dealloc;	// 0x35330b55
// declared property getter: - (double)delay;	// 0x35405c69
- (void)encodeWithCoder:(id)coder;	// 0x355cd4b9
- (void)enoughTimeElapsed:(id)elapsed;	// 0x3545a4bd
- (void)invalidate;	// 0x354a3715
- (CGPoint)locationInView:(id)view;	// 0x3545a625
- (CGPoint)locationOfTouch:(unsigned)touch inView:(id)view;	// 0x355cd7b5
// declared property getter: - (double)minimumPressDuration;	// 0x355cd611
// declared property getter: - (int)numberOfTapsRequired;	// 0x3540854d
- (unsigned)numberOfTouches;	// 0x355cd795
// declared property getter: - (int)numberOfTouchesRequired;	// 0x3540853d
// declared property setter: - (void)setAllowableMovement:(float)movement;	// 0x35352b4d
// declared property setter: - (void)setCancelPastAllowableMovement:(BOOL)movement;	// 0x355cd63d
// declared property setter: - (void)setDelay:(double)delay;	// 0x353918dd
// declared property setter: - (void)setMinimumPressDuration:(double)duration;	// 0x35368d01
// declared property setter: - (void)setNumberOfTapsRequired:(int)tapsRequired;	// 0x355cd5c9
// declared property setter: - (void)setNumberOfTouchesRequired:(int)touchesRequired;	// 0x35352b15
- (void)setTouches:(id)touches;	// 0x35330c71
- (void)setView:(id)view;	// 0x35352b5d
// declared property getter: - (CGPoint)startPoint;	// 0x3545bcf1
- (void)startTimer;	// 0x35405bcd
- (BOOL)tapIsPossibleForTapRecognizer:(id)tapRecognizer;	// 0x355cd711
- (void)tapRecognizerFailedToRecognizeTap:(id)recognizeTap;	// 0x355cd781
- (void)tapRecognizerRecognizedTap:(id)tap;	// 0x355cd731
- (void)tooMuchElapsed:(id)elapsed;	// 0x355cd655
// declared property getter: - (id)touches;	// 0x35405a39
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x35405551
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x3545e091
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x35407d45
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x3543833d
@end


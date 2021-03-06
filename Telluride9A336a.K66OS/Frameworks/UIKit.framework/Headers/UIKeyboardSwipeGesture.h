/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIGestureRecognizer.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface UIKeyboardSwipeGesture : UIGestureRecognizer {
@private
	double _maximumDuration;	// 56 = 0x38
	float _verticalScale;	// 64 = 0x40
	float _horizontalScale;	// 68 = 0x44
	float _minimumHorizontalMovement;	// 72 = 0x48
	float _maximumHorizontalMovement;	// 76 = 0x4c
	float _minimumVerticalMovement;	// 80 = 0x50
	float _maximumVerticalMovement;	// 84 = 0x54
	double _startTime;	// 88 = 0x58
	int _numberOfFingers;	// 96 = 0x60
	NSMutableArray *_activeTouches;	// 100 = 0x64
	unsigned _timerOn : 1;	// 104 = 0x68
}
@property(assign, nonatomic) float minimumVerticalMovement;	// G=0x353b5335; S=0x353b4719; @synthesize=_minimumVerticalMovement
@property(assign, nonatomic) int numberOfFingers;	// G=0x353b5315; S=0x353b5325; @synthesize=_numberOfFingers
- (id)initWithTarget:(id)target action:(SEL)action;	// 0x353b44c9
- (void)_resetGestureRecognizer;	// 0x353b482d
- (void)clearTimer;	// 0x353b4775
- (void)dealloc;	// 0x353b47cd
- (int)determineStateForTouch:(id)touch atTimeInterval:(double)timeInterval;	// 0x353b4d75
- (id)infoForTouch:(id)touch;	// 0x353b4949
- (float)maximumHorizontalMovementForTimeInterval:(double)timeInterval;	// 0x353b4709
- (float)maximumVerticalMovementForTimeInterval:(double)timeInterval;	// 0x353b46ad
- (BOOL)mergeTouches:(id)touches;	// 0x353b49f9
- (float)minimumHorizontalMovementForTimeInterval:(double)timeInterval;	// 0x353b464d
// declared property getter: - (float)minimumVerticalMovement;	// 0x353b5335
- (float)minimumVerticalMovementForTimeInterval:(double)timeInterval;	// 0x353b45f1
// declared property getter: - (int)numberOfFingers;	// 0x353b5315
- (int)overallState;	// 0x353b4fe9
// declared property setter: - (void)setMinimumVerticalMovement:(float)movement;	// 0x353b4719
// declared property setter: - (void)setNumberOfFingers:(int)fingers;	// 0x353b5325
- (void)setState:(int)state;	// 0x353b52e9
- (void)startTimer:(double)timer;	// 0x353b488d
- (void)tooManyFingers;	// 0x353b4919
- (void)tooSlow:(id)slow;	// 0x353b48e9
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x353b4cb5
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x353b52d5
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x353b529d
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x353b50ed
@end


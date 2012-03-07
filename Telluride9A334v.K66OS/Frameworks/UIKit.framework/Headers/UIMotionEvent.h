/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIInternalEvent.h"

@class NSTimer;

__attribute__((visibility("hidden")))
@interface UIMotionEvent : UIInternalEvent {
@private
	id _motionAccelerometer;	// 16 = 0x10
	int _subtype;	// 20 = 0x14
	int _shakeState;	// 24 = 0x18
	int _stateMachineState;	// 28 = 0x1c
	double _shakeStartTime;	// 32 = 0x20
	double _lastMovementTime;	// 40 = 0x28
	double _highLevelTime;	// 48 = 0x30
	double _lowEndTimeout;	// 56 = 0x38
	NSTimer *_idleTimer;	// 64 = 0x40
	BOOL _sentMotionBegan;	// 68 = 0x44
	float _lowPassState[10];	// 72 = 0x48
	unsigned _lowPassStateIndex;	// 112 = 0x70
	unsigned _highPassStateIndex;	// 116 = 0x74
	float _highPassState[2];	// 120 = 0x78
	int notifyToken;	// 128 = 0x80
}
@property(assign, nonatomic) int shakeState;	// G=0x3025b33d; S=0x3025b34d; @synthesize=_shakeState
@property(readonly, assign) int subtype;	// G=0x3025ac15; converted property
- (void)_accelerometerDidDetectMovementWithTimestamp:(double)_accelerometer;	// 0x3025acc9
- (float)_determineShakeLevelX:(float)x y:(float)y z:(float)z currentState:(int)state;	// 0x3025b195
- (void)_enablePeakDetectionIfNecessary;	// 0x300373c9
- (int)_feedStateMachine:(float)machine currentState:(int)state timestamp:(double)timestamp;	// 0x3025af35
- (float)_highPass:(float)pass;	// 0x3025b0a5
- (void)_idleTimerFired;	// 0x3009bbb9
- (id)_init;	// 0x30059349
- (float)_lowPass:(float)pass;	// 0x3025b115
- (void)_resetLowPassState;	// 0x3009bcb1
- (void)_setSubtype:(int)subtype;	// 0x3025ac25
- (int)_shakeState;	// 0x3025b32d
- (void)_willResume;	// 0x3006ea59
- (void)_willSuspend;	// 0x3009bb51
- (void)accelerometer:(id)accelerometer didAccelerateWithTimeStamp:(double)timeStamp x:(float)x y:(float)y z:(float)z eventType:(int)type;	// 0x3025adcd
- (void)dealloc;	// 0x3025ab6d
- (id)description;	// 0x3025ac35
// declared property setter: - (void)setShakeState:(int)state;	// 0x3025b34d
// declared property getter: - (int)shakeState;	// 0x3025b33d
// converted property getter: - (int)subtype;	// 0x3025ac15
- (int)type;	// 0x3025ac11
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSDate, NSMutableArray, ATVRCButtonPatternSet, NSTimer;

__attribute__((visibility("hidden")))
@interface ATVRCCapture : NSObject {
@private
	int _captureState;	// 4 = 0x4
	NSMutableArray *_capturedEvents;	// 8 = 0x8
	ATVRCButtonPatternSet *_workingPatternSet;	// 12 = 0xc
	NSTimer *_discontinuityTrigger;	// 16 = 0x10
	NSDate *_captureStartTime;	// 20 = 0x14
}
@property(readonly, assign) int captureState;	// G=0x30690e15; converted property
@property(readonly, retain) ATVRCButtonPatternSet *workingPatternSet;	// G=0x30690e25; converted property
- (id)init;	// 0x3069157d
- (void)_clearDiscontinuityTrigger;	// 0x306910a9
- (void)_discontinuityTrigger:(id)trigger;	// 0x3069160d
- (void)_firstCommandEventReceived;	// 0x3069126d
- (BOOL)_identifyCommandPattern;	// 0x30690f01
- (void)_mainCaptureDoneTrigger:(id)trigger;	// 0x30691135
- (double)_maxIntervalBetweenEvents;	// 0x30690e35
- (void)_resetDiscontinuityTrigger;	// 0x306910d5
- (void)_setCaptureState:(int)state;	// 0x30691739
- (void)addEvent:(id)event;	// 0x30691465
- (double)captureProgress;	// 0x30691375
// converted property getter: - (int)captureState;	// 0x30690e15
- (void)dealloc;	// 0x30691511
- (void)reset;	// 0x30691409
- (void)startCapture;	// 0x306914e9
// converted property getter: - (id)workingPatternSet;	// 0x30690e25
@end

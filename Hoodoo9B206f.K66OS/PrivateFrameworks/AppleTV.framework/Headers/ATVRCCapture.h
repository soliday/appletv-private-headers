/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSDate, NSTimer, ATVRCButtonPatternSet;

__attribute__((visibility("hidden")))
@interface ATVRCCapture : NSObject {
@private
	int _captureState;	// 4 = 0x4
	NSMutableArray *_capturedEvents;	// 8 = 0x8
	ATVRCButtonPatternSet *_workingPatternSet;	// 12 = 0xc
	NSTimer *_discontinuityTrigger;	// 16 = 0x10
	NSDate *_captureStartTime;	// 20 = 0x14
}
@property(readonly, assign) int captureState;	// G=0x365a7a75; converted property
@property(readonly, retain) ATVRCButtonPatternSet *workingPatternSet;	// G=0x365a7a85; converted property
- (id)init;	// 0x365a7845
- (void)_clearDiscontinuityTrigger;	// 0x365a7ee5
- (void)_discontinuityTrigger:(id)trigger;	// 0x365a7f19
- (void)_firstCommandEventReceived;	// 0x365a7bb9
- (BOOL)_identifyCommandPattern;	// 0x365a8055
- (void)_mainCaptureDoneTrigger:(id)trigger;	// 0x365a7cf9
- (double)_maxIntervalBetweenEvents;	// 0x365a81f9
- (void)_resetDiscontinuityTrigger;	// 0x365a7e71
- (void)_setCaptureState:(int)state;	// 0x365a7b2d
- (void)addEvent:(id)event;	// 0x365a7975
- (double)captureProgress;	// 0x365a7a95
// converted property getter: - (int)captureState;	// 0x365a7a75
- (void)dealloc;	// 0x365a78d1
- (void)reset;	// 0x365a7a09
- (void)startCapture;	// 0x365a7945
// converted property getter: - (id)workingPatternSet;	// 0x365a7a85
@end


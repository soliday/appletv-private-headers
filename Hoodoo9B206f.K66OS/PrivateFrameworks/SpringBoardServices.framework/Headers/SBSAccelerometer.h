/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

#import "SpringBoardServices-Structs.h"
#import <NSObject.h> // Unknown library

@class NSLock, NSThread;
@protocol SBSAccelerometerDelegate;

@interface SBSAccelerometer : NSObject {
	id<SBSAccelerometerDelegate> _delegate;	// 4 = 0x4
	CFRunLoopSourceRef _accelerometerEventsSource;	// 8 = 0x8
	CFRunLoopRef _accelerometerEventsRunLoop;	// 12 = 0xc
	double _interval;	// 16 = 0x10
	NSLock *_lock;	// 24 = 0x18
	BOOL _orientationEventsEnabled;	// 28 = 0x1c
	int _orientationEventsToken;	// 32 = 0x20
	NSThread *_orientationEventsThread;	// 36 = 0x24
	float _xThreshold;	// 40 = 0x28
	float _yThreshold;	// 44 = 0x2c
	float _zThreshold;	// 48 = 0x30
}
@property(assign, nonatomic) BOOL accelerometerEventsEnabled;	// G=0x3619d3d9; S=0x3619d479; 
@property(assign, nonatomic) id<SBSAccelerometerDelegate> delegate;	// G=0x3619d459; S=0x3619d469; @synthesize=_delegate
@property(assign, nonatomic) BOOL orientationEventsEnabled;	// G=0x3619d439; S=0x3619d99d; 
@property(assign, nonatomic) double updateInterval;	// G=0x3619d3f1; S=0x3619d4f5; 
@property(assign, nonatomic) float xThreshold;	// G=0x3619d409; S=0x3619d579; 
@property(assign, nonatomic) float yThreshold;	// G=0x3619d419; S=0x3619d5fd; 
@property(assign, nonatomic) float zThreshold;	// G=0x3619d429; S=0x3619d681; 
- (id)init;	// 0x3619d8c9
- (void)_checkIn;	// 0x3619db21
- (void)_checkOut;	// 0x3619da69
- (void)_orientationDidChange;	// 0x3619d869
- (id)_orientationEventsThread;	// 0x3619d449
- (void)_serverWasRestarted;	// 0x3619d761
// declared property getter: - (BOOL)accelerometerEventsEnabled;	// 0x3619d3d9
- (int)currentDeviceOrientation;	// 0x3619d96d
- (void)dealloc;	// 0x3619de59
// declared property getter: - (id)delegate;	// 0x3619d459
// declared property getter: - (BOOL)orientationEventsEnabled;	// 0x3619d439
// declared property setter: - (void)setAccelerometerEventsEnabled:(BOOL)enabled;	// 0x3619d479
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3619d469
// declared property setter: - (void)setOrientationEventsEnabled:(BOOL)enabled;	// 0x3619d99d
// declared property setter: - (void)setUpdateInterval:(double)interval;	// 0x3619d4f5
// declared property setter: - (void)setXThreshold:(float)threshold;	// 0x3619d579
// declared property setter: - (void)setYThreshold:(float)threshold;	// 0x3619d5fd
// declared property setter: - (void)setZThreshold:(float)threshold;	// 0x3619d681
// declared property getter: - (double)updateInterval;	// 0x3619d3f1
// declared property getter: - (float)xThreshold;	// 0x3619d409
// declared property getter: - (float)yThreshold;	// 0x3619d419
// declared property getter: - (float)zThreshold;	// 0x3619d429
@end


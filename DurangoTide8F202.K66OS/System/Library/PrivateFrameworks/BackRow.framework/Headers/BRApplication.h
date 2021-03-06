/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import <NSObject.h> // Unknown library

@class NSTimer, BREvent, NSMutableArray, NSAutoreleasePool;
@protocol BRResponder;

@interface BRApplication : NSObject {
@private
	id _delegate;	// 4 = 0x4
	NSObject<BRResponder> *_firstResponder;	// 8 = 0x8
	BREvent *_currentEvent;	// 12 = 0xc
	NSTimer *_retriggerTimer;	// 16 = 0x10
	NSTimer *_b39PlayPauseHoldTimer;	// 20 = 0x14
	NSMutableArray *_eventQueue;	// 24 = 0x18
	NSAutoreleasePool *_runLoopPool;	// 28 = 0x1c
	CFRunLoopSourceRef _source;	// 32 = 0x20
	CFRunLoopRef _mainRunLoop;	// 36 = 0x24
	double _flushBeforeTimeStamp;	// 40 = 0x28
	long _retriggerCount;	// 48 = 0x30
	double _nextRetriggerDelay;	// 52 = 0x34
	BOOL _handlingEvent;	// 60 = 0x3c
	BOOL _isInModalLoop;	// 61 = 0x3d
	BOOL _eventsBlocked;	// 62 = 0x3e
	BOOL _delegateRetained;	// 63 = 0x3f
	BOOL _isTerminating;	// 64 = 0x40
	BOOL _b39PlayPauseHoldTimerFired;	// 65 = 0x41
}
@property(readonly, retain) BREvent *currentEvent;	// G=0x3293ef5d; converted property
@property(assign) id delegate;	// G=0x3293ef1d; S=0x3293f2f1; converted property
@property(retain) id firstResponder;	// G=0x3293ef4d; S=0x3293ef3d; converted property
@property(assign) BOOL isInModalLoop;	// G=0x3293ef7d; S=0x3293ef6d; converted property
@property(readonly, assign) BOOL isTerminating;	// G=0x3293ef2d; converted property
@property(readonly, assign) double nextRetriggerDelay;	// G=0x3293ef9d; converted property
@property(readonly, assign) long retriggerCount;	// G=0x3293ef8d; converted property
+ (id)sharedApplication;	// 0x328a0c01
- (id)init;	// 0x328a0c45
- (BOOL)_b39PlayPauseHoldTimerFired;	// 0x3293efcd
- (void)_blockEvents;	// 0x3293f4ad
- (void)_drainRunLoopPool;	// 0x3293f0a5
- (void)_handleB39PlayPauseTimerFire:(id)fire;	// 0x3293efad
- (void)_handler;	// 0x3293f839
- (void)_registerForEvents;	// 0x3293fac9
- (void)_retriggerEvent:(id)event;	// 0x3293f051
- (void)_run;	// 0x3293f6fd
- (void)_setB39PlayPauseHoldTimer:(id)timer;	// 0x3293efdd
- (void)_setRetainedDelegate:(id)delegate;	// 0x3293f015
- (void)_unblockEvents;	// 0x3293f47d
- (void)cancelRetriggerCurrentEvent;	// 0x3293f171
// converted property getter: - (id)currentEvent;	// 0x3293ef5d
- (void)dealloc;	// 0x3293f34d
// converted property getter: - (id)delegate;	// 0x3293ef1d
- (void)dispatchEventOnEventThread:(id)thread;	// 0x3293f2c1
- (void)emptyQueue;	// 0x3293f621
// converted property getter: - (id)firstResponder;	// 0x3293ef4d
// converted property getter: - (BOOL)isInModalLoop;	// 0x3293ef7d
// converted property getter: - (BOOL)isTerminating;	// 0x3293ef2d
// converted property getter: - (double)nextRetriggerDelay;	// 0x3293ef9d
- (void)postEvent:(id)event;	// 0x3293f4c9
// converted property getter: - (long)retriggerCount;	// 0x3293ef8d
- (void)retriggerCurrentEvent;	// 0x3293f2a5
- (void)retriggerCurrentEventAfterDelay:(double)delay;	// 0x3293f1bd
- (void)retriggerCurrentEventWithDecreasingDelay;	// 0x3293f249
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x3293f2f1
// converted property setter: - (void)setFirstResponder:(id)responder;	// 0x3293ef3d
- (void)setIgnorePlayPauseEvents:(BOOL)events;	// 0x3293f149
// converted property setter: - (void)setIsInModalLoop:(BOOL)modalLoop;	// 0x3293ef6d
- (void)terminate;	// 0x3293f3c1
@end


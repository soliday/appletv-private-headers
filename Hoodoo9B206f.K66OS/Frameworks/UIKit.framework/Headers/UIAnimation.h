/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library


@interface UIAnimation : NSObject {
	id _target;	// 4 = 0x4
	SEL _action;	// 8 = 0x8
	id _delegate;	// 12 = 0xc
	id _completion;	// 16 = 0x10
	struct {
		unsigned curve : 4;
		unsigned tvOutput : 1;
		unsigned reserved : 27;
	} _animationFlags;	// 20 = 0x14
@private
	double _startTime;	// 24 = 0x18
	double _duration;	// 32 = 0x20
	int _state;	// 40 = 0x28
}
@property(assign) SEL action;	// G=0x354585a9; S=0x3549c03d; converted property
@property(retain) id completion;	// G=0x35458599; S=0x354e9f1d; converted property
@property(assign) id delegate;	// G=0x35457dbd; S=0x35457961; converted property
@property(readonly, assign) int state;	// G=0x35457ab9; converted property
@property(readonly, retain) id target;	// G=0x3549c409; converted property
- (id)initWithTarget:(id)target;	// 0x35457855
// converted property getter: - (SEL)action;	// 0x354585a9
// converted property getter: - (id)completion;	// 0x35458599
- (void)dealloc;	// 0x354585b9
// converted property getter: - (id)delegate;	// 0x35457dbd
- (float)fractionForTime:(double)time;	// 0x35457f41
- (void)markStart:(double)start;	// 0x35457d91
- (void)markStop;	// 0x35458585
- (float)progressForFraction:(float)fraction;	// 0x35457fe9
// converted property setter: - (void)setAction:(SEL)action;	// 0x3549c03d
- (void)setAnimationCurve:(int)curve;	// 0x3549c025
// converted property setter: - (void)setCompletion:(id)completion;	// 0x354e9f1d
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x35457961
- (void)setDuration:(double)duration;	// 0x35457ac9
- (void)setProgress:(float)progress;	// 0x354e9f5d
// converted property getter: - (int)state;	// 0x35457ab9
- (void)stopAnimation;	// 0x354e9ee5
// converted property getter: - (id)target;	// 0x3549c409
- (BOOL)tvOutput;	// 0x35457d7d
@end


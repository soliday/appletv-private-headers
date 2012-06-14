/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRKeyboardControl.h"

@class NSTimer, BREvent;

__attribute__((visibility("hidden")))
@interface BRPopupKeyboardControl : BRKeyboardControl {
@private
	BREvent *_currentEvent;	// 60 = 0x3c
	NSTimer *_retriggerTimer;	// 64 = 0x40
	long _retriggerCount;	// 68 = 0x44
	BOOL _initialDeleteHoldTimePassed;	// 72 = 0x48
}
@property(retain) id focusedKeyControl;	// G=0x366d3239; S=0x366d3271; converted property
- (id)initWithMainKeysContainer:(id)mainKeysContainer actionKeysContainer:(id)container;	// 0x366d2b01
- (BOOL)brEventAction:(id)action;	// 0x366d2c9d
- (void)dealloc;	// 0x366d2be1
- (id)defaultKeyControl;	// 0x366d3179
// converted property getter: - (id)focusedKeyControl;	// 0x366d3239
- (CGPoint)focusedPoint;	// 0x366d32c9
- (void)retriggerEvent:(id)event;	// 0x366d3101
- (void)retriggerEvent:(id)event afterDelay:(float)delay;	// 0x366d302d
// converted property setter: - (void)setFocusedKeyControl:(id)control;	// 0x366d3271
- (BOOL)setFocusedPoint:(CGPoint)point;	// 0x366d3365
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x366d2c2d
@end


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
@property(retain) id focusedKeyControl;	// G=0x32a170bd; S=0x32a170f5; converted property
- (id)initWithMainKeysContainer:(id)mainKeysContainer actionKeysContainer:(id)container;	// 0x32a16985
- (BOOL)brEventAction:(id)action;	// 0x32a16b21
- (void)dealloc;	// 0x32a16a65
- (id)defaultKeyControl;	// 0x32a16ffd
// converted property getter: - (id)focusedKeyControl;	// 0x32a170bd
- (CGPoint)focusedPoint;	// 0x32a1714d
- (void)retriggerEvent:(id)event;	// 0x32a16f85
- (void)retriggerEvent:(id)event afterDelay:(float)delay;	// 0x32a16eb1
// converted property setter: - (void)setFocusedKeyControl:(id)control;	// 0x32a170f5
- (BOOL)setFocusedPoint:(CGPoint)point;	// 0x32a171e9
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x32a16ab1
@end


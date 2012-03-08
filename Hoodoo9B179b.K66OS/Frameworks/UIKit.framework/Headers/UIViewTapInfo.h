/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class UIView;

__attribute__((visibility("hidden")))
@interface UIViewTapInfo : NSObject {
@private
	id _delegate;	// 4 = 0x4
	UIView *_view;	// 8 = 0x8
	int _tapDownCount;	// 12 = 0xc
	int _fingerCount;	// 16 = 0x10
	float _multiTapDelay;	// 20 = 0x14
	float _rejectAsTapThrehold;	// 24 = 0x18
	float _viewTouchPauseThreshold;	// 28 = 0x1c
	CGPoint _startPosition;	// 32 = 0x20
	double _startTime;	// 40 = 0x28
	struct {
		unsigned shouldSendTouchPauseUp : 1;
		unsigned delegateViewHandleTapWithCountEvent : 1;
		unsigned delegateViewHandleTapWithCountEventFingerCount : 1;
		unsigned delegateViewHandleTouchPauseIsDown : 1;
		unsigned reserved : 28;
	} _tapInfoFlags;	// 48 = 0x30
}
- (id)initWithDelegate:(id)delegate view:(id)view;	// 0x3307d5a1
- (BOOL)_eventLocationConsideredMovement:(GSEventRef)movement;	// 0x3307dd19
- (void)_handleTapWithCount:(int)count event:(GSEventRef)event;	// 0x3307d871
- (void)_sendTouchPauseDownIfNecessary;	// 0x3307dab5
- (void)_sendTouchPauseUpIfNecessary;	// 0x3307db49
- (BOOL)cancelMouseTracking;	// 0x3307df99
- (void)clearTapState;	// 0x3307d651
- (void)handleDoubleTapEvent:(GSEventRef)event;	// 0x3307d981
- (void)handleSingleTapEvent:(GSEventRef)event;	// 0x3307d96d
- (void)mouseDown:(GSEventRef)down;	// 0x3307dbc1
- (void)mouseDragged:(GSEventRef)dragged;	// 0x3307dd95
- (void)mouseUp:(GSEventRef)up;	// 0x3307de19
- (void)releaseAndClearWeakRefs;	// 0x3307d5f9
- (void)scheduleSingleTapHandlerForEvent:(GSEventRef)event;	// 0x3307d995
- (void)setDelegate:(id)delegate;	// 0x3307d6b1
@end

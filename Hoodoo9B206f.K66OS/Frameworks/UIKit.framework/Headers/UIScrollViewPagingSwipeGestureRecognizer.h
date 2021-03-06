/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIGestureRecognizer.h"

@class UIDelayedAction;

__attribute__((visibility("hidden")))
@interface UIScrollViewPagingSwipeGestureRecognizer : UIGestureRecognizer {
@private
	UIDelayedAction *_swipeFailureDelay;	// 56 = 0x38
	CGPoint _startLocation;	// 60 = 0x3c
	CGPoint _lastLocation;	// 68 = 0x44
	double _lastTime;	// 76 = 0x4c
	int _directionalFailureCount;	// 84 = 0x54
}
- (void)_processNewLocation:(CGPoint)location;	// 0x356187e1
- (void)_resetGestureRecognizer;	// 0x3548dc0d
- (void)clearTimer;	// 0x3548db9d
- (void)dealloc;	// 0x3548ec6d
- (void)enoughTimeElapsed:(id)elapsed;	// 0x356187cd
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x3548da11
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x35618c35
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x35618ab1
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x35618a49
@end


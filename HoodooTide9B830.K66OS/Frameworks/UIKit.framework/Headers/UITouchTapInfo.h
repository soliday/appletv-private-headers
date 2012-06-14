/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"


__attribute__((visibility("hidden")))
@interface UITouchTapInfo : NSObject {
@private
	unsigned _tapCount;	// 4 = 0x4
	float _multiTapDelay;	// 8 = 0x8
	float _rejectAsTapThrehold;	// 12 = 0xc
	float _viewTouchPauseThreshold;	// 16 = 0x10
	CGPoint _startPosition;	// 20 = 0x14
	double _startTime;	// 28 = 0x1c
}
- (BOOL)_touchLocationConsideredMovement:(id)movement;	// 0x3024e7e1
- (BOOL)cancelTouchTracking;	// 0x3024e9c5
- (void)clearTapState;	// 0x3024e671
- (void)releaseAndClearWeakRefs;	// 0x3024e635
- (void)touchBegan:(id)began withEvent:(id)event;	// 0x3024e6c1
- (void)touchEnded:(id)ended withEvent:(id)event;	// 0x3024e8e5
- (void)touchMoved:(id)moved withEvent:(id)event;	// 0x3024e8a1
@end


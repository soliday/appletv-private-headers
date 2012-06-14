/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"

@class UITouch;

__attribute__((visibility("hidden")))
@interface UIGestureContext : NSObject {
@private
	CGPoint _startLocation;	// 4 = 0x4
	float _startTimestamp;	// 12 = 0xc
	CGPoint _currentLocation;	// 16 = 0x10
	UITouch *_touch;	// 24 = 0x18
	int _state;	// 28 = 0x1c
}
@property(assign, nonatomic) CGPoint currentLocation;	// G=0x3560b1a1; S=0x3560b1bd; @synthesize=_currentLocation
@property(assign, nonatomic) CGPoint startLocation;	// G=0x3560b171; S=0x3560b18d; @synthesize=_startLocation
@property(assign, nonatomic) float startTimestamp;	// G=0x3560b225; S=0x3560b235; @synthesize=_startTimestamp
@property(assign, nonatomic) int state;	// G=0x3560b205; S=0x3560b215; @synthesize=_state
@property(retain, nonatomic) UITouch *touch;	// G=0x3560b1d1; S=0x3560b1e1; @synthesize=_touch
- (id)initWithTouch:(id)touch inView:(id)view;	// 0x3560b089
// declared property getter: - (CGPoint)currentLocation;	// 0x3560b1a1
// declared property setter: - (void)setCurrentLocation:(CGPoint)location;	// 0x3560b1bd
// declared property setter: - (void)setStartLocation:(CGPoint)location;	// 0x3560b18d
// declared property setter: - (void)setStartTimestamp:(float)timestamp;	// 0x3560b235
// declared property setter: - (void)setState:(int)state;	// 0x3560b215
// declared property setter: - (void)setTouch:(id)touch;	// 0x3560b1e1
// declared property getter: - (CGPoint)startLocation;	// 0x3560b171
// declared property getter: - (float)startTimestamp;	// 0x3560b225
// declared property getter: - (int)state;	// 0x3560b205
// declared property getter: - (id)touch;	// 0x3560b1d1
@end


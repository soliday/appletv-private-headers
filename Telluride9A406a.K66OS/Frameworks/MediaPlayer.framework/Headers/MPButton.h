/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <UIButton.h> // Unknown library


@interface MPButton : UIButton {
	UIEdgeInsets _hitRectInsets;	// 140 = 0x8c
	double _holdDelayInterval;	// 156 = 0x9c
	unsigned _holding : 1;	// 164 = 0xa4
}
@property(assign, nonatomic) UIEdgeInsets hitRectInsets;	// G=0x31a031b5; S=0x31a031d9; @synthesize=_hitRectInsets
@property(assign, nonatomic) double holdDelayInterval;	// G=0x31a031f5; S=0x31a0320d; @synthesize=_holdDelayInterval
+ (id)easyTouchButtonWithType:(int)type;	// 0x31a02dfd
+ (float)easyTouchDefaultCharge;	// 0x31a02df1
+ (UIEdgeInsets)easyTouchDefaultHitRectInsets;	// 0x31a02de1
- (id)initWithFrame:(CGRect)frame;	// 0x31a02d91
- (void)_delayedTriggerHold;	// 0x31a03065
- (void)_handleTouchCancel;	// 0x31a030c5
- (void)_handleTouchDown;	// 0x31a03119
- (void)_handleTouchUp;	// 0x31a03161
- (BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x31a02eb9
- (void)cancelTrackingWithEvent:(id)event;	// 0x31a02f01
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x31a02f45
- (CGRect)hitRect;	// 0x31a02f8d
// declared property getter: - (UIEdgeInsets)hitRectInsets;	// 0x31a031b5
// declared property getter: - (double)holdDelayInterval;	// 0x31a031f5
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x31a03029
// declared property setter: - (void)setHitRectInsets:(UIEdgeInsets)insets;	// 0x31a031d9
// declared property setter: - (void)setHoldDelayInterval:(double)interval;	// 0x31a0320d
@end


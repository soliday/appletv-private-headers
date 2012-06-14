/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIGestureRecognizer.h"
#import "UIKit-Structs.h"

@class UIDelayedAction, UITouch;

__attribute__((visibility("hidden")))
@interface UIDragRecognizer : UIGestureRecognizer {
@private
	double _maximumDeviation;	// 56 = 0x38
	double _minimumDistance;	// 64 = 0x40
	CGPoint _startPosition;	// 72 = 0x48
	BOOL _restrictsToAngle;	// 80 = 0x50
	double _angle;	// 84 = 0x54
	UITouch *_touch;	// 92 = 0x5c
	UIDelayedAction *_tooSlow;	// 96 = 0x60
	double _startAngle;	// 100 = 0x64
}
@property(assign, nonatomic) double angle;	// G=0x302ebb55; S=0x302ebb6d; @synthesize=_angle
@property(assign, nonatomic) double maximumDeviation;	// G=0x302eba79; S=0x302eba91; @synthesize=_maximumDeviation
@property(assign, nonatomic) double minimumDistance;	// G=0x302ebad5; S=0x302ebaed; @synthesize=_minimumDistance
@property(assign, nonatomic) BOOL restrictsToAngle;	// G=0x302ebb35; S=0x302ebb45; @synthesize=_restrictsToAngle
@property(assign, nonatomic) double startAngle;	// G=0x302ebb81; S=0x302ebb99; @synthesize=_startAngle
@property(assign, nonatomic) CGPoint startPosition;	// G=0x302ebaa5; S=0x302ebac1; @synthesize=_startPosition
@property(retain, nonatomic) UITouch *touch;	// G=0x302ebb01; S=0x302ebb11; @synthesize=_touch
- (id)initWithTarget:(id)target action:(SEL)action;	// 0x302eb3b5
- (void)_resetGestureRecognizer;	// 0x302eb4c9
// declared property getter: - (double)angle;	// 0x302ebb55
- (void)clearTimer;	// 0x302eb51d
- (void)dealloc;	// 0x302eb475
// declared property getter: - (double)maximumDeviation;	// 0x302eba79
// declared property getter: - (double)minimumDistance;	// 0x302ebad5
// declared property getter: - (BOOL)restrictsToAngle;	// 0x302ebb35
// declared property setter: - (void)setAngle:(double)angle;	// 0x302ebb6d
// declared property setter: - (void)setMaximumDeviation:(double)deviation;	// 0x302eba91
// declared property setter: - (void)setMinimumDistance:(double)distance;	// 0x302ebaed
// declared property setter: - (void)setRestrictsToAngle:(BOOL)angle;	// 0x302ebb45
// declared property setter: - (void)setStartAngle:(double)angle;	// 0x302ebb99
// declared property setter: - (void)setStartPosition:(CGPoint)position;	// 0x302ebac1
// declared property setter: - (void)setTouch:(id)touch;	// 0x302ebb11
// declared property getter: - (double)startAngle;	// 0x302ebb81
// declared property getter: - (CGPoint)startPosition;	// 0x302ebaa5
- (void)tooSlow:(id)slow;	// 0x302eb55d
// declared property getter: - (id)touch;	// 0x302ebb01
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x302eb58d
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x302eba49
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x302eb9c5
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x302eb6a1
@end


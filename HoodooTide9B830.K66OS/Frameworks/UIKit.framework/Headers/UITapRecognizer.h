/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSCoding.h"
#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"

@class NSMutableArray, NSMutableSet, NSArray;
@protocol UITapRecognizerDelegate;

__attribute__((visibility("hidden")))
@interface UITapRecognizer : NSObject <NSCoding> {
@private
	unsigned _numberOfTouchesRequired;	// 4 = 0x4
	unsigned _numberOfTapsRequired;	// 8 = 0x8
	NSMutableSet *_activeTouches;	// 12 = 0xc
	int _currentNumberOfTouches;	// 16 = 0x10
	int _currentNumberOfTaps;	// 20 = 0x14
	CGPoint _location;	// 24 = 0x18
	CGPoint _startPoint;	// 32 = 0x20
	float _allowableMovement;	// 40 = 0x28
	double _maximumSingleTapDuration;	// 44 = 0x2c
	double _maximumIntervalBetweenSuccessiveTaps;	// 52 = 0x34
	NSMutableArray *_touches;	// 60 = 0x3c
	id _delegate;	// 64 = 0x40
	unsigned _timerOn : 1;	// 68 = 0x44
	unsigned _noNewTouches : 1;	// 68 = 0x44
}
@property(assign, nonatomic) float allowableMovement;	// G=0x302e1d29; S=0x3006547d; 
@property(assign, nonatomic) id<UITapRecognizerDelegate> delegate;	// G=0x302e1d61; S=0x30043985; @synthesize=_delegate
@property(assign, nonatomic) double maximumIntervalBetweenSuccessiveTaps;	// G=0x301908fd; S=0x30065449; 
@property(assign, nonatomic) double maximumSingleTapDuration;	// G=0x302e1d39; S=0x30065415; 
@property(assign, nonatomic) unsigned numberOfTapsRequired;	// G=0x3011b52d; S=0x300654ad; @synthesize=_numberOfTapsRequired
@property(assign, nonatomic) unsigned numberOfTouchesRequired;	// G=0x3011b359; S=0x300654dd; @synthesize=_numberOfTouchesRequired
@property(readonly, assign, nonatomic) NSArray *touches;	// G=0x302e1d51; @synthesize=_touches
- (id)init;	// 0x300652d1
- (id)initWithCoder:(id)coder;	// 0x302e19f9
- (CGPoint)_locationOnScreen;	// 0x30117edd
- (void)_reset;	// 0x301215e5
// declared property getter: - (float)allowableMovement;	// 0x302e1d29
- (void)clearTapTimer;	// 0x30043a09
- (void)dealloc;	// 0x30043995
// declared property getter: - (id)delegate;	// 0x302e1d61
- (void)encodeWithCoder:(id)coder;	// 0x302e1ba5
- (CGPoint)locationInView:(id)view;	// 0x3011a445
// declared property getter: - (double)maximumIntervalBetweenSuccessiveTaps;	// 0x301908fd
// declared property getter: - (double)maximumSingleTapDuration;	// 0x302e1d39
// declared property getter: - (unsigned)numberOfTapsRequired;	// 0x3011b52d
// declared property getter: - (unsigned)numberOfTouchesRequired;	// 0x3011b359
// declared property setter: - (void)setAllowableMovement:(float)movement;	// 0x3006547d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x30043985
// declared property setter: - (void)setMaximumIntervalBetweenSuccessiveTaps:(double)taps;	// 0x30065449
// declared property setter: - (void)setMaximumSingleTapDuration:(double)duration;	// 0x30065415
// declared property setter: - (void)setNumberOfTapsRequired:(unsigned)tapsRequired;	// 0x300654ad
// declared property setter: - (void)setNumberOfTouchesRequired:(unsigned)touchesRequired;	// 0x300654dd
- (void)startTapTimer:(double)timer;	// 0x30117e81
- (void)tooSlow:(id)slow;	// 0x30121d1d
// declared property getter: - (id)touches;	// 0x302e1d51
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x30117b31
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x302e1ce1
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x3011a2b1
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x3014b539
@end


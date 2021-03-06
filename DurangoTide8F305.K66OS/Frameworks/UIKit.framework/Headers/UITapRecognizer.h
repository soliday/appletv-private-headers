/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"

@class NSArray, NSMutableSet, NSMutableArray;
@protocol UITapRecognizerDelegate;

__attribute__((visibility("hidden")))
@interface UITapRecognizer : NSObject {
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
@property(assign, nonatomic) float allowableMovement;	// G=0x321c28d5; S=0x31fea0c9; 
@property(assign, nonatomic) id<UITapRecognizerDelegate> delegate;	// G=0x321c28f5; S=0x31fd6a29; @synthesize=_delegate
@property(assign, nonatomic) double maximumIntervalBetweenSuccessiveTaps;	// G=0x320c6179; S=0x31fea095; 
@property(assign, nonatomic) double maximumSingleTapDuration;	// G=0x321c28e5; S=0x31fea061; 
@property(assign, nonatomic) unsigned numberOfTapsRequired;	// G=0x32029031; S=0x31fd6a39; @synthesize=_numberOfTapsRequired
@property(assign, nonatomic) unsigned numberOfTouchesRequired;	// G=0x3204c2e9; S=0x31fea119; @synthesize=_numberOfTouchesRequired
@property(readonly, assign, nonatomic) NSArray *touches;	// G=0x321c2905; @synthesize=_touches
- (id)init;	// 0x31fd6925
- (CGPoint)_locationOnScreen;	// 0x32045679
- (void)_reset;	// 0x32028fa1
// declared property getter: - (float)allowableMovement;	// 0x321c28d5
- (void)clearTapTimer;	// 0x31fd9921
- (void)dealloc;	// 0x31fd98b9
// declared property getter: - (id)delegate;	// 0x321c28f5
- (CGPoint)locationInView:(id)view;	// 0x32045bb9
// declared property getter: - (double)maximumIntervalBetweenSuccessiveTaps;	// 0x320c6179
// declared property getter: - (double)maximumSingleTapDuration;	// 0x321c28e5
// declared property getter: - (unsigned)numberOfTapsRequired;	// 0x32029031
// declared property getter: - (unsigned)numberOfTouchesRequired;	// 0x3204c2e9
// declared property setter: - (void)setAllowableMovement:(float)movement;	// 0x31fea0c9
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x31fd6a29
// declared property setter: - (void)setMaximumIntervalBetweenSuccessiveTaps:(double)taps;	// 0x31fea095
// declared property setter: - (void)setMaximumSingleTapDuration:(double)duration;	// 0x31fea061
// declared property setter: - (void)setNumberOfTapsRequired:(unsigned)tapsRequired;	// 0x31fd6a39
// declared property setter: - (void)setNumberOfTouchesRequired:(unsigned)touchesRequired;	// 0x31fea119
- (void)startTapTimer:(double)timer;	// 0x32045625
- (void)tooSlow:(id)slow;	// 0x32059d11
// declared property getter: - (id)touches;	// 0x321c2905
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x320452fd
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x32097c89
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x32045a41
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x320c08fd
@end


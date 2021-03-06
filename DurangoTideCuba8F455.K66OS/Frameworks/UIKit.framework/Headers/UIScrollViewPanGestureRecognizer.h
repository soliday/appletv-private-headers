/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIPanGestureRecognizer.h"

@class UIScrollView;

__attribute__((visibility("hidden")))
@interface UIScrollViewPanGestureRecognizer : UIPanGestureRecognizer {
@private
	UIScrollView *_scrollView;	// 116 = 0x74
	CGPoint _lastTrueScreenLocation;	// 120 = 0x78
	unsigned _directionalLockEnabled : 1;	// 128 = 0x80
	unsigned _lockVertical : 1;	// 128 = 0x80
	unsigned _lockHorizontal : 1;	// 128 = 0x80
	unsigned _wasLockedVertical : 1;	// 128 = 0x80
	unsigned _wasLockedHorizontal : 1;	// 128 = 0x80
	unsigned _hasChildScrollView : 1;	// 128 = 0x80
	unsigned _hasParentScrollView : 1;	// 128 = 0x80
	CGPoint _reconsideredLockingLocation;	// 132 = 0x84
}
@property(assign, nonatomic, getter=isDirectionalLockEnabled) BOOL directionalLockEnabled;	// G=0x3011a4ad; S=0x300c5be5; 
@property(assign, nonatomic) UIScrollView *scrollView;	// G=0x301186b9; S=0x300c5c1d; @synthesize=_scrollView
- (id)initWithTarget:(id)target action:(SEL)action;	// 0x300c5a69
- (void)_centroidMovedTo:(CGPoint)to atTime:(double)time;	// 0x3011a02d
- (float)_hysteresis;	// 0x3011ae49
- (void)_resetGestureRecognizer;	// 0x3011e849
- (void)_scrollViewDidEndZooming;	// 0x301cbc29
- (BOOL)_shouldTryToBeginWithEvent:(id)event;	// 0x3011a939
- (void)_touchesListChangedFrom:(id)from to:(id)to;	// 0x301cb919
// declared property getter: - (BOOL)isDirectionalLockEnabled;	// 0x3011a4ad
// declared property getter: - (id)scrollView;	// 0x301186b9
// declared property setter: - (void)setDirectionalLockEnabled:(BOOL)enabled;	// 0x300c5be5
// declared property setter: - (void)setScrollView:(id)view;	// 0x300c5c1d
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x30118319
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x30199b31
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x30119cc9
@end


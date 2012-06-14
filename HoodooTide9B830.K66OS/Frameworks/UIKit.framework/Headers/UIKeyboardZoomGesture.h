/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIGestureRecognizer.h"
#import "UIKit-Structs.h"


__attribute__((visibility("hidden")))
@interface UIKeyboardZoomGesture : UIGestureRecognizer {
@private
	BOOL _waiting;	// 55 = 0x37
	int _zoomType;	// 56 = 0x38
	float _initialDistance;	// 60 = 0x3c
	double _maximumWaitForMultitouch;	// 64 = 0x40
	double _maximumWaitForMovement;	// 72 = 0x48
}
@property(assign, nonatomic) double maximumWaitForMovement;	// G=0x3032795d; S=0x30327975; @synthesize=_maximumWaitForMovement
@property(assign, nonatomic) double maximumWaitForMultitouch;	// G=0x30327931; S=0x30327949; @synthesize=_maximumWaitForMultitouch
@property(assign, nonatomic) int zoomType;	// G=0x30327911; S=0x30327921; @synthesize=_zoomType
- (id)initWithTarget:(id)target action:(SEL)action;	// 0x30327231
- (void)_resetGestureRecognizer;	// 0x303272a1
- (float)averageDistanceForTouches:(id)touches;	// 0x303277bd
- (CGPoint)centroidForTouches:(id)touches;	// 0x30327649
- (void)clearTimers;	// 0x303275b1
- (void)failAfterDelay:(double)delay;	// 0x30327601
// declared property getter: - (double)maximumWaitForMovement;	// 0x3032795d
// declared property getter: - (double)maximumWaitForMultitouch;	// 0x30327931
// declared property setter: - (void)setMaximumWaitForMovement:(double)movement;	// 0x30327975
// declared property setter: - (void)setMaximumWaitForMultitouch:(double)multitouch;	// 0x30327949
// declared property setter: - (void)setZoomType:(int)type;	// 0x30327921
- (void)tooSlow:(id)slow;	// 0x3032759d
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x303272e1
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x3032756d
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x303274a9
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x30327395
// declared property getter: - (int)zoomType;	// 0x30327911
@end


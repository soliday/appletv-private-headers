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
	BOOL _waiting;	// 59 = 0x3b
	int _zoomType;	// 60 = 0x3c
	float _initialDistance;	// 64 = 0x40
	double _maximumWaitForMultitouch;	// 68 = 0x44
	double _maximumWaitForMovement;	// 76 = 0x4c
}
@property(assign, nonatomic) double maximumWaitForMovement;	// G=0x32204779; S=0x32204789; @synthesize=_maximumWaitForMovement
@property(assign, nonatomic) double maximumWaitForMultitouch;	// G=0x3220479d; S=0x322047ad; @synthesize=_maximumWaitForMultitouch
@property(assign, nonatomic) int zoomType;	// G=0x322047c1; S=0x322047d1; @synthesize=_zoomType
- (id)initWithTarget:(id)target action:(SEL)action;	// 0x32204b39
- (void)_resetGestureRecognizer;	// 0x32204afd
- (float)averageDistanceForTouches:(id)touches;	// 0x32204ce5
- (CGPoint)centroidForTouches:(id)touches;	// 0x32204b9d
- (void)clearTimers;	// 0x3220481d
- (void)failAfterDelay:(double)delay;	// 0x322047e1
// declared property getter: - (double)maximumWaitForMovement;	// 0x32204779
// declared property getter: - (double)maximumWaitForMultitouch;	// 0x3220479d
// declared property setter: - (void)setMaximumWaitForMovement:(double)movement;	// 0x32204789
// declared property setter: - (void)setMaximumWaitForMultitouch:(double)multitouch;	// 0x322047ad
// declared property setter: - (void)setZoomType:(int)type;	// 0x322047d1
- (void)tooSlow:(id)slow;	// 0x32204871
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x32204a61
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x32204889
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x322048b1
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x32204965
// declared property getter: - (int)zoomType;	// 0x322047c1
@end

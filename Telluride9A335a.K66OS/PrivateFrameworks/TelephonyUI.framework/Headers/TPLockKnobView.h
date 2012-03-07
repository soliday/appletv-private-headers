/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import "TelephonyUI-Structs.h"
#import <UIImageView.h> // Unknown library

@class TPBottomLockBar, UIAlphaAnimation;

@interface TPLockKnobView : UIImageView {
	TPBottomLockBar *_track;	// 52 = 0x34
	UIAlphaAnimation *_animation;	// 56 = 0x38
	float _centerDelta;	// 60 = 0x3c
	BOOL _tracking;	// 64 = 0x40
}
- (id)initWithImage:(id)image;	// 0x32a43a89
- (void)beginTracking:(id)tracking;	// 0x32a43e41
- (void)dealloc;	// 0x32a44005
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x32a44031
- (void)setLockView:(id)view;	// 0x32a42619
- (BOOL)shouldBeginTracking:(id)tracking;	// 0x32a43f61
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x32a428cd
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x32a42905
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x32a43ad1
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x32a43ba1
@end

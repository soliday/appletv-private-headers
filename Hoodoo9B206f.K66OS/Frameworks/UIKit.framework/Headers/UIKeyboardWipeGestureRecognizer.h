/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIGestureRecognizer.h"
#import "UIKit-Structs.h"

@class UITouch, NSMutableArray;

__attribute__((visibility("hidden")))
@interface UIKeyboardWipeGestureRecognizer : UIGestureRecognizer {
@private
	NSMutableArray *_endPoints;	// 56 = 0x38
	UITouch *candidateEndpoint;	// 60 = 0x3c
}
@property(retain, nonatomic) UITouch *candidateEndpoint;	// G=0x3567a641; S=0x3567a651; @synthesize
- (id)initWithTarget:(id)target action:(SEL)action;	// 0x3567a05d
// declared property getter: - (id)candidateEndpoint;	// 0x3567a641
- (void)dealloc;	// 0x3567a0c9
- (void)reset;	// 0x3567a605
- (BOOL)segmentsLookLikeAWipe:(id)wipe;	// 0x3567a115
// declared property setter: - (void)setCandidateEndpoint:(id)endpoint;	// 0x3567a651
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x3567a359
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x3567a5f1
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x3567a5dd
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x3567a3a1
@end


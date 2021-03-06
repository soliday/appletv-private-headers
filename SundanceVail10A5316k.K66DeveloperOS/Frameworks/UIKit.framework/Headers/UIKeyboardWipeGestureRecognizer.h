/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIGestureRecognizer.h"

@class UITouch, NSMutableArray;

__attribute__((visibility("hidden")))
@interface UIKeyboardWipeGestureRecognizer : UIGestureRecognizer {
@private
	NSMutableArray *_endPoints;	// 56 = 0x38
	UITouch *candidateEndpoint;	// 60 = 0x3c
}
@property(retain, nonatomic) UITouch *candidateEndpoint;	// G=0x303e6cfd; S=0x303e6d0d; @synthesize
- (id)initWithTarget:(id)target action:(SEL)action;	// 0x303e672d
// declared property getter: - (id)candidateEndpoint;	// 0x303e6cfd
- (void)dealloc;	// 0x303e6799
- (void)reset;	// 0x303e6cc1
- (BOOL)segmentsLookLikeAWipe:(id)wipe;	// 0x303e67e5
// declared property setter: - (void)setCandidateEndpoint:(id)endpoint;	// 0x303e6d0d
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x303e6a2d
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x303e6cad
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x303e6c99
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x303e6a75
@end


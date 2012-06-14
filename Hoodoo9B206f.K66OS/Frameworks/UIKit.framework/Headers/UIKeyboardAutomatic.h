/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKeyboard.h"


__attribute__((visibility("hidden")))
@interface UIKeyboardAutomatic : UIKeyboard {
@private
	BOOL showsCandidateBar;	// 64 = 0x40
	BOOL showsCandidateInline;	// 65 = 0x41
}
@property(assign, nonatomic) BOOL showsCandidateBar;	// G=0x356291f9; S=0x35629209; @synthesize
@property(assign, nonatomic) BOOL showsCandidateInline;	// G=0x35629219; S=0x35629229; @synthesize
- (id)initWithFrame:(CGRect)frame;	// 0x353f0bcd
- (BOOL)_isAutomaticKeyboard;	// 0x354850ad
- (void)activate;	// 0x353fe715
- (void)dealloc;	// 0x35628851
- (void)didSuspend:(id)suspend;	// 0x35629155
- (UIPeripheralAnimationGeometry)geometryForHeightDelta:(float)heightDelta;	// 0x35628915
- (void)implBoundsHeightChangeDone:(float)done suppressNotification:(BOOL)notification;	// 0x35628c45
- (BOOL)isActive;	// 0x353fdde1
- (void)maximize;	// 0x356288e1
- (void)minimize;	// 0x356288ad
- (void)prepareForImplBoundsHeightChange:(float)implBoundsHeightChange suppressNotification:(BOOL)notification;	// 0x35628b75
// declared property setter: - (void)setShowsCandidateBar:(BOOL)bar;	// 0x35629209
// declared property setter: - (void)setShowsCandidateInline:(BOOL)anInline;	// 0x35629229
// declared property getter: - (BOOL)showsCandidateBar;	// 0x356291f9
// declared property getter: - (BOOL)showsCandidateInline;	// 0x35629219
- (void)willResume:(id)resume;	// 0x35628e2d
@end


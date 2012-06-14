/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRTableView.h"

@class BRImageControl;

__attribute__((visibility("hidden")))
@interface ATVFlagstaffLineScore : BRTableView {
@private
	BRImageControl *_leftFadeImageControl;	// 72 = 0x48
	BRImageControl *_rightFadeImageControl;	// 76 = 0x4c
	BOOL _leftFadeOn;	// 80 = 0x50
	BOOL _rightFadeOn;	// 81 = 0x51
}
@property(assign, nonatomic) BOOL leftFadeOn;	// G=0x36617215; S=0x36617075; @synthesize=_leftFadeOn
@property(assign, nonatomic) BOOL rightFadeOn;	// G=0x36617225; S=0x366170b1; @synthesize=_rightFadeOn
- (id)init;	// 0x36616eb1
- (void)dealloc;	// 0x36617015
- (void)layoutSubcontrols;	// 0x366170ed
// declared property getter: - (BOOL)leftFadeOn;	// 0x36617215
// declared property getter: - (BOOL)rightFadeOn;	// 0x36617225
// declared property setter: - (void)setLeftFadeOn:(BOOL)on;	// 0x36617075
// declared property setter: - (void)setRightFadeOn:(BOOL)on;	// 0x366170b1
@end

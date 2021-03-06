/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"

@class BRWaitSpinnerControl, BRTextControl;

__attribute__((visibility("hidden")))
@interface ATVAirTunesConnectionControl : BRControl {
@private
	BRControl *_background;	// 48 = 0x30
	BRWaitSpinnerControl *_spinner;	// 52 = 0x34
	BRTextControl *_text;	// 56 = 0x38
}
- (id)init;	// 0x330b74a1
- (void)dealloc;	// 0x330b75e5
- (void)layoutSubcontrols;	// 0x330b76a5
- (void)setStatus:(id)status;	// 0x330b7659
@end


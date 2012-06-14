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
- (id)init;	// 0x3654bfe5
- (void)dealloc;	// 0x3654c129
- (void)layoutSubcontrols;	// 0x3654c1e9
- (void)setStatus:(id)status;	// 0x3654c19d
@end


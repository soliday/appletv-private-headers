/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"

@class ATVThunderLineScoreView, ATVThunderGameCourtView;

__attribute__((visibility("hidden")))
@interface ATVThunderGamePreviewControl : BRControl {
@private
	ATVThunderLineScoreView *_lineScore;	// 48 = 0x30
	ATVThunderGameCourtView *_gameCourt;	// 52 = 0x34
}
- (id)initWithDictionary:(id)dictionary;	// 0x329354e1
- (id)accessibilityLabel;	// 0x329357b5
- (void)dealloc;	// 0x329355e9
- (void)layoutSubcontrols;	// 0x32935649
@end


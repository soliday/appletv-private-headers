/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"

@class BRAsyncImageControl, BRTextControl;

__attribute__((visibility("hidden")))
@interface ATVThunderPlayerCardView : BRControl {
@private
	BRAsyncImageControl *_background;	// 48 = 0x30
	BRAsyncImageControl *_playerImage;	// 52 = 0x34
	BRTextControl *_playerNumber;	// 56 = 0x38
	BRTextControl *_playerName;	// 60 = 0x3c
}
- (id)initWithDictionary:(id)dictionary;	// 0x35d5c3ad
- (id)accessibilityLabel;	// 0x35d5cab1
- (void)dealloc;	// 0x35d5c811
- (void)layoutSubcontrols;	// 0x35d5c899
@end

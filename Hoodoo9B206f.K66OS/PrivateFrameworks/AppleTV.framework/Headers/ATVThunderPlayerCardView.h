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
- (id)initWithDictionary:(id)dictionary;	// 0x365f3dbd
- (id)accessibilityLabel;	// 0x365f44c1
- (void)dealloc;	// 0x365f4221
- (void)layoutSubcontrols;	// 0x365f42a9
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"

@class AVPlayerItem, NSMutableDictionary, BRTextControl;

@interface ATVPlayerEventDisplayControl : BRControl {
@private
	NSMutableDictionary *_textAttrs;	// 48 = 0x30
	BRTextControl *_displayText;	// 52 = 0x34
	AVPlayerItem *_playerItem;	// 56 = 0x38
}
+ (void)hidePlaybackEventPopup;	// 0x366372e1
+ (void)showPlaybackEventPopup:(id)popup;	// 0x366371b9
- (id)initWithPlayerItem:(id)playerItem;	// 0x36637321
- (void)_readableBitRate:(double *)rate andUnitsString:(id *)string forBitsPerSecond:(double)bitsPerSecond;	// 0x36637995
- (void)_readableBitRate:(double *)rate andUnitsString:(id *)string forBytes:(double)bytes andDuration:(double)duration;	// 0x36637961
- (void)dealloc;	// 0x36637421
- (void)layoutSubcontrols;	// 0x36637481
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRHeaderControl, BRImageControl;

@interface BRImageWithHeaderControl : BRControl {
@private
	BRHeaderControl *_header;	// 48 = 0x30
	BRImageControl *_image;	// 52 = 0x34
}
+ (id)controlWithTitle:(id)title andImage:(id)image;	// 0x367f0221
- (id)init;	// 0x367f0299
- (id)accessibilityLabel;	// 0x367f0651
- (id)accessibilityScreenContent;	// 0x367f0671
- (void)dealloc;	// 0x367f0381
- (BOOL)isAccessibilityElement;	// 0x367f064d
- (void)layoutSubcontrols;	// 0x367f048d
- (void)setImage:(id)image;	// 0x367f0451
- (void)setTitle:(id)title;	// 0x367f03e1
@end


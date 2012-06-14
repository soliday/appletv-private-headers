/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIControl.h"
#import "UIKit-Structs.h"

@class UIKeyboardEmojiImageView, UIKeyboardEmoji;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiView : UIControl {
@private
	UIKeyboardEmoji *_emoji;	// 72 = 0x48
	UIView *_popup;	// 76 = 0x4c
	UIKeyboardEmojiImageView *_imageView;	// 80 = 0x50
}
@property(retain) UIKeyboardEmoji *emoji;	// G=0x302b1bb1; S=0x302b1bc5; @synthesize=_emoji
@property(retain) UIKeyboardEmojiImageView *imageView;	// G=0x302b1c21; S=0x302b1c35; @synthesize=_imageView
@property(retain) UIView *popup;	// G=0x302b1be9; S=0x302b1bfd; @synthesize=_popup
+ (id)emojiViewForEmoji:(id)emoji withFrame:(CGRect)frame;	// 0x302b1ac9
+ (void)recycleEmojiView:(id)view;	// 0x302b1a71
- (id)initWithFrame:(CGRect)frame emoji:(id)emoji;	// 0x302b122d
- (id)createAndInstallKeyPopupView;	// 0x302b13a1
- (void)dealloc;	// 0x302b1335
// declared property getter: - (id)emoji;	// 0x302b1bb1
// declared property getter: - (id)imageView;	// 0x302b1c21
// declared property getter: - (id)popup;	// 0x302b1be9
// declared property setter: - (void)setEmoji:(id)emoji;	// 0x302b1bc5
- (void)setEmoji:(id)emoji withFrame:(CGRect)frame;	// 0x302b19a1
// declared property setter: - (void)setImageView:(id)view;	// 0x302b1c35
// declared property setter: - (void)setPopup:(id)popup;	// 0x302b1bfd
- (void)uninstallPopup;	// 0x302b1955
@end


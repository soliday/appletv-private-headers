/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIColor;

__attribute__((visibility("hidden")))
@interface UITextFieldBackgroundView : UIView {
@private
	BOOL _active;	// 46 = 0x2e
	float _progress;	// 48 = 0x30
	UIColor *_tintColor;	// 52 = 0x34
}
@property(retain, nonatomic) UIColor *tintColor;	// G=0x30248e45; S=0x300c16d5; @synthesize=_tintColor
- (id)initWithFrame:(CGRect)frame active:(BOOL)active;	// 0x300c119d
- (void)_updateImages;	// 0x30248cd9
- (void)dealloc;	// 0x30248cdd
- (void)setActive:(BOOL)active;	// 0x300c4819
- (void)setBounds:(CGRect)bounds;	// 0x30248d29
- (void)setFrame:(CGRect)frame;	// 0x300c1231
- (void)setProgress:(float)progress;	// 0x30248de1
// declared property setter: - (void)setTintColor:(id)color;	// 0x300c16d5
// declared property getter: - (id)tintColor;	// 0x30248e45
@end


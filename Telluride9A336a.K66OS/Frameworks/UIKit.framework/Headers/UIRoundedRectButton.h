/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIButton.h"

@class UIBezierPath, UIColor;

__attribute__((visibility("hidden")))
@interface UIRoundedRectButton : UIButton {
@private
	UIBezierPath *_fillPath;	// 140 = 0x8c
	UIColor *_fillColor;	// 144 = 0x90
	UIColor *_tintColor;	// 148 = 0x94
}
@property(retain) UIColor *tintColor;	// G=0x35320641; S=0x353205d1; converted property
- (id)initWithFrame:(CGRect)frame;	// 0x35320531
- (id)initWithFrame:(CGRect)frame fillColor:(id)color;	// 0x351e1e91
- (void)_commonRoundedRectButtonInit;	// 0x351e1f99
- (void)_invalidatePaths;	// 0x351e1f65
- (int)buttonType;	// 0x353205cd
- (void)dealloc;	// 0x351f1a7d
- (void)drawRect:(CGRect)rect;	// 0x351e7bc5
- (void)setFrame:(CGRect)frame;	// 0x351e1f01
- (void)setHighlighted:(BOOL)highlighted;	// 0x351e8295
// converted property setter: - (void)setTintColor:(id)color;	// 0x353205d1
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3532055d
// converted property getter: - (id)tintColor;	// 0x35320641
@end


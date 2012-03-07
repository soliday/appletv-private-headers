/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITableCell.h"

@class UIImageView, UITextLabel;

@interface UIImageAndTextTableCell : UITableCell {
	UITextLabel *_titleTextLabel;	// 64 = 0x40
	UIImageView *_iconImageView;	// 68 = 0x44
}
@property(assign) int alignment;	// G=0x33b5396d; S=0x33b53955; converted property
@property(readonly, retain) UIImageView *iconImageView;	// G=0x33b538a9; converted property
@property(retain) id image;	// G=0x33b53769; S=0x33b5362d; converted property
@property(retain) id title;	// G=0x33b5360d; S=0x33b535c9; converted property
@property(readonly, retain) UITextLabel *titleTextLabel;	// G=0x33b53401; converted property
+ (id)defaultTitleFont;	// 0x33b533dd
- (id)_getTitleColor;	// 0x33b53789
- (id)_scriptingInfo;	// 0x33b53d5d
// converted property getter: - (int)alignment;	// 0x33b5396d
- (void)dealloc;	// 0x33b5337d
// converted property getter: - (id)iconImageView;	// 0x33b538a9
- (CGPoint)iconInset;	// 0x33b53945
// converted property getter: - (id)image;	// 0x33b53769
- (void)layoutSubviews;	// 0x33b53981
// converted property setter: - (void)setAlignment:(int)alignment;	// 0x33b53955
// converted property setter: - (void)setImage:(id)image;	// 0x33b5362d
// converted property setter: - (void)setTitle:(id)title;	// 0x33b535c9
- (void)setUserInteractionEnabled:(BOOL)enabled;	// 0x33b53809
- (CGPoint)textInset;	// 0x33b53935
// converted property getter: - (id)title;	// 0x33b5360d
// converted property getter: - (id)titleTextLabel;	// 0x33b53401
- (void)updateHighlightColors;	// 0x33b537a5
@end

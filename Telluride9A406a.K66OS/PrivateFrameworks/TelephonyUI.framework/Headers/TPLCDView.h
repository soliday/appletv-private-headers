/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import "TelephonyUI-Structs.h"
#import "TPLCDBar.h"

@class UIView, TPLCDSubImageView, TPLCDTextView;

@interface TPLCDView : TPLCDBar {
	UIView *_contentView;	// 56 = 0x38
	TPLCDTextView *_textView;	// 60 = 0x3c
	TPLCDTextView *_secondLineTextView;	// 64 = 0x40
	TPLCDTextView *_labelView;	// 68 = 0x44
	TPLCDSubImageView *_imageView;	// 72 = 0x48
	unsigned _layoutAsLabelled : 1;	// 76 = 0x4c
}
@property(retain) id label;	// G=0x36016c39; S=0x36016c25; converted property
@property(retain) id secondLineText;	// G=0x36016a35; S=0x360177ad; converted property
@property(retain) id subImage;	// G=0x36016f51; S=0x36016e35; converted property
@property(retain) id text;	// G=0x36016681; S=0x360179fd; converted property
+ (float)labelFontSize;	// 0x36016519
+ (float)textFontSize;	// 0x36016511
- (id)initWithDefaultSizeForOrientation:(int)orientation;	// 0x36017425
- (CGRect)_imageViewFrame;	// 0x36017911
- (CGRect)_labelFrame;	// 0x36016a55
- (float)_labelVInset;	// 0x36017bbd
- (void)_resetContentViewFrame;	// 0x36016569
- (CGRect)_text1Frame;	// 0x360166e5
- (CGRect)_text2Frame;	// 0x360168d5
- (float)_textVInset;	// 0x36017b69
- (void)blinkLabel;	// 0x36016c59
- (void)dealloc;	// 0x36017c0d
- (void)didFinishAnimatingLCDLabelFadeOut:(id)anOut finished:(id)finished context:(id)context;	// 0x36016bf5
- (CGRect)fullSizedContentViewFrame;	// 0x36017071
// converted property getter: - (id)label;	// 0x36016c39
- (void)layoutSubviews;	// 0x36017151
// converted property getter: - (id)secondLineText;	// 0x36016a35
- (void)setContentsAlpha:(float)alpha;	// 0x36016629
// converted property setter: - (void)setLabel:(id)label;	// 0x36016c25
- (void)setLabel:(id)label animate:(BOOL)animate;	// 0x360174fd
- (void)setLayoutAsLabelled:(BOOL)labelled;	// 0x36016fc9
// converted property setter: - (void)setSecondLineText:(id)text;	// 0x360177ad
- (void)setShadowColor:(id)color;	// 0x36016f71
// converted property setter: - (void)setSubImage:(id)image;	// 0x36016e35
// converted property setter: - (void)setText:(id)text;	// 0x360179fd
- (BOOL)shouldCenterContentView;	// 0x360165d5
- (BOOL)shouldCenterText;	// 0x36016521
- (BOOL)showImageViewOnLeftSide;	// 0x3601654d
// converted property getter: - (id)subImage;	// 0x36016f51
// converted property getter: - (id)text;	// 0x36016681
- (CGRect)textFrame;	// 0x36016551
@end


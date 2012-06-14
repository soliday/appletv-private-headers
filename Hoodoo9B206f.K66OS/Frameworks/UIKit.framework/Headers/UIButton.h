/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UIControl.h"

@class UIImageView, UIColor, UIImage, UIFont, NSString, UILabel;

@interface UIButton : UIControl <NSCoding> {
@private
	CFDictionaryRef _contentLookup;	// 72 = 0x48
	UIEdgeInsets _contentEdgeInsets;	// 76 = 0x4c
	UIEdgeInsets _titleEdgeInsets;	// 92 = 0x5c
	UIEdgeInsets _imageEdgeInsets;	// 108 = 0x6c
	UIImageView *_backgroundView;	// 124 = 0x7c
	UIImageView *_imageView;	// 128 = 0x80
	UILabel *_titleView;	// 132 = 0x84
	BOOL _initialized;	// 136 = 0x88
	struct {
		unsigned reversesTitleShadowWhenHighlighted : 1;
		unsigned adjustsImageWhenHighlighted : 1;
		unsigned adjustsImageWhenDisabled : 1;
		unsigned autosizeToFit : 1;
		unsigned disabledDimsImage : 1;
		unsigned showsTouchWhenHighlighted : 1;
		unsigned buttonType : 8;
		unsigned shouldHandleScrollerMouseEvent : 1;
	} _buttonFlags;	// 137 = 0x89
}
@property(assign, nonatomic) BOOL adjustsImageWhenDisabled;	// G=0x353e74d5; S=0x3535be59; @dynamic
@property(assign, nonatomic) BOOL adjustsImageWhenHighlighted;	// G=0x353e74c1; S=0x3535bdfd; @dynamic
@property(assign) BOOL autosizesToFit;	// G=0x35323141; S=0x3535d1cd; converted property
@property(readonly, assign, nonatomic) int buttonType;	// G=0x355763fd; 
@property(assign, nonatomic) UIEdgeInsets contentEdgeInsets;	// G=0x35323de1; S=0x3535cd9d; @dynamic
@property(readonly, assign, nonatomic) UIImage *currentBackgroundImage;	// G=0x355764e5; 
@property(readonly, assign, nonatomic) UIImage *currentImage;	// G=0x353cfa35; 
@property(readonly, assign, nonatomic) NSString *currentTitle;	// G=0x353cf9e5; 
@property(readonly, assign, nonatomic) UIColor *currentTitleColor;	// G=0x35576445; 
@property(readonly, assign, nonatomic) UIColor *currentTitleShadowColor;	// G=0x35576495; 
@property(retain, nonatomic) UIFont *font;	// G=0x35433af5; S=0x3537a50d; 
@property(assign, nonatomic) UIEdgeInsets imageEdgeInsets;	// G=0x353243ed; S=0x3535d7b1; @dynamic
@property(readonly, assign, nonatomic) UIImageView *imageView;	// G=0x3543ec21; 
@property(assign, nonatomic) int lineBreakMode;	// G=0x3557653d; S=0x3557654d; 
@property(assign, nonatomic) BOOL reversesTitleShadowWhenHighlighted;	// G=0x35576411; S=0x353e19e1; @dynamic
@property(assign, nonatomic) BOOL showsTouchWhenHighlighted;	// G=0x3547b4d1; S=0x353a7de1; 
@property(retain, nonatomic) UIColor *tintColor;	// G=0x35576535; S=0x35576539; 
@property(retain) id title;	// G=0x35576a31; S=0x35576a35; converted property
@property(assign, nonatomic) UIEdgeInsets titleEdgeInsets;	// G=0x3532e5cd; S=0x3535ba9d; @dynamic
@property(readonly, assign, nonatomic) UILabel *titleLabel;	// G=0x353ced71; 
@property(assign, nonatomic) CGSize titleShadowOffset;	// G=0x3557655d; S=0x3537a621; 
+ (id)_defaultContentForType:(int)type andState:(unsigned)state;	// 0x353d0361
+ (id)_defaultNormalTitleColor;	// 0x353536cd
+ (id)_defaultNormalTitleShadowColor;	// 0x35353885
+ (id)buttonWithType:(int)type;	// 0x353cfe9d
- (id)initWithCoder:(id)coder;	// 0x35575af5
- (id)initWithFrame:(CGRect)frame;	// 0x35353435
- (BOOL)_alwaysHandleScrollerMouseEvent;	// 0x3557657d
- (id)_archivableContent:(id *)content;	// 0x35576bc1
- (id)_backgroundForState:(unsigned)state usesBackgroundForNormalState:(BOOL *)normalState;	// 0x35323e81
- (id)_backgroundView;	// 0x353e1b99
- (int)_buttonType;	// 0x35439bc1
- (BOOL)_canHaveTitle;	// 0x353cedc9
- (id)_contentForState:(unsigned)state;	// 0x353230ed
- (id)_font;	// 0x353d5755
- (id)_imageForState:(unsigned)state usesImageForNormalState:(BOOL *)normalState;	// 0x35323ee9
- (id)_imageView;	// 0x35441ea1
- (int)_lineBreakMode;	// 0x353d57a1
- (void)_populateArchivedSubviews:(id)subviews;	// 0x35575e9d
- (id)_scriptingInfo;	// 0x3544f935
- (void)_setBackground:(id)background forStates:(unsigned)states;	// 0x3535ca85
- (void)_setButtonType:(int)type;	// 0x353d0411
- (void)_setContent:(id)content forState:(unsigned)state;	// 0x353537fd
- (void)_setFont:(id)font;	// 0x3535b59d
- (void)_setImage:(id)image forStates:(unsigned)states;	// 0x35353c3d
- (void)_setLineBreakMode:(int)mode;	// 0x35433aad
- (void)_setShadowColor:(id)color forStates:(unsigned)states;	// 0x35353925
- (void)_setShouldHandleScrollerMouseEvent:(BOOL)_set;	// 0x3547ff39
- (void)_setTitle:(id)title forStates:(unsigned)states;	// 0x3535bc69
- (void)_setTitleColor:(id)color forStates:(unsigned)states;	// 0x353536e9
- (void)_setTitleShadowOffset:(CGSize)offset;	// 0x3535bb89
- (id)_setupBackgroundView;	// 0x3535d565
- (void)_setupImageView;	// 0x35323f51
- (void)_setupTitleView;	// 0x3532def9
- (id)_shadowColorForState:(unsigned)state;	// 0x3532e1fd
- (void)_takeContentFromArchivableContent:(id)archivableContent overrides:(id)overrides;	// 0x35576e51
- (void)_titleAttributesChanged;	// 0x3535ba55
- (id)_titleColorForState:(unsigned)state;	// 0x3532e135
- (id)_titleForState:(unsigned)state;	// 0x35324411
- (CGSize)_titleShadowOffset;	// 0x355769f5
- (id)_titleView;	// 0x35441e91
// declared property getter: - (BOOL)adjustsImageWhenDisabled;	// 0x353e74d5
// declared property getter: - (BOOL)adjustsImageWhenHighlighted;	// 0x353e74c1
// converted property getter: - (BOOL)autosizesToFit;	// 0x35323141
- (id)backgroundImageForState:(unsigned)state;	// 0x3535e011
- (CGRect)backgroundRectForBounds:(CGRect)bounds;	// 0x3535d669
// declared property getter: - (int)buttonType;	// 0x355763fd
// declared property getter: - (UIEdgeInsets)contentEdgeInsets;	// 0x35323de1
- (CGRect)contentRectForBounds:(CGRect)bounds;	// 0x35323d51
- (void)crossfadeAnimationDidStop:(id)crossfadeAnimation finished:(id)finished context:(void *)context;	// 0x35576919
- (void)crossfadeToImage:(id)image forState:(unsigned)state;	// 0x355765b5
// declared property getter: - (id)currentBackgroundImage;	// 0x355764e5
// declared property getter: - (id)currentImage;	// 0x353cfa35
// declared property getter: - (id)currentTitle;	// 0x353cf9e5
// declared property getter: - (id)currentTitleColor;	// 0x35576445
// declared property getter: - (id)currentTitleShadowColor;	// 0x35576495
- (void)dealloc;	// 0x35374c25
- (unsigned long long)defaultAccessibilityTraits;	// 0x35595455
- (void)encodeWithCoder:(id)coder;	// 0x35575f4d
// declared property getter: - (id)font;	// 0x35433af5
- (id)image;	// 0x35576a39
// declared property getter: - (UIEdgeInsets)imageEdgeInsets;	// 0x353243ed
- (id)imageForState:(unsigned)state;	// 0x35326761
- (CGRect)imageRectForContentRect:(CGRect)contentRect;	// 0x353240c1
// declared property getter: - (id)imageView;	// 0x3543ec21
- (BOOL)isAccessibilityElementByDefault;	// 0x35595451
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x35595495
- (void)layoutSubviews;	// 0x35323761
// declared property getter: - (int)lineBreakMode;	// 0x3557653d
- (CGPoint)pressFeedbackPosition;	// 0x35326661
// declared property getter: - (BOOL)reversesTitleShadowWhenHighlighted;	// 0x35576411
// declared property setter: - (void)setAdjustsImageWhenDisabled:(BOOL)disabled;	// 0x3535be59
// declared property setter: - (void)setAdjustsImageWhenHighlighted:(BOOL)highlighted;	// 0x3535bdfd
// converted property setter: - (void)setAutosizesToFit:(BOOL)fit;	// 0x3535d1cd
- (void)setBackgroundImage:(id)image forState:(unsigned)state;	// 0x3537a3dd
- (void)setBackgroundImage:(id)image forStates:(unsigned)states;	// 0x3535ca2d
- (void)setBounds:(CGRect)bounds;	// 0x3535d709
// declared property setter: - (void)setContentEdgeInsets:(UIEdgeInsets)insets;	// 0x3535cd9d
- (void)setContentHorizontalAlignment:(int)alignment;	// 0x3535bd7d
- (void)setDisabledDimsImage:(BOOL)image;	// 0x3535beb5
- (void)setEnabled:(BOOL)enabled;	// 0x353327d5
// declared property setter: - (void)setFont:(id)font;	// 0x3537a50d
- (void)setFrame:(CGRect)frame;	// 0x35353615
- (void)setHighlighted:(BOOL)highlighted;	// 0x3536a805
- (void)setImage:(id)image forState:(unsigned)state;	// 0x35323155
- (void)setImage:(id)image forStates:(unsigned)states;	// 0x35353be5
// declared property setter: - (void)setImageEdgeInsets:(UIEdgeInsets)insets;	// 0x3535d7b1
// declared property setter: - (void)setLineBreakMode:(int)mode;	// 0x3557654d
// declared property setter: - (void)setReversesTitleShadowWhenHighlighted:(BOOL)highlighted;	// 0x353e19e1
- (void)setSelected:(BOOL)selected;	// 0x354812a5
- (void)setShowPressFeedback:(BOOL)feedback;	// 0x3547a535
// declared property setter: - (void)setShowsTouchWhenHighlighted:(BOOL)highlighted;	// 0x353a7de1
// declared property setter: - (void)setTintColor:(id)color;	// 0x35576539
// converted property setter: - (void)setTitle:(id)title;	// 0x35576a35
- (void)setTitle:(id)title forState:(unsigned)state;	// 0x35322fbd
- (void)setTitle:(id)title forStates:(unsigned)states;	// 0x3535bc11
- (void)setTitleColor:(id)color forState:(unsigned)state;	// 0x3535cf51
- (void)setTitleColor:(id)color forStates:(unsigned)states;	// 0x35433a7d
// declared property setter: - (void)setTitleEdgeInsets:(UIEdgeInsets)insets;	// 0x3535ba9d
- (void)setTitleShadowColor:(id)color forState:(unsigned)state;	// 0x3537a51d
- (void)setTitleShadowColor:(id)color forStates:(unsigned)states;	// 0x3535bb59
// declared property setter: - (void)setTitleShadowOffset:(CGSize)offset;	// 0x3537a621
// declared property getter: - (BOOL)showsTouchWhenHighlighted;	// 0x3547b4d1
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x35353d51
// declared property getter: - (id)tintColor;	// 0x35576535
// converted property getter: - (id)title;	// 0x35576a31
- (id)titleColorForState:(unsigned)state;	// 0x35576425
// declared property getter: - (UIEdgeInsets)titleEdgeInsets;	// 0x3532e5cd
- (id)titleForState:(unsigned)state;	// 0x3535d555
// declared property getter: - (id)titleLabel;	// 0x353ced71
- (CGRect)titleRectForContentRect:(CGRect)contentRect;	// 0x3532e2a5
- (id)titleShadowColorForState:(unsigned)state;	// 0x35576435
// declared property getter: - (CGSize)titleShadowOffset;	// 0x3557655d
@end


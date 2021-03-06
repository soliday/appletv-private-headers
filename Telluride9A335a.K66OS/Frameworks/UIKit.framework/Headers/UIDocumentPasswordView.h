/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITextFieldDelegate.h"
#import "UIView.h"

@class UIImageView, UITextField, UILabel;
@protocol UIDocumentPasswordViewDelegate;

__attribute__((visibility("hidden")))
@interface UIDocumentPasswordView : UIView <UITextFieldDelegate> {
@private
	UIImageView *_iconView;	// 48 = 0x30
	UITextField *_passwordTextField;	// 52 = 0x34
	UILabel *_label;	// 56 = 0x38
	UILabel *_errorLabel;	// 60 = 0x3c
	NSObject<UIDocumentPasswordViewDelegate> *passwordDelegate;	// 64 = 0x40
}
@property(assign, nonatomic) NSObject<UIDocumentPasswordViewDelegate> *passwordDelegate;	// G=0x33d34289; S=0x33d34299; @synthesize
@property(readonly, assign, nonatomic) UITextField *passwordField;	// G=0x33d342a9; @synthesize=_passwordTextField
- (id)initWithDocumentName:(id)documentName;	// 0x33d3391d
- (CGRect)_iconRectForWidth:(float)width;	// 0x33d33e4d
- (void)_passwordEntered:(id)entered;	// 0x33d3423d
- (void)dealloc;	// 0x33d33da1
- (void)drawRect:(CGRect)rect;	// 0x33d34079
- (void)layoutSubviews;	// 0x33d33f21
// declared property getter: - (id)passwordDelegate;	// 0x33d34289
// declared property getter: - (id)passwordField;	// 0x33d342a9
// declared property setter: - (void)setPasswordDelegate:(id)delegate;	// 0x33d34299
- (void)textFieldDidBeginEditing:(id)textField;	// 0x33d34195
- (void)textFieldDidEndEditing:(id)textField;	// 0x33d341e9
@end


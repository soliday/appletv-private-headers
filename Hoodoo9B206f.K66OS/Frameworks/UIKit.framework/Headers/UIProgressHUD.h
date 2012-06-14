/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImageView, UIProgressIndicator, UILabel, UIWindow;

@interface UIProgressHUD : UIView {
	UIProgressIndicator *_progressIndicator;	// 48 = 0x30
	UILabel *_progressMessage;	// 52 = 0x34
	UIImageView *_doneView;	// 56 = 0x38
	UIWindow *_parentWindow;	// 60 = 0x3c
	struct {
		unsigned isShowing : 1;
		unsigned isShowingText : 1;
		unsigned fixedFrame : 1;
		unsigned reserved : 30;
	} _progressHUDFlags;	// 64 = 0x40
}
- (id)initWithFrame:(CGRect)frame;	// 0x3551ccbd
- (id)initWithWindow:(id)window;	// 0x3551d791
- (id)_progressIndicator;	// 0x3551ccad
- (void)dealloc;	// 0x3551d6ad
- (void)done;	// 0x3551d5e1
- (void)drawRect:(CGRect)rect;	// 0x3551d04d
- (void)hide;	// 0x3551d591
- (void)layoutSubviews;	// 0x3551d101
- (void)setFontSize:(int)size;	// 0x3551cfed
- (void)setShowsText:(BOOL)text;	// 0x3551cf91
- (void)setText:(id)text;	// 0x3551cf35
- (void)show:(BOOL)show;	// 0x3551d7d1
- (void)showInView:(id)view;	// 0x3551d541
@end


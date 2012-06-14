/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UIAlertView;

@interface UITwoSidedAlertController : NSObject {
	UIAlertView *_front;	// 4 = 0x4
	UIAlertView *_back;	// 8 = 0x8
	UIAlertView *_currentAlert;	// 12 = 0xc
	id _delegate;	// 16 = 0x10
}
- (void)alertSheet:(id)sheet buttonClicked:(int)clicked;	// 0x3036a011
- (void)alertViewCancel:(id)cancel;	// 0x3036a089
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x30369fd1
- (id)backAlert;	// 0x30369b05
- (void)backAlertClickedButtonAtIndex:(int)index;	// 0x3036a001
- (id)createBackAlert;	// 0x30369ba9
- (id)createFrontAlert;	// 0x30369b51
- (void)dealloc;	// 0x30369a19
- (void)dismiss;	// 0x30369c41
- (void)flip;	// 0x30369cc9
- (id)frontAlert;	// 0x30369ab9
- (void)frontAlertClickedButtonAtIndex:(int)index;	// 0x30369ff1
- (void)setDelegate:(id)delegate;	// 0x30369aa9
- (void)show;	// 0x30369c01
@end


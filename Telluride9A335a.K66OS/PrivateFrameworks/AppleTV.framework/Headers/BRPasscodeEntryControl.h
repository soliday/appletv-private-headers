/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRTextField.h"
#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRDeviceKeyboardMessage, BRPasscodeSelectionLayer;
@protocol BRTextFieldDelegate;

@interface BRPasscodeEntryControl : BRControl <BRTextField> {
@private
	BRPasscodeSelectionLayer *_passcodeLayer;	// 48 = 0x30
	unsigned _numDigits;	// 52 = 0x34
	BOOL _isUserEditable;	// 56 = 0x38
	CGSize _passcodeLayerSize;	// 60 = 0x3c
	BRDeviceKeyboardMessage *_deviceKeyboardMessage;	// 68 = 0x44
	id<BRTextFieldDelegate> _textFieldDelegate;	// 72 = 0x48
}
- (id)initWithNumDigits:(unsigned)numDigits userEditable:(BOOL)editable hideDigits:(BOOL)digits;	// 0x34241f85
- (void)_handlePlayPauseButton:(id)button;	// 0x34242969
- (void)_layoutUI;	// 0x342429d9
- (void)_shakeAnimationCompleted:(id)completed;	// 0x342424ed
- (id)accessibilityLabel;	// 0x34243031
- (id)accessibilityTraits;	// 0x34242fad
- (BOOL)brEventAction:(id)action;	// 0x34242545
- (void)controlWasFocused;	// 0x34242829
- (void)controlWasUnfocused;	// 0x342428ad
- (void)dealloc;	// 0x342420ed
- (void)deviceKeyboardClose;	// 0x34242a1d
- (void)deviceKeyboardMessageHandler:(id)handler;	// 0x34242bb9
- (void)deviceKeyboardUpdate:(BOOL)update;	// 0x34242a9d
- (BOOL)isAccessibilityElement;	// 0x34242fa9
- (CGSize)preferredSizeFromScreenSize:(CGSize)screenSize;	// 0x3424217d
- (void)reset;	// 0x3424224d
- (void)setDelegate:(id)delegate;	// 0x3424221d
- (void)setFrame:(CGRect)frame;	// 0x342424fd
- (void)setInitialPasscode:(id)passcode;	// 0x3424222d
- (void)setKeyboardTitle:(id)title;	// 0x342428ed
- (void)setString:(id)string;	// 0x34242949
- (void)shake;	// 0x342422ed
- (id)stringValue;	// 0x34242929
- (float)widthOfDigitsFromScreenSize:(CGSize)screenSize;	// 0x342421fd
@end


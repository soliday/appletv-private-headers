/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRKeyboard.h"

@class BRWaitSpinnerControl;

__attribute__((visibility("hidden")))
@interface BRKeyboardRomanSquare : BRKeyboard {
@private
	BRWaitSpinnerControl *_spinner;	// 48 = 0x30
}
- (id)_keyboardDataFileName;	// 0x32a0ea45
- (float)_mainKeysVerticalSpacing;	// 0x32a0ea75
- (int)_numberOfMainKeyRows;	// 0x32a0ea71
- (float)_preferredGlyphHeight:(id)height;	// 0x32a0ea69
- (float)_preferredGlyphWidth:(id)width;	// 0x32a0ea61
- (id)_spinner;	// 0x32a0ee7d
- (long)_startingIndexOfActionKeysInKeyRowData;	// 0x32a0ee79
- (id)actionDictionaryForKeyControl:(id)keyControl;	// 0x32a0e955
- (id)attributesForTextFieldLabel;	// 0x32a0e92d
- (BOOL)canShowLanguageSwitchButton;	// 0x32a0e951
- (id)customizedTextEntryFieldControls;	// 0x32a0e8ad
- (void)customizedTextFieldControlsWereRemoved;	// 0x32a0e901
- (void)dealloc;	// 0x32a0e7e1
- (CGRect)spinnerFrame;	// 0x32a0ed79
- (void)startSpinning;	// 0x32a0e82d
- (void)stopSpinning;	// 0x32a0e86d
- (CGRect)tabControlFrame;	// 0x32a0ec41
- (CGRect)textFieldFrame;	// 0x32a0ea7d
@end


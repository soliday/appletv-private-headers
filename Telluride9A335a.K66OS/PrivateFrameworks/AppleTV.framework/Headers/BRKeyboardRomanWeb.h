/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRKeyboard.h"
#import "AppleTV-Structs.h"

@class BRImageControl, BRButtonControl;

__attribute__((visibility("hidden")))
@interface BRKeyboardRomanWeb : BRKeyboard {
@private
	BRButtonControl *_previousButton;	// 48 = 0x30
	BRButtonControl *_nextButton;	// 52 = 0x34
	BRButtonControl *_autoFillButton;	// 56 = 0x38
	BRButtonControl *_clearButton;	// 60 = 0x3c
	BRImageControl *_rowDividerImageControl;	// 64 = 0x40
}
- (id)init;	// 0x34222df1
- (void)_autoFillButtonClick:(id)click;	// 0x34223a61
- (void)_generateKeyEventWithCharacters:(id)characters;	// 0x3422390d
- (id)_keyboardDataFileName;	// 0x34222f41
- (float)_mainKeysVerticalSpacing;	// 0x34223905
- (void)_nextButtonClick:(id)click;	// 0x34223a15
- (int)_numberOfMainKeyRows;	// 0x34223901
- (float)_preferredGlyphHeight:(id)height;	// 0x34222f65
- (float)_preferredGlyphWidth:(id)width;	// 0x34222f5d
- (void)_prevousButtonClick:(id)click;	// 0x342239cd
- (BOOL)canShowLanguageSwitchButton;	// 0x342238f9
- (BOOL)canWrapVertically;	// 0x34223805
- (id)customizeTextEntryControls:(id)controls;	// 0x34222f6d
- (void)dealloc;	// 0x34222e4d
- (int)mapVisualIndex:(int)index toRow:(id)row;	// 0x34222ef9
- (id)name;	// 0x34222ee9
- (BOOL)popupKeyboardShouldBeRightAlignedForKey:(id)popupKeyboard;	// 0x34223809
- (void)removeCustomizedTextEntryControls:(id)controls;	// 0x34223721
- (BOOL)requiresTextFieldLabel;	// 0x342238fd
@end

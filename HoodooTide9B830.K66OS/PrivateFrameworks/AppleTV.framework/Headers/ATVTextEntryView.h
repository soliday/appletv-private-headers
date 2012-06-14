/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class ATVTextEntryTextControl, BRTextFieldControl, BRCursorControl, BRTextEntryControl, BRTextFieldBackgroundLayer, BRHeaderControl, BRTextControl, BRImageControl;

@interface ATVTextEntryView : BRControl {
@private
	BRTextEntryControl *_editor;	// 48 = 0x30
	XXStruct_qlg9jA _maxFootnoteTextHeight;	// 52 = 0x34
	BRHeaderControl *_headerControl;	// 56 = 0x38
	BRTextFieldControl *_textField;	// 60 = 0x3c
	BRImageControl *_verticalDividerImage;	// 64 = 0x40
	BRTextFieldBackgroundLayer *_textFieldBackground;	// 68 = 0x44
	BRTextControl *_label;	// 72 = 0x48
	ATVTextEntryTextControl *_submitButton;	// 76 = 0x4c
	BRTextControl *_supplementaryText;	// 80 = 0x50
	BRTextControl *_footnoteText;	// 84 = 0x54
	BRCursorControl *_cursor;	// 88 = 0x58
	BOOL _cursorNavigatedFromEditor;	// 92 = 0x5c
}
@property(retain, nonatomic) BRCursorControl *_cursor;	// G=0x32b33f71; S=0x32b33f81; @synthesize
@property(assign, nonatomic) BOOL _cursorNavigatedFromEditor;	// G=0x32b33fa5; S=0x32b33fb5; @synthesize
@property(retain, nonatomic) BRTextControl *_footnoteText;	// G=0x32b33f3d; S=0x32b33f4d; @synthesize
@property(retain, nonatomic) BRTextControl *_label;	// G=0x32b33ea1; S=0x32b33eb1; @synthesize
@property(retain, nonatomic) ATVTextEntryTextControl *_submitButton;	// G=0x32b33ed5; S=0x32b33ee5; @synthesize
@property(retain, nonatomic) BRTextControl *_supplementaryText;	// G=0x32b33f09; S=0x32b33f19; @synthesize
@property(retain, nonatomic) BRTextFieldControl *_textField;	// G=0x32b33e05; S=0x32b33e15; @synthesize
@property(retain, nonatomic) BRTextFieldBackgroundLayer *_textFieldBackground;	// G=0x32b33e6d; S=0x32b33e7d; @synthesize
@property(retain, nonatomic) BRImageControl *_verticalDividerImage;	// G=0x32b33e39; S=0x32b33e49; @synthesize
@property(retain, nonatomic) BRTextEntryControl *editor;	// G=0x32b33d95; S=0x32b33da5; @synthesize=_editor
@property(retain, nonatomic) BRHeaderControl *headerControl;	// G=0x32b33df5; S=0x32b32e4d; @synthesize=_headerControl
@property(assign, nonatomic) XXStruct_qlg9jA maxFootnoteTextHeight;	// G=0x32b33dc9; S=0x32b33de5; @synthesize=_maxFootnoteTextHeight
- (id)initWithTextEntryStyle:(int)textEntryStyle;	// 0x32b32749
- (void)_addCursor;	// 0x32b3407d
// declared property getter: - (id)_cursor;	// 0x32b33f71
// declared property getter: - (BOOL)_cursorNavigatedFromEditor;	// 0x32b33fa5
// declared property getter: - (id)_footnoteText;	// 0x32b33f3d
- (void)_historyItemSelected:(id)selected;	// 0x32b33fc5
// declared property getter: - (id)_label;	// 0x32b33ea1
- (void)_removeCursor;	// 0x32b34121
// declared property getter: - (id)_submitButton;	// 0x32b33ed5
- (void)_submitButtonClick;	// 0x32b34055
// declared property getter: - (id)_supplementaryText;	// 0x32b33f09
- (void)_switchFocusToSubmitButton;	// 0x32b33fd5
// declared property getter: - (id)_textField;	// 0x32b33e05
// declared property getter: - (id)_textFieldBackground;	// 0x32b33e6d
// declared property getter: - (id)_verticalDividerImage;	// 0x32b33e39
- (id)accessibilityLabel;	// 0x32b33d29
- (id)accessibilityScreenContent;	// 0x32b33d6d
- (BOOL)brEventAction:(id)action;	// 0x32b333bd
- (void)controlWasActivated;	// 0x32b3330d
- (void)dealloc;	// 0x32b32d1d
// declared property getter: - (id)editor;	// 0x32b33d95
// declared property getter: - (id)headerControl;	// 0x32b33df5
- (void)layoutSubcontrols;	// 0x32b335ed
// declared property getter: - (XXStruct_qlg9jA)maxFootnoteTextHeight;	// 0x32b33dc9
// declared property setter: - (void)setEditor:(id)editor;	// 0x32b33da5
- (void)setFootnoteText:(id)text withAttributes:(id)attributes;	// 0x32b3313d
// declared property setter: - (void)setHeaderControl:(id)control;	// 0x32b32e4d
- (void)setInitialText:(id)text;	// 0x32b332bd
- (void)setLabel:(id)label;	// 0x32b32ecd
// declared property setter: - (void)setMaxFootnoteTextHeight:(XXStruct_qlg9jA)height;	// 0x32b33de5
- (void)setSupplementaryText:(id)text;	// 0x32b3300d
// declared property setter: - (void)set_cursor:(id)cursor;	// 0x32b33f81
// declared property setter: - (void)set_cursorNavigatedFromEditor:(BOOL)editor;	// 0x32b33fb5
// declared property setter: - (void)set_footnoteText:(id)text;	// 0x32b33f4d
// declared property setter: - (void)set_label:(id)label;	// 0x32b33eb1
// declared property setter: - (void)set_submitButton:(id)button;	// 0x32b33ee5
// declared property setter: - (void)set_supplementaryText:(id)text;	// 0x32b33f19
// declared property setter: - (void)set_textField:(id)field;	// 0x32b33e15
// declared property setter: - (void)set_textFieldBackground:(id)background;	// 0x32b33e7d
// declared property setter: - (void)set_verticalDividerImage:(id)image;	// 0x32b33e49
@end

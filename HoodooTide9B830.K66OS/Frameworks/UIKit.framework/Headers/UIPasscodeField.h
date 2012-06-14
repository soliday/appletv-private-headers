/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITextFieldDelegate.h"
#import "UIView.h"

@class UIButton, NSMutableArray, NSMutableString;

@interface UIPasscodeField : UIView <UITextFieldDelegate> {
	NSMutableString *_value;	// 48 = 0x30
	NSMutableArray *_entryFields;	// 52 = 0x34
	NSMutableArray *_entryBackgrounds;	// 56 = 0x38
	UIButton *_okButton;	// 60 = 0x3c
	BOOL _opaqueBackground;	// 64 = 0x40
	BOOL _centerHorizontally;	// 65 = 0x41
	int _keyboardType;	// 68 = 0x44
	int _keyboardAppearance;	// 72 = 0x48
	int _emptyContentReturnKeyType;	// 76 = 0x4c
	id _delegate;	// 80 = 0x50
}
@property(assign) int numberOfEntryFields;	// G=0x302482ad; S=0x3024897d; converted property
@property(assign) BOOL showsOKButton;	// G=0x30247c49; S=0x30247c61; converted property
@property(retain) id stringValue;	// G=0x300355f1; S=0x30040ddd; converted property
+ (float)defaultHeight;	// 0x302479f5
+ (Class)textFieldClass;	// 0x30247a45
- (id)initWithFrame:(CGRect)frame;	// 0x30247a61
- (void)_textDidChange;	// 0x30248aa1
- (void)_updateFields;	// 0x300356ed
- (void)appendString:(id)string;	// 0x30035629
- (BOOL)becomeFirstResponder;	// 0x302489c1
- (BOOL)canBecomeFirstResponder;	// 0x30248991
- (void)dealloc;	// 0x30247b91
- (void)deleteLastCharacter;	// 0x30248255
- (id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;	// 0x30248c89
- (BOOL)isFirstResponder;	// 0x30248a19
// converted property getter: - (int)numberOfEntryFields;	// 0x302482ad
- (void)okButtonClicked:(id)clicked;	// 0x30248c41
- (void)setDelegate:(id)delegate;	// 0x30248a91
- (void)setKeyboardType:(int)type;	// 0x30247b29
- (void)setKeyboardType:(int)type appearance:(int)appearance;	// 0x30247b3d
- (void)setKeyboardType:(int)type appearance:(int)appearance emptyContentReturnKeyType:(int)type3;	// 0x30247b61
// converted property setter: - (void)setNumberOfEntryFields:(int)entryFields;	// 0x3024897d
- (void)setNumberOfEntryFields:(int)entryFields opaqueBackground:(BOOL)background;	// 0x302482cd
// converted property setter: - (void)setShowsOKButton:(BOOL)button;	// 0x30247c61
// converted property setter: - (void)setStringValue:(id)value;	// 0x30040ddd
- (void)setTextCentersHorizontally:(BOOL)horizontally;	// 0x302481f5
// converted property getter: - (BOOL)showsOKButton;	// 0x30247c49
// converted property getter: - (id)stringValue;	// 0x300355f1
- (BOOL)textField:(id)field shouldInsertText:(id)text replacingRange:(NSRange)range;	// 0x30248ba5
- (void)textFieldDidResignFirstResponder:(id)textField;	// 0x30248c01
- (BOOL)textFieldShouldStartEditing:(id)textField;	// 0x30248bfd
@end


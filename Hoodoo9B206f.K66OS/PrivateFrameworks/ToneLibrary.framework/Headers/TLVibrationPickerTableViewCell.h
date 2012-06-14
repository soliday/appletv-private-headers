/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import "UITextFieldDelegate.h"
#import <UITableViewCell.h> // Unknown library
#import "ToneLibrary-Structs.h"

@class UITextField, NSString;
@protocol TLVibrationPickerTableViewCellDelegate;

@interface TLVibrationPickerTableViewCell : UITableViewCell <UITextFieldDelegate> {
	id<TLVibrationPickerTableViewCellDelegate> _delegate;	// 248 = 0xf8
	BOOL _editable;	// 252 = 0xfc
	UITextField *_removableTextField;	// 256 = 0x100
}
@property(readonly, assign, nonatomic, getter=_isDisplayingRemovableTextField) BOOL _displayingRemovableTextField;	// G=0x3159d4ad; 
@property(assign, nonatomic, getter=isChecked) BOOL checked;	// G=0x3159d3b5; S=0x3159d3d5; 
@property(assign, nonatomic) id<TLVibrationPickerTableViewCellDelegate> delegate;	// G=0x3159da05; S=0x3159da15; @synthesize=_delegate
@property(assign, nonatomic, getter=isEditable) BOOL editable;	// G=0x3159da25; S=0x3159d279; @synthesize=_editable
@property(retain, nonatomic) NSString *placeholder;	// G=0x3159d375; S=0x3159d395; 
@property(retain, nonatomic) NSString *text;	// G=0x3159d2b1; S=0x3159d311; 
- (id)initWithReuseIdentifier:(id)reuseIdentifier;	// 0x3159d131
// declared property getter: - (BOOL)_isDisplayingRemovableTextField;	// 0x3159d4ad
- (void)_layoutRemovableTextField;	// 0x3159d521
- (void)_makeRemovableTextFieldEditable:(BOOL)editable;	// 0x3159d7cd
- (void)dealloc;	// 0x3159d22d
// declared property getter: - (id)delegate;	// 0x3159da05
- (void)didTransitionToState:(unsigned)state;	// 0x3159d721
// declared property getter: - (BOOL)isChecked;	// 0x3159d3b5
// declared property getter: - (BOOL)isEditable;	// 0x3159da25
- (void)layoutSubviews;	// 0x3159d6e1
- (void)makeTextFieldResignFirstResponderIfNeeded;	// 0x3159d4dd
// declared property getter: - (id)placeholder;	// 0x3159d375
// declared property setter: - (void)setChecked:(BOOL)checked;	// 0x3159d3d5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3159da15
// declared property setter: - (void)setEditable:(BOOL)editable;	// 0x3159d279
// declared property setter: - (void)setPlaceholder:(id)placeholder;	// 0x3159d395
// declared property setter: - (void)setText:(id)text;	// 0x3159d311
// declared property getter: - (id)text;	// 0x3159d2b1
- (BOOL)textField:(id)field shouldChangeCharactersInRange:(NSRange)range replacementString:(id)string;	// 0x3159d91d
- (void)textFieldDidBeginEditing:(id)textField;	// 0x3159d969
- (void)textFieldDidEndEditing:(id)textField;	// 0x3159d989
- (BOOL)textFieldShouldReturn:(id)textField;	// 0x3159d94d
- (void)willTransitionToState:(unsigned)state;	// 0x3159d781
@end


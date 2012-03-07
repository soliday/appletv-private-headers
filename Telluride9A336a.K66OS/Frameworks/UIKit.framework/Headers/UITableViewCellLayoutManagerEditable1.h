/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITableViewCellLayoutManager.h"
#import "UITextFieldDelegate.h"


__attribute__((visibility("hidden")))
@interface UITableViewCellLayoutManagerEditable1 : UITableViewCellLayoutManager <UITextFieldDelegate> {
}
- (void)_textFieldEndEditing:(id)editing;	// 0x3523f0fd
- (void)_textFieldEndEditingOnReturn:(id)aReturn;	// 0x3537a37d
- (void)_textFieldStartEditing:(id)editing;	// 0x3523edb1
- (void)_textValueChanged:(id)changed;	// 0x3537a381
- (float)defaultTextFieldFontSizeForCell:(id)cell;	// 0x3537a1b5
- (id)detailTextLabelForCell:(id)cell;	// 0x3523e391
- (id)editableTextFieldForCell:(id)cell;	// 0x3523dfe5
- (void)layoutSubviewsOfCell:(id)cell;	// 0x3523e395
- (void)textFieldDidBeginEditing:(id)textField;	// 0x3537a25d
- (void)textFieldDidEndEditing:(id)textField;	// 0x3537a261
- (BOOL)textFieldShouldBeginEditing:(id)textField;	// 0x3537a375
- (BOOL)textFieldShouldReturn:(id)textField;	// 0x3537a379
- (id)textLabelForCell:(id)cell;	// 0x3537a1e1
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRMenuController.h"
#import "AppleTV-Structs.h"
#import "BRMenuListItemProvider.h"

@class NSMutableArray, NSDictionary, NSString;

@interface BROptionDialog : BRMenuController <BRMenuListItemProvider> {
@private
	NSString *_tag;	// 128 = 0x80
	int _currentSelection;	// 132 = 0x84
	NSDictionary *_userInfo;	// 136 = 0x88
	NSMutableArray *_options;	// 140 = 0x8c
	id _delegate;	// 144 = 0x90
	SEL _actionSelector;	// 148 = 0x94
}
@property(retain) NSString *tag;	// G=0x3667af69; S=0x3667af29; converted property
@property(retain) NSDictionary *userInfo;	// G=0x3667afb9; S=0x3667af79; converted property
- (id)init;	// 0x3667abfd
- (BOOL)_itemSelected:(id)selected;	// 0x3667b0f1
- (void)_setSelectedIndex:(long)index;	// 0x3667b1b9
- (void)addOptionText:(id)text;	// 0x3667ae01
- (void)addOptionText:(id)text isDefault:(BOOL)aDefault;	// 0x3667ae4d
- (void)dealloc;	// 0x3667ad1d
- (float)heightForRow:(long)row;	// 0x3667b031
- (long)itemCount;	// 0x3667b011
- (id)itemForRow:(long)row;	// 0x3667b081
- (float)listVerticalOffset;	// 0x3667afc9
- (BOOL)rowSelectable:(long)selectable;	// 0x3667b035
- (long)selectedIndex;	// 0x3667af19
- (id)selectedText;	// 0x3667aec5
- (void)setActionSelector:(SEL)selector target:(id)target;	// 0x3667ada9
// converted property setter: - (void)setTag:(id)tag;	// 0x3667af29
// converted property setter: - (void)setUserInfo:(id)info;	// 0x3667af79
// converted property getter: - (id)tag;	// 0x3667af69
- (id)titleForRow:(long)row;	// 0x3667b039
// converted property getter: - (id)userInfo;	// 0x3667afb9
@end


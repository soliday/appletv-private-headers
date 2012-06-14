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
@property(retain) NSString *tag;	// G=0x329beded; S=0x329bedad; converted property
@property(retain) NSDictionary *userInfo;	// G=0x329bee3d; S=0x329bedfd; converted property
- (id)init;	// 0x329bea81
- (BOOL)_itemSelected:(id)selected;	// 0x329bef75
- (void)_setSelectedIndex:(long)index;	// 0x329bf03d
- (void)addOptionText:(id)text;	// 0x329bec85
- (void)addOptionText:(id)text isDefault:(BOOL)aDefault;	// 0x329becd1
- (void)dealloc;	// 0x329beba1
- (float)heightForRow:(long)row;	// 0x329beeb5
- (long)itemCount;	// 0x329bee95
- (id)itemForRow:(long)row;	// 0x329bef05
- (float)listVerticalOffset;	// 0x329bee4d
- (BOOL)rowSelectable:(long)selectable;	// 0x329beeb9
- (long)selectedIndex;	// 0x329bed9d
- (id)selectedText;	// 0x329bed49
- (void)setActionSelector:(SEL)selector target:(id)target;	// 0x329bec2d
// converted property setter: - (void)setTag:(id)tag;	// 0x329bedad
// converted property setter: - (void)setUserInfo:(id)info;	// 0x329bedfd
// converted property getter: - (id)tag;	// 0x329beded
- (id)titleForRow:(long)row;	// 0x329beebd
// converted property getter: - (id)userInfo;	// 0x329bee3d
@end

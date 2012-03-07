/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRPanelControl.h"

@class NSArray, NSDictionary;

@interface BRTabControl : BRPanelControl {
@private
	int _selectedTabIndex;	// 76 = 0x4c
	float _scaledTextPadding;	// 80 = 0x50
	float _scaledPreferredHeight;	// 84 = 0x54
	int _tabBeingDeselected;	// 88 = 0x58
	id _tabControlDelegate;	// 92 = 0x5c
	NSArray *_greyImages;	// 96 = 0x60
	NSArray *_blackImages;	// 100 = 0x64
	NSArray *_blueImages;	// 104 = 0x68
	NSDictionary *_tabItemLabelAttributes;	// 108 = 0x6c
}
@property(assign) id tabControlDelegate;	// G=0x34214bc1; S=0x34214bd1; converted property
+ (id)fullSizeTabControl;	// 0x34214785
+ (id)menuTabControl;	// 0x3421484d
- (id)init;	// 0x34214915
- (id)_centerTabImagesFromImages:(id)images;	// 0x34215ced
- (void)_focusChanged:(id)changed;	// 0x34216329
- (id)_imagesForTabItem:(id)tabItem;	// 0x34215e19
- (id)_leftTabImagesFromImages:(id)images;	// 0x34215c3d
- (void)_loadTabImages;	// 0x34215839
- (id)_rightTabImagesFromImages:(id)images;	// 0x34215d75
- (void)_updateFocusNotifications;	// 0x3421628d
- (void)_updateTabItemNames:(int)names;	// 0x3421617d
- (id)accessibilityControls;	// 0x34215691
- (void)addTabItem:(id)item;	// 0x34214be1
- (void)addTabItems:(id)items;	// 0x34214c21
- (BOOL)brEventAction:(id)action;	// 0x34214aed
- (void)controlWasFocused;	// 0x34215529
- (void)controlWasUnfocused;	// 0x342155dd
- (void)dealloc;	// 0x342149d5
- (id)focusedControlForEvent:(id)event focusPoint:(CGPoint *)point;	// 0x342154ad
- (void)insertTabItem:(id)item atIndex:(int)index;	// 0x34214ea1
- (void)removeAllTabItems;	// 0x34215061
- (void)removeTabItem:(id)item;	// 0x34215075
- (void)selectNextTabItem;	// 0x34215431
- (void)selectPreviousTabItem;	// 0x342153d9
- (void)selectTabItem:(id)item;	// 0x342151d1
- (void)selectTabItemAtIndex:(int)index;	// 0x34215375
- (id)selectedTabItem;	// 0x34215185
- (int)selectedTabItemIndex;	// 0x342151c1
- (void)setScaledPreferredHeight:(float)height;	// 0x34214a9d
- (void)setScaledTextPadding:(float)padding;	// 0x34214a8d
// converted property setter: - (void)setTabControlDelegate:(id)delegate;	// 0x34214bd1
- (void)setTabItemLabelAttributes:(id)attributes;	// 0x34214aad
- (void)setTabItemNonSelectedImages:(id)images;	// 0x34215be1
- (void)setTabItemSelectedInFocusImages:(id)focusImages;	// 0x34215b29
- (void)setTabItemSelectedNonFocusedImages:(id)images;	// 0x34215b85
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x342156a1
// converted property getter: - (id)tabControlDelegate;	// 0x34214bc1
- (int)tabItemCount;	// 0x3421515d
- (id)tabItems;	// 0x34214e91
@end

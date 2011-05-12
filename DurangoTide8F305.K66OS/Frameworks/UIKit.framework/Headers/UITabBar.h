/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UITabBarItem, NSArray;
@protocol UITabBarDelegate;

@interface UITabBar : UIView {
@private
	UIView *_customizeView;	// 44 = 0x2c
	id<UITabBarDelegate> _delegate;	// 48 = 0x30
	NSArray *_items;	// 52 = 0x34
	UITabBarItem *_selectedItem;	// 56 = 0x38
	NSArray *_customizationItems;	// 60 = 0x3c
	struct {
		unsigned _firstTouchForView : 1;
		unsigned _isTap : 1;
		unsigned _isWarped : 1;
		unsigned _isDelayed : 1;
		unsigned _sentTouchesEnded : 1;
	} _tabBarFlags;	// 64 = 0x40
	NSArray *_buttonItems;	// 68 = 0x44
	CFArrayRef _hiddenItems;	// 72 = 0x48
	id _appearance;	// 76 = 0x4c
}
@property(retain) NSArray *buttonItems;	// G=0x3217ef49; S=0x3217f939; converted property
@property(assign, nonatomic) id<UITabBarDelegate> delegate;	// G=0x31ff3d91; S=0x31fe1bd1; @synthesize=_delegate
@property(copy, nonatomic) NSArray *items;	// G=0x31fe770d; S=0x3217fd85; 
@property(assign, getter=isLocked) BOOL locked;	// G=0x31fe1c29; S=0x31fe1b15; converted property
@property(assign, nonatomic) UITabBarItem *selectedItem;	// G=0x31fe7949; S=0x31fe7bf1; 
+ (float)_buttonGap;	// 0x3217ef59
+ (float)defaultHeightForBarSize:(int)barSize;	// 0x3217ef1d
- (id)initWithCoder:(id)coder;	// 0x3217fe3d
- (void)_adjustButtonSelection:(id)selection;	// 0x3206c835
- (void)_alertDidHide;	// 0x3217f8e9
- (void)_alertWillShow:(BOOL)_alert duration:(float)duration;	// 0x3218276d
- (id)_appearance;	// 0x31fe4be9
- (void)_buttonCancel:(id)cancel;	// 0x3217f875
- (void)_buttonDown:(id)down;	// 0x3206c77d
- (void)_buttonDownDelayed:(id)delayed;	// 0x3217f8a9
- (void)_buttonUp:(id)up;	// 0x3206c7c5
- (void)_configureTabBarReplacingItem:(id)item withNewItem:(id)newItem dragging:(BOOL)dragging swapping:(BOOL)swapping;	// 0x3217f551
- (void)_customizeDoneButtonAction:(id)action;	// 0x3217f85d
- (void)_customizeWithAvailableItems:(id)availableItems;	// 0x32184125
- (void)_dismissCustomizeSheet:(BOOL)sheet;	// 0x32183795
- (void)_finishCustomizeAnimation:(id)animation;	// 0x3217f715
- (void)_finishSetItems:(id)items finished:(id)finished context:(void *)context;	// 0x32181b0d
- (BOOL)_isHidden:(id)hidden;	// 0x3218271d
- (void)_populateArchivedSubviews:(id)subviews;	// 0x32181bc9
- (void)_positionTabBarButtons:(id)buttons ignoringItem:(id)item;	// 0x31fe5e09
- (void)_sendAction:(id)action withEvent:(id)event;	// 0x3206c97d
- (void)_setBackgroundImage:(id)image;	// 0x32180169
- (void)_setLabelFont:(id)font;	// 0x321800bd
- (void)_setLabelShadowColor:(id)color;	// 0x3217ff21
- (void)_setLabelShadowOffset:(CGSize)offset;	// 0x32183fdd
- (void)_setLabelTextColor:(id)color selectedTextColor:(id)color2;	// 0x3217ffcd
- (void)_setSelectionIndicatorImage:(id)image;	// 0x32181cbd
- (void)_tabBarFinishedAnimating;	// 0x3217fc09
- (void)beginCustomizingItems:(id)items;	// 0x3217fca1
// converted property getter: - (id)buttonItems;	// 0x3217ef49
- (void)dealloc;	// 0x32182591
// declared property getter: - (id)delegate;	// 0x31ff3d91
- (void)dismissCustomizeSheet:(BOOL)sheet;	// 0x3217fbe5
- (void)drawRect:(CGRect)rect;	// 0x31ff1e59
- (void)encodeWithCoder:(id)coder;	// 0x3217fd9d
- (BOOL)endCustomizingAnimated:(BOOL)animated;	// 0x3217fc2d
- (id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;	// 0x3217f4f1
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x3206c4b9
- (BOOL)isCustomizing;	// 0x3217ef09
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x3218c401
// converted property getter: - (BOOL)isLocked;	// 0x31fe1c29
// declared property getter: - (id)items;	// 0x31fe770d
- (void)layoutSubviews;	// 0x31fe8859
- (BOOL)onStateForButton:(int)button;	// 0x3217f99d
// declared property getter: - (id)selectedItem;	// 0x31fe7949
- (void)setBadgeAnimated:(BOOL)animated forButton:(int)button;	// 0x3217f9c1
- (void)setBadgeGlyph:(id)glyph forButton:(int)button;	// 0x3217fa0d
- (void)setBadgeValue:(id)value forButton:(int)button;	// 0x3217fa59
- (void)setBounds:(CGRect)bounds;	// 0x32183f35
// converted property setter: - (void)setButtonItems:(id)items;	// 0x3217f939
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x31fe1bd1
- (void)setFrame:(CGRect)frame;	// 0x31fe18a5
// declared property setter: - (void)setItems:(id)items;	// 0x3217fd85
- (void)setItems:(id)items animated:(BOOL)animated;	// 0x31fe4139
// converted property setter: - (void)setLocked:(BOOL)locked;	// 0x31fe1b15
- (void)setOnStateForButton:(BOOL)button forButton:(int)button2;	// 0x3217f975
// declared property setter: - (void)setSelectedItem:(id)item;	// 0x31fe7bf1
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x31fe1b45
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x3217fb95
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x3217faa5
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x3217faf5
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x3217fb45
@end

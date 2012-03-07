/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIColor, NSArray;

@interface UIToolbar : UIView {
@private
	id _delegate;	// 48 = 0x30
	NSArray *_items;	// 52 = 0x34
	UIColor *_tintColor;	// 56 = 0x38
	struct {
		unsigned barStyle : 2;
		unsigned mode : 2;
		unsigned alertShown : 1;
		unsigned wasEnabled : 1;
		unsigned downButtonSentAction : 1;
		unsigned isTranslucent : 1;
		unsigned forceTopBarAppearance : 1;
	} _toolbarFlags;	// 60 = 0x3c
	CFDictionaryRef _groups;	// 64 = 0x40
	NSArray *_buttonItems;	// 68 = 0x44
	int _currentButtonGroup;	// 72 = 0x48
	CFArrayRef _hiddenItems;	// 76 = 0x4c
	int _pressedTag;	// 80 = 0x50
	float _extraEdgeInsets;	// 84 = 0x54
	UIView *_backgroundView;	// 88 = 0x58
	id _appearanceStorage;	// 92 = 0x5c
}
@property(assign, nonatomic) int barStyle;	// G=0x35158e19; S=0x3515c68d; 
@property(retain) NSArray *buttonItems;	// G=0x352b07d9; S=0x352b07e9; converted property
@property(readonly, assign) int currentButtonGroup;	// G=0x351ff19d; converted property
@property(assign) id delegate;	// G=0x3517d905; S=0x3517d751; converted property
@property(assign) float extraEdgeInsets;	// G=0x352afa09; S=0x352af9f9; converted property
@property(copy, nonatomic) NSArray *items;	// G=0x351fed71; S=0x3517d761; 
@property(assign) int mode;	// G=0x3515af65; S=0x352afa19; converted property
@property(retain, nonatomic) UIColor *tintColor;	// G=0x351592b5; S=0x35162ec9; @synthesize=_tintColor
@property(assign, nonatomic, getter=isTranslucent) BOOL translucent;	// G=0x351680d5; S=0x35238e2d; 
+ (float)_buttonGap;	// 0x3515c1b9
+ (Class)defaultButtonClass;	// 0x352b00f5
+ (id)defaultButtonFont;	// 0x3517d915
+ (float)defaultHeight;	// 0x3516307d
+ (float)defaultHeightForBarSize:(int)barSize;	// 0x3515e549
+ (float)defaultSelectionModeHeight;	// 0x352b0111
+ (Class)defaultTextButtonClass;	// 0x35184b19
- (id)initInView:(id)view withFrame:(CGRect)frame withItemList:(id)itemList;	// 0x3517b70d
- (id)initInView:(id)view withFrame:(CGRect)frame withItems:(XXStruct_b4LybD *)items withCount:(int)count;	// 0x352b0a11
- (id)initInView:(id)view withItemList:(id)itemList;	// 0x35183171
- (id)initInView:(id)view withItems:(XXStruct_b4LybD *)items withCount:(int)count;	// 0x352b0b9d
- (id)initWithCoder:(id)coder;	// 0x352af6c1
- (id)initWithFrame:(CGRect)frame;	// 0x35156d6d
- (void)_adjustButtonPressed:(id)pressed;	// 0x352b12c5
- (void)_alertWillShow:(BOOL)_alert duration:(float)duration;	// 0x352b0cd1
- (id)_backgroundView;	// 0x352af641
- (void)_buttonBarFinishedAnimating;	// 0x352b04bd
- (void)_buttonCancel:(id)cancel;	// 0x352b128d
- (void)_buttonDown:(id)down;	// 0x352b1151
- (void)_buttonDownDelayed:(id)delayed;	// 0x352b11a9
- (id)_buttonName:(id)name withType:(int)type;	// 0x352b1599
- (void)_buttonUp:(id)up;	// 0x352b11f1
- (id)_buttonWithDescription:(id)description;	// 0x35183d9d
- (id)_currentButtons;	// 0x352b137d
- (id)_currentCustomBackgroundRespectOversize:(BOOL *)oversize;	// 0x35162881
- (id)_customToolbarAppearance;	// 0x352b10c1
- (void)_customViewChangedForButtonItem:(id)buttonItem;	// 0x352afe79
- (id)_descriptionForTag:(int)tag;	// 0x352b113d
- (void)_didFinishHidingRetainedOldItems:(id)items;	// 0x3515c5a9
- (void)_didMoveFromWindow:(id)window toWindow:(id)window2;	// 0x3515e6cd
- (float)_edgeMarginForBorderedItem:(BOOL)borderedItem;	// 0x3515c12d
- (void)_finishButtonAnimation:(int)animation forButton:(int)button;	// 0x352b14e9
- (void)_finishSetItems:(id)items finished:(id)finished context:(void *)context;	// 0x351fd079
- (CGRect)_frameOfBarButtonItem:(id)barButtonItem;	// 0x352b0851
- (BOOL)_isHidden:(id)hidden;	// 0x352b1549
- (BOOL)_isInNavigationBar;	// 0x352b10d1
- (BOOL)_isPositionedHiddenForAlert;	// 0x35162ea9
- (BOOL)_isTopBar;	// 0x3515c339
- (void)_populateArchivedSubviews:(id)subviews;	// 0x352af801
- (void)_positionToolbarButtons:(id)buttons ignoringItem:(id)item;	// 0x3515c545
- (id)_positionToolbarButtons:(id)buttons ignoringItem:(id)item actuallyRepositionButtons:(BOOL)buttons3;	// 0x3515b0f5
- (void)_sendAction:(id)action withEvent:(id)event;	// 0x352afaed
- (void)_setBackgroundImage:(id)image mini:(id)mini;	// 0x352b08dd
- (void)_setBackgroundView:(id)view;	// 0x352af651
- (void)_setButtonBackgroundImage:(id)image mini:(id)mini forStates:(unsigned)states;	// 0x352b0915
- (void)_setForceTopBarAppearance:(BOOL)appearance;	// 0x352b082d
- (void)_setTintColor:(id)color force:(BOOL)force;	// 0x351582c9
- (void)_showButtons:(int *)buttons withCount:(int)count group:(int)group withDuration:(double)duration adjustPositions:(BOOL)positions skipTag:(int)tag;	// 0x35183469
- (BOOL)_subclassImplementsDrawRect;	// 0x35156db9
- (void)_updateBackgroundImage;	// 0x351575e5
- (void)_updateItemsForNewFrame:(id)newFrame;	// 0x35157e25
- (void)_updateOpacity;	// 0x35158295
- (void)_updateScriptingInfo:(id)info view:(id)view;	// 0x351feb8d
- (void)animateToolbarItemIndex:(unsigned)index duration:(double)duration target:(id)target didFinishSelector:(SEL)selector;	// 0x352afdf5
- (void)animateWithDuration:(float)duration forButton:(int)button;	// 0x352b07a5
- (id)backgroundImageForToolbarPosition:(int)toolbarPosition barMetrics:(int)metrics;	// 0x352b00a1
// declared property getter: - (int)barStyle;	// 0x35158e19
// converted property getter: - (id)buttonItems;	// 0x352b07d9
- (id)createButtonWithDescription:(id)description;	// 0x35184059
// converted property getter: - (int)currentButtonGroup;	// 0x351ff19d
- (void)dealloc;	// 0x3518f9d1
- (CGSize)defaultSizeForOrientation:(int)orientation;	// 0x35162c45
// converted property getter: - (id)delegate;	// 0x3517d905
- (void)drawRect:(CGRect)rect;	// 0x35161799
- (void)encodeWithCoder:(id)coder;	// 0x352af911
// converted property getter: - (float)extraEdgeInsets;	// 0x352afa09
- (void)getVisibleButtonTags:(int *)tags count:(unsigned *)count maxItems:(unsigned)items;	// 0x352b0599
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x35340651
- (BOOL)isMinibar;	// 0x35156f6d
// declared property getter: - (BOOL)isTranslucent;	// 0x351680d5
// declared property getter: - (id)items;	// 0x351fed71
- (void)layoutSubviews;	// 0x35160c41
// converted property getter: - (int)mode;	// 0x3515af65
- (BOOL)onStateForButton:(int)button;	// 0x352b074d
- (void)positionButtons:(id)buttons tags:(int *)tags count:(int)count group:(int)group;	// 0x35184bad
- (void)registerButtonGroup:(int)group withButtons:(int *)buttons withCount:(int)count;	// 0x352b04dd
- (id)scriptingInfoWithChildren;	// 0x351fe631
- (void)setBackgroundImage:(id)image forToolbarPosition:(int)toolbarPosition barMetrics:(int)metrics;	// 0x352aff4d
- (void)setBadgeAnimated:(BOOL)animated forButton:(int)button;	// 0x352b06fd
- (void)setBadgeGlyph:(id)glyph forButton:(int)button;	// 0x352b06ad
- (void)setBadgeValue:(id)value forButton:(int)button;	// 0x352b065d
// declared property setter: - (void)setBarStyle:(int)style;	// 0x3515c68d
- (void)setBarStyle:(int)style force:(BOOL)force;	// 0x35158051
- (void)setBounds:(CGRect)bounds;	// 0x35162d75
- (void)setBounds:(CGRect)bounds;	// 0x352afc09
- (void)setButtonBarTrackingMode:(int)mode;	// 0x3518335d
// converted property setter: - (void)setButtonItems:(id)items;	// 0x352b07e9
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x3517d751
// converted property setter: - (void)setExtraEdgeInsets:(float)insets;	// 0x352af9f9
- (void)setFrame:(CGRect)frame;	// 0x352afd01
- (void)setFrame:(CGRect)frame;	// 0x35156e39
// declared property setter: - (void)setItems:(id)items;	// 0x3517d761
- (void)setItems:(id)items animated:(BOOL)animated;	// 0x35156fe9
// converted property setter: - (void)setMode:(int)mode;	// 0x352afa19
- (void)setOnStateForButton:(BOOL)button forButton:(int)button2;	// 0x352b0775
// declared property setter: - (void)setTintColor:(id)color;	// 0x35162ec9
// declared property setter: - (void)setTranslucent:(BOOL)translucent;	// 0x35238e2d
- (void)showButtonGroup:(int)group withDuration:(double)duration;	// 0x351ff1ad
- (void)showButtons:(int *)buttons withCount:(int)count withDuration:(double)duration;	// 0x35183439
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x35162afd
// declared property getter: - (id)tintColor;	// 0x351592b5
@end

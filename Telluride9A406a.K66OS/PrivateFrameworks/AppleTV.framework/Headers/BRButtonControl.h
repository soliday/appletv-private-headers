/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRImageControl, BRImage, BRTextControl, NSArray;

@interface BRButtonControl : BRControl {
@private
	int _style;	// 48 = 0x30
	BRImageControl *_imageControl;	// 52 = 0x34
	BRImageControl *_badgeControl;	// 56 = 0x38
	BRTextControl *_titleControl;	// 60 = 0x3c
	BRTextControl *_subtitleControl;	// 64 = 0x40
	BRImageControl *_overlayImageControl;	// 68 = 0x44
	BRImageControl *_backgroundImageControl;	// 72 = 0x48
	BRImageControl *_bottomBackgroundImageControl;	// 76 = 0x4c
	BRImage *_image;	// 80 = 0x50
	BRImage *_highlightedImage;	// 84 = 0x54
	NSArray *_subcontrolOrder;	// 88 = 0x58
	BOOL _subcontrolsNeedSorting;	// 92 = 0x5c
	BOOL _buttonEnabled;	// 93 = 0x5d
}
@property(retain) id badgeImage;	// G=0x330c5559; S=0x330c5479; converted property
@property(retain) BRImage *highlightedImage;	// G=0x330c56b5; S=0x330c5661; converted property
@property(retain) BRImage *image;	// G=0x330c5459; S=0x330c5405; converted property
@property(retain) id subtitle;	// G=0x330c53e5; S=0x330c52dd; converted property
@property(retain) id title;	// G=0x330c52bd; S=0x330c51b5; converted property
+ (id)actionButtonWithImage:(id)image subtitle:(id)subtitle badge:(id)badge;	// 0x330c4b0d
+ (id)actionButtonWithTitle:(id)title subtitle:(id)subtitle badge:(id)badge;	// 0x330c4b7d
+ (id)dashedActionButtonWithTitle:(id)title subtitle:(id)subtitle selectable:(BOOL)selectable;	// 0x330c4c31
+ (id)dialogButtonWithTitle:(id)title;	// 0x330c4bed
+ (id)glossyButtonWithTitle:(id)title;	// 0x330c4ca1
- (id)init;	// 0x330c4975
- (id)_addFadeAnimationToLayer:(id)layer forKey:(id)key;	// 0x330c32d9
- (void)_addOpacityFadeAnimationIfNeededToControl:(id)control;	// 0x330c33c5
- (void)_addSortedControl:(id)control;	// 0x330c356d
- (void)_focusWasChanged;	// 0x330c39d9
- (void)_layoutActionSublayers;	// 0x330c3cc1
- (void)_layoutDashedSublayers;	// 0x330c443d
- (void)_layoutDialogSublayers;	// 0x330c3acd
- (void)_layoutGlossySublayers;	// 0x330c474d
- (id)_nonFocusedOpacityForControlNamed:(id)controlNamed;	// 0x330c2fd1
- (void)_setBackgroundHighlightImage:(id)image;	// 0x330c366d
- (void)_setBottomBackgroundHighlightImage:(id)image;	// 0x330c3735
- (void)_setControlOrderArray:(id)array;	// 0x330c4911
- (void)_setNonAttributedSubtitle:(id)subtitle;	// 0x330c323d
- (void)_setNonAttributedTitle:(id)title;	// 0x330c3169
- (void)_updateAllFocusOpacities;	// 0x330c34fd
- (void)_updateBackgroundDialogImages;	// 0x330c37fd
- (void)_updateFocusOpacityOfControl:(id)control;	// 0x330c3455
- (void)_updateImageLayer;	// 0x330c388d
- (id)accessibilityLabel;	// 0x330c588d
- (id)accessibilityTraits;	// 0x330c5941
// converted property getter: - (id)badgeImage;	// 0x330c5559
- (void)controlWasActivated;	// 0x330c571d
- (void)controlWasFocused;	// 0x330c3a4d
- (void)controlWasUnfocused;	// 0x330c3a8d
- (void)dealloc;	// 0x330c49dd
// converted property getter: - (id)highlightedImage;	// 0x330c56b5
// converted property getter: - (id)image;	// 0x330c5459
- (BOOL)isAccessibilityElement;	// 0x330c5889
- (void)layoutSubcontrols;	// 0x330c575d
- (id)overayImage;	// 0x330c5641
// converted property setter: - (void)setBadgeImage:(id)image;	// 0x330c5479
- (void)setButtonEnabled:(BOOL)enabled;	// 0x330c56c5
- (void)setButtonStyle:(int)style;	// 0x330c4cf9
// converted property setter: - (void)setHighlightedImage:(id)image;	// 0x330c5661
// converted property setter: - (void)setImage:(id)image;	// 0x330c5405
- (void)setNonAttributedSubtitle:(id)subtitle;	// 0x330c597d
- (void)setNonAttributedTitle:(id)title;	// 0x330c596d
- (void)setOverlayImage:(id)image;	// 0x330c5579
// converted property setter: - (void)setSubtitle:(id)subtitle;	// 0x330c52dd
// converted property setter: - (void)setTitle:(id)title;	// 0x330c51b5
// converted property getter: - (id)subtitle;	// 0x330c53e5
// converted property getter: - (id)title;	// 0x330c52bd
@end

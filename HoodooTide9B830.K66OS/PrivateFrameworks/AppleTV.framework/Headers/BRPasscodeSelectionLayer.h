/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRTextControl, BRPasscodeSelectionWidget, NSArray, BRImageControl;

__attribute__((visibility("hidden")))
@interface BRPasscodeSelectionLayer : BRControl {
@private
	NSArray *_backgroundLayers;	// 48 = 0x30
	NSArray *_digitLayers;	// 52 = 0x34
	NSArray *_bulletLayers;	// 56 = 0x38
	BRImageControl *_arrowsLayer;	// 60 = 0x3c
	BRPasscodeSelectionWidget *_selectionWidget;	// 64 = 0x40
	BRTextControl *_doneLayer;	// 68 = 0x44
	BOOL _isUserEditable;	// 72 = 0x48
	unsigned _numDigits;	// 76 = 0x4c
	BOOL _hideDigits;	// 80 = 0x50
	int _selection;	// 84 = 0x54
}
@property(retain) id passcode;	// G=0x32a5f539; S=0x32a5f67d; converted property
- (id)initWithNumDigits:(unsigned)numDigits userEditable:(BOOL)editable hideDigits:(BOOL)digits;	// 0x32a5e949
- (void)_adjustDigitVisibility:(id)visibility;	// 0x32a60e3d
- (CGRect)_arrowsFrameForSelection:(int)selection;	// 0x32a60665
- (id)_buildArrowsLayer;	// 0x32a5ffd9
- (id)_buildBackgroundLayers;	// 0x32a5fc4d
- (id)_buildBulletLayers;	// 0x32a5fe7d
- (id)_buildDigitLayers;	// 0x32a5fd45
- (id)_buildDoneLayer;	// 0x32a6009d
- (CGRect)_cellFrameForSelection:(int)selection;	// 0x32a60885
- (CGRect)_digitFrameForSelection:(int)selection digit:(id)digit;	// 0x32a60791
- (void)_hideDigitAtIndex:(int)index;	// 0x32a60db1
- (float)_layoutUIWithHeight:(float)height;	// 0x32a60179
- (CGRect)_selectionWidgetFrameForSelection:(int)selection;	// 0x32a605a1
- (void)_setDigitHighlighted:(BOOL)highlighted atIndex:(int)index;	// 0x32a60bf1
- (void)_setDigitValue:(id)value atIndex:(int)index;	// 0x32a60cdd
- (void)_setSelection:(int)selection;	// 0x32a609b1
- (id)accessibilityLabel;	// 0x32a60ea1
- (id)accessibilityTraits;	// 0x32a6100d
- (void)dealloc;	// 0x32a5ebc9
- (BOOL)decrementSelection;	// 0x32a5f249
- (BOOL)digitsHidden;	// 0x32a5fa45
- (BOOL)doneButtonSelected;	// 0x32a5f869
- (void)hideDigits:(int)digits;	// 0x32a5fa55
- (BOOL)incrementSelection;	// 0x32a5f021
- (BOOL)moveSelectionLeft;	// 0x32a5ef49
- (BOOL)moveSelectionRight;	// 0x32a5ee5d
// converted property getter: - (id)passcode;	// 0x32a5f539
- (CGRect)preferredFrameForScreenSize:(CGSize)screenSize;	// 0x32a5ec79
- (void)reset;	// 0x32a5f8b5
- (void)setFrame:(CGRect)frame;	// 0x32a5f955
// converted property setter: - (void)setPasscode:(id)passcode;	// 0x32a5f67d
- (BOOL)setSelection:(int)selection;	// 0x32a5f45d
- (void)showDigits;	// 0x32a5fb39
- (float)widthOfDigitsForScreenSize:(CGSize)screenSize;	// 0x32a5edd1
@end


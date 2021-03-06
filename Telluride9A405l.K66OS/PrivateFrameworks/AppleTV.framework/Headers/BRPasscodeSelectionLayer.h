/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRImageControl, BRTextControl, BRPasscodeSelectionWidget, NSArray;

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
@property(retain) id passcode;	// G=0x35e7e0fd; S=0x35e7e241; converted property
- (id)initWithNumDigits:(unsigned)numDigits userEditable:(BOOL)editable hideDigits:(BOOL)digits;	// 0x35e7d4f9
- (void)_adjustDigitVisibility:(id)visibility;	// 0x35e7f9a1
- (CGRect)_arrowsFrameForSelection:(int)selection;	// 0x35e7f1ed
- (id)_buildArrowsLayer;	// 0x35e7ebd1
- (id)_buildBackgroundLayers;	// 0x35e7e811
- (id)_buildBulletLayers;	// 0x35e7ea75
- (id)_buildDigitLayers;	// 0x35e7e93d
- (id)_buildDoneLayer;	// 0x35e7ec95
- (CGRect)_cellFrameForSelection:(int)selection;	// 0x35e7f40d
- (CGRect)_digitFrameForSelection:(int)selection digit:(id)digit;	// 0x35e7f319
- (void)_hideDigitAtIndex:(int)index;	// 0x35e7f915
- (float)_layoutUIWithHeight:(float)height;	// 0x35e7ed71
- (CGRect)_selectionWidgetFrameForSelection:(int)selection;	// 0x35e7f129
- (void)_setDigitHighlighted:(BOOL)highlighted atIndex:(int)index;	// 0x35e7f755
- (void)_setDigitValue:(id)value atIndex:(int)index;	// 0x35e7f841
- (void)_setSelection:(int)selection;	// 0x35e7f539
- (id)accessibilityLabel;	// 0x35e7fa05
- (id)accessibilityTraits;	// 0x35e7fb71
- (void)dealloc;	// 0x35e7d779
- (BOOL)decrementSelection;	// 0x35e7de0d
- (BOOL)digitsHidden;	// 0x35e7e609
- (BOOL)doneButtonSelected;	// 0x35e7e42d
- (void)hideDigits:(int)digits;	// 0x35e7e619
- (BOOL)incrementSelection;	// 0x35e7dbe5
- (BOOL)moveSelectionLeft;	// 0x35e7db0d
- (BOOL)moveSelectionRight;	// 0x35e7da21
// converted property getter: - (id)passcode;	// 0x35e7e0fd
- (CGRect)preferredFrameForScreenSize:(CGSize)screenSize;	// 0x35e7d829
- (void)reset;	// 0x35e7e479
- (void)setFrame:(CGRect)frame;	// 0x35e7e519
// converted property setter: - (void)setPasscode:(id)passcode;	// 0x35e7e241
- (BOOL)setSelection:(int)selection;	// 0x35e7e021
- (void)showDigits;	// 0x35e7e6fd
- (float)widthOfDigitsForScreenSize:(CGSize)screenSize;	// 0x35e7d995
@end


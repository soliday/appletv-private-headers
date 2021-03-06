/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITextField.h"

@class NSMutableDictionary, NSValue, UIImage;

__attribute__((visibility("hidden")))
@interface UISearchBarTextField : UITextField {
@private
	UIImage *_customClearButtonImage;	// 288 = 0x120
	UIImage *_customClearButtonImagePressed;	// 292 = 0x124
	NSMutableDictionary *_iconOffsets;	// 296 = 0x128
	NSValue *_searchTextOffsetValue;	// 300 = 0x12c
}
@property(retain, nonatomic, setter=_setSearchTextOffetValue:) NSValue *_searchTextOffsetValue;	// G=0x33bfb3a9; S=0x33bfb309; 
- (CGRect)_adjustedTextOrEditingRect:(CGRect)rect forBounds:(CGRect)bounds;	// 0x339e82cd
- (BOOL)_becomeFirstResponderWhenPossible;	// 0x33b14e71
- (id)_clearButtonImageForState:(unsigned)state;	// 0x339e7c61
- (BOOL)_hasActionForEventMask:(int)eventMask;	// 0x33bfb3b9
- (id)_offsetValueForIcon:(int)icon;	// 0x339e7c09
// declared property getter: - (id)_searchTextOffsetValue;	// 0x33bfb3a9
- (void)_setClearButtonImage:(id)image forState:(unsigned)state;	// 0x339c8a51
- (void)_setOffsetValue:(id)value forIcon:(int)icon;	// 0x33bfb1c9
// declared property setter: - (void)_setSearchTextOffetValue:(id)value;	// 0x33bfb309
- (BOOL)_shouldSendContentChangedNotificationsIfOnlyMarkedTextChanged;	// 0x33abb041
- (CGRect)clearButtonRectForBounds:(CGRect)bounds;	// 0x339e7ab9
- (void)dealloc;	// 0x33ae2f71
- (CGRect)editingRectForBounds:(CGRect)bounds;	// 0x33ab8fe9
- (CGRect)leftViewRectForBounds:(CGRect)bounds;	// 0x339e7cf5
- (CGRect)rightViewRectForBounds:(CGRect)bounds;	// 0x33bfb3f1
- (CGRect)textRectForBounds:(CGRect)bounds;	// 0x339e823d
@end


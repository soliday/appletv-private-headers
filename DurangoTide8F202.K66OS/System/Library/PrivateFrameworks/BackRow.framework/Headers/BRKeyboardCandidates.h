/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRKeyboardRomanSquare.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface BRKeyboardCandidates : BRKeyboardRomanSquare {
@private
	NSArray *_rawKeyboardDataStrings;	// 40 = 0x28
}
- (id)_keyboardDataFileName;	// 0x3290f2c9
- (id)_mainKeyRowWithKeys:(id)keys index:(int)index;	// 0x3290ed31
- (float)_mainKeysVerticalSpacing;	// 0x3290ed2d
- (int)_numberOfColumnsForMainKeyRowIndex:(int)mainKeyRowIndex;	// 0x3290edbd
- (int)_numberOfMainKeyRows;	// 0x3290ee39
- (float)_preferredGlyphHeight:(id)height;	// 0x3290ed21
- (id)_rawKeyboardData;	// 0x3290f2e1
- (int)_scrollDirectionForMainKeys;	// 0x3290ed29
- (id)actionKeyRows;	// 0x3290ed19
- (id)actionKeysContainer;	// 0x3290ed1d
- (id)attributesForTextFieldLabel;	// 0x3290ed09
- (id)bottomRow;	// 0x3290ee61
- (void)dealloc;	// 0x3290f281
- (id)mainKeysContainer;	// 0x3290f19d
- (id)name;	// 0x3290ed0d
- (void)setRawKeyboardDataStrings:(id)strings;	// 0x3290f071
- (void)updateMainKeysContainer:(id)container;	// 0x3290ee85
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"


__attribute__((visibility("hidden")))
@interface BRKeyboardActionControl : BRControl {
@private
	CGSize _characterControlSize;	// 44 = 0x2c
}
- (id)init;	// 0x32f7f3fd
- (id)accessibilityLabel;	// 0x32f80a35
- (id)accessibilityTraits;	// 0x32f80bfd
- (CGRect)focusCursorFrame;	// 0x32f7f449
- (BOOL)isAccessibilityElement;	// 0x32f7f1a1
- (void)layoutSubcontrols;	// 0x32f82665
- (void)setCharacterControlSize:(CGSize)size;	// 0x32f7f189
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x32f80f69
- (id)wrappedControl;	// 0x32f80c29
@end

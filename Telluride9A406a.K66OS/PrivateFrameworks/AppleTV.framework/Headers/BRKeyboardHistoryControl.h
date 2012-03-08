/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRKeyboardControl.h"
#import "AppleTV-Structs.h"

@class NSArray, BRListView;

__attribute__((visibility("hidden")))
@interface BRKeyboardHistoryControl : BRKeyboardControl {
@private
	NSArray *_textEntryHistoryClients;	// 60 = 0x3c
	NSArray *_textEntryHistoryBehaviors;	// 64 = 0x40
	BRListView *_list;	// 68 = 0x44
	CGSize _preferredSize;	// 72 = 0x48
	float _listOriginXOffset;	// 80 = 0x50
	float _listWidth;	// 84 = 0x54
}
@property(retain) id focusedKeyControl;	// G=0x330b33f5; S=0x330b33f9; converted property
- (id)initWithPreferredSize:(CGSize)preferredSize;	// 0x330b3175
- (void)dealloc;	// 0x330b31c1
- (BOOL)focusIsAtRightEdge;	// 0x330b33f1
// converted property getter: - (id)focusedKeyControl;	// 0x330b33f5
- (BOOL)keyboardFocusIsAtEdge:(int)edge;	// 0x330b3401
- (void)layoutSubcontrols;	// 0x330b3235
- (void)setFocusToGlyphNamed:(id)glyphNamed;	// 0x330b33fd
// converted property setter: - (void)setFocusedKeyControl:(id)control;	// 0x330b33f9
- (void)setListOriginXOffset:(float)offset listWidth:(float)width;	// 0x330b33c1
- (void)setTextEntryHistoryClients:(id)clients textEntryBehaviors:(id)behaviors list:(id)list;	// 0x330b3321
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x330b3305
@end

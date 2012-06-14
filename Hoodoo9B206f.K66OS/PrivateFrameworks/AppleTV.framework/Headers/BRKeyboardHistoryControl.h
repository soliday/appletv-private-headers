/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRKeyboardControl.h"

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
@property(retain) id focusedKeyControl;	// G=0x366d53f5; S=0x366d53f9; converted property
- (id)initWithPreferredSize:(CGSize)preferredSize;	// 0x366d5175
- (void)dealloc;	// 0x366d51c1
- (BOOL)focusIsAtRightEdge;	// 0x366d53f1
// converted property getter: - (id)focusedKeyControl;	// 0x366d53f5
- (BOOL)keyboardFocusIsAtEdge:(int)edge;	// 0x366d5401
- (void)layoutSubcontrols;	// 0x366d5235
- (void)setFocusToGlyphNamed:(id)glyphNamed;	// 0x366d53fd
// converted property setter: - (void)setFocusedKeyControl:(id)control;	// 0x366d53f9
- (void)setListOriginXOffset:(float)offset listWidth:(float)width;	// 0x366d53c1
- (void)setTextEntryHistoryClients:(id)clients textEntryBehaviors:(id)behaviors list:(id)list;	// 0x366d5321
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x366d5305
@end

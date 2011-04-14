/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class BRFadeMaskLayer, BRScrollingTextPlane, NSTimer;
@protocol BRMarqueeScrollingDelegate;

@interface BRMarqueeTextControl : BRControl {
@private
	BRScrollingTextPlane *_plane;	// 44 = 0x2c
	BRControl *_leftFade;	// 48 = 0x30
	BRControl *_rightFade;	// 52 = 0x34
	BRFadeMaskLayer *_mask;	// 56 = 0x38
	NSTimer *_scrollTimer;	// 60 = 0x3c
	NSTimer *_fadeMaskTimer;	// 64 = 0x40
	float _maskRemovalTime;	// 68 = 0x44
	float _scrollPosition;	// 72 = 0x48
	BOOL _autoScrolls;	// 76 = 0x4c
	BOOL _crossfadeEnabled;	// 77 = 0x4d
	BOOL _crossfading;	// 78 = 0x4e
	BOOL _useAlphaFadeMask;	// 79 = 0x4f
	id<BRMarqueeScrollingDelegate> _scrollingDelegate;	// 80 = 0x50
}
@property(retain) id attributedString;	// G=0x328ff451; S=0x328ff471; converted property
@property(assign) BOOL autoScrolls;	// G=0x328fefc5; S=0x328ff3dd; converted property
@property(assign) BOOL crossfadeEnabled;	// G=0x328fefed; S=0x328fefd5; converted property
@property(assign) float scrollPosition;	// G=0x328feffd; S=0x328ff3a9; converted property
@property(assign) id scrollingDelegate;	// G=0x328ff00d; S=0x328ff01d; converted property
@property(assign) BOOL useAlphaFadeMask;	// G=0x328ff03d; S=0x328ff02d; converted property
- (id)init;	// 0x328ff975
- (BOOL)_autoscrollInProgress;	// 0x328ff04d
- (void)_beginScroll:(id)scroll;	// 0x329000f1
- (void)_clearFadeMaskTimer;	// 0x328ff191
- (void)_clearScrollTimer;	// 0x328ff1bd
- (void)_realignCenteredTextToLeftJustified;	// 0x328ff26d
- (void)_removeFadeMask:(id)mask;	// 0x328ff1e9
- (void)_resetScrollTimer;	// 0x328ffa75
- (void)_scrollDidStart:(id)_scroll;	// 0x328ff111
- (void)_scrollDidStop:(id)_scroll;	// 0x328ff07d
- (void)_scrollDidStop:(id)_scroll finished:(BOOL)finished;	// 0x328ff0c5
- (void)_updateEdgeMaskingIfScrollingNeeded:(BOOL)needed;	// 0x328ffb4d
- (id)accessibilityLabel;	// 0x328ff385
// converted property getter: - (id)attributedString;	// 0x328ff451
// converted property getter: - (BOOL)autoScrolls;	// 0x328fefc5
- (void)controlWasActivated;	// 0x328ff75d
- (void)controlWasDeactivated;	// 0x328ff799
// converted property getter: - (BOOL)crossfadeEnabled;	// 0x328fefed
- (void)dealloc;	// 0x328ff8f5
- (void)layoutSubcontrols;	// 0x3290054d
- (float)maxScrollPosition;	// 0x328fff39
- (BOOL)needsScrollingInBounds:(CGRect)bounds;	// 0x328ffe01
- (CGSize)pixelBounds;	// 0x328fff15
- (id)preferredActionForKey:(id)key;	// 0x328ff809
- (CGSize)renderedSize;	// 0x328ffe99
// converted property getter: - (float)scrollPosition;	// 0x328feffd
// converted property getter: - (id)scrollingDelegate;	// 0x328ff00d
// converted property setter: - (void)setAttributedString:(id)string;	// 0x328ff471
// converted property setter: - (void)setAutoScrolls:(BOOL)scrolls;	// 0x328ff3dd
// converted property setter: - (void)setCrossfadeEnabled:(BOOL)enabled;	// 0x328fefd5
// converted property setter: - (void)setScrollPosition:(float)position;	// 0x328ff3a9
// converted property setter: - (void)setScrollingDelegate:(id)delegate;	// 0x328ff01d
- (void)setText:(id)text withAttributes:(id)attributes;	// 0x328ff5f5
// converted property setter: - (void)setUseAlphaFadeMask:(BOOL)mask;	// 0x328ff02d
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x328ffd9d
// converted property getter: - (BOOL)useAlphaFadeMask;	// 0x328ff03d
@end

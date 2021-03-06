/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class BRCursorLayer, NSTimer, BRHorizontalSegmentedWidget;

@interface BRCursorControl : BRControl {
@private
	BRControl *_trackedControl;	// 44 = 0x2c
	BRControl *_previousTrackedControl;	// 48 = 0x30
	BRCursorLayer *_cursorLayer;	// 52 = 0x34
	int _style;	// 56 = 0x38
	BOOL _cursorInactive;	// 60 = 0x3c
	BRHorizontalSegmentedWidget *_previousBadge;	// 64 = 0x40
	BRHorizontalSegmentedWidget *_badge;	// 68 = 0x44
	NSTimer *_removePreviousBadgeTimer;	// 72 = 0x48
}
@property(assign) BOOL cursorInactive;	// G=0x32f66465; S=0x32f66c4d; converted property
@property(readonly, retain) BRCursorLayer *cursorLayer;	// G=0x32f66475; converted property
@property(assign) int cursorStyle;	// G=0x32f66455; S=0x32f35239; converted property
- (id)init;	// 0x32f24b1d
- (void)_addCursor;	// 0x32f669d1
- (void)_cursorFrameChanged:(id)changed;	// 0x32f6663d
- (void)_focusChanged:(id)changed;	// 0x32f25419
- (void)_removeCursor;	// 0x32f27d11
- (void)_removePreviousBadgeTimerFired:(id)fired;	// 0x32f66539
- (void)_removePreviousTrackedControl;	// 0x32f6648d
- (void)_trackFocusedControl:(id)control;	// 0x32f66651
- (void)_trackedBadgeUpdated:(id)updated;	// 0x32f665e9
- (void)_updateBadgeForTrackedControl;	// 0x32f66591
- (void)_updateCursorPositioning;	// 0x32f2548d
- (void)_updateMyBadge:(id *)badge withTrackedControl:(id)trackedControl;	// 0x32f66cf5
- (void)_updatePreviousBadge;	// 0x32f665bd
- (void)controlWasActivated;	// 0x32f66c0d
// converted property getter: - (BOOL)cursorInactive;	// 0x32f66465
// converted property getter: - (id)cursorLayer;	// 0x32f66475
// converted property getter: - (int)cursorStyle;	// 0x32f66455
- (void)dealloc;	// 0x32f2c939
- (void)layoutSubcontrols;	// 0x32f66bf9
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x32f66b61
- (id)preferredActionForKey:(id)key;	// 0x32f66aa1
// converted property setter: - (void)setCursorInactive:(BOOL)inactive;	// 0x32f66c4d
// converted property setter: - (void)setCursorStyle:(int)style;	// 0x32f35239
- (void)setOpacity:(float)opacity;	// 0x32f66869
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRHorizontalSegmentedWidget, NSTimer, BRCursorLayer;

@interface BRCursorControl : BRControl {
@private
	BRControl *_trackedControl;	// 48 = 0x30
	BRControl *_previousTrackedControl;	// 52 = 0x34
	BRCursorLayer *_cursorLayer;	// 56 = 0x38
	int _style;	// 60 = 0x3c
	BOOL _cursorInactive;	// 64 = 0x40
	BRHorizontalSegmentedWidget *_previousBadge;	// 68 = 0x44
	BRHorizontalSegmentedWidget *_badge;	// 72 = 0x48
	NSTimer *_removePreviousBadgeTimer;	// 76 = 0x4c
	BOOL _cursorTrackingDisabledWhenAvoidsCursor;	// 80 = 0x50
}
@property(assign) BOOL cursorInactive;	// G=0x35dea221; S=0x35dea165; converted property
@property(readonly, retain) BRCursorLayer *cursorLayer;	// G=0x35dea231; converted property
@property(assign) int cursorStyle;	// G=0x35dea155; S=0x35dea091; converted property
@property(assign, nonatomic) BOOL cursorTrackingDisabledWhenAvoidsCursor;	// G=0x35dea411; S=0x35dea421; @synthesize=_cursorTrackingDisabledWhenAvoidsCursor
- (id)init;	// 0x35de9e21
- (void)_addCursor;	// 0x35dea431
- (void)_cursorFrameChanged:(id)changed;	// 0x35deadc1
- (void)_focusChanged:(id)changed;	// 0x35deae31
- (void)_removeCursor;	// 0x35dea521
- (void)_removePreviousBadgeTimerFired:(id)fired;	// 0x35deb2b1
- (void)_removePreviousTrackedControl;	// 0x35deb311
- (void)_trackFocusedControl:(id)control;	// 0x35deab89
- (void)_trackedBadgeUpdated:(id)updated;	// 0x35deadd1
- (void)_updateBadgeForTrackedControl;	// 0x35deb281
- (void)_updateCursorPositioning;	// 0x35dea595
- (void)_updateMyBadge:(id *)badge withTrackedControl:(id)trackedControl;	// 0x35deaeb5
- (void)_updatePreviousBadge;	// 0x35deb251
- (void)controlWasActivated;	// 0x35dea241
// converted property getter: - (BOOL)cursorInactive;	// 0x35dea221
// converted property getter: - (id)cursorLayer;	// 0x35dea231
// converted property getter: - (int)cursorStyle;	// 0x35dea155
// declared property getter: - (BOOL)cursorTrackingDisabledWhenAvoidsCursor;	// 0x35dea411
- (void)dealloc;	// 0x35de9f2d
- (void)layoutSubcontrols;	// 0x35dea285
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x35dea295
- (id)preferredActionForKey:(id)key;	// 0x35dea339
// converted property setter: - (void)setCursorInactive:(BOOL)inactive;	// 0x35dea165
// converted property setter: - (void)setCursorStyle:(int)style;	// 0x35dea091
// declared property setter: - (void)setCursorTrackingDisabledWhenAvoidsCursor:(BOOL)cursor;	// 0x35dea421
- (void)setOpacity:(float)opacity;	// 0x35deaa1d
@end

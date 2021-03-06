/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRGridView.h"

@class ListViewAnimationDelegate, BRBlueGlowSelectionLozengeLayer, NSTimer;

@interface BRListView : BRGridView {
@private
	BRBlueGlowSelectionLozengeLayer *_cursor;	// 180 = 0xb4
	ListViewAnimationDelegate *_animationDelegate;	// 184 = 0xb8
	NSTimer *_pokeTimer;	// 188 = 0xbc
	NSTimer *_delayTimer;	// 192 = 0xc0
	NSTimer *_repeatTimer;	// 196 = 0xc4
	double _repeatStart;	// 200 = 0xc8
	double _repeatAccumulator;	// 208 = 0xd0
	long _scrollSelection;	// 216 = 0xd8
	long _savedSelection;	// 220 = 0xdc
	BOOL _turboEngaged;	// 224 = 0xe0
	BOOL _movingDown;	// 225 = 0xe1
	BOOL _selectionEntered;	// 226 = 0xe2
}
@property(retain) BRBlueGlowSelectionLozengeLayer *cursor;	// G=0x35e03acd; S=0x35e03861; converted property
@property(assign) BOOL lastItemCentered;	// G=0x35e03c79; S=0x35e03c75; converted property
- (id)init;	// 0x35e0330d
- (long)_backwardIndexForRowCount:(long)rowCount hitBoundary:(BOOL *)boundary;	// 0x35e04d89
- (double)_calculateRepeatRate;	// 0x35e05861
- (unsigned)_countOfHeadersInRange:(NSRange)range;	// 0x35e0493d
- (long)_dataIndexFromGridIndex:(long)gridIndex;	// 0x35e05e55
- (id)_dataIndexPathFromGridIndex:(long)gridIndex sectionIndex:(long *)index;	// 0x35e05d49
- (void)_ensureSelectionFocusable;	// 0x35e04d1d
- (void)_enterCurrentSelection;	// 0x35e058d5
- (long)_forwardIndexForRowCount:(long)rowCount hitBoundary:(BOOL *)boundary;	// 0x35e04e09
- (long)_gridIndexForDataIndex:(long)dataIndex;	// 0x35e05f1d
- (long)_gridIndexForDataIndexPath:(id)dataIndexPath;	// 0x35e05fe5
- (void)_leaveCurrentSelection;	// 0x35e05979
- (void)_listScrollingCompleted:(id)completed;	// 0x35e05cf5
- (void)_listScrollingInitiated:(id)initiated;	// 0x35e05ca1
- (void)_performScrollInitiationActivities;	// 0x35e05c7d
- (void)_performScrollTerminationActivities;	// 0x35e05c9d
- (void)_pokeTimerFired:(id)fired;	// 0x35e0581d
- (void)_postSelectionFinalizedNotification;	// 0x35e059b5
- (void)_repeatDownTimerFired:(id)fired;	// 0x35e0557d
- (void)_repeatUpTimerFired:(id)fired;	// 0x35e056cd
- (void)_restoreCurrentSelectionIndex;	// 0x35e05b7d
- (void)_saveCurrentSelectionIndex;	// 0x35e05b5d
- (BOOL)_scrollDown:(id)down;	// 0x35e04c39
- (BOOL)_scrollUp:(id)up;	// 0x35e04b55
- (void)_setNewScrollIndex:(long)index;	// 0x35e04e8d
- (void)_slowToStopRepeatTimerMovingDown:(BOOL)stopRepeatTimerMovingDown;	// 0x35e05329
- (void)_startDownwardAutoScroll:(id)scroll;	// 0x35e05099
- (void)_startRepeatTimerMovingDown:(BOOL)down;	// 0x35e04fc5
- (void)_startUpwardAutoScroll:(id)scroll;	// 0x35e051e1
- (void)_stopRepeatTimer;	// 0x35e05509
- (void)_updateScrollPosition;	// 0x35e04ead
- (void)_updateWidgetFrame;	// 0x35e059b9
- (void)_updateWidgetFrameForWidget:(id)widget withItemFrame:(CGRect)itemFrame;	// 0x35e05a99
- (id)accessibilityControls;	// 0x35e04841
- (id)accessibilityLabel;	// 0x35e04719
- (BOOL)brEventAction:(id)action;	// 0x35e034a9
- (void)controlWasFocused;	// 0x35e03cbd
- (void)controlWasUnfocused;	// 0x35e03d1d
- (unsigned)countOfCells;	// 0x35e0485d
// converted property getter: - (id)cursor;	// 0x35e03acd
- (void)dealloc;	// 0x35e03405
- (void)didFocusItemAtIndex:(long)index;	// 0x35e0449d
- (BOOL)didPlayItemAtIndex:(long)index;	// 0x35e04665
- (BOOL)didSelectItemAtIndex:(long)index;	// 0x35e045ed
- (void)didUnFocusItemAtIndex:(long)index;	// 0x35e0457d
- (float)heightForItemAtIndex:(long)index;	// 0x35e04251
- (long)indexForItemID:(id)itemID;	// 0x35e041e1
- (unsigned)indexInCellsOfObject:(id)object;	// 0x35e04a39
- (BOOL)isAccessibilityElement;	// 0x35e047ad
- (id)itemAtIndex:(long)index;	// 0x35e040d1
- (id)itemIDAtIndex:(long)index;	// 0x35e0416d
// converted property getter: - (BOOL)lastItemCentered;	// 0x35e03c79
- (void)layoutSubcontrols;	// 0x35e03d91
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x35e04705
- (void)list:(id)list didPlayItemAtIndexPath:(id)indexPath;	// 0x35e04715
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x35e04711
- (void)list:(id)list didUnFocusItemAtIndexPath:(id)indexPath;	// 0x35e0470d
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x35e046f9
- (float)list:(id)list heightForSectionHeader:(long)sectionHeader;	// 0x35e046f5
- (id)list:(id)list indexPathForItemID:(id)itemID;	// 0x35e046f1
- (id)list:(id)list itemIDForIndexPath:(id)indexPath;	// 0x35e046ed
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x35e046dd
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x35e046e5
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x35e046e9
- (void)list:(id)list willDisplayItemAtIndexPath:(id)indexPath;	// 0x35e046fd
- (id)list:(id)list willFocusItemAtIndexPath:(id)indexPath;	// 0x35e04701
- (void)list:(id)list willUnFocusItemAtIndexPath:(id)indexPath;	// 0x35e04709
- (float)listHeightToMaximum:(float)maximum;	// 0x35e03c01
- (long)numberOfSectionsInList:(id)list;	// 0x35e046e1
- (id)objectInCellsAtIndex:(unsigned)index;	// 0x35e04ac1
- (void)populateDataCache:(id)cache;	// 0x35e03ed9
- (void)reload;	// 0x35e03779
- (void)selectItemAtIndex:(long)index;	// 0x35e0409d
- (void)selectRowAtIndexPath:(id)indexPath;	// 0x35e03aed
- (long)selectedIndex;	// 0x35e0408d
- (id)selectedIndexPath;	// 0x35e03be1
- (long)selection;	// 0x35e03add
// converted property setter: - (void)setCursor:(id)cursor;	// 0x35e03861
// converted property setter: - (void)setLastItemCentered:(BOOL)centered;	// 0x35e03c75
- (id)visibleRowAtIndexPath:(id)indexPath;	// 0x35e03c7d
- (id)visibleRowsAndRange:(NSRange *)range;	// 0x35e03cad
- (void)willDisplayItemAtIndex:(long)index;	// 0x35e04395
- (long)willFocusItemAtIndex:(long)index;	// 0x35e04415
- (void)willUnFocusItemAtIndex:(long)index;	// 0x35e0450d
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"
#import "BRContainerViewCell.h"

@class BRCursorControl, NSMutableArray, NSTimer, BRContainerViewDataCache;

@interface BRGridView : BRControl <BRContainerViewCell> {
@private
	int _mode;	// 48 = 0x30
	BRControl *_requester;	// 52 = 0x34
	NSRange _range;	// 56 = 0x38
	float _lastGapHeight;	// 64 = 0x40
	double _heightToRange;	// 68 = 0x44
	double _controlHeight;	// 76 = 0x4c
	XXStruct_qlg9jA _columWidth;	// 84 = 0x54
	XXStruct_qlg9jA _horizontalGap;	// 88 = 0x58
	XXStruct_qlg9jA _verticalGap;	// 92 = 0x5c
	float _leftMargin;	// 96 = 0x60
	float _rightMargin;	// 100 = 0x64
	float _bottomMargin;	// 104 = 0x68
	float _bottomMarginFactor;	// 108 = 0x6c
	float _topMargin;	// 112 = 0x70
	float _topMarginFactor;	// 116 = 0x74
	int _navigationBehavior;	// 120 = 0x78
	id _dataSource;	// 124 = 0x7c
	id _delegate;	// 128 = 0x80
	BRCursorControl *_trackingCursor;	// 132 = 0x84
	BOOL _needsReload;	// 136 = 0x88
	NSMutableArray *_editEventQueue;	// 140 = 0x8c
	long _loadIndex;	// 144 = 0x90
	NSTimer *_forceDisplayTimer;	// 148 = 0x94
	BOOL _followsLoadAndDisplayOnDemand;	// 152 = 0x98
	id _loadCompletionBlock;	// 156 = 0x9c
	BOOL _toldToLoad;	// 160 = 0xa0
	NSMutableArray *_completedIndexes;	// 164 = 0xa4
	BRContainerViewDataCache *_dataCache;	// 168 = 0xa8
	XXStruct_qlg9jA _itemHeight;	// 172 = 0xac
	long _defaultFocusIndex;	// 176 = 0xb0
}
@property(assign) float bottomMargin;	// G=0x30295155; S=0x302950c1; converted property
@property(assign) XXStruct_qlg9jA columnWidth;	// G=0x30294269; S=0x30294259; converted property
@property(retain) id cursor;	// G=0x30295e6d; S=0x30295e2d; converted property
@property(retain) id dataSource;	// G=0x30294179; S=0x3029412d; converted property
@property(assign, nonatomic) long defaultFocusIndex;	// G=0x3029559d; S=0x302955ad; @synthesize=_defaultFocusIndex
@property(assign) id delegate;	// G=0x30294199; S=0x30294189; converted property
@property(assign) XXStruct_qlg9jA horizontalGap;	// G=0x302942cd; S=0x30294285; converted property
@property(assign, nonatomic) XXStruct_qlg9jA itemHeight;	// G=0x30295571; S=0x3029558d; @synthesize=_itemHeight
@property(assign) float leftMargin;	// G=0x302943d1; S=0x30294391; converted property
@property(assign, nonatomic) int navigationBehavior;	// G=0x302955bd; S=0x302955cd; @synthesize=_navigationBehavior
@property(assign) float rightMargin;	// G=0x30294421; S=0x302943e1; converted property
@property(assign) long selection;	// G=0x302941b9; S=0x302941a9; converted property
@property(assign) float topMargin;	// G=0x302951f9; S=0x30295165; converted property
@property(assign) XXStruct_qlg9jA verticalGap;	// G=0x30294341; S=0x302942e9; converted property
+ (id)_jitterPositionAnimation;	// 0x302982e1
+ (id)_jitterTransformAnimation;	// 0x302986d5
- (id)init;	// 0x30293da5
- (id)initWithLayout:(id)layout;	// 0x30293f05
- (BOOL)_allDisplayComplete;	// 0x3029803d
- (void)_animationDidStartInDisplayMode:(id)_animation;	// 0x30297139
- (void)_animationDidStartInEditModeMode:(id)_animation;	// 0x3029713d
- (void)_animationDidStopInDisplayMode:(id)_animation finished:(BOOL)finished;	// 0x30297141
- (void)_animationDidStopInEditMode:(id)_animation finished:(BOOL)finished;	// 0x30297145
- (id)_completedIndexes;	// 0x30297f89
- (id)_controlAtIndex:(long)index controls:(id)controls;	// 0x3029780d
- (long)_controlsInHeight:(double)height startingAt:(long)at actualHeight:(double *)height3;	// 0x302973a1
- (long)_controlsInHeightBackwards:(double)heightBackwards startingAt:(long)at actualHeight:(double *)height;	// 0x30297495
- (id)_controlsInRange:(NSRange)range;	// 0x30297695
- (id)_createControlsInRange:(NSRange)range;	// 0x302975f1
- (void)_displayControlsForRowThatContainsIndex:(long)rowThatContainsIndex force:(bool)force;	// 0x30297c55
- (void)_focusChanged:(id)changed;	// 0x30299179
- (void)_forceDisplayTimerFired:(id)fired;	// 0x30297c15
- (CGRect)_frameForControlAtIndex:(long)index controls:(id)controls;	// 0x30296819
- (CGRect)_frameForControlAtIndex:(long)index rowFrame:(CGRect)frame controls:(id)controls;	// 0x30296965
- (void)_frameRowInRange:(NSRange)range rowFrame:(CGRect)frame controls:(id)controls;	// 0x30296a1d
- (BOOL)_handleEventInDisplayMode:(id)displayMode;	// 0x30296c5d
- (BOOL)_handleEventInEditMode:(id)editMode;	// 0x30296efd
- (float)_heightOfControlAtIndex:(long)index controls:(id)controls;	// 0x30297291
- (double)_heightOfRowsInRange:(NSRange)range includeVerticalGap:(BOOL)gap controls:(id)controls;	// 0x302972dd
- (double)_heightToRange;	// 0x30296615
- (long)_indexOfFocusedControl;	// 0x30297579
- (void)_layoutSubcontrols;	// 0x30295f91
- (void)_loadControlWithIndex:(long)index start:(BOOL)start;	// 0x30297871
- (BOOL)_okToLoadWithIndex:(long)index;	// 0x30297b3d
- (float)_positionOfColumn:(long)column inRowWidth:(float)rowWidth cellWidth:(float *)width;	// 0x302966f9
- (void)_reloadIfNeeded;	// 0x302991f1
- (void)_restorePersistentSavedSelection;	// 0x30298f71
- (float)_rowHeightForControlsInRange:(NSRange)range controls:(id)controls;	// 0x30297225
- (id)_setControlRange:(NSRange)range withHeightToRange:(double)range2;	// 0x30295e7d
- (BOOL)_setMode:(int)mode;	// 0x30296ac1
- (void)_setSelectedItemJiggling:(BOOL)jiggling;	// 0x302980ed
- (void)_stopForceDisplayTimer;	// 0x30297be1
- (BOOL)_swapControlAtIndex:(long)index withControlAtIndex:(long)index2;	// 0x302989b1
- (id)_swapPositionAnimationFromIndex:(long)index toIndex:(long)index2;	// 0x302988d9
- (double)_totalHeight;	// 0x3029650d
- (void)_updatePersistentSavedSelection;	// 0x302990b1
- (id)accessibilityControls;	// 0x30294905
- (void)animationDidStart:(id)animation;	// 0x302953d1
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x3029540d
// converted property getter: - (float)bottomMargin;	// 0x30295155
- (BOOL)brEventAction:(id)action;	// 0x30294e6d
- (void)cancelContainerViewLoad;	// 0x302954f1
// converted property getter: - (XXStruct_qlg9jA)columnWidth;	// 0x30294269
- (BOOL)controlAcceptsFocusAtIndex:(long)index;	// 0x30295ad9
- (CGRect)controlFocusFrameAtIndex:(long)index;	// 0x30295d59
- (CGRect)controlFrameAtIndex:(long)index;	// 0x30295c61
- (void)controlWasActivated;	// 0x302949b9
- (void)controlWasDeactivated;	// 0x30294a5d
- (unsigned)countOfCells;	// 0x30294921
// converted property getter: - (id)cursor;	// 0x30295e6d
- (long)dataCount;	// 0x302941d9
// converted property getter: - (id)dataSource;	// 0x30294179
- (void)dealloc;	// 0x30294061
// declared property getter: - (long)defaultFocusIndex;	// 0x3029559d
// converted property getter: - (id)delegate;	// 0x30294199
- (void)didFocusItemAtIndex:(long)index;	// 0x30295925
- (BOOL)didPlayItemAtIndex:(long)index;	// 0x30295a7d
- (BOOL)didSelectItemAtIndex:(long)index;	// 0x30295a21
- (void)didUnFocusItemAtIndex:(long)index;	// 0x302959cd
- (void)focusControlAtIndex:(long)index;	// 0x30295b39
- (id)focusedControlForEvent:(id)event focusPoint:(CGPoint *)point;	// 0x30294ead
- (void)grid:(id)grid didFocusItemAtIndex:(long)index;	// 0x30295561
- (void)grid:(id)grid didSelectItemAtIndex:(long)index;	// 0x3029556d
- (void)grid:(id)grid didUnFocusItemAtIndex:(long)index;	// 0x30295569
- (float)grid:(id)grid heightForItemAtIndex:(long)index;	// 0x30295555
- (id)grid:(id)grid itemAtIndex:(long)index;	// 0x30295551
- (void)grid:(id)grid willDisplayItemAtIndex:(long)index;	// 0x30295559
- (long)grid:(id)grid willFocusItemAtIndex:(long)index;	// 0x3029555d
- (void)grid:(id)grid willUnFocusItemAtIndex:(long)index;	// 0x30295565
- (float)heightForItemAtIndex:(long)index;	// 0x302957f9
- (float)heightOfControlAtIndex:(long)index;	// 0x302945e9
- (float)heightToMaximum:(float)maximum;	// 0x302944d5
// converted property getter: - (XXStruct_qlg9jA)horizontalGap;	// 0x302942cd
- (long)indexForItemID:(id)itemID;	// 0x3029579d
- (unsigned)indexInCellsOfObject:(id)object;	// 0x30294931
- (id)initialFocus;	// 0x30294c3d
- (id)itemAtIndex:(long)index;	// 0x302956ed
// declared property getter: - (XXStruct_qlg9jA)itemHeight;	// 0x30295571
- (id)itemIDAtIndex:(long)index;	// 0x30295745
- (void)layoutSubcontrols;	// 0x30295249
// converted property getter: - (float)leftMargin;	// 0x302943d1
- (void)loadWithCompletionBlock:(id)completionBlock;	// 0x30295449
// declared property getter: - (int)navigationBehavior;	// 0x302955bd
- (long)numberOfColumns;	// 0x302956cd
- (long)numberOfColumnsInGrid:(id)grid;	// 0x3029554d
- (long)numberOfItems;	// 0x302956ad
- (long)numberOfItemsInGrid:(id)grid;	// 0x30295549
- (id)objectInCellsAtIndex:(unsigned)index;	// 0x30294979
- (void)populateDataCache:(id)cache;	// 0x302955dd
- (float)positionOfColumn:(long)column;	// 0x30294591
- (void)reload;	// 0x3029461d
- (void)reloadItemAtIndex:(long)index;	// 0x30294781
- (void)reloadItemsAtIndexes:(id)indexes;	// 0x30294821
- (void)restorePersistentSavedSelection;	// 0x302948f5
// converted property getter: - (float)rightMargin;	// 0x30294421
- (long)rowCount;	// 0x302941e9
- (void)scrollingCompleted;	// 0x30295359
- (void)selectItemAtIndex:(long)index;	// 0x3029569d
- (long)selectedIndex;	// 0x3029568d
- (id)selectedObject;	// 0x302941c9
// converted property getter: - (long)selection;	// 0x302941b9
// converted property setter: - (void)setBottomMargin:(float)margin;	// 0x302950c1
// converted property setter: - (void)setColumnWidth:(XXStruct_qlg9jA)width;	// 0x30294259
// converted property setter: - (void)setCursor:(id)cursor;	// 0x30295e2d
// converted property setter: - (void)setDataSource:(id)source;	// 0x3029412d
// declared property setter: - (void)setDefaultFocusIndex:(long)index;	// 0x302955ad
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x30294189
- (void)setFollowsLoadAndDisplayOnDemand;	// 0x30295525
// converted property setter: - (void)setHorizontalGap:(XXStruct_qlg9jA)gap;	// 0x30294285
- (void)setIgnoreLoadAndDisplayOnDemand;	// 0x30295521
- (void)setIgnoreLoadAndDisplayOnDemandDisableAnimations:(BOOL)animations;	// 0x30295539
// declared property setter: - (void)setItemHeight:(XXStruct_qlg9jA)height;	// 0x3029558d
// converted property setter: - (void)setLeftMargin:(float)margin;	// 0x30294391
// declared property setter: - (void)setNavigationBehavior:(int)behavior;	// 0x302955cd
- (void)setNeedsReload;	// 0x302948a1
- (void)setReadyToDisplay;	// 0x3029551d
// converted property setter: - (void)setRightMargin:(float)margin;	// 0x302943e1
// converted property setter: - (void)setSelection:(long)selection;	// 0x302941a9
// converted property setter: - (void)setTopMargin:(float)margin;	// 0x30295165
// converted property setter: - (void)setVerticalGap:(XXStruct_qlg9jA)gap;	// 0x302942e9
- (void)setVerticalMargins:(float)margins;	// 0x3029435d
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x30295259
// converted property getter: - (float)topMargin;	// 0x302951f9
- (void)updatePersistentSavedSelection;	// 0x302948e5
// converted property getter: - (XXStruct_qlg9jA)verticalGap;	// 0x30294341
- (id)visibleControlAtIndex:(long)index;	// 0x30294489
- (id)visibleControlsWithRange:(NSRange *)range;	// 0x30294431
- (NSRange)visibleRange;	// 0x3029446d
- (void)visibleScrollRectChanged;	// 0x30295209
- (void)willDisplayItemAtIndex:(long)index;	// 0x30295879
- (long)willFocusItemAtIndex:(long)index;	// 0x302958cd
- (void)willUnFocusItemAtIndex:(long)index;	// 0x30295979
- (void)windowMaxBoundsChanged;	// 0x30294b69
@end


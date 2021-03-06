/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UITableViewDataSource.h"
#import "UIView.h"

@class NSMutableArray;
@protocol UIPickerViewDataSource, UIPickerViewDelegate;

@interface UIPickerView : UIView <NSCoding, UITableViewDataSource> {
@private
	NSMutableArray *_tables;	// 48 = 0x30
	UIView *_topFrame;	// 52 = 0x34
	NSMutableArray *_dividers;	// 56 = 0x38
	NSMutableArray *_selectionBars;	// 60 = 0x3c
	id<UIPickerViewDataSource> _dataSource;	// 64 = 0x40
	id<UIPickerViewDelegate> _delegate;	// 68 = 0x44
	UIView *_backgroundView;	// 72 = 0x48
	int _numberOfComponents;	// 76 = 0x4c
	struct {
		unsigned needsLayout : 1;
		unsigned delegateRespondsToNumberOfComponentsInPickerView : 1;
		unsigned delegateRespondsToNumberOfRowsInComponent : 1;
		unsigned delegateRespondsToDidSelectRow : 1;
		unsigned delegateRespondsToViewForRow : 1;
		unsigned delegateRespondsToTitleForRow : 1;
		unsigned delegateRespondsToWidthForComponent : 1;
		unsigned delegateRespondsToRowHeightForComponent : 1;
		unsigned delegateRespondsToCheckableForRow : 1;
		unsigned showsSelectionBar : 1;
		unsigned allowsMultipleSelection : 1;
		unsigned allowSelectingCells : 1;
		unsigned soundsDisabled : 1;
		unsigned usesCheckedSelection : 1;
	} _pickerViewFlags;	// 80 = 0x50
}
@property(assign) BOOL allowsMultipleSelection;	// G=0x301d7905; S=0x301d7869; converted property
@property(assign, nonatomic) id<UIPickerViewDataSource> dataSource;	// G=0x301d79a9; S=0x301b5109; @synthesize=_dataSource
@property(assign, nonatomic) id<UIPickerViewDelegate> delegate;	// G=0x301d79b9; S=0x301b4f61; @synthesize=_delegate
@property(readonly, assign, nonatomic) int numberOfComponents;	// G=0x301b6485; @synthesize=_numberOfComponents
@property(assign, nonatomic) BOOL showsSelectionIndicator;	// G=0x301d7855; S=0x301d780d; 
+ (CGSize)defaultSizeForCurrentOrientation;	// 0x301b4235
+ (CGSize)sizeForCurrentOrientationThatFits:(CGSize)currentOrientationThatFits;	// 0x301b4875
+ (CGSize)sizeThatFits:(CGSize)fits forInterfaceOrientation:(int)interfaceOrientation;	// 0x301b48cd
- (id)init;	// 0x301d6ff5
- (id)initWithCoder:(id)coder;	// 0x301d7029
- (id)initWithFrame:(CGRect)frame;	// 0x301b474d
- (id)_createTableWithFrame:(CGRect)frame forComponent:(int)component;	// 0x301b9579
- (id)_createViewForPickerPiece:(int)pickerPiece;	// 0x301b767d
- (int)_delegateNumberOfComponents;	// 0x301b5b15
- (int)_delegateNumberOfRowsInComponent:(int)component;	// 0x301b9c51
- (float)_delegateRowHeightForComponent:(int)component;	// 0x301b9a3d
- (id)_delegateTitleForRow:(int)row forComponent:(int)component;	// 0x301d7499
- (float)_delegateWidthForComponent:(int)component ofCount:(int)count withSizeLeft:(float)sizeLeft;	// 0x301b7dc5
- (BOOL)_isLandscapeOrientation;	// 0x301b7afd
- (id)_orientationImageSuffix;	// 0x301b79cd
- (id)_popoverSuffix;	// 0x301b7bfd
- (void)_populateArchivedSubviews:(id)subviews;	// 0x301d70f9
- (void)_selectRow:(int)row inComponent:(int)component animated:(BOOL)animated notify:(BOOL)notify;	// 0x301b6519
- (CGRect)_selectionBarRectForHeight:(float)height;	// 0x301b9a9d
- (id)_selectionBarSuffix;	// 0x301b7bcd
- (void)_sendCheckedRow:(int)row inTableView:(id)tableView checked:(BOOL)checked;	// 0x301d740d
- (void)_sendSelectionChangedForComponent:(int)component;	// 0x301bfe41
- (void)_sendSelectionChangedFromTable:(id)table;	// 0x301bfd8d
- (void)_setUsesCheckedSelection:(BOOL)selection;	// 0x301d7919
- (CGSize)_sizeThatFits:(CGSize)fits;	// 0x301b5bf5
- (BOOL)_soundsEnabled;	// 0x301bf7e5
- (float)_tableRowHeight;	// 0x301d6f9d
- (void)_updateSound;	// 0x301bed49
- (BOOL)_usesCheckSelection;	// 0x301bc1f1
- (BOOL)_usesCheckedSelection;	// 0x301d793d
- (float)_wheelShift;	// 0x301b9255
// converted property getter: - (BOOL)allowsMultipleSelection;	// 0x301d7905
- (int)columnForTableView:(id)tableView;	// 0x301ba6ed
- (id)createDividerWithFrame:(CGRect)frame;	// 0x301b9295
// declared property getter: - (id)dataSource;	// 0x301d79a9
- (void)dealloc;	// 0x301c2e71
- (CGSize)defaultSize;	// 0x301d6e7d
// declared property getter: - (id)delegate;	// 0x301d79b9
- (void)didMoveToWindow;	// 0x301bed09
- (void)encodeWithCoder:(id)coder;	// 0x301d723d
- (id)imageForPickerPiece:(int)pickerPiece;	// 0x301b7765
- (BOOL)isAccessibilityElementByDefault;	// 0x302b5609
- (void)layoutSubviews;	// 0x301b67ad
- (int)numberOfColumns;	// 0x301d75c5
// declared property getter: - (int)numberOfComponents;	// 0x301b6485
- (int)numberOfRowsInColumn:(int)column;	// 0x301d75b5
- (int)numberOfRowsInComponent:(int)component;	// 0x301be015
- (id)pickerImageNamePrefix;	// 0x301b79c1
- (void)reload;	// 0x301d7371
- (void)reloadAllComponents;	// 0x301b5a7d
- (void)reloadAllPickerPieces;	// 0x301c0855
- (void)reloadComponent:(int)component;	// 0x301d73a1
- (void)reloadData;	// 0x301d7381
- (void)reloadDataForColumn:(int)column;	// 0x301d7391
- (CGSize)rowSizeForComponent:(int)component;	// 0x301d74e1
- (double)scrollAnimationDuration;	// 0x301d7485
- (void)selectRow:(int)row inColumn:(int)column animated:(BOOL)animated;	// 0x301d7985
- (void)selectRow:(int)row inComponent:(int)component animated:(BOOL)animated;	// 0x301d7961
- (int)selectedRowForColumn:(int)column;	// 0x301d7951
- (int)selectedRowInComponent:(int)component;	// 0x301bd0c9
// converted property setter: - (void)setAllowsMultipleSelection:(BOOL)selection;	// 0x301d7869
- (void)setAlpha:(float)alpha;	// 0x301d7331
- (void)setBounds:(CGRect)bounds;	// 0x301d76c9
// declared property setter: - (void)setDataSource:(id)source;	// 0x301b5109
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x301b4f61
- (void)setFrame:(CGRect)frame;	// 0x301b4a79
- (void)setHidden:(BOOL)hidden;	// 0x301d72f1
- (void)setNeedsLayout;	// 0x301b4cd9
// declared property setter: - (void)setShowsSelectionIndicator:(BOOL)indicator;	// 0x301d780d
- (void)setSoundsEnabled:(BOOL)enabled;	// 0x301d6fc9
// declared property getter: - (BOOL)showsSelectionIndicator;	// 0x301d7855
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x301d73ed
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x301ba371
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x301b9b8d
- (id)tableViewForColumn:(int)column;	// 0x301bf7c5
- (id)viewForRow:(int)row forComponent:(int)component;	// 0x301bdc5d
- (NSRange)visibleRowsForColumn:(int)column;	// 0x301bdc15
@end


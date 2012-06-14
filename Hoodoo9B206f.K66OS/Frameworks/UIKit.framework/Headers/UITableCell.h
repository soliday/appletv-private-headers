/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class _UITableCellTransientData;

@interface UITableCell : UIView {
@private
	_UITableCellTransientData *_transientData;	// 48 = 0x30
	float _rightMargin;	// 52 = 0x34
	struct {
		unsigned dontShowSelection : 1;
		unsigned showDisclosure : 1;
		unsigned showTopSeparator : 1;
		unsigned separatorStyle : 3;
		unsigned selectionStyle : 3;
		unsigned hideDisclosure : 1;
		unsigned isBeingDeleted : 1;
		unsigned disclosureClickable : 1;
		unsigned selectionFadeFraction : 11;
		unsigned disclosureStyle : 1;
		unsigned showingRemoveControl : 1;
		unsigned alignment : 3;
		unsigned showDisclosureWhenReordering : 1;
		unsigned fadeDisclosure : 1;
		unsigned reserved : 2;
	} _tableCellFlags;	// 56 = 0x38
	UIView *_disclosureView;	// 60 = 0x3c
}
@property(assign) int disclosureStyle;	// G=0x354dc01d; S=0x354dbe09; converted property
@property(retain) UIView *disclosureView;	// G=0x354dd931; S=0x354dd941; converted property
@property(assign, getter=isSelected) BOOL selected;	// G=0x354dbcb5; S=0x354dbca1; converted property
@property(assign) int separatorStyle;	// G=0x354dc031; S=0x354dbd51; converted property
@property(assign) BOOL showDisclosure;	// G=0x354dc075; S=0x354dbda1; converted property
@property(assign) BOOL showDisclosureWhenReordering;	// G=0x354dc505; S=0x354dc4ed; converted property
@property(assign) BOOL showSelection;	// G=0x354dc05d; S=0x354dbcd5; converted property
- (id)_createDisclosureView;	// 0x354ddf49
- (void)_deselectWithFlashCount:(int)flashCount duration:(double)duration;	// 0x354dbbc1
- (id)_disclosureView;	// 0x354dd951
- (void)_finishedFadingGrabber:(id)grabber finished:(BOOL)finished;	// 0x354dc4ad
- (void)_grabberBeganReorder:(id)reorder;	// 0x354dce6d
- (void)_grabberDragged:(id)dragged yDelta:(float)delta;	// 0x354dce9d
- (void)_grabberReleased:(id)released;	// 0x354dd005
- (id)_grabberView;	// 0x354dc275
- (BOOL)_isReordering;	// 0x354dc24d
- (void)_layoutSubviewsAnimated:(BOOL)animated;	// 0x354dd96d
- (void)_releaseGrabber;	// 0x354dc3d5
- (void)_releaseRemoveControl;	// 0x354dd381
- (void)_setDisclosureHidden:(BOOL)hidden;	// 0x354dd5f5
- (void)_setDrawsTopSeparator:(BOOL)separator;	// 0x354de765
- (void)_setGrabberHidden:(BOOL)hidden;	// 0x354dd6c1
- (void)_setRemoveCharge:(float)charge;	// 0x354de739
- (void)_setRightMargin:(float)margin;	// 0x354dd911
- (void)_setSelectionFadeFraction:(float)fraction;	// 0x354de949
- (void)_setShowIndentSpacer:(BOOL)spacer animated:(BOOL)animated;	// 0x354dda15
- (BOOL)_shouldTryPromoteDescendantToFirstResponder;	// 0x354de945
- (void)_showDeleteOrInsertion:(BOOL)insertion withDisclosure:(BOOL)disclosure animated:(BOOL)animated isDelete:(BOOL)aDelete andRemoveConfirmation:(BOOL)confirmation;	// 0x354ddb65
- (void)_uiRemoveControlMinusButtonHideAnimationDone:(id)done;	// 0x354dddfd
- (void)_willBeDeleted;	// 0x354dde41
- (BOOL)cancelMouseTracking;	// 0x354dc1fd
- (BOOL)cancelTouchTracking;	// 0x354dc225
- (CGRect)contentBounds;	// 0x354ddfc1
- (id)createInsertControl;	// 0x354dd5c5
- (id)createRemoveControl;	// 0x354dd54d
- (void)dealloc;	// 0x354db841
- (id)disclosureImage;	// 0x354db6f1
- (id)disclosurePressedImage;	// 0x354db799
- (float)disclosureRightMargin;	// 0x354dc4bd
// converted property getter: - (int)disclosureStyle;	// 0x354dc01d
// converted property getter: - (id)disclosureView;	// 0x354dd931
- (void)drawBackgroundInRect:(CGRect)rect withFade:(float)fade;	// 0x354dd035
- (void)drawContentInRect:(CGRect)rect selected:(BOOL)selected;	// 0x354dd37d
- (void)drawRect:(CGRect)rect;	// 0x354dc2b9
- (void)drawSeparatorInRect:(CGRect)rect;	// 0x354dd1d5
- (id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;	// 0x354dc0f9
- (void)insertControl:(id)control shouldInsertWithTarget:(id)target;	// 0x354ddf19
- (BOOL)isAtLeastHalfSelected;	// 0x354dbb71
- (BOOL)isRemoveControlVisible;	// 0x354ddb4d
- (BOOL)isReorderingEnabled;	// 0x354dc4c5
// converted property getter: - (BOOL)isSelected;	// 0x354dbcb5
- (void)layoutSubviews;	// 0x354de7b5
- (float)removeButtonAnimationDuration;	// 0x354dd961
- (id)removeControl;	// 0x354db959
- (void)removeControl:(id)control didRemoveTarget:(id)target;	// 0x354ddee9
- (BOOL)removeControl:(id)control shouldRemoveTarget:(id)target;	// 0x354dde7d
- (void)removeControl:(id)control willRemoveTarget:(id)target;	// 0x354ddea9
- (void)removeControlWillHideRemoveConfirmation:(id)removeControl;	// 0x354dd839
- (void)removeControlWillShowRemoveConfirmation:(id)removeControl;	// 0x354dd779
- (void)removeFromSuperview;	// 0x354dd435
- (float)selectionPercent;	// 0x354dbb95
// converted property getter: - (int)separatorStyle;	// 0x354dc031
- (void)setAlpha:(float)alpha;	// 0x354dc089
- (void)setDisclosureClickable:(BOOL)clickable;	// 0x354dd505
// converted property setter: - (void)setDisclosureStyle:(int)style;	// 0x354dbe09
- (void)setDisclosureStyleNoUpdate:(int)update;	// 0x354dc005
// converted property setter: - (void)setDisclosureView:(id)view;	// 0x354dd941
- (void)setEnableReordering:(BOOL)reordering animated:(BOOL)animated;	// 0x354dc519
// converted property setter: - (void)setSelected:(BOOL)selected;	// 0x354dbca1
- (void)setSelected:(BOOL)selected withFade:(BOOL)fade;	// 0x354db97d
- (void)setSelectionStyle:(int)style;	// 0x354dbdb5
// converted property setter: - (void)setSeparatorStyle:(int)style;	// 0x354dbd51
- (void)setSeparatorStyleOnly:(int)only;	// 0x354dc045
// converted property setter: - (void)setShowDisclosure:(BOOL)disclosure;	// 0x354dbda1
- (void)setShowDisclosure:(BOOL)disclosure animated:(BOOL)animated;	// 0x354de219
// converted property setter: - (void)setShowDisclosureWhenReordering:(BOOL)reordering;	// 0x354dc4ed
// converted property setter: - (void)setShowSelection:(BOOL)selection;	// 0x354dbcd5
- (void)setShowSelectionNoRedisplay:(BOOL)redisplay;	// 0x354dbd2d
// converted property getter: - (BOOL)showDisclosure;	// 0x354dc075
// converted property getter: - (BOOL)showDisclosureWhenReordering;	// 0x354dc505
// converted property getter: - (BOOL)showSelection;	// 0x354dc05d
- (void)updateHighlightColors;	// 0x354dbb6d
@end


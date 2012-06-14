/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIImageAndTextTableCell.h"

@class UIImageView, UIBezierPath, UITextLabel;

@interface UIPreferencesTableCell : UIImageAndTextTableCell {
@private
	int _cellOutline;	// 72 = 0x48
	id _value;	// 76 = 0x4c
	SEL _action;	// 80 = 0x50
	id _target;	// 84 = 0x54
	UIImageView *_checkedImageView;	// 88 = 0x58
@protected
	UIBezierPath *_fillPath;	// 92 = 0x5c
	UIBezierPath *_strokePath;	// 96 = 0x60
	UITextLabel *_valueTextLabel;	// 100 = 0x64
	unsigned _radioGroupItem : 1;	// 104 = 0x68
	unsigned _ignoreRemoveFromSuperView : 1;	// 104 = 0x68
	unsigned _drawAsLabel : 1;	// 104 = 0x68
	unsigned _drawAsGroupTitle : 1;	// 104 = 0x68
	unsigned _drawsBackground : 1;	// 104 = 0x68
	unsigned _blueDisclosureCircle : 1;	// 104 = 0x68
	unsigned _checkStyle : 4;	// 104 = 0x68
	unsigned _superViewIsPrefTable : 1;	// 105 = 0x69
	unsigned _dontHighlightOnMouseDown : 1;	// 105 = 0x69
	unsigned _tracking : 1;	// 105 = 0x69
	unsigned _valueChanged : 1;	// 105 = 0x69
	unsigned _removeControlVisible : 1;	// 105 = 0x69
	unsigned _dontIndentForRemoveControl : 1;	// 105 = 0x69
	unsigned _checkPosition : 1;	// 106 = 0x6a
	unsigned _truncatesTitleBeforeValue : 1;	// 106 = 0x6a
	unsigned _reserved : 14;	// 106 = 0x6a
}
@property(assign) SEL action;	// G=0x30227af1; S=0x30227ae1; converted property
@property(assign) int cellOutline;	// G=0x30226ca1; S=0x30226c09; converted property
@property(assign, getter=isChecked) BOOL checked;	// G=0x30227d49; S=0x30227c35; converted property
@property(assign) BOOL indentsBackgroundForRemoveControl;	// G=0x30228429; S=0x302283fd; converted property
@property(retain) id target;	// G=0x30227ad1; S=0x30227ac1; converted property
@property(assign) BOOL truncatesTitleBeforeValue;	// G=0x302279b9; S=0x3022796d; converted property
@property(retain) id value;	// G=0x3022795d; S=0x30227851; converted property
@property(readonly, retain) UITextLabel *valueTextLabel;	// G=0x302276f5; converted property
+ (id)defaultTitleFont;	// 0x30225c01
+ (Class)valueTextLabelClass;	// 0x302276d9
- (id)initWithFrame:(CGRect)frame;	// 0x3022651d
- (void)_animateRemoveControlVisible:(BOOL)visible;	// 0x30226e95
- (CGImageRef)_cachedBackgroundImage;	// 0x30226a8d
- (float)_cellInset;	// 0x302257b5
- (id)_checkMarkImage;	// 0x30227b01
- (id)_copyBackgroundButtonViewWithFrame:(CGRect)frame;	// 0x30226d5d
- (void)_createBezierPathWithCornerRadius:(float)cornerRadius bottomRadius:(float)radius animating:(BOOL)animating;	// 0x302261a1
- (CGImageRef)_createCachedPrefImage;	// 0x30226a39
- (CGContextRef)_createContextForCaching;	// 0x30226941
- (void)_disclosureClicked:(id)clicked;	// 0x30227d61
- (BOOL)_drawAsGroupTitle;	// 0x3022806d
- (id)_getTitleColor;	// 0x30227699
- (void)_invalidatePaths;	// 0x30226645
- (void)_layoutDisclosureIfNeeded;	// 0x30228531
- (void)_layoutSubviewsAnimated:(BOOL)animated;	// 0x30226bbd
- (void)_removeContextFromSuperview:(id)superview finished:(id)finished context:(id)context;	// 0x30226cb1
- (void)_removeContextFromSuperviewAndRedislaySelf:(id)superviewAndRedislaySelf finished:(id)finished context:(id)context;	// 0x30226cc5
- (id)_scriptingInfo;	// 0x3022908d
- (void)_setDrawAsGroupTitle:(BOOL)title;	// 0x30228081
- (void)_setDrawAsLabel:(BOOL)label;	// 0x30228145
- (void)_setHighlightOnMouseDown:(BOOL)down;	// 0x30225ddd
- (void)_setIgnoreRemoveFromSuperView:(BOOL)superView;	// 0x30228f31
- (void)_setRadioGroupItem:(BOOL)item;	// 0x30227b71
- (void)_setSuperviewsIsPrefTable:(BOOL)table;	// 0x30225c25
- (void)_unhighlight;	// 0x30225f21
- (void)_updateButtonSizeForRemoveControlVisible:(BOOL)removeControlVisible animated:(BOOL)animated;	// 0x30227325
// converted property getter: - (SEL)action;	// 0x30227af1
- (CGRect)buttonBounds;	// 0x302257dd
// converted property getter: - (int)cellOutline;	// 0x30226ca1
- (CGRect)contentBounds;	// 0x302258b1
- (id)createRemoveControl;	// 0x30228441
- (void)dealloc;	// 0x30226569
- (id)disclosureImage;	// 0x30227fcd
- (id)disclosurePressedImage;	// 0x3022801d
- (float)disclosureRightMargin;	// 0x302279cd
- (void)drawBackgroundInRect:(CGRect)rect withFade:(float)fade;	// 0x302267b1
- (id)enclosingPreferencesTable;	// 0x30225bd1
- (id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;	// 0x30227a2d
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x30228fc1
- (CGPoint)iconInset;	// 0x30228675
// converted property getter: - (BOOL)indentsBackgroundForRemoveControl;	// 0x30228429
// converted property getter: - (BOOL)isChecked;	// 0x30227d49
- (void)layoutSubviews;	// 0x30228695
- (void)mouseDown:(GSEventRef)down;	// 0x30226109
- (void)mouseDragged:(GSEventRef)dragged;	// 0x30225e1d
- (void)mouseUp:(GSEventRef)up;	// 0x30225f35
- (void)movedToSuperview:(id)superview;	// 0x30225c49
- (id)outlineColor;	// 0x30227645
- (BOOL)pointMostlyInside:(CGPoint)inside forEvent:(GSEventRef)event;	// 0x30225d49
- (BOOL)pointMostlyInside:(CGPoint)inside withEvent:(id)event;	// 0x30225ced
- (float)removeButtonAnimationDuration;	// 0x30226e6d
- (void)removeControl:(id)control willRemoveTarget:(id)target;	// 0x3022742d
- (void)removeControlWillHideRemoveButton:(id)removeControl animated:(BOOL)animated;	// 0x302273dd
- (void)removeControlWillShowRemoveButton:(id)removeControl animated:(BOOL)animated;	// 0x3022738d
- (void)removeFromSuperview;	// 0x30226605
// converted property setter: - (void)setAction:(SEL)action;	// 0x30227ae1
// converted property setter: - (void)setCellOutline:(int)outline;	// 0x30226c09
- (void)setCheckPosition:(int)position;	// 0x30227bf1
- (void)setCheckStyle:(int)style;	// 0x30227b95
// converted property setter: - (void)setChecked:(BOOL)checked;	// 0x30227c35
- (void)setDrawsBackground:(BOOL)background;	// 0x3022669d
- (void)setFrame:(CGRect)frame;	// 0x302266d5
- (void)setHighlighted:(BOOL)highlighted;	// 0x30225da5
- (void)setIcon:(id)icon;	// 0x30228d7d
// converted property setter: - (void)setIndentsBackgroundForRemoveControl:(BOOL)removeControl;	// 0x302283fd
- (void)setNeedsDisplay;	// 0x302264b5
- (void)setSelected:(BOOL)selected withFade:(BOOL)fade;	// 0x30228ea9
// converted property setter: - (void)setTarget:(id)target;	// 0x30227ac1
// converted property setter: - (void)setTruncatesTitleBeforeValue:(BOOL)value;	// 0x3022796d
- (void)setUserInteractionEnabled:(BOOL)enabled;	// 0x30228f55
- (void)setUsesBlueDisclosureCircle:(BOOL)circle;	// 0x30227df1
// converted property setter: - (void)setValue:(id)value;	// 0x30227851
- (void)sizeToFit;	// 0x30228261
// converted property getter: - (id)target;	// 0x30227ad1
- (CGPoint)textInset;	// 0x30228685
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x30228ffd
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x3022905d
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x3022902d
// converted property getter: - (BOOL)truncatesTitleBeforeValue;	// 0x302279b9
- (void)updateHighlightColors;	// 0x30228dbd
// converted property getter: - (id)value;	// 0x3022795d
- (id)valueColor;	// 0x30227629
// converted property getter: - (id)valueTextLabel;	// 0x302276f5
@end


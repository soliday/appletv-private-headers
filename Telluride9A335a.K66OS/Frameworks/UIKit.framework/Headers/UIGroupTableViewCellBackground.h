/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIColor;

__attribute__((visibility("hidden")))
@interface UIGroupTableViewCellBackground : UIView {
@private
	int _sectionLocation;	// 48 = 0x30
	int _newSectionLocation;	// 52 = 0x34
	int _animationCount;	// 56 = 0x38
	int _selectionStyle;	// 60 = 0x3c
	int _separatorStyle;	// 64 = 0x40
	UIView *_topSeparatorView;	// 68 = 0x44
	UIView *_bottomSeparatorView;	// 72 = 0x48
	struct {
		unsigned nonIndexedTitlesShownFirst : 1;
	} _groupBackgroundFlags;	// 76 = 0x4c
	UIColor *_selectionTintColor;	// 80 = 0x50
}
@property(retain) id backgroundColor;	// G=0x33c3f86d; S=0x33aa8cfd; converted property
@property(assign, nonatomic) int sectionLocation;	// G=0x33a54d5d; S=0x33a52b11; 
@property(assign, nonatomic, getter=isSelected) BOOL selected;	// G=0x33a53ebd; S=0x33aa82b1; 
@property(assign, nonatomic) int selectionStyle;	// G=0x33c3f84d; S=0x33aa82f5; 
@property(retain, nonatomic) UIColor *selectionTintColor;	// G=0x33a5428d; S=0x33aa83a9; 
@property(assign, nonatomic) int separatorStyle;	// G=0x33c3f85d; S=0x33a52d95; 
+ (void)_flushCacheOnNotification:(id)notification;	// 0x33a3e615
+ (void)initialize;	// 0x33a30d89
- (id)initWithFrame:(CGRect)frame;	// 0x33a52239
- (id)_backgroundColor;	// 0x33a53ef5
- (id)_bottomShadowColor;	// 0x33a53ff5
- (id)_cachedImageForKey:(id)key;	// 0x33a54301
- (id)_contentMaskLayer;	// 0x33c3f871
- (CGRect)_contentRectForContentHeight:(float)contentHeight;	// 0x33c3f6a5
- (CGRect)_contentsCenter:(BOOL)center;	// 0x33a52611
- (CGRect)_contentsRect:(BOOL)rect;	// 0x33a5257d
- (void)_decrementAnimationCount;	// 0x33aa8d59
- (id)_fillColor;	// 0x33a540f5
- (void)_incrementAnimationCount;	// 0x33aa8ca5
- (void)_layoutSubviews:(BOOL)subviews;	// 0x33a52419
- (float)_pixelDisplayedImageHeight;	// 0x33aa8c5d
- (id)_roundedRectBezierPathInRect:(CGRect)rect withSectionLocation:(int)sectionLocation forBorder:(BOOL)border cornerRadiusAdjustment:(float)adjustment;	// 0x33a54c5d
- (id)_sectionBorderColor;	// 0x33a54199
- (id)_separatorColor;	// 0x33a52dfd
- (void)_setSectionLocationAnimationDidStop;	// 0x33aac895
- (id)_topShadowColor;	// 0x33c3f7a5
- (id)_topShadowViewWithColor:(id)color;	// 0x33a53105
- (void)_updateSeparatorViews;	// 0x33a52695
// converted property getter: - (id)backgroundColor;	// 0x33c3f86d
- (void)dealloc;	// 0x33aadb51
- (void)displayLayer:(id)layer;	// 0x33a53b29
// declared property getter: - (BOOL)isSelected;	// 0x33a53ebd
- (void)layoutSubviews;	// 0x33a52405
// declared property getter: - (int)sectionLocation;	// 0x33a54d5d
// declared property getter: - (int)selectionStyle;	// 0x33c3f84d
// declared property getter: - (id)selectionTintColor;	// 0x33a5428d
// declared property getter: - (int)separatorStyle;	// 0x33c3f85d
// converted property setter: - (void)setBackgroundColor:(id)color;	// 0x33aa8cfd
- (void)setFrame:(CGRect)frame;	// 0x33a52289
// declared property setter: - (void)setSectionLocation:(int)location;	// 0x33a52b11
- (void)setSectionLocation:(int)location animated:(BOOL)animated;	// 0x33a52b25
// declared property setter: - (void)setSelected:(BOOL)selected;	// 0x33aa82b1
// declared property setter: - (void)setSelectionStyle:(int)style;	// 0x33aa82f5
// declared property setter: - (void)setSelectionTintColor:(id)color;	// 0x33aa83a9
- (void)setSelectionTintColor:(id)color layoutSubviews:(BOOL)subviews;	// 0x33aa833d
// declared property setter: - (void)setSeparatorStyle:(int)style;	// 0x33a52d95
@end


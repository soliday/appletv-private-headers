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
@property(retain) id backgroundColor;	// G=0x32f3a86d; S=0x32da3cfd; converted property
@property(assign, nonatomic) int sectionLocation;	// G=0x32d4fd5d; S=0x32d4db11; 
@property(assign, nonatomic, getter=isSelected) BOOL selected;	// G=0x32d4eebd; S=0x32da32b1; 
@property(assign, nonatomic) int selectionStyle;	// G=0x32f3a84d; S=0x32da32f5; 
@property(retain, nonatomic) UIColor *selectionTintColor;	// G=0x32d4f28d; S=0x32da33a9; 
@property(assign, nonatomic) int separatorStyle;	// G=0x32f3a85d; S=0x32d4dd95; 
+ (void)_flushCacheOnNotification:(id)notification;	// 0x32d39615
+ (void)initialize;	// 0x32d2bd89
- (id)initWithFrame:(CGRect)frame;	// 0x32d4d239
- (id)_backgroundColor;	// 0x32d4eef5
- (id)_bottomShadowColor;	// 0x32d4eff5
- (id)_cachedImageForKey:(id)key;	// 0x32d4f301
- (id)_contentMaskLayer;	// 0x32f3a871
- (CGRect)_contentRectForContentHeight:(float)contentHeight;	// 0x32f3a6a5
- (CGRect)_contentsCenter:(BOOL)center;	// 0x32d4d611
- (CGRect)_contentsRect:(BOOL)rect;	// 0x32d4d57d
- (void)_decrementAnimationCount;	// 0x32da3d59
- (id)_fillColor;	// 0x32d4f0f5
- (void)_incrementAnimationCount;	// 0x32da3ca5
- (void)_layoutSubviews:(BOOL)subviews;	// 0x32d4d419
- (float)_pixelDisplayedImageHeight;	// 0x32da3c5d
- (id)_roundedRectBezierPathInRect:(CGRect)rect withSectionLocation:(int)sectionLocation forBorder:(BOOL)border cornerRadiusAdjustment:(float)adjustment;	// 0x32d4fc5d
- (id)_sectionBorderColor;	// 0x32d4f199
- (id)_separatorColor;	// 0x32d4ddfd
- (void)_setSectionLocationAnimationDidStop;	// 0x32da7895
- (id)_topShadowColor;	// 0x32f3a7a5
- (id)_topShadowViewWithColor:(id)color;	// 0x32d4e105
- (void)_updateSeparatorViews;	// 0x32d4d695
// converted property getter: - (id)backgroundColor;	// 0x32f3a86d
- (void)dealloc;	// 0x32da8b51
- (void)displayLayer:(id)layer;	// 0x32d4eb29
// declared property getter: - (BOOL)isSelected;	// 0x32d4eebd
- (void)layoutSubviews;	// 0x32d4d405
// declared property getter: - (int)sectionLocation;	// 0x32d4fd5d
// declared property getter: - (int)selectionStyle;	// 0x32f3a84d
// declared property getter: - (id)selectionTintColor;	// 0x32d4f28d
// declared property getter: - (int)separatorStyle;	// 0x32f3a85d
// converted property setter: - (void)setBackgroundColor:(id)color;	// 0x32da3cfd
- (void)setFrame:(CGRect)frame;	// 0x32d4d289
// declared property setter: - (void)setSectionLocation:(int)location;	// 0x32d4db11
- (void)setSectionLocation:(int)location animated:(BOOL)animated;	// 0x32d4db25
// declared property setter: - (void)setSelected:(BOOL)selected;	// 0x32da32b1
// declared property setter: - (void)setSelectionStyle:(int)style;	// 0x32da32f5
// declared property setter: - (void)setSelectionTintColor:(id)color;	// 0x32da33a9
- (void)setSelectionTintColor:(id)color layoutSubviews:(BOOL)subviews;	// 0x32da333d
// declared property setter: - (void)setSeparatorStyle:(int)style;	// 0x32d4dd95
@end

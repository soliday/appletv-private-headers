/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIBarItem.h"

@class UIImage, NSSet, NSString, UIView;

@interface UITabBarItem : UIBarItem {
@private
	NSString *_title;	// 8 = 0x8
	NSSet *_possibleTitles;	// 12 = 0xc
	SEL _action;	// 16 = 0x10
	id _target;	// 20 = 0x14
	UIImage *_image;	// 24 = 0x18
	UIImage *_selectedImage;	// 28 = 0x1c
	UIImage *_unselectedImage;	// 32 = 0x20
	UIEdgeInsets _imageInsets;	// 36 = 0x24
	NSString *_badgeValue;	// 52 = 0x34
	UIView *_view;	// 56 = 0x38
	int _tag;	// 60 = 0x3c
	id _appearanceStorage;	// 64 = 0x40
	struct {
		unsigned enabled : 1;
		unsigned style : 3;
		unsigned isSystemItem : 1;
		unsigned systemItem : 7;
		unsigned viewIsCustom : 1;
		unsigned animatedBadge : 1;
		unsigned customSelectedImage : 1;
		unsigned customUnselectedImage : 1;
	} _tabBarItemFlags;	// 68 = 0x44
}
@property(assign, nonatomic) SEL action;	// G=0x33a9c99d; S=0x33a1206d; 
@property(assign, nonatomic) BOOL animatedBadge;	// G=0x33bf84d1; S=0x33bf8455; 
@property(copy, nonatomic) NSString *badgeValue;	// G=0x33bf7fc9; S=0x33a10a01; 
@property(assign, getter=isEnabled) BOOL enabled;	// G=0x33a140e5; S=0x33a106c1; converted property
@property(retain) UIImage *image;	// G=0x33a11391; S=0x33a10bd9; converted property
@property(assign) UIEdgeInsets imageInsets;	// G=0x33a1447d; S=0x33bf7f29; converted property
@property(retain, nonatomic) UIImage *selectedImage;	// G=0x33a113e1; S=0x33bf84e5; 
@property(assign) int tag;	// G=0x33a55ac1; S=0x33a1073d; converted property
@property(assign, nonatomic) id target;	// G=0x33a9c9ad; S=0x33a1205d; 
@property(retain) NSString *title;	// G=0x33a1442d; S=0x33a109d5; converted property
@property(assign) UIOffset titlePositionAdjustment;	// G=0x33bf83dd; S=0x33bf82bd; converted property
@property(retain, nonatomic) UIImage *unselectedImage;	// G=0x33a11435; S=0x33bf8549; 
@property(retain, nonatomic) UIView *view;	// G=0x33a12695; S=0x33a14191; 
@property(assign, nonatomic) BOOL viewIsCustom;	// G=0x33a13fbd; S=0x33bf8431; 
+ (id)_appearanceProxyViewClasses;	// 0x33bf86f5
- (id)init;	// 0x33a10679
- (id)initWithCoder:(id)coder;	// 0x33bf7afd
- (id)initWithTabBarSystemItem:(int)tabBarSystemItem tag:(int)tag;	// 0x33a1061d
- (id)initWithTitle:(id)title image:(id)image tag:(int)tag;	// 0x33a10b71
- (id)_createViewForTabBar:(id)tabBar showingBadge:(BOOL)badge;	// 0x33a126a5
- (id)_createViewForTabBar:(id)tabBar showingBadge:(BOOL)badge withTint:(BOOL)tint;	// 0x33a126c9
- (id)_internalTemplateImage;	// 0x33a12c11
- (id)_internalTitle;	// 0x33a12cfd
- (void)_setInternalTemplateImage:(id)image;	// 0x33a10c05
- (void)_setInternalTitle:(id)title;	// 0x33a107c9
- (void)_setTitleTextAttributeValue:(id)value forAttributeKey:(id)attributeKey state:(unsigned)state;	// 0x33bf85b9
- (id)_updateImageWithTintColor:(id)tintColor isSelected:(BOOL)selected getImageOffset:(UIOffset *)offset;	// 0x33a14301
- (void)_updateView;	// 0x33a1083d
// declared property getter: - (SEL)action;	// 0x33a9c99d
// declared property getter: - (BOOL)animatedBadge;	// 0x33bf84d1
// declared property getter: - (id)badgeValue;	// 0x33bf7fc9
- (void)dealloc;	// 0x33bf7e65
- (void)encodeWithCoder:(id)coder;	// 0x33bf7ccd
- (id)finishedSelectedImage;	// 0x33bf80fd
- (id)finishedUnselectedImage;	// 0x33bf8129
// converted property getter: - (id)image;	// 0x33a11391
// converted property getter: - (UIEdgeInsets)imageInsets;	// 0x33a1447d
// converted property getter: - (BOOL)isEnabled;	// 0x33a140e5
- (BOOL)isSystemItem;	// 0x33a107b5
- (id)nextResponder;	// 0x33bf8599
// declared property getter: - (id)selectedImage;	// 0x33a113e1
// declared property setter: - (void)setAction:(SEL)action;	// 0x33a1206d
// declared property setter: - (void)setAnimatedBadge:(BOOL)badge;	// 0x33bf8455
// declared property setter: - (void)setBadgeValue:(id)value;	// 0x33a10a01
// converted property setter: - (void)setEnabled:(BOOL)enabled;	// 0x33a106c1
- (void)setFinishedSelectedImage:(id)image withFinishedUnselectedImage:(id)finishedUnselectedImage;	// 0x33bf8001
// converted property setter: - (void)setImage:(id)image;	// 0x33a10bd9
// converted property setter: - (void)setImageInsets:(UIEdgeInsets)insets;	// 0x33bf7f29
// declared property setter: - (void)setSelectedImage:(id)image;	// 0x33bf84e5
// converted property setter: - (void)setTag:(int)tag;	// 0x33a1073d
// declared property setter: - (void)setTarget:(id)target;	// 0x33a1205d
// converted property setter: - (void)setTitle:(id)title;	// 0x33a109d5
// converted property setter: - (void)setTitlePositionAdjustment:(UIOffset)adjustment;	// 0x33bf82bd
- (void)setTitleTextAttributes:(id)attributes forState:(unsigned)state;	// 0x33bf8151
// declared property setter: - (void)setUnselectedImage:(id)image;	// 0x33bf8549
// declared property setter: - (void)setView:(id)view;	// 0x33a14191
// declared property setter: - (void)setViewIsCustom:(BOOL)custom;	// 0x33bf8431
- (int)systemItem;	// 0x33a12bfd
// converted property getter: - (int)tag;	// 0x33a55ac1
// declared property getter: - (id)target;	// 0x33a9c9ad
// converted property getter: - (id)title;	// 0x33a1442d
// converted property getter: - (UIOffset)titlePositionAdjustment;	// 0x33bf83dd
- (id)titleTextAttributesForState:(unsigned)state;	// 0x33bf8275
// declared property getter: - (id)unselectedImage;	// 0x33a11435
// declared property getter: - (id)view;	// 0x33a12695
// declared property getter: - (BOOL)viewIsCustom;	// 0x33a13fbd
@end

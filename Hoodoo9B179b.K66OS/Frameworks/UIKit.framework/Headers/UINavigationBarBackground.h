/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIImageView.h"

@class UIColor, _UINavigationBarAppearanceStorage;

__attribute__((visibility("hidden")))
@interface UINavigationBarBackground : UIImageView {
@private
	UIColor *_tintColor;	// 52 = 0x34
	_UINavigationBarAppearanceStorage *_appearanceStorage;	// 56 = 0x38
	struct {
		unsigned isTranslucent : 1;
		unsigned barStyle : 3;
		unsigned backgroundImageNeedsUpdate : 1;
		unsigned isContainedInPopover : 1;
	} _navbarFlags;	// 60 = 0x3c
}
@property(retain, nonatomic) _UINavigationBarAppearanceStorage *appearanceStorage;	// G=0x3308afcd; S=0x3308afdd; @synthesize=_appearanceStorage
@property(assign, nonatomic) int barStyle;	// G=0x33026cfd; S=0x32f849e1; 
@property(retain, nonatomic) UIColor *tintColor;	// G=0x3308aea9; S=0x3308ae51; 
@property(assign, nonatomic, getter=isTranslucent) BOOL translucent;	// G=0x3308aeb9; S=0x32f84d25; 
- (id)initWithFrame:(CGRect)frame barStyle:(int)style tintColor:(id)color appearance:(id)appearance isTranslucent:(BOOL)translucent;	// 0x32ef46d9
- (void)_didMoveFromWindow:(id)window toWindow:(id)window2;	// 0x32efd0b9
- (void)_setIsContainedInPopover:(BOOL)popover;	// 0x3308aecd
// declared property getter: - (id)appearanceStorage;	// 0x3308afcd
// declared property getter: - (int)barStyle;	// 0x33026cfd
- (void)dealloc;	// 0x32f85cc9
// declared property getter: - (BOOL)isTranslucent;	// 0x3308aeb9
// declared property setter: - (void)setAppearanceStorage:(id)storage;	// 0x3308afdd
// declared property setter: - (void)setBarStyle:(int)style;	// 0x32f849e1
- (void)setBounds:(CGRect)bounds;	// 0x3308aeed
- (void)setFrame:(CGRect)frame;	// 0x32ef47c9
// declared property setter: - (void)setTintColor:(id)color;	// 0x3308ae51
// declared property setter: - (void)setTranslucent:(BOOL)translucent;	// 0x32f84d25
// declared property getter: - (id)tintColor;	// 0x3308aea9
- (void)updateBackgroundImage;	// 0x32ef48a9
@end


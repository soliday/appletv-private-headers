/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIColor, UIImage;

__attribute__((visibility("hidden")))
@interface UISearchBarBackground : UIView {
@private
	UIColor *_tintColor;	// 44 = 0x2c
	UIImage *_backgroundImage;	// 48 = 0x30
	unsigned _barStyle : 3;	// 52 = 0x34
	unsigned _isTranslucent : 1;	// 52 = 0x34
	unsigned _usesEmbeddedAppearance : 1;	// 52 = 0x34
}
@property(retain, nonatomic) UIImage *backgroundImage;	// G=0x30287bdd; S=0x3010eded; 
@property(assign, nonatomic) int barStyle;	// G=0x300f5dfd; S=0x30287c0d; 
@property(retain, nonatomic) UIColor *tintColor;	// G=0x30287bcd; S=0x30287c95; @synthesize=_tintColor
@property(assign, nonatomic, getter=isTranslucent) BOOL translucent;	// G=0x30287b85; S=0x30287c55; 
@property(assign, nonatomic) BOOL usesEmbeddedAppearance;	// G=0x30287bb9; S=0x300eefa5; 
- (BOOL)_canDrawContent;	// 0x300ee0c1
// declared property getter: - (id)backgroundImage;	// 0x30287bdd
// declared property getter: - (int)barStyle;	// 0x300f5dfd
- (void)dealloc;	// 0x30288475
- (void)drawRect:(CGRect)rect;	// 0x300f5c19
// declared property getter: - (BOOL)isTranslucent;	// 0x30287b85
// declared property setter: - (void)setBackgroundImage:(id)image;	// 0x3010eded
// declared property setter: - (void)setBarStyle:(int)style;	// 0x30287c0d
// declared property setter: - (void)setTintColor:(id)color;	// 0x30287c95
// declared property setter: - (void)setTranslucent:(BOOL)translucent;	// 0x30287c55
// declared property setter: - (void)setUsesEmbeddedAppearance:(BOOL)appearance;	// 0x300eefa5
// declared property getter: - (id)tintColor;	// 0x30287bcd
// declared property getter: - (BOOL)usesEmbeddedAppearance;	// 0x30287bb9
@end


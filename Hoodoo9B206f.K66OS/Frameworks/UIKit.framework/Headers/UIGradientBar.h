/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImageView, UIColor, UIImage;

@interface UIGradientBar : UIView {
	UIImageView *_topShineView;	// 48 = 0x30
	UIImageView *_gradientFillView;	// 52 = 0x34
	UIView *_bottomLineView;	// 56 = 0x38
	float _gradientHeight;	// 60 = 0x3c
}
@property(retain, nonatomic) UIColor *customBottomLineColor;	// G=0x35531331; S=0x355312e5; 
@property(retain, nonatomic) UIImage *customGradientFillImage;	// G=0x35531259; S=0x3553120d; 
@property(retain, nonatomic) UIImage *customTopShineImage;	// G=0x355312c5; S=0x35531279; 
+ (id)bottomLineColor;	// 0x353ada61
+ (id)gradientFillImage;	// 0x353ada41
+ (id)topShineImage;	// 0x353ada51
- (id)initWithFrame:(CGRect)frame;	// 0x353ad7cd
- (void)_tile;	// 0x353adaa9
// declared property getter: - (id)customBottomLineColor;	// 0x35531331
// declared property getter: - (id)customGradientFillImage;	// 0x35531259
// declared property getter: - (id)customTopShineImage;	// 0x355312c5
- (void)dealloc;	// 0x35531351
- (id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;	// 0x35531439
- (void)setBottomLineAlpha:(float)alpha;	// 0x355313c5
// declared property setter: - (void)setCustomBottomLineColor:(id)color;	// 0x355312e5
// declared property setter: - (void)setCustomGradientFillImage:(id)image;	// 0x3553120d
// declared property setter: - (void)setCustomTopShineImage:(id)image;	// 0x35531279
- (void)setFrame:(CGRect)frame;	// 0x353ad999
- (void)setGradientHeight:(float)height;	// 0x355313e5
@end


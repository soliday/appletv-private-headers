/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIView.h"
#import "UIKit-Structs.h"


@interface UIPopoverBackgroundView : UIView {
}
@property(assign, nonatomic) unsigned arrowDirection;	// G=0x3044a40d; S=0x3044a41d; 
@property(assign, nonatomic) float arrowOffset;	// G=0x3044a381; S=0x3044a405; 
+ (float)arrowBase;	// 0x3044a439
+ (float)arrowHeight;	// 0x3044a425
+ (UIEdgeInsets)contentViewInsets;	// 0x3044a44d
+ (BOOL)wantsDefaultContentAppearance;	// 0x3044a469
- (CGRect)_contentViewFrame;	// 0x3044a951
- (UIEdgeInsets)_shadowInsets;	// 0x3044a64d
- (CGSize)_shadowOffset;	// 0x3044a66d
- (float)_shadowOpacity;	// 0x3044a65d
- (id)_shadowPath;	// 0x3044a67d
- (id)_shadowPathForRect:(CGRect)rect arrowDirection:(unsigned)direction;	// 0x3044a495
- (float)_shadowRadius;	// 0x3044a665
- (BOOL)_shouldAnimatePropertyWithKey:(id)key;	// 0x3044a7d9
- (void)_updateShadow;	// 0x3044a6e5
- (BOOL)_wantsDefaultContentAppearance;	// 0x3044a46d
- (id)actionForLayer:(id)layer forKey:(id)key;	// 0x3044a831
// declared property getter: - (unsigned)arrowDirection;	// 0x3044a40d
// declared property getter: - (float)arrowOffset;	// 0x3044a381
- (int)backgroundStyle;	// 0x3044abb1
- (void)layoutSubviews;	// 0x3044ab71
// declared property setter: - (void)setArrowDirection:(unsigned)direction;	// 0x3044a41d
// declared property setter: - (void)setArrowOffset:(float)offset;	// 0x3044a405
@end

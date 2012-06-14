/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIControl.h"
#import "UIKit-Structs.h"

@class UITableViewCell;

__attribute__((visibility("hidden")))
@interface UITableViewCellEditControl : UIControl {
@private
	UITableViewCell *_cell;	// 72 = 0x48
	unsigned _style : 2;	// 76 = 0x4c
	unsigned _rotated : 1;	// 76 = 0x4c
	unsigned _rotating : 1;	// 76 = 0x4c
	unsigned _hiding : 1;	// 76 = 0x4c
	unsigned _reserved : 27;	// 76 = 0x4c
}
@property(assign, nonatomic, getter=isHiding) BOOL hiding;	// G=0x355b6e61; S=0x355b6e49; 
@property(assign, nonatomic, getter=isRotated) BOOL rotated;	// G=0x3544cc5d; S=0x355b6e21; 
+ (id)_deleteImage;	// 0x35437fe1
+ (id)_deleteImageBackground;	// 0x3536ca39
+ (id)_insertImage;	// 0x35436cbd
+ (CGRect)_minusRect;	// 0x354380bd
+ (id)_multiSelectHighlightedImage;	// 0x355b6db1
+ (id)_multiSelectNotSelectedImage;	// 0x355b6d09
+ (id)_multiSelectSelectedImage;	// 0x355b6d41
+ (CGSize)defaultSize;	// 0x3536c9d1
- (id)initWithTableViewCell:(id)tableViewCell editingStyle:(int)style;	// 0x3543511d
- (id)_currentImage;	// 0x354354cd
- (id)_minusView;	// 0x3544ca65
- (void)_multiselectColorChanged;	// 0x355b6e75
- (void)_toggleRotate;	// 0x3544ca3d
- (void)_toggleRotateAnimationDidStop:(id)_toggleRotateAnimation finished:(BOOL)finished;	// 0x3544dd59
- (void)_updateImageView;	// 0x3544958d
// declared property getter: - (BOOL)isHiding;	// 0x355b6e61
// declared property getter: - (BOOL)isRotated;	// 0x3544cc5d
- (BOOL)isRotating;	// 0x355b6e35
- (void)layoutSubviews;	// 0x35435311
- (void)setFrame:(CGRect)frame;	// 0x354352c9
// declared property setter: - (void)setHiding:(BOOL)hiding;	// 0x355b6e49
- (void)setHighlighted:(BOOL)highlighted;	// 0x3544954d
// declared property setter: - (void)setRotated:(BOOL)rotated;	// 0x355b6e21
- (void)setRotated:(BOOL)rotated animated:(BOOL)animated;	// 0x35435d65
- (void)setSelected:(BOOL)selected;	// 0x354a3059
@end


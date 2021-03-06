/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIControl.h"
#import "UIKit-Structs.h"


__attribute__((visibility("hidden")))
@interface UIRemoveControlMinusButton : UIControl {
@private
	unsigned _rotated : 1;	// 70 = 0x46
	unsigned _rotating : 1;	// 70 = 0x46
	unsigned _hiding : 1;	// 70 = 0x46
	unsigned _showAsPlus : 1;	// 70 = 0x46
	unsigned _reserved : 28;	// 70 = 0x46
	float _verticalOffset;	// 76 = 0x4c
}
@property(assign, getter=isHiding) BOOL hiding;	// G=0x354fdad9; S=0x354fdac1; converted property
+ (float)defaultWidth;	// 0x3543576d
+ (id)minusImage;	// 0x354357c5
+ (id)plusImage;	// 0x354fd7b5
- (id)initWithRemoveControl:(id)removeControl;	// 0x354fd7ed
- (void)_toggleRotateAnimationDidStop:(id)_toggleRotateAnimation finished:(BOOL)finished;	// 0x354fdd9d
- (void)animator:(id)animator stopAnimation:(id)animation;	// 0x354fdc1d
- (void)dealloc;	// 0x354fda65
- (void)drawRect:(CGRect)rect;	// 0x354fdaed
// converted property getter: - (BOOL)isHiding;	// 0x354fdad9
- (BOOL)isRotated;	// 0x354fdd75
- (BOOL)isRotating;	// 0x354fdd89
// converted property setter: - (void)setHiding:(BOOL)hiding;	// 0x354fdac1
- (void)toggleRotate:(BOOL)rotate;	// 0x354fdc59
@end


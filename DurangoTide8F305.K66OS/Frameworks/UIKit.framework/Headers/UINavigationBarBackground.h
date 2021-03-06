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
@interface UINavigationBarBackground : UIView {
@private
	int _barStyle;	// 44 = 0x2c
	UIColor *_tintColor;	// 48 = 0x30
	struct {
		unsigned isTranslucent : 1;
	} _navbarFlags;	// 52 = 0x34
}
- (id)initWithFrame:(CGRect)frame withBarStyle:(int)barStyle withTintColor:(id)tintColor isTranslucent:(BOOL)translucent;	// 0x320714f1
- (void)dealloc;	// 0x32071fbd
- (void)drawRect:(CGRect)rect;	// 0x3207165d
@end


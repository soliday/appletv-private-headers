/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIColor.h"


__attribute__((visibility("hidden")))
@interface UIDeviceWhiteColor : UIColor {
@private
	float whiteComponent;	// 8 = 0x8
	float alphaComponent;	// 12 = 0xc
	CGColorRef cachedColor;	// 16 = 0x10
}
@property(readonly, assign) float alphaComponent;	// G=0x35438161; converted property
- (id)initWithCGColor:(CGColorRef)cgcolor;	// 0x353d67c1
- (id)initWithWhite:(float)white alpha:(float)alpha;	// 0x3530a01d
- (CGColorRef)CGColor;	// 0x3530a0c9
- (CGColorRef)_createCGColorWithAlpha:(float)alpha;	// 0x3530a121
// converted property getter: - (float)alphaComponent;	// 0x35438161
- (id)colorSpaceName;	// 0x353cd7bd
- (id)colorWithAlphaComponent:(float)alphaComponent;	// 0x35472085
- (void)dealloc;	// 0x3530bf7d
- (id)description;	// 0x353cd741
- (BOOL)getWhite:(float *)white alpha:(float *)alpha;	// 0x35537a31
- (unsigned)hash;	// 0x353e01bd
- (BOOL)isEqual:(id)equal;	// 0x353cd435
- (void)set;	// 0x35316be5
- (void)setFill;	// 0x353d6769
- (void)setStroke;	// 0x353d6795
@end


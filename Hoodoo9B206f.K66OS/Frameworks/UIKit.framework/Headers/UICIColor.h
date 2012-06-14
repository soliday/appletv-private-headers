/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIColor.h"

@class CIColor;

__attribute__((visibility("hidden")))
@interface UICIColor : UIColor {
@private
	CIColor *_ciColor;	// 8 = 0x8
	UIColor *_rgbColor;	// 12 = 0xc
}
- (id)initWithCIColor:(id)cicolor;	// 0x35537dcd
- (CGColorRef)CGColor;	// 0x3553814d
- (id)CIColor;	// 0x35538175
- (id)_rgbColor;	// 0x35537f79
- (id)colorWithAlphaComponent:(float)alphaComponent;	// 0x355380c5
- (void)dealloc;	// 0x35537e39
- (id)description;	// 0x35537e99
- (BOOL)getRed:(float *)red green:(float *)green blue:(float *)blue alpha:(float *)alpha;	// 0x3553820d
- (unsigned)hash;	// 0x355381ed
- (BOOL)isEqual:(id)equal;	// 0x35538185
- (void)set;	// 0x3553804d
- (void)setFill;	// 0x35538075
- (void)setStroke;	// 0x3553809d
@end


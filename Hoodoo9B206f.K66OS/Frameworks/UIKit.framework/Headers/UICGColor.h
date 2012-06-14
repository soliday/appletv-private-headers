/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIColor.h"


__attribute__((visibility("hidden")))
@interface UICGColor : UIColor {
@private
	CGColorRef cachedColor;	// 8 = 0x8
}
- (id)initWithCGColor:(CGColorRef)cgcolor;	// 0x353ca149
- (CGColorRef)CGColor;	// 0x353ca1a9
- (float)alphaComponent;	// 0x353df0c5
- (id)colorSpaceName;	// 0x355378cd
- (id)colorWithAlphaComponent:(float)alphaComponent;	// 0x35537849
- (void)dealloc;	// 0x353d0765
- (id)description;	// 0x35537965
- (unsigned)hash;	// 0x353e01a9
- (BOOL)isEqual:(id)equal;	// 0x354a2f8d
- (BOOL)isPatternColor;	// 0x354a3031
- (void)set;	// 0x353dfec5
- (void)setFill;	// 0x3553788d
- (void)setStroke;	// 0x355378ad
@end


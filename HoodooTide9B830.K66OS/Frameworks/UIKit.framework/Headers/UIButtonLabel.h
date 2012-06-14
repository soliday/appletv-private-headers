/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UILabel.h"


__attribute__((visibility("hidden")))
@interface UIButtonLabel : UILabel {
@private
	BOOL _reverseShadow;	// 111 = 0x6f
}
@property(assign) CGSize shadowOffset;	// G=0x30288491; S=0x3006e739; converted property
- (void)setFont:(id)font;	// 0x3006e621
- (void)setLineBreakMode:(int)mode;	// 0x3006e8a5
- (void)setReverseShadow:(BOOL)shadow;	// 0x3006e9c9
// converted property setter: - (void)setShadowOffset:(CGSize)offset;	// 0x3006e739
// converted property getter: - (CGSize)shadowOffset;	// 0x30288491
@end


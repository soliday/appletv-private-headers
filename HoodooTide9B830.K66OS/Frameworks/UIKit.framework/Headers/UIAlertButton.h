/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIButton.h"


__attribute__((visibility("hidden")))
@interface UIAlertButton : UIButton {
@private
	float _imageOffset;	// 140 = 0x8c
}
@property(assign, nonatomic) float imageOffset;	// G=0x3036c1c9; S=0x3036c1d9; @synthesize=_imageOffset
@property(retain) id title;	// G=0x30154dc9; S=0x3036c0b1; converted property
- (id)initWithTitle:(id)title;	// 0x300f4959
- (id)image;	// 0x30151bf9
// declared property getter: - (float)imageOffset;	// 0x3036c1c9
- (void)layoutSubviews;	// 0x300f4a55
- (void)setEnabled:(BOOL)enabled;	// 0x3036c165
- (void)setHighlighted:(BOOL)highlighted;	// 0x301534ad
- (void)setImage:(id)image forState:(unsigned)state;	// 0x3036c111
// declared property setter: - (void)setImageOffset:(float)offset;	// 0x3036c1d9
// converted property setter: - (void)setTitle:(id)title;	// 0x3036c0b1
// converted property getter: - (id)title;	// 0x30154dc9
@end


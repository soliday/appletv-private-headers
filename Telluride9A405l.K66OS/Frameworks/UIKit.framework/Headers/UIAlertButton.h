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
@property(assign, nonatomic) float imageOffset;	// G=0x32fc31a9; S=0x32fc31b9; @synthesize=_imageOffset
@property(retain) id title;	// G=0x32db1489; S=0x32fc3091; converted property
- (id)initWithTitle:(id)title;	// 0x32d51781
- (id)image;	// 0x32dae2b9
// declared property getter: - (float)imageOffset;	// 0x32fc31a9
- (void)layoutSubviews;	// 0x32d5187d
- (void)setEnabled:(BOOL)enabled;	// 0x32fc3145
- (void)setHighlighted:(BOOL)highlighted;	// 0x32dafb6d
- (void)setImage:(id)image forState:(unsigned)state;	// 0x32fc30f1
// declared property setter: - (void)setImageOffset:(float)offset;	// 0x32fc31b9
// converted property setter: - (void)setTitle:(id)title;	// 0x32fc3091
// converted property getter: - (id)title;	// 0x32db1489
@end

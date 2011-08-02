/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <BRControl.h> // Unknown library
#import "AppleTV-Structs.h"

@class BRImageControl;

__attribute__((visibility("hidden")))
@interface ATVImageListHeaderControl : BRControl {
@private
	BRImageControl *_image;	// 44 = 0x2c
}
@property(readonly, assign) BRImageControl *image;	// G=0x306fd47d; @synthesize=_image
- (id)init;	// 0x306fd4f5
- (id)accessibilityLabel;	// 0x306fd48d
- (void)dealloc;	// 0x306fd4ad
// declared property getter: - (id)image;	// 0x306fd47d
- (void)layoutSubcontrols;	// 0x306fd55d
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x306fd5e5
@end

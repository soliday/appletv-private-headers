/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class BRImageControl;

__attribute__((visibility("hidden")))
@interface BRVerticalScrollBarControl : BRControl {
@private
	BRImageControl *_image;	// 44 = 0x2c
	float _position;	// 48 = 0x30
}
@property(retain) BRImageControl *image;	// G=0x3297b0c5; S=0x3297b0e5; converted property
- (id)init;	// 0x3297b171
- (void)dealloc;	// 0x3297b129
// converted property getter: - (id)image;	// 0x3297b0c5
- (void)layoutSubcontrols;	// 0x3297b88d
// converted property setter: - (void)setImage:(id)image;	// 0x3297b0e5
- (void)setScrollPosition:(float)position;	// 0x3297b105
@end


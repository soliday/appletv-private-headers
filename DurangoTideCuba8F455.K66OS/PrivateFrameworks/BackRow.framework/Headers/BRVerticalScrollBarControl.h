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
@property(retain) BRImageControl *image;	// G=0x32f7a1a9; S=0x32f7a1c9; converted property
- (id)init;	// 0x32f7a255
- (void)dealloc;	// 0x32f7a20d
// converted property getter: - (id)image;	// 0x32f7a1a9
- (void)layoutSubcontrols;	// 0x32f7a971
// converted property setter: - (void)setImage:(id)image;	// 0x32f7a1c9
- (void)setScrollPosition:(float)position;	// 0x32f7a1e9
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRSelectionLozengeLayer.h"
#import "BackRow-Structs.h"

@class BRImage;

__attribute__((visibility("hidden")))
@interface BRUnboundedSelectionLozengeLayer : BRSelectionLozengeLayer {
@private
	BRImage *_topImage;	// 96 = 0x60
	BRImage *_bottomImage;	// 100 = 0x64
	BOOL _brighterImage;	// 104 = 0x68
	BOOL _focusedImage;	// 105 = 0x69
}
@property(assign) BOOL useBrighterUnselectedImage;	// G=0x328fef45; S=0x328a66b5; converted property
- (id)init;	// 0x328a6535
- (void)_updateImages;	// 0x328a6585
- (void)dealloc;	// 0x328fef59
- (void)drawInContext:(CGContextRef)context;	// 0x328ad175
- (void)layoutSubcontrols;	// 0x328fef55
- (void)setFocused:(BOOL)focused;	// 0x328ad585
// converted property setter: - (void)setUseBrighterUnselectedImage:(BOOL)image;	// 0x328a66b5
// converted property getter: - (BOOL)useBrighterUnselectedImage;	// 0x328fef45
@end


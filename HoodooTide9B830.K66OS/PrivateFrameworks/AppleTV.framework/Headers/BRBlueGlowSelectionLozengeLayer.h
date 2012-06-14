/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSelectionLozengeLayer.h"
#import "AppleTV-Structs.h"


@interface BRBlueGlowSelectionLozengeLayer : BRSelectionLozengeLayer {
@private
	BOOL _focusedImage;	// 46 = 0x2e
	BOOL _clearCenter;	// 47 = 0x2f
}
@property(assign) BOOL clearCenter;	// G=0x329e5dd5; S=0x329e5da5; converted property
- (id)init;	// 0x329e58b5
- (float)bottomGlowHeight;	// 0x329e5909
// converted property getter: - (BOOL)clearCenter;	// 0x329e5dd5
- (void)drawInContext:(CGContextRef)context;	// 0x329e5951
- (float)edgeGlowWidth;	// 0x329e5915
// converted property setter: - (void)setClearCenter:(BOOL)center;	// 0x329e5da5
- (void)setFocused:(BOOL)focused;	// 0x329e5921
- (float)topGlowHeight;	// 0x329e58fd
@end


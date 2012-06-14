/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "Celestial-Structs.h"
#import <CALayer.h> // Unknown library


@interface AVSubtitleLayerUsingWebKit : CALayer {
@private
	AVSubtitleLayerUsingWebKitPrivate *_priv;	// 48 = 0x30
}
- (id)init;	// 0x306960c1
- (void)clearSubtitle;	// 0x30696221
- (void)dealloc;	// 0x3069610d
- (void)drawInContext:(CGContextRef)context;	// 0x306962b9
- (void)setSubtitleString:(CFAttributedStringRef)string forced:(BOOL)forced;	// 0x30696181
@end


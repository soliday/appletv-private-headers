/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "AppleTV-Structs.h"


@interface BRFocusEngine : NSObject {
}
+ (BRFocusEdge)focusEdgeForEvent:(id)event elementPosition:(CGPoint)position elementBounds:(CGSize)bounds;	// 0x32aa2d35
+ (id)initalFocusForPoint:(CGPoint)point container:(id)container searchDownwardOnly:(BOOL)only;	// 0x32aa2569
+ (id)newFocusForCandidate:(id)candidate container:(id)container event:(id)event;	// 0x32aa27e9
+ (id)newFocusForEdge:(BRFocusEdge)edge currentCandidate:(id)candidate container:(id)container event:(id)event;	// 0x32aa28fd
+ (BRFocusEdge)oppositeFocusEdgeForEvent:(id)event elementPosition:(CGPoint)position elementBounds:(CGSize)bounds;	// 0x32aa2dc5
@end


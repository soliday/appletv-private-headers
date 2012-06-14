/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "NSCoding.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface CACGPathCodingSegment : NSObject <NSCoding> {
@private
	int _type;	// 4 = 0x4
	CGPoint _points[3];	// 8 = 0x8
}
- (id)initWithCGPathElement:(const CGPathElement *)cgpathElement;	// 0x36cbf3f1
- (id)initWithCoder:(id)coder;	// 0x36cbf199
- (void)addToCGPath:(CGPathRef)cgpath;	// 0x36cbf32d
- (void)encodeWithCoder:(id)coder;	// 0x36cbefcd
@end


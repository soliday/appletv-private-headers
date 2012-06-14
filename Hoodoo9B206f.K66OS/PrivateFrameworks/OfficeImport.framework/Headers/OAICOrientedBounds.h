/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface OAICOrientedBounds : NSObject {
}
+ (id)absoluteOrientedBoundsOfDrawable:(id)drawable;	// 0x34630de1
+ (id)absoluteOrientedBoundsWithRelativeOrientedBounds:(id)relativeOrientedBounds parentOrientedBounds:(id)bounds parentLogicalBounds:(CGRect)bounds3;	// 0x3463166d
+ (id)adjustedOrientedBoundsWithOrientedBounds:(id)orientedBounds;	// 0x34630eed
+ (id)adjustedOrientedBoundsWithOrientedBounds:(id)orientedBounds logicalBounds:(CGRect)bounds;	// 0x34631205
+ (CGRect)axisParallelBoundsOfOrientedBounds:(id)orientedBounds;	// 0x346319e9
+ (id)relativeOrientedBoundsOfDrawable:(id)drawable;	// 0x3463103d
+ (float)scaleFactorFromLength:(float)length toLength:(float)length2;	// 0x34630db5
+ (CGAffineTransform)transformFromBounds:(CGRect)bounds toOrientedBounds:(id)orientedBounds;	// 0x34631391
@end


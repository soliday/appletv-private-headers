/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <NSObject.h> // Unknown library
#import "WebCore-Structs.h"
#import "NSCopying.h"


@interface WebEventRegion : NSObject <NSCopying> {
@private
	CGPoint p1;	// 4 = 0x4
	CGPoint p2;	// 12 = 0xc
	CGPoint p3;	// 20 = 0x14
	CGPoint p4;	// 28 = 0x1c
}
- (id)initWithPoints:(CGPoint)points :(CGPoint)arg2 :(CGPoint)arg3 :(CGPoint)arg4;	// 0x31b1e9f1
- (id)copyWithZone:(NSZone *)zone;	// 0x31b1ec49
- (id)description;	// 0x31b1eb7d
- (BOOL)hitTest:(CGPoint)test;	// 0x31b1eb35
- (BOOL)isEqual:(id)equal;	// 0x31b1e8f5
- (FloatQuad)quad;	// 0x31b1ea95
@end


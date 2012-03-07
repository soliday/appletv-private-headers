/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "GQDPath.h"
#import "iWorkImport-Structs.h"


__attribute__((visibility("hidden")))
@interface GQDScalarPath : GQDPath {
@private
	int mType;	// 8 = 0x8
	double mScalar;	// 12 = 0xc
	CGSize mSize;	// 20 = 0x14
}
- (CGPathRef)createBezierPath;	// 0x3046e19d
- (BOOL)isRect;	// 0x3046e08d
- (BOOL)isRectangular;	// 0x3046e055
- (int)readAttributesFromReader:(xmlTextReader *)reader processor:(id)processor;	// 0x3046e45d
- (double)scalar;	// 0x3046e0b1
- (CGSize)size;	// 0x3046e0d9
- (int)type;	// 0x3046e0c9
@end

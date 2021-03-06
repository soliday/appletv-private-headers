/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQDPath.h"


__attribute__((visibility("hidden")))
@interface GQDCallout2Path : GQDPath {
@private
	CGSize mSize;	// 8 = 0x8
	double mCornerRadius;	// 16 = 0x10
	CGPoint mTailPosition;	// 24 = 0x18
	double mTailSize;	// 32 = 0x20
	BOOL mTailAtCenter;	// 40 = 0x28
}
- (double)cornerRadius;	// 0x317f45a9
- (CGPathRef)createBezierPath;	// 0x317f46d1
- (int)readAttributesFromReader:(xmlTextReader *)reader processor:(id)processor;	// 0x317f4b7d
- (CGSize)size;	// 0x317f4591
- (BOOL)tailAtCenter;	// 0x317f45f1
- (CGPoint)tailCenter;	// 0x317f4425
- (CGPoint)tailPosition;	// 0x317f45c1
- (double)tailSize;	// 0x317f45d9
@end


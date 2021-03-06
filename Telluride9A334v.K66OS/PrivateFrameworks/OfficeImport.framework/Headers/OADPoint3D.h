/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"


__attribute__((visibility("hidden")))
@interface OADPoint3D : NSObject <NSCopying> {
@private
	float mX;	// 4 = 0x4
	float mY;	// 8 = 0x8
	float mZ;	// 12 = 0xc
}
- (id)initWithX:(float)x y:(float)y z:(float)z;	// 0x3577dbad
- (id)copyWithZone:(NSZone *)zone;	// 0x3577da41
- (unsigned)hash;	// 0x3577d665
- (BOOL)isEqual:(id)equal;	// 0x3577dabd
- (float)x;	// 0x3577d635
- (float)y;	// 0x3577d645
- (float)z;	// 0x3577d655
@end


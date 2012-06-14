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
@interface OADRotation3D : NSObject <NSCopying> {
@private
	float mLatitude;	// 4 = 0x4
	float mLongitude;	// 8 = 0x8
	float mRevolution;	// 12 = 0xc
}
- (id)initWithLatitude:(float)latitude longitude:(float)longitude revolution:(float)revolution;	// 0x312af691
- (id)copyWithZone:(NSZone *)zone;	// 0x31380c25
- (unsigned)hash;	// 0x313806e9
- (BOOL)isEqual:(id)equal;	// 0x31380ca1
- (float)latitude;	// 0x313806b9
- (float)longitude;	// 0x313806c9
- (float)revolution;	// 0x313806d9
@end


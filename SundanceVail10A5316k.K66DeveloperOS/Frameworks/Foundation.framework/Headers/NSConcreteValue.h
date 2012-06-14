/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSValue.h"
#import "Foundation-Structs.h"


@interface NSConcreteValue : NSValue {
	unsigned _specialFlags;	// 4 = 0x4
	void *typeInfo;	// 8 = 0x8
}
+ (void)initialize;	// 0x31a01d01
+ (BOOL)supportsSecureCoding;	// 0x31a8c085
- (const void *)_value;	// 0x31a1a66d
- (id)copyWithZone:(NSZone *)zone;	// 0x31a12319
- (id)description;	// 0x31a8bba9
- (void)encodeWithCoder:(id)coder;	// 0x31a8c089
- (void)getValue:(void *)value;	// 0x319e7839
- (unsigned)hash;	// 0x31a0e761
- (BOOL)isEqualToValue:(id)value;	// 0x31a1a539
- (const char *)objCType;	// 0x319e7809
@end

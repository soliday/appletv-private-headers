/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSValue.h"


@interface NSConcreteValue : NSValue {
	unsigned _specialFlags;	// 4 = 0x4
	void *typeInfo;	// 8 = 0x8
}
+ (void)initialize;	// 0x32022dc9
- (const void *)_value;	// 0x3203b6e9
- (id)copyWithZone:(NSZone *)zone;	// 0x3203357d
- (id)description;	// 0x320a7181
- (void)encodeWithCoder:(id)coder;	// 0x320a765d
- (void)getValue:(void *)value;	// 0x32008a89
- (unsigned)hash;	// 0x3202f935
- (BOOL)isEqualToValue:(id)value;	// 0x3203b5e1
- (const char *)objCType;	// 0x32008a3d
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSEnumerator.h"


@interface __NSFastEnumerationEnumerator : NSEnumerator {
@private
	id<NSFastEnumeration> _obj;	// 4 = 0x4
	id _origObj;	// 8 = 0x8
	unsigned _count;	// 12 = 0xc
	unsigned _mut;	// 16 = 0x10
}
+ (id)allocWithZone:(NSZone *)zone;	// 0x327155bd
- (id)initWithObject:(id)object;	// 0x327155dd
- (void)dealloc;	// 0x32715aa9
- (id)nextObject;	// 0x327158e1
@end


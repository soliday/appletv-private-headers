/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSMutableData.h"
#import "CoreFoundation-Structs.h"


__attribute__((visibility("hidden")))
@interface __NSCFData : NSMutableData {
@private
	unsigned char _cfinfo[4];	// 4 = 0x4
	long _length;	// 8 = 0x8
	long _capacity;	// 12 = 0xc
	CFAllocatorRef _bytesDeallocator;	// 16 = 0x10
	char *_bytes;	// 20 = 0x14
}
@property(assign) unsigned length;	// G=0x3070c6e5; S=0x3075be8d; converted property
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x3075be85
- (BOOL)_isDeallocating;	// 0x3075be31
- (BOOL)_tryRetain;	// 0x3075be1d
- (const void *)bytes;	// 0x30709c3d
- (id)copyWithZone:(NSZone *)zone;	// 0x3072b8b5
- (void)finalize;	// 0x3075be41
- (unsigned)hash;	// 0x3075be19
- (BOOL)isEqual:(id)equal;	// 0x3075be01
// converted property getter: - (unsigned)length;	// 0x3070c6e5
- (void *)mutableBytes;	// 0x3075be89
- (oneway void)release;	// 0x306f95cd
- (id)retain;	// 0x3070e02d
- (unsigned)retainCount;	// 0x3075be3d
// converted property setter: - (void)setLength:(unsigned)length;	// 0x3075be8d
@end

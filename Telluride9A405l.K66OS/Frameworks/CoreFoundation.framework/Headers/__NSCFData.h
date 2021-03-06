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
@property(assign) unsigned length;	// G=0x3528c6e5; S=0x352dbe8d; converted property
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x352dbe85
- (BOOL)_isDeallocating;	// 0x352dbe31
- (BOOL)_tryRetain;	// 0x352dbe1d
- (const void *)bytes;	// 0x35289c3d
- (id)copyWithZone:(NSZone *)zone;	// 0x352ab8b5
- (void)finalize;	// 0x352dbe41
- (unsigned)hash;	// 0x352dbe19
- (BOOL)isEqual:(id)equal;	// 0x352dbe01
// converted property getter: - (unsigned)length;	// 0x3528c6e5
- (void *)mutableBytes;	// 0x352dbe89
- (oneway void)release;	// 0x352795cd
- (id)retain;	// 0x3528e02d
- (unsigned)retainCount;	// 0x352dbe3d
// converted property setter: - (void)setLength:(unsigned)length;	// 0x352dbe8d
@end


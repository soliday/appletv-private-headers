/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSMutableSet.h> // Unknown library
#import "Foundation-Structs.h"


@interface NSCountedSet : NSMutableSet {
@private
	id _table;	// 4 = 0x4
	void *_reserved;	// 8 = 0x8
}
+ (BOOL)supportsSecureCoding;	// 0x31a82e79
- (id)init;	// 0x319fcf21
- (id)initWithArray:(id)array;	// 0x31a835f1
- (id)initWithCapacity:(unsigned)capacity;	// 0x319fcf35
- (id)initWithCoder:(id)coder;	// 0x31a82e7d
- (id)initWithObjects:(id *)objects count:(unsigned)count;	// 0x31a16819
- (id)initWithSet:(id)set;	// 0x31a8361d
- (id)initWithSet:(id)set copyItems:(BOOL)items;	// 0x31a834e1
- (void)addObject:(id)object;	// 0x319fffed
- (Class)classForCoder;	// 0x31a834d1
- (id)copyWithZone:(NSZone *)zone;	// 0x31a82a95
- (unsigned)count;	// 0x31a00181
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x31a00255
- (unsigned)countForObject:(id)object;	// 0x31a27f9d
- (void)dealloc;	// 0x31a004b5
- (id)descriptionWithLocale:(id)locale;	// 0x31a8317d
- (void)encodeWithCoder:(id)coder;	// 0x31a82bbd
- (void)getObjects:(id *)objects count:(unsigned)count;	// 0x31a82b05
- (id)member:(id)member;	// 0x31a0008d
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x31a82ad1
- (id)objectEnumerator;	// 0x31a82a09
- (void)removeObject:(id)object;	// 0x31a000e1
@end


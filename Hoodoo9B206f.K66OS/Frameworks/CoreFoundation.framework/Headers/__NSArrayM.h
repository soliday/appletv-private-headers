/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSMutableArray.h"


__attribute__((visibility("hidden")))
@interface __NSArrayM : NSMutableArray {
@private
	unsigned _used;	// 4 = 0x4
	unsigned _doHardRetain : 1;	// 8 = 0x8
	unsigned _doWeakAccess : 1;	// 8 = 0x8
	unsigned _size : 30;	// 8 = 0x8
	unsigned _hasObjects : 1;	// 12 = 0xc
	unsigned _hasStrongReferences : 1;	// 12 = 0xc
	unsigned _offset : 30;	// 12 = 0xc
	unsigned long _mutations;	// 16 = 0x10
	id *_list;	// 20 = 0x14
}
+ (id)__new:(const id *)aNew :(unsigned)arg2 :(BOOL)arg3 :(BOOL)arg4;	// 0x319b2db1
+ (id)allocWithZone:(NSZone *)zone;	// 0x31a4f9d5
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x31a4f9d1
- (BOOL)_hasObjects;	// 0x319bb35d
- (BOOL)_hasStrongReferences;	// 0x31a4f811
- (void)_mutate;	// 0x319b02ed
- (void)addObject:(id)object;	// 0x319b10e9
- (id)copyWithZone:(NSZone *)zone;	// 0x319b601d
- (unsigned)count;	// 0x319a61a9
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x319b08cd
- (void)dealloc;	// 0x319baff1
- (void)finalize;	// 0x31a4f825
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x319b0301
- (unsigned)indexOfObjectIdenticalTo:(id)to;	// 0x319dd209
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x319b111d
- (id)objectAtIndex:(unsigned)index;	// 0x319a58cd
- (void)removeLastObject;	// 0x319e2569
- (void)removeObjectAtIndex:(unsigned)index;	// 0x319ba911
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x319b477d
@end


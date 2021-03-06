/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSMutableArray.h> // Unknown library


__attribute__((visibility("hidden")))
@interface NSCFArray : NSMutableArray {
}
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x3205b5fd
- (BOOL)_isDeallocating;	// 0x3205b5ad
- (BOOL)_tryRetain;	// 0x3205b599
- (void)addObject:(id)object;	// 0x3205b75d
- (Class)classForCoder;	// 0x3205b601
- (BOOL)containsObject:(id)object inRange:(NSRange)range;	// 0x3205baad
- (id)copyWithZone:(NSZone *)zone;	// 0x3205b641
- (unsigned)count;	// 0x3205b699
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x3205b74d
- (void)exchangeObjectAtIndex:(unsigned)index withObjectAtIndex:(unsigned)index2;	// 0x3205bbbd
- (void)finalize;	// 0x3205b5b9
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x3205bb09
- (unsigned)hash;	// 0x3205b57d
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x3205b791
- (BOOL)isEqual:(id)equal;	// 0x3205b531
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x3205b67d
- (id)objectAtIndex:(unsigned)index;	// 0x3205b69d
- (oneway void)release;	// 0x3205b591
- (void)removeAllObjects;	// 0x3205bb5d
- (void)removeLastObject;	// 0x3205b935
- (void)removeObjectAtIndex:(unsigned)index;	// 0x3205b96d
- (void)removeObjectsInRange:(NSRange)range;	// 0x3205b9f9
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x3205b865
- (void)replaceObjectsInRange:(NSRange)range withObjects:(id *)objects count:(unsigned)count;	// 0x3205bd15
- (id)retain;	// 0x3205b581
- (unsigned)retainCount;	// 0x3205b595
- (void)sortUsingFunction:(/*function-pointer*/ void *)function context:(void *)context;	// 0x3205bc55
@end


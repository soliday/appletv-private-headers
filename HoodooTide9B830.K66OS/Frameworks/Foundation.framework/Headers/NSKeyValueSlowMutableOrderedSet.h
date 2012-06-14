/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSKeyValueMutableOrderedSet.h"
#import "Foundation-Structs.h"

@class NSKeyValueGetter, NSKeyValueSetter;

__attribute__((visibility("hidden")))
@interface NSKeyValueSlowMutableOrderedSet : NSKeyValueMutableOrderedSet {
@private
	NSKeyValueGetter *_valueGetter;	// 12 = 0xc
	NSKeyValueSetter *_valueSetter;	// 16 = 0x10
	BOOL _treatNilValuesLikeEmptyOrderedSets;	// 20 = 0x14
	BOOL _padding[3];	// 21 = 0x15
}
+ (XXStruct_1UKQIB *)_proxyNonGCPoolPointer;	// 0x316709ad
- (id)_createNonNilMutableOrderedSetValueWithSelector:(SEL)selector;	// 0x31670fbd
- (id)_nonNilOrderedSetValueWithSelector:(SEL)selector;	// 0x31670be1
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x316709bd
- (void)_proxyNonGCFinalize;	// 0x31670a69
- (void)_raiseNilValueExceptionWithSelector:(SEL)selector;	// 0x31670ae1
- (unsigned)count;	// 0x31670b79
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x31670c25
- (unsigned)indexOfObject:(id)object;	// 0x31670c5d
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x31670ced
- (void)insertObjects:(id)objects atIndexes:(id)indexes;	// 0x31670dd9
- (id)objectAtIndex:(unsigned)index;	// 0x31670c8d
- (id)objectsAtIndexes:(id)indexes;	// 0x31670cbd
- (void)removeObjectAtIndex:(unsigned)index;	// 0x31671015
- (void)removeObjectsAtIndexes:(id)indexes;	// 0x31671081
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x316710ed
- (void)replaceObjectsAtIndexes:(id)indexes withObjects:(id)objects;	// 0x31671165
@end


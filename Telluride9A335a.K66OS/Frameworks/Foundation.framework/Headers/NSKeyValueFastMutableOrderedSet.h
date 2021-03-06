/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSKeyValueMutableOrderedSet.h"
#import "Foundation-Structs.h"

@class NSKeyValueMutatingOrderedSetMethodSet;

__attribute__((visibility("hidden")))
@interface NSKeyValueFastMutableOrderedSet : NSKeyValueMutableOrderedSet {
@private
	NSKeyValueMutatingOrderedSetMethodSet *_mutatingMethods;	// 12 = 0xc
}
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x3203e045
- (void)_proxyNonGCFinalize;	// 0x32107219
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x3210726d
- (void)insertObjects:(id)objects atIndexes:(id)indexes;	// 0x32107361
- (void)removeObjectAtIndex:(unsigned)index;	// 0x321073c9
- (void)removeObjectsAtIndexes:(id)indexes;	// 0x32107475
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x321074d5
- (void)replaceObjectsAtIndexes:(id)indexes withObjects:(id)objects;	// 0x321075fd
@end


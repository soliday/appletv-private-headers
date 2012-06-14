/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"
#import "NSCopying.h"
#import "NSCoding.h"
#import "NSMutableCopying.h"


@interface NSIndexSet : NSObject <NSCopying, NSMutableCopying, NSCoding> {
	struct {
		unsigned _inverted : 1;
		unsigned _builtin : 1;
		unsigned _isCF : 1;
		unsigned _reserved : 29;
	} _indexSetFlags;	// 4 = 0x4
	union {
		struct {
			NSRange _range;
		} _singleRange;
		struct {
			void *_data;
			void *_reserved;
		} _multipleRanges;
	} _internal;	// 8 = 0x8
}
+ (id)indexSet;	// 0x315a8de9
+ (id)indexSetWithIndex:(unsigned)index;	// 0x315aa739
+ (id)indexSetWithIndexes:(unsigned *)indexes count:(unsigned)count;	// 0x315e214d
+ (id)indexSetWithIndexesInRange:(NSRange)range;	// 0x315a8ee9
- (id)init;	// 0x3156d6d1
- (id)initWithCoder:(id)coder;	// 0x315e257d
- (id)initWithIndex:(unsigned)index;	// 0x315aa775
- (id)initWithIndexSet:(id)indexSet;	// 0x3158cfed
- (id)initWithIndexes:(unsigned *)indexes count:(unsigned)count;	// 0x315e218d
- (id)initWithIndexesInRange:(NSRange)range;	// 0x3156d6e5
- (unsigned)__getContainmentVector:(out BOOL *)vector inRange:(NSRange)range;	// 0x315e2eed
- (unsigned)_indexAtIndex:(unsigned)index;	// 0x315c101d
- (unsigned)_indexClosestToIndex:(unsigned)index equalAllowed:(BOOL)allowed following:(BOOL)following;	// 0x315aa1d9
- (unsigned)_indexOfRangeAfterOrContainingIndex:(unsigned)rangeAfterOrContainingIndex;	// 0x315a8f95
- (unsigned)_indexOfRangeBeforeOrContainingIndex:(unsigned)rangeBeforeOrContainingIndex;	// 0x3158d419
- (unsigned)_indexOfRangeContainingIndex:(unsigned)rangeContainingIndex;	// 0x315aa0d9
- (id)_init;	// 0x3156d799
- (id)_numberEnumerator;	// 0x315e32a5
- (void)_setContentToContentFromIndexSet:(id)indexSet;	// 0x3158d021
- (Class)classForCoder;	// 0x315e2991
- (BOOL)containsIndex:(unsigned)index;	// 0x315aa019
- (BOOL)containsIndexes:(id)indexes;	// 0x315e30d1
- (BOOL)containsIndexesInRange:(NSRange)range;	// 0x315e3065
- (id)copyWithZone:(NSZone *)zone;	// 0x3158cf85
- (unsigned)count;	// 0x3158cce5
- (unsigned)countOfIndexesInRange:(NSRange)range;	// 0x315e2f8d
- (void)dealloc;	// 0x3156dd11
- (id)description;	// 0x315e32ed
- (void)encodeWithCoder:(id)coder;	// 0x315e2389
- (void)enumerateIndexesInRange:(NSRange)range options:(unsigned)options usingBlock:(id)block;	// 0x315e39dd
- (void)enumerateIndexesUsingBlock:(id)block;	// 0x315b8e8d
- (void)enumerateIndexesWithOptions:(unsigned)options usingBlock:(id)block;	// 0x315b8ea1
- (void)enumerateRangesInRange:(NSRange)range options:(unsigned)options usingBlock:(id)block;	// 0x315e3e05
- (void)enumerateRangesUsingBlock:(id)block;	// 0x315a8f29
- (void)enumerateRangesWithOptions:(unsigned)options usingBlock:(id)block;	// 0x315a8f3d
- (unsigned)firstIndex;	// 0x315aa175
- (unsigned)getIndexes:(unsigned *)indexes maxCount:(unsigned)count inIndexRange:(NSRange *)indexRange;	// 0x315e2c81
- (unsigned)hash;	// 0x315e29a1
- (unsigned)indexGreaterThanIndex:(unsigned)index;	// 0x315aa1b9
- (unsigned)indexGreaterThanOrEqualToIndex:(unsigned)index;	// 0x315b8ef1
- (unsigned)indexInRange:(NSRange)range options:(unsigned)options passingTest:(id)test;	// 0x315e3a99
- (unsigned)indexLessThanIndex:(unsigned)index;	// 0x315b8f11
- (unsigned)indexLessThanOrEqualToIndex:(unsigned)index;	// 0x315e2c61
- (unsigned)indexPassingTest:(id)test;	// 0x315e3a2d
- (unsigned)indexWithOptions:(unsigned)options passingTest:(id)test;	// 0x315e3a41
- (id)indexesInRange:(NSRange)range options:(unsigned)options passingTest:(id)test;	// 0x315e3c89
- (id)indexesPassingTest:(id)test;	// 0x315e3ae9
- (id)indexesWithOptions:(unsigned)options passingTest:(id)test;	// 0x315e3afd
- (BOOL)intersectsIndexesInRange:(NSRange)range;	// 0x315e31e5
- (BOOL)isEqual:(id)equal;	// 0x315e2c09
- (BOOL)isEqualToIndexSet:(id)indexSet;	// 0x315e2a11
- (unsigned)lastIndex;	// 0x3156d7e5
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x315b50b5
- (NSRange)rangeAtIndex:(unsigned)index;	// 0x3158d765
- (unsigned)rangeCount;	// 0x3156d83d
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSKeyValueFastMutableArray.h"

@class NSKeyValueGetter;

__attribute__((visibility("hidden")))
@interface NSKeyValueFastMutableArray2 : NSKeyValueFastMutableArray {
@private
	NSKeyValueGetter *_valueGetter;	// 16 = 0x10
}
+ (XXStruct_1UKQIB *)_proxyNonGCPoolPointer;	// 0x31d69bd9
- (id)_nonNilArrayValueWithSelector:(SEL)selector;	// 0x31d69ca5
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x31d69be9
- (void)_proxyNonGCFinalize;	// 0x31d69c51
- (unsigned)count;	// 0x31d69d41
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x31d69d6d
- (id)objectAtIndex:(unsigned)index;	// 0x31d69da5
- (id)objectsAtIndexes:(id)indexes;	// 0x31d69dd5
@end


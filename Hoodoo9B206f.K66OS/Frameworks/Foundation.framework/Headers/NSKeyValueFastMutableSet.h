/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSKeyValueMutableSet.h"
#import "Foundation-Structs.h"

@class NSKeyValueMutatingSetMethodSet;

__attribute__((visibility("hidden")))
@interface NSKeyValueFastMutableSet : NSKeyValueMutableSet {
@private
	NSKeyValueMutatingSetMethodSet *_mutatingMethods;	// 12 = 0xc
}
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x31d6b639
- (void)_proxyNonGCFinalize;	// 0x31d6b6a1
- (void)addObject:(id)object;	// 0x31d6b6f5
- (void)addObjectsFromArray:(id)array;	// 0x31d6b7a5
- (void)intersectSet:(id)set;	// 0x31d6b865
- (void)minusSet:(id)set;	// 0x31d6b8c5
- (void)removeAllObjects;	// 0x31d6b925
- (void)removeObject:(id)object;	// 0x31d6b9dd
- (void)setSet:(id)set;	// 0x31d6ba8d
- (void)unionSet:(id)set;	// 0x31d6baed
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSKeyValueMutableSet.h"
#import "Foundation-Structs.h"


__attribute__((visibility("hidden")))
@interface NSKeyValueIvarMutableSet : NSKeyValueMutableSet {
@private
	objc_ivar *_ivar;	// 12 = 0xc
}
+ (XXStruct_1UKQIB *)_proxyNonGCPoolPointer;	// 0x32083611
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x32083621
- (void)_proxyNonGCFinalize;	// 0x32083679
- (void)addObject:(id)object;	// 0x320837a9
- (void)addObjectsFromArray:(id)array;	// 0x32083821
- (unsigned)count;	// 0x320836b9
- (void)intersectSet:(id)set;	// 0x32083895
- (id)member:(id)member;	// 0x320836f5
- (void)minusSet:(id)set;	// 0x320838d5
- (id)objectEnumerator;	// 0x32083735
- (void)removeAllObjects;	// 0x32083915
- (void)removeObject:(id)object;	// 0x32083951
- (void)setSet:(id)set;	// 0x32083991
- (void)unionSet:(id)set;	// 0x320839e9
@end

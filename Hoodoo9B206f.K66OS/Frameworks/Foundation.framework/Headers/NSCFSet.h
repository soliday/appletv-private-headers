/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSMutableSet.h> // Unknown library


__attribute__((visibility("hidden")))
@interface NSCFSet : NSMutableSet {
}
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x31d86aa1
- (BOOL)_isDeallocating;	// 0x31d86a51
- (unsigned)_trueCount;	// 0x31d86b69
- (BOOL)_tryRetain;	// 0x31d86a3d
- (void)addObject:(id)object;	// 0x31d86bd9
- (Class)classForCoder;	// 0x31d86aa5
- (id)copyWithZone:(NSZone *)zone;	// 0x31d86ae5
- (unsigned)count;	// 0x31d86b3d
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x31d86b6d
- (void)finalize;	// 0x31d86a5d
- (void)getObjects:(id *)objects;	// 0x31d86d99
- (unsigned)hash;	// 0x31d86a21
- (BOOL)isEqual:(id)equal;	// 0x31d869d5
- (id)member:(id)member;	// 0x31d86b41
- (void)minusSet:(id)set;	// 0x31d86db9
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x31d86b21
- (id)objectEnumerator;	// 0x31d86b7d
- (oneway void)release;	// 0x31d86a35
- (void)removeAllObjects;	// 0x31d86d39
- (void)removeObject:(id)object;	// 0x31d86c89
- (id)retain;	// 0x31d86a25
- (unsigned)retainCount;	// 0x31d86a39
- (void)setSet:(id)set;	// 0x31d86f71
- (void)unionSet:(id)set;	// 0x31d86e99
@end


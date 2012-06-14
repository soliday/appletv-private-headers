/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "_NSNotifyingWrapperMutableSet.h"

@class _NSFaultingMutableSetMutationMethods;

__attribute__((visibility("hidden")))
@interface _NSProxyWrapperMutableSet : _NSNotifyingWrapperMutableSet {
@private
	_NSFaultingMutableSetMutationMethods *_mutationMethods;	// 16 = 0x10
}
- (id)initWithContainer:(id)container key:(id)key mutableSet:(id)set mutationMethods:(id)methods;	// 0x3228e369
- (void)addObject:(id)object;	// 0x3228e2b5
- (void)addObjectsFromArray:(id)array;	// 0x3228e215
- (void)dealloc;	// 0x3228de4d
- (void)intersectSet:(id)set;	// 0x3228e111
- (void)minusSet:(id)set;	// 0x3228e0b9
- (void)removeAllObjects;	// 0x3228e049
- (void)removeObject:(id)object;	// 0x3228df95
- (void)setSet:(id)set;	// 0x3228def9
- (void)unionSet:(id)set;	// 0x3228dea1
@end


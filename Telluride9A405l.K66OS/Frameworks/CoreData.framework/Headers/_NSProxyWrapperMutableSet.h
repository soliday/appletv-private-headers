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
- (id)initWithContainer:(id)container key:(id)key mutableSet:(id)set mutationMethods:(id)methods;	// 0x33f6f159
- (void)addObject:(id)object;	// 0x33f6f0a5
- (void)addObjectsFromArray:(id)array;	// 0x33f6f005
- (void)dealloc;	// 0x33f6ec3d
- (void)intersectSet:(id)set;	// 0x33f6ef01
- (void)minusSet:(id)set;	// 0x33f6eea9
- (void)removeAllObjects;	// 0x33f6ee39
- (void)removeObject:(id)object;	// 0x33f6ed85
- (void)setSet:(id)set;	// 0x33f6ece9
- (void)unionSet:(id)set;	// 0x33f6ec91
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSObject.h"


@interface NSProxy <NSObject> {
	Class isa;	// 0 = 0x0
}
+ (id)_copyDescription;	// 0x3160382d
+ (id)alloc;	// 0x3158ca5d
+ (id)allocWithZone:(NSZone *)zone;	// 0x3158cbc1
+ (id)autorelease;	// 0x3160362d
+ (Class)class;	// 0x31603621
+ (BOOL)conformsToProtocol:(id)protocol;	// 0x31603b81
+ (id)copyWithZone:(NSZone *)zone;	// 0x31603639
+ (id)debugDescription;	// 0x3160380d
+ (void)initialize;	// 0x3158ca59
+ (BOOL)isAncestorOfObject:(id)object;	// 0x31603655
+ (BOOL)isFault;	// 0x31603a91
+ (BOOL)isProxy;	// 0x31603a99
+ (BOOL)isSubclassOfClass:(Class)aClass;	// 0x31603a9d
+ (id)mutableCopyWithZone:(NSZone *)zone;	// 0x3160363d
+ (id)performSelector:(SEL)selector;	// 0x316038b5
+ (id)performSelector:(SEL)selector withObject:(id)object;	// 0x31603965
+ (id)performSelector:(SEL)selector withObject:(id)object withObject:(id)object3;	// 0x316039c9
+ (oneway void)release;	// 0x31603629
+ (BOOL)respondsToSelector:(SEL)selector;	// 0x31603641
+ (id)retain;	// 0x31603625
+ (unsigned)retainCount;	// 0x31603631
+ (id)self;	// 0x3158cac5
+ (Class)superclass;	// 0x316037a9
- (id)_copyDescription;	// 0x31603869
- (BOOL)_isDeallocating;	// 0x3160373d
- (BOOL)_tryRetain;	// 0x31603749
- (BOOL)allowsWeakReference;	// 0x31603769
- (id)autorelease;	// 0x3158cbe1
- (Class)class;	// 0x316037bd
- (BOOL)conformsToProtocol:(id)protocol;	// 0x31603bad
- (void)dealloc;	// 0x3158cc95
- (id)debugDescription;	// 0x3160381d
- (id)description;	// 0x316037c9
- (void)doesNotRecognizeSelector:(SEL)selector;	// 0x316036f1
- (void)finalize;	// 0x316037a5
- (long long)forward:(SEL)forward :(void *)arg2;	// 0x31603619
- (void)forwardInvocation:(id)invocation;	// 0x31603679
- (id)forwardingTargetForSelector:(SEL)selector;	// 0x3158cbf9
- (unsigned)hash;	// 0x316038b1
- (BOOL)isEqual:(id)equal;	// 0x316038a5
- (BOOL)isFault;	// 0x31603a95
- (BOOL)isKindOfClass:(Class)aClass;	// 0x31603ab9
- (BOOL)isMemberOfClass:(Class)aClass;	// 0x31603b1d
- (BOOL)isProxy;	// 0x3159da7d
- (id)methodSignatureForSelector:(SEL)selector;	// 0x316036b5
- (id)performSelector:(SEL)selector;	// 0x3160390d
- (id)performSelector:(SEL)selector withObject:(id)object;	// 0x315b1fc9
- (id)performSelector:(SEL)selector withObject:(id)object withObject:(id)object3;	// 0x31603a2d
- (oneway void)release;	// 0x3158cc25
- (BOOL)respondsToSelector:(SEL)selector;	// 0x31603c11
- (id)retain;	// 0x31593d89
- (unsigned)retainCount;	// 0x31603739
- (BOOL)retainWeakReference;	// 0x3160378d
- (id)self;	// 0x316037c1
- (Class)superclass;	// 0x316037ad
- (NSZone *)zone;	// 0x316037c5
@end


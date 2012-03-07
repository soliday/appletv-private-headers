/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSMutableSet.h"


__attribute__((visibility("hidden")))
@interface __NSSetM : NSMutableSet {
@private
	unsigned _used;	// 4 = 0x4
}
+ (id)__new:(const id *)aNew :(unsigned)arg2;	// 0x33509dad
+ (id)allocWithZone:(NSZone *)zone;	// 0x33509e0d
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x33509e09
- (void)addObject:(id)object;	// 0x33509da5
- (unsigned)count;	// 0x33509cb1
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x33509cc9
- (void)dealloc;	// 0x33509db1
- (void)finalize;	// 0x33509ddd
- (id)member:(id)member;	// 0x33509cc1
- (id)objectEnumerator;	// 0x33509cc5
- (void)removeObject:(id)object;	// 0x33509da9
@end

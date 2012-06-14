/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSMutableSet.h"


__attribute__((visibility("hidden")))
@interface __NSPlaceholderSet : NSMutableSet {
}
+ (id)allocWithZone:(NSZone *)zone;	// 0x32796705
+ (id)immutablePlaceholder;	// 0x326ff735
+ (void)initialize;	// 0x3270ad35
+ (id)mutablePlaceholder;	// 0x326e7b69
- (id)init;	// 0x326e7b79
- (id)initWithCapacity:(unsigned)capacity;	// 0x326e7bcd
- (id)initWithObjects:(const id *)objects count:(unsigned)count;	// 0x326eae25
- (void)addObject:(id)object;	// 0x32796979
- (unsigned)count;	// 0x3279672d
- (void)dealloc;	// 0x32796729
- (id)member:(id)member;	// 0x327967f1
- (id)objectEnumerator;	// 0x327968b5
- (oneway void)release;	// 0x3279671d
- (void)removeObject:(id)object;	// 0x32796a3d
- (id)retain;	// 0x32796719
- (unsigned)retainCount;	// 0x32796721
@end


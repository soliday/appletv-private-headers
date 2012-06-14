/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSOrderedSet.h"


__attribute__((visibility("hidden")))
@interface __NSOrderedSetI : NSOrderedSet {
@private
	unsigned _used;	// 4 = 0x4
	CFBasicHashRef _set;	// 8 = 0x8
}
+ (id)__new:(const id *)aNew :(unsigned)arg2;	// 0x319f281d
+ (id)allocWithZone:(NSZone *)zone;	// 0x31a7c6e9
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x31a7c6e5
- (id)copyWithZone:(NSZone *)zone;	// 0x31a7c60d
- (unsigned)count;	// 0x319f38cd
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x319f3be1
- (void)dealloc;	// 0x31a02ef9
- (void)finalize;	// 0x31a7c61d
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x31a02c99
- (unsigned)indexOfObject:(id)object;	// 0x31a02fc1
- (id)objectAtIndex:(unsigned)index;	// 0x31a02e49
@end


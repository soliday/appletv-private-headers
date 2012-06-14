/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSMutableOrderedSet.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface __NSOrderedSetM : NSMutableOrderedSet {
@private
	unsigned _used;	// 4 = 0x4
	CFBasicHashRef _set;	// 8 = 0x8
	NSMutableArray *_array;	// 12 = 0xc
}
+ (id)__new:(const id *)aNew :(unsigned)arg2;	// 0x319f3321
+ (id)allocWithZone:(NSZone *)zone;	// 0x31a7c92d
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x31a7c929
- (void)_mutate;	// 0x319f3ebd
- (unsigned)count;	// 0x319f340d
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x319f4059
- (void)dealloc;	// 0x31a032fd
- (void)finalize;	// 0x31a7c8e5
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x319f3a25
- (unsigned)indexOfObject:(id)object;	// 0x31a030d5
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x319f3edd
- (id)objectAtIndex:(unsigned)index;	// 0x319f343d
- (void)removeObjectAtIndex:(unsigned)index;	// 0x31a035b1
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x31a7c705
@end


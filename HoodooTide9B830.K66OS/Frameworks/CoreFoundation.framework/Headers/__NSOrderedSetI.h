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
+ (id)__new:(const id *)aNew :(unsigned)arg2;	// 0x3272881d
+ (id)allocWithZone:(NSZone *)zone;	// 0x327b26e9
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x327b26e5
- (id)copyWithZone:(NSZone *)zone;	// 0x327b260d
- (unsigned)count;	// 0x327298cd
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x32729be1
- (void)dealloc;	// 0x32738ef9
- (void)finalize;	// 0x327b261d
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x32738c99
- (unsigned)indexOfObject:(id)object;	// 0x32738fc1
- (id)objectAtIndex:(unsigned)index;	// 0x32738e49
@end


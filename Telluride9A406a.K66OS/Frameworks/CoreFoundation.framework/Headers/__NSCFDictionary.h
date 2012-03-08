/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSMutableDictionary.h"


__attribute__((visibility("hidden")))
@interface __NSCFDictionary : NSMutableDictionary {
@private
	unsigned char _cfinfo[4];	// 4 = 0x4
	unsigned _bits[4];	// 8 = 0x8
	void *_callbacks;	// 24 = 0x18
	id *_values;	// 28 = 0x1c
	id *_keys;	// 32 = 0x20
}
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x340dde85
- (BOOL)_isDeallocating;	// 0x340dde31
- (BOOL)_tryRetain;	// 0x340dde1d
- (Class)classForCoder;	// 0x3407f051
- (id)copyWithZone:(NSZone *)zone;	// 0x3404c1b5
- (unsigned)count;	// 0x340305b5
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x34030775
- (void)finalize;	// 0x340dde41
- (unsigned)hash;	// 0x340dde19
- (BOOL)isEqual:(id)equal;	// 0x34068d11
- (id)keyEnumerator;	// 0x34061591
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x3404bf1d
- (id)objectForKey:(id)key;	// 0x3402ffe5
- (oneway void)release;	// 0x340361bd
- (void)removeAllObjects;	// 0x3403e085
- (void)removeObjectForKey:(id)key;	// 0x3404ba39
- (id)retain;	// 0x340278c9
- (unsigned)retainCount;	// 0x340dde3d
- (void)setObject:(id)object forKey:(id)key;	// 0x3404b5d1
- (void)setObservationInfo:(void *)info;	// 0x340dde89
@end

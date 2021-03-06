/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSDictionary.h"


@interface NSMutableDictionary : NSDictionary {
}
+ (id)dictionaryWithCapacity:(unsigned)capacity;	// 0x31cb0d8d
- (id)initWithCapacity:(unsigned)capacity;	// 0x31d14969
- (id)initWithObjects:(id *)objects forKeys:(id *)keys count:(unsigned)count;	// 0x31d14f71
- (void)addEntriesFromDictionary:(id)dictionary;	// 0x31cbfb39
- (void)addObject:(id)object forKey:(id)key;	// 0x31d142c9
- (void)invert;	// 0x31d14a55
- (void)removeAllObjects;	// 0x31d15c05
- (void)removeKeysForObject:(id)object;	// 0x31d14b41
- (void)removeObjectForKey:(id)key;	// 0x31d14989
- (void)removeObjectsForKeys:(id)keys;	// 0x31cbe009
- (void)replaceObject:(id)object forKey:(id)key;	// 0x31d14295
- (void)setDictionary:(id)dictionary;	// 0x31cc190d
- (void)setObject:(id)object forKey:(id)key;	// 0x31d149a9
@end


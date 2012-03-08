/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "EDCollection.h"

@class TSUPointerKeyDictionary;

__attribute__((visibility("hidden")))
@interface EDKeyedCollection : EDCollection {
@private
	TSUPointerKeyDictionary *mMap;	// 8 = 0x8
}
- (unsigned)addObject:(id)object;	// 0x3280c815
- (id)copyWithZone:(NSZone *)zone;	// 0x3292cfdd
- (void)dealloc;	// 0x328454f5
- (void)insertIntoMap:(id)map;	// 0x3280c8e5
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x32818ef1
- (bool)isObjectInMap:(id)map;	// 0x329840c5
- (bool)isOverwritingKeyOK;	// 0x329840c1
- (id)objectWithKey:(int)key;	// 0x32831955
- (void)removeAllObjects;	// 0x32984145
- (void)removeFromMap:(id)map;	// 0x32984101
- (void)removeObjectAtIndex:(unsigned)index;	// 0x32984199
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x32984209
@end

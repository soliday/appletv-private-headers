/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSHashTable.h"
#import "Foundation-Structs.h"


__attribute__((visibility("hidden")))
@interface NSClassicHashTable : NSHashTable {
@private
	struct {
		/*function-pointer*/ void *hash;
		/*function-pointer*/ void *isEqual;
		/*function-pointer*/ void *retain;
		/*function-pointer*/ void *release;
		/*function-pointer*/ void *describe;
	} _callBacks;	// 4 = 0x4
	CFBasicHashRef _ht;	// 24 = 0x18
}
- (id)init;	// 0x302c3199
- (void)addObject:(id)object;	// 0x302966a5
- (id)allObjects;	// 0x302c35a9
- (id)copy;	// 0x302c3245
- (unsigned)count;	// 0x302c33e9
- (void)dealloc;	// 0x302c319d
- (id)description;	// 0x302c33fd
- (void *)getItem:(const void *)item;	// 0x302965e9
- (void)getKeys:(const void **)keys count:(unsigned *)count;	// 0x302c3831
- (unsigned)hash;	// 0x302c31f1
- (void)insertItem:(const void *)item;	// 0x30296539
- (void)insertKnownAbsentItem:(const void *)item;	// 0x302c32f1
- (BOOL)isEqual:(id)equal;	// 0x302c3201
- (void)removeAllItems;	// 0x302c31dd
- (void)removeItem:(const void *)item;	// 0x302c3391
@end


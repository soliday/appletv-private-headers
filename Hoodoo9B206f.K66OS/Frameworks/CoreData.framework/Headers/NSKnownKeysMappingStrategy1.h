/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSKnownKeysMappingStrategy.h"
#import "CoreData-Structs.h"


__attribute__((visibility("hidden")))
@interface NSKnownKeysMappingStrategy1 : NSKnownKeysMappingStrategy {
@private
	int _cd_rc;	// 4 = 0x4
	void *_table;	// 8 = 0x8
	unsigned _length;	// 12 = 0xc
	id _reserved1;	// 16 = 0x10
	id *_keys;	// 20 = 0x14
}
@property(readonly, assign) unsigned length;	// G=0x36224849; converted property
+ (BOOL)accessInstanceVariablesDirectly;	// 0x3628bf31
+ (id)alloc;	// 0x3628c185
+ (id)allocWithZone:(NSZone *)zone;	// 0x3628c17d
+ (void)initialize;	// 0x3625712d
- (id)initForKeys:(id)keys;	// 0x3622aa1d
- (id)initForKeys:(const id *)keys count:(unsigned)count;	// 0x36223e49
- (id)initWithCoder:(id)coder;	// 0x3628c26d
- (void)_coreCreationForKeys:(const id *)keys count:(unsigned long)count;	// 0x36223e99
- (void)_coreDealloc:(BOOL)dealloc;	// 0x3622e055
- (BOOL)_isDeallocating;	// 0x3628c489
- (CFArrayRef)_makeBranchTableForKeys:(const char **)keys count:(unsigned long)count;	// 0x36224185
- (BOOL)_tryRetain;	// 0x3628c4b1
- (id)allKeys;	// 0x3628c07d
- (Class)classForCoder;	// 0x3628c429
- (id)copyWithZone:(NSZone *)zone;	// 0x3628c18d
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x3628bf59
- (void)dealloc;	// 0x3622e041
- (void)encodeWithCoder:(id)coder;	// 0x3628c19d
- (unsigned)fastIndexForKnownKey:(id)knownKey;	// 0x3622df0d
- (unsigned)hash;	// 0x3628c445
- (unsigned)indexForKey:(id)key;	// 0x3624899d
- (BOOL)isEqual:(id)equal;	// 0x3628c0c5
- (const id *)keys;	// 0x362273b5
// converted property getter: - (unsigned)length;	// 0x36224849
- (oneway void)release;	// 0x36224891
- (id)retain;	// 0x36224859
- (unsigned)retainCount;	// 0x3628bf35
@end


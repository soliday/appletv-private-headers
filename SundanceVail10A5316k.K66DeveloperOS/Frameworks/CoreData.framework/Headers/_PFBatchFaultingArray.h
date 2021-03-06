/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSArray.h> // Unknown library
#import "CoreData-Structs.h"

@class NSManagedObjectContext, _PFArray, NSFetchRequest;

__attribute__((visibility("hidden")))
@interface _PFBatchFaultingArray : NSArray {
@private
	int _cd_rc;	// 4 = 0x4
	unsigned _count;	// 8 = 0x8
	_PFArray *_array;	// 12 = 0xc
	unsigned *_entryFlags;	// 16 = 0x10
	NSManagedObjectContext *_moc;	// 20 = 0x14
	NSFetchRequest *_request;	// 24 = 0x18
	unsigned _batchSize;	// 28 = 0x1c
	unsigned *_LRUBatches;	// 32 = 0x20
	PFBatchFaultingArrayFlags _flags;	// 36 = 0x24
}
@property(readonly, assign) unsigned count;	// G=0x32d44ad5; converted property
+ (BOOL)accessInstanceVariablesDirectly;	// 0x32d43199
+ (id)alloc;	// 0x32d4319d
+ (id)allocWithZone:(NSZone *)zone;	// 0x32d431a5
+ (void)initialize;	// 0x32d4317d
- (id)initWithPFArray:(id)pfarray andRequest:(id)request andContext:(id)context;	// 0x32d431ad
- (BOOL)_isDeallocating;	// 0x32d43b69
- (id)_newSubArrayInRange:(NSRange)range asMutable:(BOOL)aMutable;	// 0x32d437d9
- (BOOL)_tryRetain;	// 0x32d43b19
- (void)_turnAllBatchesIntoFaults;	// 0x32d43b95
- (id)arrayFromObjectIDs;	// 0x32d44819
- (id)copyWithZone:(NSZone *)zone;	// 0x32d43991
// converted property getter: - (unsigned)count;	// 0x32d44ad5
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x32d44381
- (void)dealloc;	// 0x32d439d1
- (id)description;	// 0x32d44a55
- (void)getObjects:(id *)objects;	// 0x32d43d65
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x32d43d91
- (unsigned)indexOfManagedObjectForObjectID:(id)objectID;	// 0x32d44611
- (unsigned)indexOfObject:(id)object;	// 0x32d44431
- (unsigned)indexOfObject:(id)object inRange:(NSRange)range;	// 0x32d4445d
- (unsigned)indexOfObjectIdenticalTo:(id)to;	// 0x32d44489
- (unsigned)indexOfObjectIdenticalTo:(id)to inRange:(NSRange)range;	// 0x32d444b5
- (BOOL)isEqualToArray:(id)array;	// 0x32d43385
- (id)managedObjectIDAtIndex:(unsigned)index;	// 0x32d4473d
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x32d439a1
- (id)newArrayFromObjectIDs;	// 0x32d44841
- (id)objectAtIndex:(unsigned)index;	// 0x32d44ae5
- (oneway void)release;	// 0x32d43a8d
- (id)retain;	// 0x32d43a55
- (unsigned)retainCount;	// 0x32d43b05
- (id)subarrayWithRange:(NSRange)range;	// 0x32d447bd
@end


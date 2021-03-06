/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import "NSFastEnumeration.h"
#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class NSString, NSArray, ML3MusicLibrary, NSLock, ML3Predicate, NSMutableIndexSet, ML3QueryLoadOperation, ML3AggregateQuery;

@interface ML3Query : NSObject <NSFastEnumeration, NSCoding> {
@private
	ML3MusicLibrary *_library;	// 4 = 0x4
	Class _entityClass;	// 8 = 0x8
	ML3Predicate *_predicate;	// 12 = 0xc
	NSArray *_orderingProperties;	// 16 = 0x10
	BOOL _usingSections;	// 20 = 0x14
	NSLock *_loadedArrayLock;	// 24 = 0x18
	unsigned _loadedArrayCapacity;	// 28 = 0x1c
	NSMutableIndexSet *_loadedArrayIndexSet;	// 32 = 0x20
	long long *_loadedPersistentIDArray;	// 36 = 0x24
	NSMutableIndexSet *_loadedAggregateCountArray;	// 40 = 0x28
	unsigned *_loadedAggregatedCountArray;	// 44 = 0x2c
	BOOL _hasLoadedEveryPersistentID;	// 48 = 0x30
	ML3AggregateQuery *_nonDirectAggregateQuery;	// 52 = 0x34
}
@property(readonly, assign) unsigned countOfEntities;	// G=0x333b67c5; 
@property(readonly, assign) unsigned countOfEntitiesNoLoad;	// G=0x333e366d; 
@property(readonly, assign) Class entityClass;	// G=0x333af4ad; @synthesize=_entityClass
@property(readonly, assign) BOOL hasEntities;	// G=0x333b6db9; 
@property(assign) BOOL hasLoadedEveryPersistentID;	// G=0x333abf21; S=0x333e2e05; @synthesize=_hasLoadedEveryPersistentID
@property(readonly, assign) ML3MusicLibrary *library;	// G=0x333acb91; @synthesize=_library
@property(readonly, assign) ML3QueryLoadOperation *loadEntitiesOperation;	// G=0x333e33d5; 
@property(readonly, assign) ML3AggregateQuery *nonDirectAggregateQuery;	// G=0x333acefd; @synthesize=_nonDirectAggregateQuery
@property(readonly, assign) NSArray *orderingProperties;	// G=0x333af4cd; @synthesize=_orderingProperties
@property(readonly, assign) ML3Predicate *predicate;	// G=0x333af4bd; @synthesize=_predicate
@property(readonly, assign) NSString *sectionProperty;	// G=0x333af8dd; 
@property(readonly, retain) NSArray *sections;	// G=0x333e3415; 
@property(readonly, assign) BOOL usingSections;	// G=0x333af4dd; @synthesize=_usingSections
- (id)initWithCoder:(id)coder;	// 0x333e38a9
- (id)initWithLibrary:(id)library entityClass:(Class)aClass predicate:(id)predicate orderingProperties:(id)properties usingSections:(BOOL)sections nonDirectAggregateQuery:(id)query;	// 0x333ab8cd
- (void)bindToCountSqlite3Statement:(sqlite3_stmt *)countSqlite3Statement bindingIndex:(inout int *)index;	// 0x333e3151
- (void)bindToPersistentIDsSqlite3Statement:(sqlite3_stmt *)persistentIDsSqlite3Statement bindingIndex:(inout int *)index;	// 0x333acbe5
- (void)bindToSectionsSqlite3Statement:(sqlite3_stmt *)sectionsSqlite3Statement bindingIndex:(inout int *)index;	// 0x333afb55
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x333e45e5
// declared property getter: - (unsigned)countOfEntities;	// 0x333b67c5
// declared property getter: - (unsigned)countOfEntitiesNoLoad;	// 0x333e366d
- (void)dealloc;	// 0x333b5975
- (id)description;	// 0x333e36c9
- (BOOL)distinctPersistentIDProperty;	// 0x333abf95
- (void)encodeWithCoder:(id)coder;	// 0x333e396d
- (id)entityAtIndex:(unsigned)index;	// 0x333ab9b1
// declared property getter: - (Class)entityClass;	// 0x333af4ad
- (void)enumeratePersistentIDsAndProperties:(id)properties countedProperties:(id)properties2 ordered:(BOOL)ordered cancelBlock:(id)block usingBlock:(id)block5;	// 0x333affd5
- (void)enumeratePersistentIDsAndProperties:(id)properties countedProperties:(id)properties2 ordered:(BOOL)ordered usingBlock:(id)block;	// 0x333affa1
- (void)enumeratePersistentIDsAndProperties:(id)properties countedProperties:(id)properties2 usingBlock:(id)block;	// 0x333aff45
- (void)enumeratePersistentIDsAndProperties:(id)properties usingBlock:(id)block;	// 0x333e327d
- (void)enumeratePersistentIDsUsingBlock:(id)block;	// 0x333b5c11
- (void)enumerateSectionsUsingBlock:(id)block;	// 0x333af65d
- (BOOL)getAggregatedCount:(unsigned *)count atIndex:(unsigned)index;	// 0x333e3499
- (BOOL)getPersistentID:(long long *)anId atIndex:(unsigned)index;	// 0x333aba15
- (void)growLoadedArraysForIndex:(unsigned)index;	// 0x333e3f01
// declared property getter: - (BOOL)hasEntities;	// 0x333b6db9
- (BOOL)hasLoadedEntitesInRange:(NSRange)range;	// 0x333abf31
- (BOOL)hasLoadedEntityAtIndex:(unsigned)index;	// 0x333e35d9
// declared property getter: - (BOOL)hasLoadedEveryPersistentID;	// 0x333abf21
- (unsigned)indexOfEntity:(id)entity;	// 0x333e33a1
- (unsigned)indexOfPersistentID:(long long)persistentID;	// 0x333e32d9
- (void)insertLoadedAggregatedCount:(unsigned)count atIndex:(unsigned)index;	// 0x333e309d
- (void)insertLoadedPersistentID:(long long)anId atIndex:(unsigned)index;	// 0x333e2fd9
- (BOOL)isEqual:(id)equal;	// 0x333e3745
// declared property getter: - (id)library;	// 0x333acb91
- (void)loadAggregateCountForEntityAtIndex:(unsigned)index;	// 0x333e3539
- (void)loadAllEntities;	// 0x333e3631
// declared property getter: - (id)loadEntitiesOperation;	// 0x333e33d5
- (id)loadEntitiesOperationForRange:(NSRange)range;	// 0x333abb3d
- (id)loadEntitiesOperationForRange:(NSRange)range ordered:(BOOL)ordered;	// 0x333abb61
- (id)loadEntitiesOperationForRange:(NSRange)range ordered:(BOOL)ordered properties:(id)properties block:(id)block;	// 0x333abb91
- (void)loadEntityAtIndex:(unsigned)index;	// 0x333abab9
- (void)loadedAllPersisentIDs;	// 0x333e2fa9
// declared property getter: - (id)nonDirectAggregateQuery;	// 0x333acefd
// declared property getter: - (id)orderingProperties;	// 0x333af4cd
- (id)persistentIDProperty;	// 0x333ac0e9
// declared property getter: - (id)predicate;	// 0x333af4bd
// declared property getter: - (id)sectionProperty;	// 0x333af8dd
// declared property getter: - (id)sections;	// 0x333e3415
- (id)selectCountSQL;	// 0x333e3171
- (id)selectPersistentIDsSQL;	// 0x333e3229
- (id)selectPersistentIDsSQLAndProperties:(id)properties ordered:(BOOL)ordered;	// 0x333abf99
- (id)selectSQLWithColumns:(id)columns groupBy:(id)by;	// 0x333ac1b9
- (id)selectSQLWithColumns:(id)columns groupBy:(id)by orderingProperties:(id)properties;	// 0x333af965
- (id)selectSQLWithColumns:(id)columns groupBy:(id)by orderingProperties:(id)properties directionality:(id)directionality;	// 0x333ac1f1
- (id)selectSQLWithColumns:(id)columns orderingProperties:(id)properties;	// 0x333b6e69
- (id)selectSQLWithColumns:(id)columns orderingProperties:(id)properties directionality:(id)directionality;	// 0x333e3259
- (id)selectSectionsSQL;	// 0x333af75d
- (id)selectUnorderedPersistentIDsSQL;	// 0x333e3241
// declared property setter: - (void)setHasLoadedEveryPersistentID:(BOOL)anId;	// 0x333e2e05
// declared property getter: - (BOOL)usingSections;	// 0x333af4dd
- (id)valueForAggregateFunction:(id)aggregateFunction onEntitiesForProperty:(id)property;	// 0x333e3a71
- (void)visitGroupMembersOfEntityAtIndex:(unsigned)index visitor:(/*function-pointer*/ void *)visitor context:(void *)context;	// 0x333e3dc9
@end


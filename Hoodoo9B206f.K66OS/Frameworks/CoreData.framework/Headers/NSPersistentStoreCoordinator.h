/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import "NSLocking.h"
#import <NSObject.h> // Unknown library

@class NSManagedObjectModel, NSMutableArray;

@interface NSPersistentStoreCoordinator : NSObject <NSLocking> {
@private
	persistentStoreCoordinatorFlags _flags;	// 4 = 0x4
	void *_reserved;	// 8 = 0x8
	NSMutableArray *_extendedStoreURLs;	// 12 = 0xc
	id _externalRecordsHelper;	// 16 = 0x10
	NSManagedObjectModel *_managedObjectModel;	// 20 = 0x14
	id _coreLock;	// 24 = 0x18
	NSMutableArray *_persistentStores;	// 28 = 0x1c
}
@property(readonly, retain) NSManagedObjectModel *managedObjectModel;	// G=0x36228d11; converted property
@property(readonly, retain) NSMutableArray *persistentStores;	// G=0x362c76f1; converted property
+ (void)__Multithreading_Violation_AllThatIsLeftToUsIsHonor__;	// 0x362c75ed
+ (Class)_classForPersistentStoreAtURL:(id)url;	// 0x362c83a1
+ (void)_registerCoreDataStoreClass:(Class)aClass forStoreType:(id)storeType;	// 0x36256da5
+ (void)_registerDefaultStoreClassesAndTypes;	// 0x36256b59
+ (Class)_storeClassForStoreType:(id)storeType;	// 0x36228d81
+ (id)_storeTypeForStore:(id)store;	// 0x362cc7b5
+ (BOOL)accessInstanceVariablesDirectly;	// 0x362c75e9
+ (void)initialize;	// 0x36256281
+ (id)metadataForPersistentStoreOfType:(id)type URL:(id)url error:(id *)error;	// 0x362c7895
+ (void)registerStoreClass:(Class)aClass forStoreType:(id)storeType;	// 0x362c858d
+ (id)registeredStoreTypes;	// 0x362c8475
+ (BOOL)setMetadata:(id)metadata forPersistentStoreOfType:(id)type URL:(id)url error:(id *)error;	// 0x362c7f09
- (id)initWithManagedObjectModel:(id)managedObjectModel;	// 0x362232f9
- (id)URLForPersistentStore:(id)persistentStore;	// 0x362c9641
- (void)_addPersistentStore:(id)store identifier:(id)identifier;	// 0x36235e31
- (void)_assignObject:(id)object toPersistentStore:(id)persistentStore;	// 0x362ca041
- (void)_assignObject:(id)object toPersistentStore:(id)persistentStore forConfiguration:(id)configuration;	// 0x362ca249
- (void)_assignObjects:(id)objects toStore:(id)store;	// 0x362caa45
- (BOOL)_canSaveGraphRootedAtObject:(id)object intoStore:(id)store withPreviouslyChecked:(CFSetRef)previouslyChecked withAcceptableEntities:(CFSetRef)acceptableEntities;	// 0x362cda9d
- (id)_checkRequestForStore:(id)store originalRequest:(id)request andOptimisticLocking:(id)locking;	// 0x362cce45
- (id)_conflictsWithRowCacheForObject:(id)object andStore:(id)store;	// 0x362cdf91
- (void)_copyMetadataFromStore:(id)store toStore:(id)store2 migrationManager:(id)manager;	// 0x362cc559
- (BOOL)_destroyPersistentStoreAtURL:(id)url withType:(id)type error:(id *)error;	// 0x362ca175
- (BOOL)_destroyPersistentStoreAtURL:(id)url withType:(id)type options:(id)options error:(id *)error;	// 0x362ca769
- (void)_doPreSaveAssignmentsForObjects:(id)objects;	// 0x362ccb09
- (id)_fetchAllInstancesFromStore:(id)store intoContext:(id)context underlyingException:(id *)exception;	// 0x362cb881
- (void)_informAffectedStoresOfInterestByChildContextInObjectsWithObjectIDs:(id)objectIDs withSelector:(SEL)selector;	// 0x3624e359
- (BOOL)_isRegisteredWithUbiquity;	// 0x36250109
- (id)_newConflictRecordForObject:(id)object andOriginalRow:(id)row;	// 0x362c9f91
- (id)_newObjectGraphStyleRecordForRow:(id)row andObject:(id)object;	// 0x362cd7f1
- (id)_persistentStoreForIdentifier:(id)identifier;	// 0x36236041
- (void)_postStoresChangedNotificationsForStores:(id)stores changeKey:(id)key options:(id)options;	// 0x36236351
- (id)_realStoreTypeForStoreWithType:(id)type URL:(id)url error:(id *)error;	// 0x362ca0b1
- (BOOL)_removePersistentStore:(id)store;	// 0x362c774d
- (BOOL)_replacePersistentStoreAtURL:(id)url destinationOptions:(id)options withPersistentStoreFromURL:(id)url3 sourceOptions:(id)options4 storeType:(id)type error:(id *)error;	// 0x362ca341
- (id)_retainedAllMigratedObjectsInStore:(id)store toStore:(id)store2;	// 0x362cc0cd
- (id)_saveRequestForStore:(id)store originalRequest:(id)request andOptimisticLocking:(id)locking;	// 0x362caf71
- (void)_setIsRegisteredWithUbiquity:(BOOL)ubiquity;	// 0x362c75f5
- (id)addPersistentStoreWithType:(id)type configuration:(id)configuration URL:(id)url options:(id)options error:(id *)error;	// 0x36227601
- (void)dealloc;	// 0x3624fa9d
- (id)executeRequest:(id)request withContext:(id)context error:(id *)error;	// 0x36237ecd
- (void)finalize;	// 0x362c998d
- (id *)knownKeyValuesForObjectID:(id)objectID withContext:(id)context;	// 0x362c9f15
- (void)lock;	// 0x36228d21
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)managedObjectContext;	// 0x362c9f7d
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)managedObjectContext;	// 0x3624e345
- (id)managedObjectIDForURIRepresentation:(id)urirepresentation;	// 0x362c8ad1
- (id)managedObjectIDFromUTF8String:(const char *)utf8String length:(unsigned)length;	// 0x362c8795
// converted property getter: - (id)managedObjectModel;	// 0x36228d11
- (id)metadataForPersistentStore:(id)persistentStore;	// 0x362c7619
- (id)migratePersistentStore:(id)store toURL:(id)url options:(id)options withType:(id)type error:(id *)error;	// 0x362c8b55
- (id)newValueForRelationship:(id)relationship forObjectWithID:(id)anId withContext:(id)context error:(id *)error;	// 0x362c9f49
- (id)newValuesForObjectWithID:(id)anId withContext:(id)context error:(id *)error;	// 0x3624bc09
- (BOOL)obtainPermanentIDsForObjects:(id)objects error:(id *)error;	// 0x362cab25
- (id)persistentStoreCoordinator;	// 0x362c75f1
- (id)persistentStoreForIdentifier:(id)identifier;	// 0x362ca199
- (id)persistentStoreForURL:(id)url;	// 0x36235eed
// converted property getter: - (id)persistentStores;	// 0x362c76f1
- (BOOL)removePersistentStore:(id)store error:(id *)error;	// 0x362c96c9
- (void)setMetadata:(id)metadata forPersistentStore:(id)persistentStore;	// 0x362c9d75
- (BOOL)setURL:(id)url forPersistentStore:(id)persistentStore;	// 0x362c77a1
- (BOOL)tryLock;	// 0x3625011d
- (void)unlock;	// 0x36235fe5
@end


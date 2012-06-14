/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSPersistentStore.h"

@class NSSet, NSPersistentStoreMap;

__attribute__((visibility("hidden")))
@interface NSMappedObjectStore : NSPersistentStore {
@private
	NSPersistentStoreMap *_theMap;	// 44 = 0x2c
	NSSet *_entitiesToFetch;	// 48 = 0x30
}
@property(retain) id metadata;	// G=0x362bc471; S=0x362bc61d; converted property
- (id)init;	// 0x362bc491
- (id)initWithPersistentStoreCoordinator:(id)persistentStoreCoordinator configurationName:(id)name URL:(id)url options:(id)options;	// 0x362bd99d
- (void)_addObject:(id)object objectIDMap:(id)map;	// 0x362bc3a1
- (id)_pathFromURI:(id)uri;	// 0x362bc065
- (id)_rawMetadata__;	// 0x362bc451
- (void)_removeObject:(id)object objectIDMap:(id)map;	// 0x362bc3d1
- (void)_setMap:(id)map;	// 0x362bbff9
- (id)_theMap;	// 0x362bbfe1
- (void)_updateObject:(id)object objectIDMap:(id)map;	// 0x362bc401
- (id)dataForKey:(id)key;	// 0x362bc041
- (void)dealloc;	// 0x362bd8f5
- (id)executeCountRequest:(id)request withContext:(id)context;	// 0x362bc105
- (id)executeFetchRequest:(id)request withContext:(id)context;	// 0x362bcd4d
- (id)executeRequest:(id)request withContext:(id)context error:(id *)error;	// 0x362bc4ed
- (id)executeSaveChangesRequest:(id)request withContext:(id)context;	// 0x362bc779
- (id)getNewIDForObject:(id)object;	// 0x362bc2dd
- (id)identifier;	// 0x362bc431
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)managedObjectContext;	// 0x362bbff1
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)managedObjectContext;	// 0x362bbff5
// converted property getter: - (id)metadata;	// 0x362bc471
- (id)newValueForRelationship:(id)relationship forObjectWithID:(id)anId withContext:(id)context error:(id *)error;	// 0x362bc25d
- (id)newValuesForObjectWithID:(id)anId withContext:(id)context error:(id *)error;	// 0x362bc209
- (id)obtainPermanentIDsForObjects:(id)objects error:(id *)error;	// 0x362bc665
- (void)save;	// 0x362bc0c1
- (void)saveDocumentToPath:(id)path;	// 0x362bd8c1
// converted property setter: - (void)setMetadata:(id)metadata;	// 0x362bc61d
@end


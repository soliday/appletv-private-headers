/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSURL, NSDictionary, NSString, NSPersistentStoreCoordinator;

@interface NSPersistentStore : NSObject {
@private
	NSPersistentStoreCoordinator *_coordinator;	// 4 = 0x4
	NSString *_configurationName;	// 8 = 0x8
	NSURL *_url;	// 12 = 0xc
	NSDictionary *_options;	// 16 = 0x10
	NSMutableDictionary *_oidFactories;	// 20 = 0x14
	id _defaultFaultHandler;	// 24 = 0x18
	objectStoreFlags _flags;	// 28 = 0x1c
	void *_temporaryIDClass;	// 32 = 0x20
	id _externalRecordsMonitor;	// 36 = 0x24
	void *_reserved3;	// 40 = 0x28
}
@property(retain) id URL;	// G=0x3225db99; S=0x322f4a91; converted property
@property(readonly, retain) NSString *configurationName;	// G=0x322f4645; converted property
@property(retain) id identifier;	// G=0x322f469d; S=0x322f470d; converted property
@property(retain) id metadata;	// G=0x322f4a5d; S=0x322f47b5; converted property
@property(readonly, retain) NSDictionary *options;	// G=0x3225da75; converted property
@property(retain) id persistentStoreCoordinator;	// G=0x322641cd; S=0x3227ed49; converted property
@property(assign, getter=isReadOnly) BOOL readOnly;	// G=0x3225d4ed; S=0x322f462d; converted property
+ (BOOL)_destroyPersistentStoreAtURL:(id)url options:(id)options error:(id *)error;	// 0x322f52a1
+ (id)_figureOutWhereExternalReferencesEndedUpRelativeTo:(id)to;	// 0x322f4669
+ (BOOL)_replacePersistentStoreAtURL:(id)url destinationOptions:(id)options withPersistentStoreFromURL:(id)url3 sourceOptions:(id)options4 error:(id *)error;	// 0x322f512d
+ (BOOL)accessInstanceVariablesDirectly;	// 0x322f4629
+ (BOOL)doURLStuff:(id)stuff createdStubFile:(BOOL *)file readOnly:(BOOL *)only error:(id *)error options:(id)options;	// 0x32257a09
+ (void)initialize;	// 0x32284bfd
+ (id)metadataForPersistentStoreWithURL:(id)url error:(id *)error;	// 0x322f49d9
+ (Class)migrationManagerClass;	// 0x322f4905
+ (BOOL)setMetadata:(id)metadata forPersistentStoreWithURL:(id)url error:(id *)error;	// 0x322f4805
- (id)initWithPersistentStoreCoordinator:(id)persistentStoreCoordinator configurationName:(id)name URL:(id)url options:(id)options;	// 0x32257e6d
// converted property getter: - (id)URL;	// 0x3225db99
- (id)_defaultMetadata;	// 0x322f494d
- (void)_didLoadMetadata;	// 0x32262845
- (BOOL)_isMetadataDirty;	// 0x3225d2b1
- (Class)_objectIDClass;	// 0x322f4921
- (void)_preflightCrossCheck;	// 0x322f4e2d
- (BOOL)_prepareForExecuteRequest:(id)executeRequest withContext:(id)context error:(id *)error;	// 0x322f4689
- (id)_rawMetadata__;	// 0x322f4a29
- (void)_setMetadataDirty:(BOOL)dirty;	// 0x32262849
- (BOOL)_unload:(id *)unload;	// 0x3227e329
- (void)_updateMetadata;	// 0x322640f1
- (id)_updatedMetadataWithSeed:(id)seed includeVersioning:(BOOL)versioning;	// 0x32262465
// converted property getter: - (id)configurationName;	// 0x322f4645
- (id)copyWithZone:(NSZone *)zone;	// 0x322f468d
- (void)dealloc;	// 0x3227f6d5
- (id)description;	// 0x322f4961
- (void)didAddToPersistentStoreCoordinator:(id)persistentStoreCoordinator;	// 0x3226434d
- (void)doFilesystemCleanupOnRemove:(BOOL)remove;	// 0x322f466d
- (id)executeRequest:(id)request withContext:(id)context error:(id *)error;	// 0x322f4cf5
- (id)faultHandler;	// 0x32271955
- (Class)faultHandlerClass;	// 0x322719a9
- (void)finalize;	// 0x322f4ad9
// converted property getter: - (id)identifier;	// 0x322f469d
// converted property getter: - (BOOL)isReadOnly;	// 0x3225d4ed
- (id *)knownKeyValuesForObjectID:(id)objectID withContext:(id)context;	// 0x322f4685
- (BOOL)load:(id *)load;	// 0x322f4c09
- (BOOL)loadMetadata:(id *)metadata;	// 0x322f4665
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)managedObjectContext;	// 0x322f4d91
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)managedObjectContext;	// 0x322f4dc5
// converted property getter: - (id)metadata;	// 0x322f4a5d
- (id)newValueForRelationship:(id)relationship forObjectWithID:(id)anId withContext:(id)context error:(id *)error;	// 0x322f4d5d
- (id)newValuesForObjectWithID:(id)anId withContext:(id)context error:(id *)error;	// 0x322f4d29
- (Class)objectIDClassForEntity:(id)entity;	// 0x322f493d
- (id)objectIDFactoryForEntity:(id)entity;	// 0x32273501
- (id)obtainPermanentIDsForObjects:(id)objects error:(id *)error;	// 0x322f4df9
// converted property getter: - (id)options;	// 0x3225da75
// converted property getter: - (id)persistentStoreCoordinator;	// 0x322641cd
// converted property setter: - (void)setIdentifier:(id)identifier;	// 0x322f470d
// converted property setter: - (void)setMetadata:(id)metadata;	// 0x322f47b5
// converted property setter: - (void)setPersistentStoreCoordinator:(id)coordinator;	// 0x3227ed49
// converted property setter: - (void)setReadOnly:(BOOL)only;	// 0x322f462d
// converted property setter: - (void)setURL:(id)url;	// 0x322f4a91
- (id)type;	// 0x322f4a0d
- (void)willRemoveFromPersistentStoreCoordinator:(id)persistentStoreCoordinator;	// 0x3227e2c1
@end


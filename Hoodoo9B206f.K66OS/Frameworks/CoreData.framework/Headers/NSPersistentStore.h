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
@property(retain) id URL;	// G=0x3622fb99; S=0x362c6a91; converted property
@property(readonly, retain) NSString *configurationName;	// G=0x362c6645; converted property
@property(retain) id identifier;	// G=0x362c669d; S=0x362c670d; converted property
@property(retain) id metadata;	// G=0x362c6a5d; S=0x362c67b5; converted property
@property(readonly, retain) NSDictionary *options;	// G=0x3622fa75; converted property
@property(retain) id persistentStoreCoordinator;	// G=0x362361cd; S=0x36250d49; converted property
@property(assign, getter=isReadOnly) BOOL readOnly;	// G=0x3622f4ed; S=0x362c662d; converted property
+ (BOOL)_destroyPersistentStoreAtURL:(id)url options:(id)options error:(id *)error;	// 0x362c72a1
+ (id)_figureOutWhereExternalReferencesEndedUpRelativeTo:(id)to;	// 0x362c6669
+ (BOOL)_replacePersistentStoreAtURL:(id)url destinationOptions:(id)options withPersistentStoreFromURL:(id)url3 sourceOptions:(id)options4 error:(id *)error;	// 0x362c712d
+ (BOOL)accessInstanceVariablesDirectly;	// 0x362c6629
+ (BOOL)doURLStuff:(id)stuff createdStubFile:(BOOL *)file readOnly:(BOOL *)only error:(id *)error options:(id)options;	// 0x36229a09
+ (void)initialize;	// 0x36256bfd
+ (id)metadataForPersistentStoreWithURL:(id)url error:(id *)error;	// 0x362c69d9
+ (Class)migrationManagerClass;	// 0x362c6905
+ (BOOL)setMetadata:(id)metadata forPersistentStoreWithURL:(id)url error:(id *)error;	// 0x362c6805
- (id)initWithPersistentStoreCoordinator:(id)persistentStoreCoordinator configurationName:(id)name URL:(id)url options:(id)options;	// 0x36229e6d
// converted property getter: - (id)URL;	// 0x3622fb99
- (id)_defaultMetadata;	// 0x362c694d
- (void)_didLoadMetadata;	// 0x36234845
- (BOOL)_isMetadataDirty;	// 0x3622f2b1
- (Class)_objectIDClass;	// 0x362c6921
- (void)_preflightCrossCheck;	// 0x362c6e2d
- (BOOL)_prepareForExecuteRequest:(id)executeRequest withContext:(id)context error:(id *)error;	// 0x362c6689
- (id)_rawMetadata__;	// 0x362c6a29
- (void)_setMetadataDirty:(BOOL)dirty;	// 0x36234849
- (BOOL)_unload:(id *)unload;	// 0x36250329
- (void)_updateMetadata;	// 0x362360f1
- (id)_updatedMetadataWithSeed:(id)seed includeVersioning:(BOOL)versioning;	// 0x36234465
// converted property getter: - (id)configurationName;	// 0x362c6645
- (id)copyWithZone:(NSZone *)zone;	// 0x362c668d
- (void)dealloc;	// 0x362516d5
- (id)description;	// 0x362c6961
- (void)didAddToPersistentStoreCoordinator:(id)persistentStoreCoordinator;	// 0x3623634d
- (void)doFilesystemCleanupOnRemove:(BOOL)remove;	// 0x362c666d
- (id)executeRequest:(id)request withContext:(id)context error:(id *)error;	// 0x362c6cf5
- (id)faultHandler;	// 0x36243955
- (Class)faultHandlerClass;	// 0x362439a9
- (void)finalize;	// 0x362c6ad9
// converted property getter: - (id)identifier;	// 0x362c669d
// converted property getter: - (BOOL)isReadOnly;	// 0x3622f4ed
- (id *)knownKeyValuesForObjectID:(id)objectID withContext:(id)context;	// 0x362c6685
- (BOOL)load:(id *)load;	// 0x362c6c09
- (BOOL)loadMetadata:(id *)metadata;	// 0x362c6665
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)managedObjectContext;	// 0x362c6d91
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)managedObjectContext;	// 0x362c6dc5
// converted property getter: - (id)metadata;	// 0x362c6a5d
- (id)newValueForRelationship:(id)relationship forObjectWithID:(id)anId withContext:(id)context error:(id *)error;	// 0x362c6d5d
- (id)newValuesForObjectWithID:(id)anId withContext:(id)context error:(id *)error;	// 0x362c6d29
- (Class)objectIDClassForEntity:(id)entity;	// 0x362c693d
- (id)objectIDFactoryForEntity:(id)entity;	// 0x36245501
- (id)obtainPermanentIDsForObjects:(id)objects error:(id *)error;	// 0x362c6df9
// converted property getter: - (id)options;	// 0x3622fa75
// converted property getter: - (id)persistentStoreCoordinator;	// 0x362361cd
// converted property setter: - (void)setIdentifier:(id)identifier;	// 0x362c670d
// converted property setter: - (void)setMetadata:(id)metadata;	// 0x362c67b5
// converted property setter: - (void)setPersistentStoreCoordinator:(id)coordinator;	// 0x36250d49
// converted property setter: - (void)setReadOnly:(BOOL)only;	// 0x362c662d
// converted property setter: - (void)setURL:(id)url;	// 0x362c6a91
- (id)type;	// 0x362c6a0d
- (void)willRemoveFromPersistentStoreCoordinator:(id)persistentStoreCoordinator;	// 0x362502c1
@end


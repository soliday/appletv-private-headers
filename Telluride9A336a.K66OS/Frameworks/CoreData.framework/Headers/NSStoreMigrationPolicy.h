/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSURL, NSMigrationManager, NSManagedObjectModel, NSArray, NSString, NSPersistentStoreCoordinator, NSMappingModel, NSDictionary;

__attribute__((visibility("hidden")))
@interface NSStoreMigrationPolicy : NSObject {
@private
	NSPersistentStoreCoordinator *_coordinator;	// 4 = 0x4
	NSURL *_sourceURL;	// 8 = 0x8
	NSString *_sourceConfiguration;	// 12 = 0xc
	NSDictionary *_sourceOptions;	// 16 = 0x10
	NSManagedObjectModel *_sourceModel;	// 20 = 0x14
	NSDictionary *_sourceMetadata;	// 24 = 0x18
	NSMappingModel *_mappingModel;	// 28 = 0x1c
	NSURL *_destinationURL;	// 32 = 0x20
	NSString *_destinationType;	// 36 = 0x24
	NSString *_destinationConfiguration;	// 40 = 0x28
	NSDictionary *_destinationOptions;	// 44 = 0x2c
	NSMigrationManager *_migrationManager;	// 48 = 0x30
	NSArray *_resourceBundles;	// 52 = 0x34
	void *_reserved1;	// 56 = 0x38
	void *_reserved2;	// 60 = 0x3c
	void *_reserved3;	// 64 = 0x40
	void *_reserved4;	// 68 = 0x44
}
@property(retain) NSString *destinationConfiguration;	// G=0x323e0219; S=0x323e09a1; converted property
@property(retain) NSDictionary *destinationOptions;	// G=0x323e0229; S=0x323e09fd; converted property
@property(retain) NSString *destinationType;	// G=0x323e0209; S=0x323e0945; converted property
@property(retain) NSURL *destinationURL;	// G=0x323e01f9; S=0x323e08e9; converted property
@property(retain) NSMappingModel *mappingModel;	// G=0x323e01e9; S=0x323e088d; converted property
@property(retain) NSMigrationManager *migrationManager;	// G=0x323e0239; S=0x323e0a59; converted property
@property(retain) id persistentStoreCoordinator;	// G=0x323e0179; S=0x323e0189; converted property
@property(retain) NSArray *resourceBundles;	// G=0x323e0ee1; S=0x323e0e99; converted property
@property(retain) NSString *sourceConfiguration;	// G=0x323e01a9; S=0x323e06f5; converted property
@property(retain) NSDictionary *sourceMetadata;	// G=0x323e01b9; S=0x323e0751; converted property
@property(retain) NSManagedObjectModel *sourceModel;	// G=0x323e01d9; S=0x323e0809; converted property
@property(retain) NSDictionary *sourceOptions;	// G=0x323e01c9; S=0x323e07ad; converted property
@property(retain) NSURL *sourceURL;	// G=0x323e0199; S=0x323e0661; converted property
+ (int)migrationDebugLevel;	// 0x323e0f25
+ (id)migrationStoreOptionsFromStoreOptions:(id)storeOptions;	// 0x323e0471
+ (void)setMigrationDebugLevel:(int)level;	// 0x323e0f41
- (id)_gatherDataAndPerformMigration:(id *)migration;	// 0x323e1525
- (id)addMigratedStoreToCoordinator:(id)coordinator withType:(id)type configuration:(id)configuration URL:(id)url options:(id)options error:(id *)error;	// 0x323e0e5d
- (void)dealloc;	// 0x323e138d
// converted property getter: - (id)destinationConfiguration;	// 0x323e0219
- (id)destinationConfigurationForMigration:(id)migration sourceMetadata:(id)metadata error:(id *)error;	// 0x323e0d7d
- (id)destinationModel;	// 0x323e0865
// converted property getter: - (id)destinationOptions;	// 0x323e0229
- (id)destinationOptionsForMigration:(id)migration sourceMetadata:(id)metadata error:(id *)error;	// 0x323e0d8d
// converted property getter: - (id)destinationType;	// 0x323e0209
- (id)destinationTypeForMigration:(id)migration sourceMetadata:(id)metadata error:(id *)error;	// 0x323e0d6d
// converted property getter: - (id)destinationURL;	// 0x323e01f9
- (id)destinationURLForMigration:(id)migration sourceURL:(id)url sourceMetadata:(id)metadata error:(id *)error;	// 0x323e0cc1
- (void)didPerformMigrationWithManager:(id)manager;	// 0x323e024d
- (void)handleMigrationError:(id)error inManager:(id)manager;	// 0x323e0251
- (id)managerForSourceModel:(id)sourceModel destinationModel:(id)model error:(id *)error;	// 0x323e0255
// converted property getter: - (id)mappingModel;	// 0x323e01e9
- (id)mappingModelForSourceModel:(id)sourceModel destinationModel:(id)model error:(id *)error;	// 0x323e0ab5
- (BOOL)migrateStoreAtURL:(id)url toURL:(id)url2 storeType:(id)type options:(id)options withManager:(id)manager error:(id *)error;	// 0x323e0d9d
- (id)migrateStoreAtURL:(id)url withManager:(id)manager metadata:(id)metadata options:(id)options error:(id *)error;	// 0x323e03fd
// converted property getter: - (id)migrationManager;	// 0x323e0239
// converted property getter: - (id)persistentStoreCoordinator;	// 0x323e0179
// converted property getter: - (id)resourceBundles;	// 0x323e0ee1
// converted property setter: - (void)setDestinationConfiguration:(id)configuration;	// 0x323e09a1
// converted property setter: - (void)setDestinationOptions:(id)options;	// 0x323e09fd
// converted property setter: - (void)setDestinationType:(id)type;	// 0x323e0945
// converted property setter: - (void)setDestinationURL:(id)url;	// 0x323e08e9
// converted property setter: - (void)setMappingModel:(id)model;	// 0x323e088d
// converted property setter: - (void)setMigrationManager:(id)manager;	// 0x323e0a59
// converted property setter: - (void)setPersistentStoreCoordinator:(id)coordinator;	// 0x323e0189
- (void)setPersistentStoreCoordinator:(id)coordinator sourceURL:(id)url configuration:(id)configuration metadata:(id)metadata options:(id)options;	// 0x323e052d
// converted property setter: - (void)setResourceBundles:(id)bundles;	// 0x323e0e99
// converted property setter: - (void)setSourceConfiguration:(id)configuration;	// 0x323e06f5
// converted property setter: - (void)setSourceMetadata:(id)metadata;	// 0x323e0751
// converted property setter: - (void)setSourceModel:(id)model;	// 0x323e0809
// converted property setter: - (void)setSourceOptions:(id)options;	// 0x323e07ad
// converted property setter: - (void)setSourceURL:(id)url;	// 0x323e0661
// converted property getter: - (id)sourceConfiguration;	// 0x323e01a9
// converted property getter: - (id)sourceMetadata;	// 0x323e01b9
// converted property getter: - (id)sourceModel;	// 0x323e01d9
- (id)sourceModelForStoreAtURL:(id)url metadata:(id)metadata error:(id *)error;	// 0x323e0f5d
// converted property getter: - (id)sourceOptions;	// 0x323e01c9
- (id)sourceType;	// 0x323e06bd
// converted property getter: - (id)sourceURL;	// 0x323e0199
- (void)willPerformMigrationWithManager:(id)manager;	// 0x323e0249
@end


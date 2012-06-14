/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSURL, NSDictionary, NSMigrationManager, NSManagedObjectModel, NSArray, NSString, NSPersistentStoreCoordinator, NSMappingModel;

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
@property(retain) NSString *destinationConfiguration;	// G=0x3630ef65; S=0x3630f6ed; converted property
@property(retain) NSDictionary *destinationOptions;	// G=0x3630ef75; S=0x3630f749; converted property
@property(retain) NSString *destinationType;	// G=0x3630ef55; S=0x3630f691; converted property
@property(retain) NSURL *destinationURL;	// G=0x3630ef45; S=0x3630f635; converted property
@property(retain) NSMappingModel *mappingModel;	// G=0x3630ef35; S=0x3630f5d9; converted property
@property(retain) NSMigrationManager *migrationManager;	// G=0x3630ef85; S=0x3630f7a5; converted property
@property(retain) id persistentStoreCoordinator;	// G=0x3630eec5; S=0x3630eed5; converted property
@property(retain) NSArray *resourceBundles;	// G=0x3630fc89; S=0x3630fc41; converted property
@property(retain) NSString *sourceConfiguration;	// G=0x3630eef5; S=0x3630f441; converted property
@property(retain) NSDictionary *sourceMetadata;	// G=0x3630ef05; S=0x3630f49d; converted property
@property(retain) NSManagedObjectModel *sourceModel;	// G=0x3630ef25; S=0x3630f555; converted property
@property(retain) NSDictionary *sourceOptions;	// G=0x3630ef15; S=0x3630f4f9; converted property
@property(retain) NSURL *sourceURL;	// G=0x3630eee5; S=0x3630f3ad; converted property
+ (int)migrationDebugLevel;	// 0x3630fccd
+ (id)migrationStoreOptionsFromStoreOptions:(id)storeOptions;	// 0x3630f1bd
+ (void)setMigrationDebugLevel:(int)level;	// 0x3630fce9
- (id)_gatherDataAndPerformMigration:(id *)migration;	// 0x363102cd
- (id)addMigratedStoreToCoordinator:(id)coordinator withType:(id)type configuration:(id)configuration URL:(id)url options:(id)options error:(id *)error;	// 0x3630fc05
- (void)dealloc;	// 0x36310135
// converted property getter: - (id)destinationConfiguration;	// 0x3630ef65
- (id)destinationConfigurationForMigration:(id)migration sourceMetadata:(id)metadata error:(id *)error;	// 0x3630fb25
- (id)destinationModel;	// 0x3630f5b1
// converted property getter: - (id)destinationOptions;	// 0x3630ef75
- (id)destinationOptionsForMigration:(id)migration sourceMetadata:(id)metadata error:(id *)error;	// 0x3630fb35
// converted property getter: - (id)destinationType;	// 0x3630ef55
- (id)destinationTypeForMigration:(id)migration sourceMetadata:(id)metadata error:(id *)error;	// 0x3630fb15
// converted property getter: - (id)destinationURL;	// 0x3630ef45
- (id)destinationURLForMigration:(id)migration sourceURL:(id)url sourceMetadata:(id)metadata error:(id *)error;	// 0x3630fa0d
- (void)didPerformMigrationWithManager:(id)manager;	// 0x3630ef99
- (id)externalDataReferencesURLForDestination:(id)destination forStoreOfType:(id)type;	// 0x3630fab9
- (void)handleMigrationError:(id)error inManager:(id)manager;	// 0x3630ef9d
- (id)managerForSourceModel:(id)sourceModel destinationModel:(id)model error:(id *)error;	// 0x3630efa1
// converted property getter: - (id)mappingModel;	// 0x3630ef35
- (id)mappingModelForSourceModel:(id)sourceModel destinationModel:(id)model error:(id *)error;	// 0x3630f801
- (BOOL)migrateStoreAtURL:(id)url toURL:(id)url2 storeType:(id)type options:(id)options withManager:(id)manager error:(id *)error;	// 0x3630fb45
- (id)migrateStoreAtURL:(id)url withManager:(id)manager metadata:(id)metadata options:(id)options error:(id *)error;	// 0x3630f149
// converted property getter: - (id)migrationManager;	// 0x3630ef85
// converted property getter: - (id)persistentStoreCoordinator;	// 0x3630eec5
// converted property getter: - (id)resourceBundles;	// 0x3630fc89
// converted property setter: - (void)setDestinationConfiguration:(id)configuration;	// 0x3630f6ed
// converted property setter: - (void)setDestinationOptions:(id)options;	// 0x3630f749
// converted property setter: - (void)setDestinationType:(id)type;	// 0x3630f691
// converted property setter: - (void)setDestinationURL:(id)url;	// 0x3630f635
// converted property setter: - (void)setMappingModel:(id)model;	// 0x3630f5d9
// converted property setter: - (void)setMigrationManager:(id)manager;	// 0x3630f7a5
// converted property setter: - (void)setPersistentStoreCoordinator:(id)coordinator;	// 0x3630eed5
- (void)setPersistentStoreCoordinator:(id)coordinator sourceURL:(id)url configuration:(id)configuration metadata:(id)metadata options:(id)options;	// 0x3630f279
// converted property setter: - (void)setResourceBundles:(id)bundles;	// 0x3630fc41
// converted property setter: - (void)setSourceConfiguration:(id)configuration;	// 0x3630f441
// converted property setter: - (void)setSourceMetadata:(id)metadata;	// 0x3630f49d
// converted property setter: - (void)setSourceModel:(id)model;	// 0x3630f555
// converted property setter: - (void)setSourceOptions:(id)options;	// 0x3630f4f9
// converted property setter: - (void)setSourceURL:(id)url;	// 0x3630f3ad
// converted property getter: - (id)sourceConfiguration;	// 0x3630eef5
// converted property getter: - (id)sourceMetadata;	// 0x3630ef05
// converted property getter: - (id)sourceModel;	// 0x3630ef25
- (id)sourceModelForStoreAtURL:(id)url metadata:(id)metadata error:(id *)error;	// 0x3630fd05
// converted property getter: - (id)sourceOptions;	// 0x3630ef15
- (id)sourceType;	// 0x3630f409
// converted property getter: - (id)sourceURL;	// 0x3630eee5
- (void)willPerformMigrationWithManager:(id)manager;	// 0x3630ef95
@end


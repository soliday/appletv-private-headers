/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSEntityMapping, NSPropertyMapping, NSMutableDictionary, NSMigrationManager;

__attribute__((visibility("hidden")))
@interface NSMigrationContext : NSObject {
@private
	NSMutableDictionary *_bySourceAssociationTable;	// 4 = 0x4
	NSMutableDictionary *_byDestinationAssociationTable;	// 8 = 0x8
	NSMutableDictionary *_byMappingBySourceAssociationTable;	// 12 = 0xc
	NSMutableDictionary *_byMappingByDestinationAssociationTable;	// 16 = 0x10
	NSMigrationManager *_migrationManager;	// 20 = 0x14
	NSEntityMapping *_currentMapping;	// 24 = 0x18
	unsigned _currentStep;	// 28 = 0x1c
	NSPropertyMapping *_currentPropertyMapping;	// 32 = 0x20
}
@property(retain) id currentEntityMapping;	// G=0x322efd4d; S=0x322f06d5; converted property
@property(assign) unsigned currentMigrationStep;	// G=0x322efd6d; S=0x322f05dd; converted property
@property(retain) NSPropertyMapping *currentPropertyMapping;	// G=0x322efd5d; S=0x322f0641; converted property
- (id)initWithMigrationManager:(id)migrationManager;	// 0x322efd7d
- (void)_createAssociationsByDestination:(id)destination fromSource:(id)source forEntityMapping:(id)entityMapping;	// 0x322f025d
- (void)_createAssociationsBySource:(id)source withDestination:(id)destination forEntityMapping:(id)entityMapping;	// 0x322f041d
- (void)associateSourceInstance:(id)instance withDestinationInstance:(id)destinationInstance forEntityMapping:(id)entityMapping;	// 0x322f021d
- (void)clearAssociationTables;	// 0x322f078d
// converted property getter: - (id)currentEntityMapping;	// 0x322efd4d
// converted property getter: - (unsigned)currentMigrationStep;	// 0x322efd6d
// converted property getter: - (id)currentPropertyMapping;	// 0x322efd5d
- (void)dealloc;	// 0x322f0825
- (id)destinationInstancesForEntityMapping:(id)entityMapping sourceInstance:(id)instance;	// 0x322f004d
// converted property setter: - (void)setCurrentEntityMapping:(id)mapping;	// 0x322f06d5
// converted property setter: - (void)setCurrentMigrationStep:(unsigned)step;	// 0x322f05dd
// converted property setter: - (void)setCurrentPropertyMapping:(id)mapping;	// 0x322f0641
- (id)sourceInstancesForEntityMapping:(id)entityMapping destinationInstance:(id)instance;	// 0x322efe7d
@end


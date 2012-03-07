/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import "NSStoreMapping.h"

@class NSMutableArray, NSSQLStatement, NSKnownKeysMappingStrategy, NSSQLStoreMappingGenerator, NSSQLModel, NSSQLEntityKey, NSSQLOptLockKey, NSEntityDescription, NSArray, NSString, NSSQLPrimaryKey, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface NSSQLEntity : NSStoreMapping {
@private
	NSSQLModel *_model;	// 8 = 0x8
	NSEntityDescription *_entityDescription;	// 12 = 0xc
	NSString *_tableName;	// 16 = 0x10
	NSMutableDictionary *_properties;	// 20 = 0x14
	NSArray *_propertyAllCache;	// 24 = 0x18
	NSArray *_propertiesAllToManysCache;	// 28 = 0x1c
	NSArray *_propertyManyToManyCache;	// 32 = 0x20
	NSMutableArray *_columnsToFetch;	// 36 = 0x24
	NSMutableArray *_ekColumns;	// 40 = 0x28
	NSMutableArray *_fkColumns;	// 44 = 0x2c
	NSMutableArray *_fokColumns;	// 48 = 0x30
	NSMutableArray *_attrColumns;	// 52 = 0x34
	NSMutableArray *_virtualFKs;	// 56 = 0x38
	NSSQLPrimaryKey *_primaryKey;	// 60 = 0x3c
	NSSQLEntityKey *_entityKey;	// 64 = 0x40
	NSSQLOptLockKey *_optLockKey;	// 68 = 0x44
	NSMutableArray *_subentities;	// 72 = 0x48
	NSSQLEntity *_superentity;	// 76 = 0x4c
	NSSQLEntity *_rootEntity;	// 80 = 0x50
	NSSQLStoreMappingGenerator *_mappingGenerator;	// 84 = 0x54
	unsigned _entityID;	// 88 = 0x58
	unsigned _subentityMaxID;	// 92 = 0x5c
	NSRange _toOneRange;	// 96 = 0x60
	long long _maxPK;	// 104 = 0x68
	NSSQLStatement *_insertStatementCache;	// 112 = 0x70
	NSSQLStatement *_deletionStatementCache;	// 116 = 0x74
	NSSQLStatement *_faultingStatementCache;	// 120 = 0x78
	NSMutableDictionary *_toManyRelationshipStatementCache;	// 124 = 0x7c
	void *_fetch_entity_plan;	// 128 = 0x80
	NSKnownKeysMappingStrategy *_propertyMapping;	// 132 = 0x84
	void *_odiousHashHackStorage;	// 136 = 0x88
	unsigned _pkCount;	// 140 = 0x8c
	sqlentityFlags _sqlentityFlags;	// 144 = 0x90
}
@property(readonly, retain) NSMutableArray *columnsToFetch;	// G=0x33f4c445; converted property
@property(readonly, retain) NSEntityDescription *entityDescription;	// G=0x33f39df9; converted property
@property(readonly, assign) unsigned entityID;	// G=0x33f64a3d; converted property
@property(readonly, retain) NSSQLStoreMappingGenerator *mappingGenerator;	// G=0x33f3c509; converted property
@property(readonly, retain) NSSQLModel *model;	// G=0x33f39f89; converted property
@property(readonly, retain) NSSQLOptLockKey *optLockKey;	// G=0x33f5300d; converted property
@property(readonly, retain) NSSQLPrimaryKey *primaryKey;	// G=0x33f64835; converted property
@property(readonly, retain) NSMutableDictionary *properties;	// G=0x33ffa111; converted property
@property(readonly, retain) NSKnownKeysMappingStrategy *propertyMapping;	// G=0x33ff96a5; converted property
@property(readonly, retain) NSSQLEntity *rootEntity;	// G=0x33ff962d; converted property
@property(retain) NSMutableArray *subentities;	// G=0x33f3cda5; S=0x33ff970d; converted property
@property(readonly, assign) unsigned subentityMaxID;	// G=0x33f64a4d; converted property
@property(retain) NSSQLEntity *superentity;	// G=0x33f3b735; S=0x33ff97a1; converted property
@property(readonly, retain) NSString *tableName;	// G=0x33f4f745; converted property
- (id)initWithModel:(id)model entityDescription:(id)description;	// 0x33f3964d
- (void)_addColumnToFetch:(id)fetch;	// 0x33f3c0c5
- (void)_addForeignOrderKeyForToOne:(id)one entity:(id)entity;	// 0x33f6739d
- (void)_addRootColumnToFetch:(id)fetch;	// 0x33f3c189
- (void)_addSubentity:(id)subentity;	// 0x33ff9735
- (id)_addVirtualToOneForToMany:(id)many withInheritedProperty:(id)inheritedProperty;	// 0x33f67f55
- (void)_doPostModelGenerationCleanup;	// 0x33f3dced
- (unsigned)_generateIDWithSuperEntity:(id)superEntity nextID:(unsigned)anId;	// 0x33f39e09
- (void)_generateInverseRelationshipsAndMore;	// 0x33f3cdb5
- (void)_generateProperties;	// 0x33f3a0d1
- (void *)_odiousHashHack;	// 0x33ff961d
- (unsigned)_pkCount;	// 0x33ff963d
- (id)_propertySearchMapping;	// 0x33f3c9bd
- (void)_resetPKCount;	// 0x33ff964d
- (void)_setMaxPK:(long long)pk;	// 0x33ff9661
- (id)_sqlPropertyWithRenamingIdentifier:(id)renamingIdentifier;	// 0x33ff9d61
- (NSRange)_toOneRange;	// 0x33f66e81
- (void)addInsertedObject:(id)object toArray:(id)array;	// 0x33ff985d
- (BOOL)addPropertiesForReadOnlyFetch:(id)readOnlyFetch keys:(id)keys context:(id)context;	// 0x33f64abd
- (id)attributeColumns;	// 0x33f52ffd
- (id)attributeNamed:(id)named;	// 0x33ff984d
- (id)attributes;	// 0x33ff9c75
- (void)cacheDeletionStatement:(id)statement;	// 0x33ff9a21
- (void)cacheFaultingStatement:(id)statement;	// 0x33ff9a7d
- (void)cacheFaultingStatement:(id)statement andFetchRequest:(id)request forRelationship:(id)relationship;	// 0x33ff9b1d
- (void)cacheInsertStatement:(id)statement;	// 0x33ff99c5
- (void)clearCachedStatements;	// 0x33f6025d
- (id)columnsToCreate;	// 0x33ff96fd
// converted property getter: - (id)columnsToFetch;	// 0x33f4c445
- (void)copyValuesForReadOnlyFetch:(id)readOnlyFetch;	// 0x33f64559
- (void)dealloc;	// 0x33f5fef5
- (id)deletionStatement;	// 0x33ff9685
- (id)description;	// 0x33ff995d
// converted property getter: - (id)entityDescription;	// 0x33f39df9
// converted property getter: - (unsigned)entityID;	// 0x33f64a3d
- (id)externalName;	// 0x33ff9c65
- (id)faultingStatement;	// 0x33ff9695
- (unsigned)fetchIndexForKey:(id)key;	// 0x33ff96b5
- (void)finalize;	// 0x33ffa2d9
- (id)foreignEntityKeyColumns;	// 0x33f52fdd
- (id)foreignKeyColumns;	// 0x33f52fcd
- (id)foreignOrderKeyColumns;	// 0x33f52fed
- (BOOL)hasAttributesWithExternalDataReferences;	// 0x33f42d81
- (BOOL)hasInheritance;	// 0x33f4c481
- (BOOL)hasSubentities;	// 0x33f48971
- (id)insertStatement;	// 0x33ff9675
- (BOOL)isKindOfSQLEntity:(id)sqlentity;	// 0x33ff97f1
- (BOOL)isRootEntity;	// 0x33f3a0b9
- (id)manyToManyRelationships;	// 0x33ff9ef9
// converted property getter: - (id)mappingGenerator;	// 0x33f3c509
// converted property getter: - (id)model;	// 0x33f39f89
- (id)name;	// 0x33f39965
- (long long)nextPrimaryKey64;	// 0x33ff9cb9
// converted property getter: - (id)optLockKey;	// 0x33f5300d
- (id)preparedFaultingCachesForRelationship:(id)relationship;	// 0x33ff9ad9
// converted property getter: - (id)primaryKey;	// 0x33f64835
// converted property getter: - (id)properties;	// 0x33ffa111
- (id)propertiesByName;	// 0x33f64a5d
// converted property getter: - (id)propertyMapping;	// 0x33ff96a5
- (id)propertyNamed:(id)named;	// 0x33f4dfb9
- (id)relationshipNamed:(id)named;	// 0x33f67275
// converted property getter: - (id)rootEntity;	// 0x33ff962d
// converted property setter: - (void)setSubentities:(id)subentities;	// 0x33ff970d
// converted property setter: - (void)setSuperentity:(id)superentity;	// 0x33ff97a1
// converted property getter: - (id)subentities;	// 0x33f3cda5
- (id)subentityKey;	// 0x33f64a2d
// converted property getter: - (unsigned)subentityMaxID;	// 0x33f64a4d
// converted property getter: - (id)superentity;	// 0x33f3b735
// converted property getter: - (id)tableName;	// 0x33f4f745
- (id)toManyRelationships;	// 0x33ffa005
- (id)virtualForeignKeyColumns;	// 0x33f54c09
@end

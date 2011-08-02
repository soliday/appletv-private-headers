/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import "NSStoreMapping.h"

@class NSSQLOptLockKey, NSArray, NSString, NSKnownKeysMappingStrategy, NSSQLPrimaryKey, NSEntityDescription, NSMutableDictionary, NSMutableArray, NSSQLStatement, NSSQLStoreMappingGenerator, NSSQLModel, NSSQLEntityKey;

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
	NSMutableArray *_attrColumns;	// 48 = 0x30
	NSSQLPrimaryKey *_primaryKey;	// 52 = 0x34
	NSSQLEntityKey *_entityKey;	// 56 = 0x38
	NSSQLOptLockKey *_optLockKey;	// 60 = 0x3c
	NSMutableArray *_subentities;	// 64 = 0x40
	NSSQLEntity *_superentity;	// 68 = 0x44
	NSSQLEntity *_rootEntity;	// 72 = 0x48
	NSSQLStoreMappingGenerator *_mappingGenerator;	// 76 = 0x4c
	unsigned _entityID;	// 80 = 0x50
	unsigned _subentityMaxID;	// 84 = 0x54
	NSRange _toOneRange;	// 88 = 0x58
	long long _maxPK;	// 96 = 0x60
	unsigned _pkCount;	// 104 = 0x68
	NSSQLStatement *_insertStatementCache;	// 108 = 0x6c
	NSSQLStatement *_deletionStatementCache;	// 112 = 0x70
	NSSQLStatement *_faultingStatementCache;	// 116 = 0x74
	NSMutableDictionary *_toManyRelationshipStatementCache;	// 120 = 0x78
	void *_fetch_entity_plan;	// 124 = 0x7c
	NSKnownKeysMappingStrategy *_propertyMapping;	// 128 = 0x80
	void *_odiousHashHackStorage;	// 132 = 0x84
	sqlentityFlags _sqlentityFlags;	// 136 = 0x88
}
@property(readonly, retain) NSMutableArray *columnsToFetch;	// G=0x33e2a189; converted property
@property(readonly, retain) NSEntityDescription *entityDescription;	// G=0x33e2c435; converted property
@property(readonly, assign) unsigned entityID;	// G=0x33e3e471; converted property
@property(readonly, retain) NSSQLStoreMappingGenerator *mappingGenerator;	// G=0x33e4ae11; converted property
@property(readonly, retain) NSSQLModel *model;	// G=0x33e3e241; converted property
@property(readonly, retain) NSSQLOptLockKey *optLockKey;	// G=0x33e394fd; converted property
@property(readonly, retain) NSSQLPrimaryKey *primaryKey;	// G=0x33e3e26d; converted property
@property(readonly, retain) NSMutableDictionary *properties;	// G=0x33ed4791; converted property
@property(readonly, retain) NSKnownKeysMappingStrategy *propertyMapping;	// G=0x33ed42b5; converted property
@property(readonly, retain) NSSQLEntity *rootEntity;	// G=0x33e66201; converted property
@property(retain) NSMutableArray *subentities;	// G=0x33e4b9f5; S=0x33ed468d; converted property
@property(readonly, assign) unsigned subentityMaxID;	// G=0x33e3e481; converted property
@property(retain) NSSQLEntity *superentity;	// G=0x33e4aac9; S=0x33e661bd; converted property
@property(readonly, retain) NSString *tableName;	// G=0x33e2ad79; converted property
- (id)initWithModel:(id)model entityDescription:(id)description;	// 0x33e488c9
- (void)_addColumnToFetch:(id)fetch;	// 0x33e3e759
- (void)_addRootColumnToFetch:(id)fetch;	// 0x33e3e801
- (void)_addSubentity:(id)subentity;	// 0x33e66211
- (id)_addVirtualToOneForToMany:(id)many withInheritedProperty:(id)inheritedProperty;	// 0x33e65285
- (void)_doPostModelGenerationCleanup;	// 0x33e4c9bd
- (unsigned)_generateIDWithSuperEntity:(id)superEntity nextID:(unsigned)anId;	// 0x33e48dd1
- (void)_generateInverseRelationshipsAndMore;	// 0x33e4ba05
- (void)_generateProperties;	// 0x33e49031
- (void *)_odiousHashHack;	// 0x33ed422d
- (unsigned)_pkCount;	// 0x33ed4251
- (id)_propertySearchMapping;	// 0x33e4b209
- (void)_resetPKCount;	// 0x33ed4261
- (void)_setMaxPK:(long long)pk;	// 0x33ed4271
- (NSRange)_toOneRange;	// 0x33e31149
- (void)addInsertedObject:(id)object toArray:(id)array;	// 0x33ed453d
- (BOOL)addPropertiesForReadOnlyFetch:(id)readOnlyFetch keys:(id)keys context:(id)context;	// 0x33e3e4fd
- (id)attributeColumns;	// 0x33e394ed
- (id)attributeNamed:(id)named;	// 0x33ed4625
- (id)attributes;	// 0x33ed42c5
- (void)cacheDeletionStatement:(id)statement;	// 0x33ed4435
- (void)cacheFaultingStatement:(id)statement;	// 0x33ed43e5
- (void)cacheFaultingStatement:(id)statement forRelationship:(id)relationship;	// 0x33ed42ed
- (void)cacheInsertStatement:(id)statement;	// 0x33ed4485
- (void)clearCachedStatements;	// 0x33e3fad1
- (id)columnsToCreate;	// 0x33ed46b1
// converted property getter: - (id)columnsToFetch;	// 0x33e2a189
- (void)copyValuesForReadOnlyFetch:(id)readOnlyFetch;	// 0x33e3e011
- (void)dealloc;	// 0x33e3f82d
- (id)deletionStatement;	// 0x33ed4295
- (id)description;	// 0x33ed44d5
// converted property getter: - (id)entityDescription;	// 0x33e2c435
// converted property getter: - (unsigned)entityID;	// 0x33e3e471
- (id)externalName;	// 0x33ed42d9
- (id)faultingStatement;	// 0x33ed42a5
- (id)faultingStatementForRelationship:(id)relationship;	// 0x33ed43ad
- (unsigned)fetchIndexForKey:(id)key;	// 0x33ed46c5
- (void)finalize;	// 0x33ed4739
- (id)foreignEntityKeyColumns;	// 0x33e31171
- (id)foreignKeyColumns;	// 0x33e31161
- (BOOL)hasAttributesWithExternalDataReferences;	// 0x33ed423d
- (BOOL)hasInheritance;	// 0x33e2a1bd
- (BOOL)hasSubentities;	// 0x33e27eb9
- (id)insertStatement;	// 0x33ed4285
- (BOOL)isKindOfSQLEntity:(id)sqlentity;	// 0x33ed4639
- (BOOL)isRootEntity;	// 0x33e290fd
- (id)manyToManyRelationships;	// 0x33ed4a01
// converted property getter: - (id)mappingGenerator;	// 0x33e4ae11
// converted property getter: - (id)model;	// 0x33e3e241
- (id)name;	// 0x33e48c31
- (long long)nextPrimaryKey64;	// 0x33ed4c59
// converted property getter: - (id)optLockKey;	// 0x33e394fd
// converted property getter: - (id)primaryKey;	// 0x33e3e26d
// converted property getter: - (id)properties;	// 0x33ed4791
- (id)propertiesByName;	// 0x33e3e491
// converted property getter: - (id)propertyMapping;	// 0x33ed42b5
- (id)propertyNamed:(id)named;	// 0x33e2bae1
- (id)relationshipNamed:(id)named;	// 0x33e4c899
// converted property getter: - (id)rootEntity;	// 0x33e66201
// converted property setter: - (void)setSubentities:(id)subentities;	// 0x33ed468d
// converted property setter: - (void)setSuperentity:(id)superentity;	// 0x33e661bd
// converted property getter: - (id)subentities;	// 0x33e4b9f5
- (id)subentityKey;	// 0x33e3e451
// converted property getter: - (unsigned)subentityMaxID;	// 0x33e3e481
// converted property getter: - (id)superentity;	// 0x33e4aac9
// converted property getter: - (id)tableName;	// 0x33e2ad79
- (id)toManyRelationships;	// 0x33ed4b2d
@end

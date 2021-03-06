/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSCoding.h"
#import "CoreData-Structs.h"
#import "NSFastEnumeration.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSManagedObjectModel, NSMutableDictionary, NSData, NSString;

@interface NSEntityDescription : NSObject <NSCoding, NSCopying, NSFastEnumeration> {
@private
	int _cd_rc;	// 4 = 0x4
	id _snapshotClass;	// 8 = 0x8
	NSString *_versionHashModifier;	// 12 = 0xc
	NSData *_versionHash;	// 16 = 0x10
	NSManagedObjectModel *_model;	// 20 = 0x14
	NSString *_classNameForEntity;	// 24 = 0x18
	Class _instanceClass;	// 28 = 0x1c
	NSString *_name;	// 32 = 0x20
	NSEntityDescription *_rootentity;	// 36 = 0x24
	NSEntityDescription *_superentity;	// 40 = 0x28
	NSMutableDictionary *_subentities;	// 44 = 0x2c
	NSMutableDictionary *_properties;	// 48 = 0x30
	id _propertyMapping;	// 52 = 0x34
	NSRange *_propertyRanges;	// 56 = 0x38
	entityDescriptionFlags _entityDescriptionFlags;	// 60 = 0x3c
	void *_extraIvars;	// 64 = 0x40
	NSMutableDictionary *_userInfo;	// 68 = 0x44
	id _flattenedSubentities;	// 72 = 0x48
	id **_kvcPropertyAccessors;	// 76 = 0x4c
	long _modelsReferenceIDForEntity;	// 80 = 0x50
}
@property(assign, getter=isAbstract) BOOL abstract;	// G=0x36235129; S=0x3627fc19; converted property
@property(retain) id compoundIndexes;	// G=0x362812c9; S=0x36222ee9; converted property
@property(retain) id elementID;	// G=0x36280bf9; S=0x36280be9; converted property
@property(retain) id managedObjectClassName;	// G=0x36246979; S=0x3627f821; converted property
@property(retain) NSString *name;	// G=0x36222ed9; S=0x3627fa99; converted property
@property(retain) NSMutableDictionary *properties;	// G=0x3623513d; S=0x3627fc4d; converted property
@property(retain) id renamingIdentifier;	// G=0x3627f98d; S=0x36222e31; converted property
@property(retain) NSMutableDictionary *subentities;	// G=0x3622b5bd; S=0x362803f1; converted property
@property(readonly, retain) NSEntityDescription *superentity;	// G=0x36224cc9; converted property
@property(retain) NSMutableDictionary *userInfo;	// G=0x3627f215; S=0x36280569; converted property
@property(readonly, retain) NSData *versionHash;	// G=0x36234de1; converted property
@property(retain) NSString *versionHashModifier;	// G=0x3627f259; S=0x3627fa45; converted property
+ (id)_MOClassName;	// 0x36282f2d
+ (id)entityForName:(id)name inManagedObjectContext:(id)managedObjectContext;	// 0x36236759
+ (void)initialize;	// 0x36256e41
+ (id)insertNewObjectForEntityForName:(id)name inManagedObjectContext:(id)managedObjectContext;	// 0x3627f8c1
- (id)init;	// 0x3627f371
- (id)initWithCoder:(id)coder;	// 0x3622236d
- (void)_addProperty:(id)property;	// 0x362822e9
- (void)_addSubentity:(id)subentity;	// 0x36281f15
- (id)_allPropertyNames;	// 0x36280f41
- (id)_attributeNamed:(id)named;	// 0x36280c09
- (CFSetRef)_collectSubentities;	// 0x36227199
- (id)_compoundIndexes;	// 0x3627f359
- (void)_createCachesAndOptimizeState;	// 0x36224d51
- (Class)_entityClass;	// 0x36248b49
- (void)_flattenProperties;	// 0x362249b1
- (id)_flattenedSubentities;	// 0x3627f295
- (BOOL)_hasAttributesWithExternalDataReferences;	// 0x3622ad61
- (BOOL)_hasCustomPrimitiveProperties;	// 0x36284111
- (BOOL)_hasPropertiesIndexedBySpotlight;	// 0x36281d25
- (BOOL)_hasPropertiesStoredInTruthFile;	// 0x36281e1d
- (id)_initWithName:(id)name;	// 0x362810ed
- (BOOL)_isDeallocating;	// 0x3627f9c1
- (BOOL)_isEditable;	// 0x3622ae71
- (BOOL)_isFlattened;	// 0x36224cb5
- (BOOL)_isInheritedPropertyNamed:(id)named;	// 0x36280ed1
- (void *)_leopardStyleAttributesByName;	// 0x3622cc79
- (void *)_leopardStyleRelationshipsByName;	// 0x3622d2bd
- (id)_localRelationshipNamed:(id)named;	// 0x36280cbd
- (long)_modelsReferenceID;	// 0x36245a09
- (id)_newMappingForPropertiesOfRange:(unsigned)range;	// 0x362273c5
- (void *)_newSnowLeopardStyleDictionaryContainingPropertiesOfType:(unsigned)type;	// 0x362827e5
- (id)_new_implicitlyObservedKeys;	// 0x36281001
- (unsigned long)_offsetRelationshipIndex:(unsigned long)index fromSuperEntity:(id)superEntity andIsToMany:(BOOL)many;	// 0x3627f2b5
- (id)_propertiesOfType:(unsigned)type;	// 0x362817e1
- (id)_propertyNamed:(id)named;	// 0x36241279
- (NSRange *)_propertyRangesByType;	// 0x3627f2a5
- (id)_propertySearchMapping;	// 0x36227471
- (id)_propertyWithRenamingIdentifier:(id)renamingIdentifier;	// 0x362816b1
- (id)_relationshipNamed:(id)named;	// 0x36280d01
- (id)_relationshipNamesByType:(BOOL)type;	// 0x36281a2d
- (void)_removeProperty:(id)property;	// 0x362821c5
- (void)_removePropertyNamed:(id)named;	// 0x36280f69
- (void)_removeSubentity:(id)subentity;	// 0x36280e25
- (void)_restoreValidation;	// 0x36281c5d
- (id)_rootEntity;	// 0x36280de1
- (void)_setIsEditable:(BOOL)editable;	// 0x36282509
- (void)_setIsFlattened:(BOOL)flattened;	// 0x36224cd9
- (void)_setManagedObjectModel:(id)model;	// 0x362820e9
- (void)_setModelsReferenceID:(long)anId;	// 0x36224d41
- (void)_setSuperentity:(id)superentity;	// 0x36282161
- (BOOL)_skipValidation;	// 0x3627f335
- (Class)_snapshotClass;	// 0x36282295
- (id)_sortedSubentities;	// 0x3622b4f1
- (void)_stripForMigration;	// 0x36281b81
- (BOOL)_subentitiesIncludes:(id)includes;	// 0x36282695
- (id)_subentityNamed:(id)named;	// 0x36280db5
- (void)_throwIfNotEditable;	// 0x36224d05
- (BOOL)_tryRetain;	// 0x3627f9e9
- (void)_writeIntoData:(id)data propertiesDict:(id)dict uniquedPropertyNames:(id)names uniquedStrings:(id)strings uniquedData:(id)data5 uniquedMappings:(id)mappings entities:(id)entities;	// 0x36282859
- (id)attributeKeys;	// 0x3627f631
- (id)attributesByName;	// 0x3627f6bd
// converted property getter: - (id)compoundIndexes;	// 0x362812c9
- (id)copyWithZone:(NSZone *)zone;	// 0x36280785
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x3627fdc5
- (void)dealloc;	// 0x362518c1
- (id)description;	// 0x3628064d
// converted property getter: - (id)elementID;	// 0x36280bf9
- (void)encodeWithCoder:(id)coder;	// 0x3627f3bd
- (void)finalize;	// 0x36280b85
- (unsigned)hash;	// 0x36258f39
- (id)inverseForRelationshipKey:(id)relationshipKey;	// 0x3627f751
// converted property getter: - (BOOL)isAbstract;	// 0x36235129
- (BOOL)isEqual:(id)equal;	// 0x36258f61
- (BOOL)isKindOfEntity:(id)entity;	// 0x3627f735
- (id)knownKeysMappingStrategy;	// 0x36282069
// converted property getter: - (id)managedObjectClassName;	// 0x36246979
- (id)managedObjectModel;	// 0x3627f249
// converted property getter: - (id)name;	// 0x36222ed9
// converted property getter: - (id)properties;	// 0x3623513d
- (id)propertiesByName;	// 0x36227481
- (id)relationshipsByName;	// 0x3627f6f9
- (id)relationshipsWithDestinationEntity:(id)destinationEntity;	// 0x3627feb1
- (oneway void)release;	// 0x36222db1
// converted property getter: - (id)renamingIdentifier;	// 0x3627f98d
- (id)retain;	// 0x36222cc9
- (unsigned)retainCount;	// 0x3627f269
// converted property setter: - (void)setAbstract:(BOOL)anAbstract;	// 0x3627fc19
// converted property setter: - (void)setCompoundIndexes:(id)indexes;	// 0x36222ee9
// converted property setter: - (void)setElementID:(id)anId;	// 0x36280be9
// converted property setter: - (void)setManagedObjectClassName:(id)name;	// 0x3627f821
// converted property setter: - (void)setName:(id)name;	// 0x3627fa99
// converted property setter: - (void)setProperties:(id)properties;	// 0x3627fc4d
// converted property setter: - (void)setRenamingIdentifier:(id)identifier;	// 0x36222e31
// converted property setter: - (void)setSubentities:(id)subentities;	// 0x362803f1
// converted property setter: - (void)setUserInfo:(id)info;	// 0x36280569
// converted property setter: - (void)setVersionHashModifier:(id)modifier;	// 0x3627fa45
// converted property getter: - (id)subentities;	// 0x3622b5bd
- (id)subentitiesByName;	// 0x3627f239
// converted property getter: - (id)superentity;	// 0x36224cc9
- (id)toManyRelationshipKeys;	// 0x36280219
- (id)toOneRelationshipKeys;	// 0x36280041
// converted property getter: - (id)userInfo;	// 0x3627f215
// converted property getter: - (id)versionHash;	// 0x36234de1
// converted property getter: - (id)versionHashModifier;	// 0x3627f259
@end


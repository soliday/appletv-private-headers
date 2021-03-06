/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSStoreMapping.h"

@class NSArray, NSString, NSEntityDescription, NSDictionary;

__attribute__((visibility("hidden")))
@interface NSEntityStoreMapping : NSStoreMapping {
@private
	NSEntityDescription *_entity;	// 8 = 0x8
	NSDictionary *_propertyMappings;	// 12 = 0xc
	NSArray *_primaryKeys;	// 16 = 0x10
	BOOL _isSingleTableEntity;	// 20 = 0x14
	NSString *_subentityColumn;	// 24 = 0x18
	unsigned _subentityID;	// 28 = 0x1c
}
@property(retain) NSEntityDescription *entity;	// G=0x33f957a9; S=0x33f957b9; converted property
@property(retain) NSArray *primaryKeys;	// G=0x33f957d9; S=0x33f95881; converted property
@property(retain) NSDictionary *propertyMappings;	// G=0x33f957c9; S=0x33f95839; converted property
@property(assign, getter=isSingleTableEntity) BOOL singleTableEntity;	// G=0x33f957e9; S=0x33f957f9; converted property
@property(retain) NSString *subentityColumn;	// G=0x33f95809; S=0x33f958c9; converted property
@property(assign) unsigned subentityID;	// G=0x33f95819; S=0x33f95829; converted property
- (id)initWithEntity:(id)entity;	// 0x33f95a61
- (id)attributeColumnDefinitions;	// 0x33f95911
- (id)attributeMappings;	// 0x33f96031
- (id)createTableStatement;	// 0x33f95945
- (void)dealloc;	// 0x33f96431
- (id)description;	// 0x33f963ad
// converted property getter: - (id)entity;	// 0x33f957a9
- (id)foreignKeyColumnDefinitions;	// 0x33f95c6d
- (id)foreignKeyConstraintDefinitions;	// 0x33f95b65
- (BOOL)isEqual:(id)equal;	// 0x33f961e1
// converted property getter: - (BOOL)isSingleTableEntity;	// 0x33f957e9
- (id)primaryKeyColumnDefinitions;	// 0x33f95d75
// converted property getter: - (id)primaryKeys;	// 0x33f957d9
// converted property getter: - (id)propertyMappings;	// 0x33f957c9
- (id)relationshipMappings;	// 0x33f95e81
// converted property setter: - (void)setEntity:(id)entity;	// 0x33f957b9
// converted property setter: - (void)setPrimaryKeys:(id)keys;	// 0x33f95881
// converted property setter: - (void)setPropertyMappings:(id)mappings;	// 0x33f95839
// converted property setter: - (void)setSingleTableEntity:(BOOL)entity;	// 0x33f957f9
// converted property setter: - (void)setSubentityColumn:(id)column;	// 0x33f958c9
// converted property setter: - (void)setSubentityID:(unsigned)anId;	// 0x33f95829
// converted property getter: - (id)subentityColumn;	// 0x33f95809
// converted property getter: - (unsigned)subentityID;	// 0x33f95819
@end


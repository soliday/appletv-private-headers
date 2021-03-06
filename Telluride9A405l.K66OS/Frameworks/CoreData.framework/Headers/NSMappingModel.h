/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library
#import "CoreData-Structs.h"

@class NSMutableArray, NSMutableDictionary;

@interface NSMappingModel : NSObject {
@private
	void *_reserved;	// 4 = 0x4
	void *_reserved1;	// 8 = 0x8
	void *_reserved2;	// 12 = 0xc
	NSMutableArray *_entityMappings;	// 16 = 0x10
	NSMutableDictionary *_entityMappingsByName;	// 20 = 0x14
	modelMappingFlags _modelMappingFlags;	// 24 = 0x18
}
@property(retain) NSMutableArray *entityMappings;	// G=0x33fcc321; S=0x33fcc62d; converted property
@property(readonly, retain) NSMutableDictionary *entityMappingsByName;	// G=0x33fcc331; converted property
+ (BOOL)_isInferredMappingModel:(id)model;	// 0x33fcd6c5
+ (id)_modelPathsFromBundles:(id)bundles;	// 0x33fcd57d
+ (id)inferredMappingModelForSourceModel:(id)sourceModel destinationModel:(id)model error:(id *)error;	// 0x33fcc79d
+ (void)initialize;	// 0x33fccf89
+ (id)mappingModelFromBundles:(id)bundles forSourceModel:(id)sourceModel destinationModel:(id)model;	// 0x33fccb7d
+ (int)migrationDebugLevel;	// 0x33fcc341
+ (void)setMigrationDebugLevel:(int)level;	// 0x33fcc351
- (id)init;	// 0x33fcc37d
- (id)initWithCoder:(id)coder;	// 0x33fcd17d
- (id)initWithContentsOfURL:(id)url;	// 0x33fcc391
- (void)_addEntityMapping:(id)mapping;	// 0x33fcd7b1
- (void)_createCachesAndOptimizeState;	// 0x33fcc379
- (id)_destinationEntityVersionHashesByName;	// 0x33fcd439
- (id)_initWithEntityMappings:(id)entityMappings;	// 0x33fcd229
- (void)_setIsEditable:(BOOL)editable;	// 0x33fcd8d1
- (id)_sourceEntityVersionHashesByName;	// 0x33fcd2f5
- (void)_throwIfNotEditable;	// 0x33fcd965
- (id)copyWithZone:(NSZone *)zone;	// 0x33fcc4ad
- (void)dealloc;	// 0x33fcc725
- (id)description;	// 0x33fcc5c5
- (void)encodeWithCoder:(id)coder;	// 0x33fcc43d
// converted property getter: - (id)entityMappings;	// 0x33fcc321
// converted property getter: - (id)entityMappingsByName;	// 0x33fcc331
- (BOOL)isEditable;	// 0x33fcc361
- (BOOL)isEqual:(id)equal;	// 0x33fcd0f9
// converted property setter: - (void)setEntityMappings:(id)mappings;	// 0x33fcc62d
@end


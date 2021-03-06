/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSEntityMapping, NSError, NSManagedObjectModel;

__attribute__((visibility("hidden")))
@interface _NSMappingModelBuilder : NSObject {
@private
	NSManagedObjectModel *_sourceModel;	// 4 = 0x4
	NSManagedObjectModel *_destinationModel;	// 8 = 0x8
	NSEntityMapping *_currentEntityMapping;	// 12 = 0xc
	NSError *_error;	// 16 = 0x10
}
+ (int)migrationDebugLevel;	// 0x330f0581
+ (void)setMigrationDebugLevel:(int)level;	// 0x330f0565
- (id)initWithSourceModel:(id)sourceModel destinationModel:(id)model;	// 0x330f04e5
- (BOOL)_canTransformSourceAttributeType:(unsigned)type toDestinationAttributeType:(unsigned)destinationAttributeType;	// 0x330f0441
- (void)_resetCaches;	// 0x330f2d29
- (void)dealloc;	// 0x330f2d65
- (BOOL)inferPropertyMappingsForEntityMapping:(id)entityMapping;	// 0x330f1ce9
- (id)newEntityMappingWithSource:(id)source destination:(id)destination;	// 0x330f1975
- (id)newInferredMappingModel:(id *)model;	// 0x330f26b9
- (id)newInferredPropertyMappingWithSourceAttribute:(id)sourceAttribute destinationAttribute:(id)attribute;	// 0x330f0d05
- (id)newInferredPropertyMappingWithSourceRelationship:(id)sourceRelationship destinationRelationship:(id)relationship;	// 0x330f059d
@end


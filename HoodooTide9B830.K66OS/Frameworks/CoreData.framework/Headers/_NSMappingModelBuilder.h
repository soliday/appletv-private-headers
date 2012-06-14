/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSManagedObjectModel, NSEntityMapping, NSError;

__attribute__((visibility("hidden")))
@interface _NSMappingModelBuilder : NSObject {
@private
	NSManagedObjectModel *_sourceModel;	// 4 = 0x4
	NSManagedObjectModel *_destinationModel;	// 8 = 0x8
	NSEntityMapping *_currentEntityMapping;	// 12 = 0xc
	NSError *_error;	// 16 = 0x10
}
+ (int)migrationDebugLevel;	// 0x3228a781
+ (void)setMigrationDebugLevel:(int)level;	// 0x3228a765
- (id)initWithSourceModel:(id)sourceModel destinationModel:(id)model;	// 0x3228a6e5
- (BOOL)_canTransformSourceAttributeType:(unsigned)type toDestinationAttributeType:(unsigned)destinationAttributeType;	// 0x3228a641
- (void)_resetCaches;	// 0x3228cf39
- (void)dealloc;	// 0x3228cf75
- (BOOL)inferPropertyMappingsForEntityMapping:(id)entityMapping;	// 0x3228bef9
- (id)newEntityMappingWithSource:(id)source destination:(id)destination;	// 0x3228bb85
- (id)newInferredMappingModel:(id *)model;	// 0x3228c8c9
- (id)newInferredPropertyMappingWithSourceAttribute:(id)sourceAttribute destinationAttribute:(id)attribute;	// 0x3228af05
- (id)newInferredPropertyMappingWithSourceRelationship:(id)sourceRelationship destinationRelationship:(id)relationship;	// 0x3228a79d
@end


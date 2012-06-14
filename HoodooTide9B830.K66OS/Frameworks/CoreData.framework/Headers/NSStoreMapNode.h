/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSManagedObjectID, NSString, NSPersistentStoreMap;

__attribute__((visibility("hidden")))
@interface NSStoreMapNode : NSObject {
@private
	NSPersistentStoreMap *_map;	// 4 = 0x4
	NSManagedObjectID *_objectID;	// 8 = 0x8
	NSMutableDictionary *_relatedNodes;	// 12 = 0xc
	NSString *_entityName;	// 16 = 0x10
	unsigned _version;	// 20 = 0x14
}
@property(readonly, retain) NSManagedObjectID *objectID;	// G=0x3233bdf5; converted property
+ (void)initialize;	// 0x3233bef1
- (id)initWithCoder:(id)coder;	// 0x3233c3cd
- (id)initWithObjectID:(id)objectID;	// 0x3233be3d
- (id)_relatedNodes;	// 0x3233be05
- (void)_setMap:(id)map;	// 0x3233bf0d
- (void)_setVersionNumber:(unsigned)number;	// 0x3233be25
- (id)_snapshot_;	// 0x3233be39
- (unsigned)_versionNumber;	// 0x3233be15
- (id)configurationName;	// 0x3233c0e1
- (void)dealloc;	// 0x3233c1e9
- (id)destinationsForRelationship:(id)relationship;	// 0x3233c0bd
- (void)encodeWithCoder:(id)coder;	// 0x3233c289
- (id)entity;	// 0x3233c101
- (BOOL)isEqual:(id)equal;	// 0x3233c141
- (id)key;	// 0x3233c121
- (const id *)knownKeyValuesPointer;	// 0x3233be35
// converted property getter: - (id)objectID;	// 0x3233bdf5
- (void)setDestinations:(id)destinations forRelationship:(id)relationship;	// 0x3233c091
@end


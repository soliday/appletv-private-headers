/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSPersistentStoreMap.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface NSDictionaryStoreMap : NSPersistentStoreMap {
@private
	NSMutableDictionary *_theMap;	// 28 = 0x1c
}
+ (void)initialize;	// 0x32d563e1
- (id)initWithStore:(id)store;	// 0x32d563fd
- (id)initWithStore:(id)store fromArchivedData:(id)archivedData;	// 0x32d56935
- (id)initWithStore:(id)store fromPath:(id)path;	// 0x32d56411
- (id)_archivedData;	// 0x32d57cbd
- (id)_nodeFromObject:(id)object objectIDMap:(id)map;	// 0x32d570d9
- (id)_theDictionary;	// 0x32d56d09
- (void)addObject:(id)object objectIDMap:(id)map;	// 0x32d576f5
- (id)dataForKey:(id)key;	// 0x32d576d5
- (void)dealloc;	// 0x32d57089
- (id)handleFetchRequest:(id)request;	// 0x32d57a4d
- (void)removeObject:(id)object objectIDMap:(id)map;	// 0x32d57781
- (id)retainedObjectIDsForRelationship:(id)relationship forObjectID:(id)objectID;	// 0x32d57925
- (void)saveToPath:(id)path;	// 0x32d56d19
- (void)updateObject:(id)object objectIDMap:(id)map;	// 0x32d577cd
@end


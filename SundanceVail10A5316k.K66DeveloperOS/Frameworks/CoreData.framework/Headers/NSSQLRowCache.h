/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import "NSPersistentStoreCache.h"

@class NSSQLCore;

__attribute__((visibility("hidden")))
@interface NSSQLRowCache : NSPersistentStoreCache {
@private
	NSSQLCore *_sqlCore;	// 12 = 0xc
	int _debug;	// 16 = 0x10
}
+ (void)initialize;	// 0x32d34695
- (id)initWithSQLCore:(id)sqlcore;	// 0x32d17d59
- (id)adapter;	// 0x32ddb1f9
- (void)dealloc;	// 0x32d2d941
- (void)forgetAllExternalData;	// 0x32ddb1a1
- (void)forgetRowForObjectID:(NSScalarObjectID *)objectID;	// 0x32ddb219
- (void)registerRow:(id)row forObjectID:(NSScalarObjectID *)objectID;	// 0x32ddb229
- (void)registerSnapshots:(id)snapshots;	// 0x32ddb289
- (void)registerToMany:(id)many forSourceObjectID:(NSScalarObjectID *)sourceObjectID relationshipName:(id)name andTimestamp:(double)timestamp;	// 0x32ddb24d
- (id)rowForObjectID:(id)objectID;	// 0x32ddb3a1
- (id)rowForObjectID:(id)objectID after:(double)after;	// 0x32d289d1
- (id)toManyForSourceObjectID:(id)sourceObjectID relationshipName:(id)name after:(double)after;	// 0x32ddb279
@end


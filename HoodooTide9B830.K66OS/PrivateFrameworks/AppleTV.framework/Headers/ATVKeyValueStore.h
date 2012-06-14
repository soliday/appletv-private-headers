/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "AppleTV-Structs.h"

@class NSString;

@interface ATVKeyValueStore : NSObject {
@private
	sqlite3 *_db;	// 4 = 0x4
	dispatch_queue_s *_dbQueue;	// 8 = 0x8
	NSString *_domain;	// 12 = 0xc
}
+ (id)defaultStore;	// 0x329286c9
- (void)_dbDataValuesForKeys:(id)keys option:(int)option resolver:(id)resolver handler:(id)handler;	// 0x3292ab55
- (void)_dbDeleteCleanRowsNotUpdatedSince:(id)since completionHandler:(id)handler;	// 0x3292b271
- (void)_dbDropAllWithCompletionHandler:(id)completionHandler;	// 0x3292b405
- (void)_dbSetDataValues:(id)values versions:(id)versions forKeys:(id)keys dirtyFlag:(BOOL)flag;	// 0x3292a7d9
- (void)_dbVersionsForKeys:(id)keys handler:(id)handler;	// 0x3292a4b1
- (void)_getItemsFromKVSWithKeys:(id)keys resultValues:(id)values sinceVersions:(id)versions handler:(id)handler;	// 0x3292a099
- (id)_initWithDomain:(id)domain withCacheFilename:(id)cacheFilename;	// 0x32928e71
- (void)_internalPutItemsToKVS:(id)kvs resolvedKeys:(id)keys resolver:(id)resolver completionHandler:(id)handler;	// 0x32929a45
- (void)_objectsForKeys:(id)keys option:(int)option resolver:(id)resolver handler:(id)handler;	// 0x32929761
- (void)_putItemsToKVS:(id)kvs resolver:(id)resolver completionHandler:(id)handler;	// 0x329299fd
- (void)_setObjects:(id)objects forKeys:(id)keys resolver:(id)resolver handler:(id)handler;	// 0x32929285
- (void)dealloc;	// 0x329287a9
- (id)objectForKey:(id)key;	// 0x32928a7d
- (void)objectForKey:(id)key option:(int)option completionHandler:(id)handler;	// 0x3292891d
- (void)objectForKey:(id)key option:(int)option withConflictResolver:(id)conflictResolver completionHandler:(id)handler;	// 0x32928965
- (void)objectsForKeys:(id)keys option:(int)option completionHandler:(id)handler;	// 0x32928941
- (void)objectsForKeys:(id)keys option:(int)option withConflictResolver:(id)conflictResolver completionHandler:(id)handler;	// 0x32928831
- (void)purgeCacheDataNotUpdatedSince:(id)since completionHandler:(id)handler;	// 0x32928d3d
- (void)resetForRetailWithCompletionHandler:(id)completionHandler;	// 0x32928ddd
- (void)setObject:(id)object forKey:(id)key;	// 0x32928841
- (void)setObject:(id)object forKey:(id)key withConflictResolver:(id)conflictResolver completionHandler:(id)handler;	// 0x329288c1
- (void)setObjects:(id)objects forKeys:(id)keys;	// 0x3292889d
- (void)setObjects:(id)objects forKeys:(id)keys withConflictResolver:(id)conflictResolver completionHandler:(id)handler;	// 0x32928821
@end


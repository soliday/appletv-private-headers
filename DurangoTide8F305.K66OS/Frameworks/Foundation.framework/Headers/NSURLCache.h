/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSURLCacheInternal;

@interface NSURLCache : NSObject {
@private
	NSURLCacheInternal *_internal;	// 4 = 0x4
}
@property(assign) unsigned diskCapacity;	// G=0x32749549; S=0x327494e1; converted property
@property(assign) unsigned memoryCapacity;	// G=0x3274956d; S=0x327494b9; converted property
+ (void)_diskCacheSyncLoop:(id)loop;	// 0x327e3d71
+ (void)_performDiskCacheSync;	// 0x327e1d71
+ (void)setSharedURLCache:(id)cache;	// 0x3275e3e5
+ (id)sharedURLCache;	// 0x3274921d
- (id)init;	// 0x3275e375
- (id)initWithExistingSharedCFURLCache:(CFURLCacheRef)existingSharedCFURLCache;	// 0x327e2a91
- (id)initWithMemoryCapacity:(unsigned)memoryCapacity diskCapacity:(unsigned)capacity diskPath:(id)path;	// 0x32749381
- (CFURLCacheRef)_CFURLCache;	// 0x3274952d
- (id)_cacheDirectory;	// 0x3275e3e1
- (XXStruct_K5nmsA)_cacheStatistics;	// 0x327e2239
- (void)_diskCacheClear;	// 0x327e2f79
- (BOOL)_diskCacheCreateDirectory;	// 0x327e1c59
- (void)_diskCacheCreateLRUList:(id)list;	// 0x327e33f5
- (id)_diskCacheDefaultPath;	// 0x3275e399
- (void)_diskCacheExecuteRemoval:(id)removal;	// 0x327e3a81
- (void)_diskCacheExecuteWrite:(id)write;	// 0x327e3b41
- (id)_diskCacheGet:(id)get;	// 0x327e3565
- (void)_diskCacheScheduleRemoval:(id)removal;	// 0x327e2df9
- (void)_diskCacheScheduleWrite:(id)write;	// 0x327e2ec1
- (void)_diskCacheSetSyncTimer;	// 0x327e3031
- (void)_diskCacheSync;	// 0x327e3109
- (void)_diskCacheTruncate:(unsigned)truncate;	// 0x327e390d
- (void)_memoryCacheAppendNodeToLRUList:(id)lrulist;	// 0x327e1bc1
- (void)_memoryCacheClear;	// 0x327e1d91
- (id)_memoryCacheGet:(id)get;	// 0x327e2059
- (void)_memoryCachePut:(id)put;	// 0x327e1f45
- (void)_memoryCacheRemove:(id)remove;	// 0x327e1e2d
- (void)_memoryCacheRemoveNodeFromLRUList:(id)lrulist;	// 0x327e1ae5
- (void)_memoryCacheTouchNode:(id)node;	// 0x327e21f1
- (void)_memoryCacheTruncate:(unsigned)truncate;	// 0x327e2109
- (CFCachedURLResponseRef)_nscfBridgeURLCacheCopyResponseForRequest:(CFURLRequestRef)request;	// 0x327e2a1d
- (long)_nscfBridgeURLCacheCurrentDiskUsage;	// 0x327e2281
- (long)_nscfBridgeURLCacheCurrentMemoryUsage;	// 0x327e2295
- (long)_nscfBridgeURLCacheDiskCapacity;	// 0x327e230d
- (long)_nscfBridgeURLCacheMemoryCapacity;	// 0x327e22a9
- (void)_nscfBridgeURLCacheRemoveAllCachedResponses;	// 0x327e22bd
- (void)_nscfBridgeURLCacheRemoveCachedResponseForRequest:(id)request;	// 0x327e22d1
- (void)_nscfBridgeURLCacheSetDiskCapacity:(long)capacity;	// 0x327e22e5
- (void)_nscfBridgeURLCacheSetMemoryCapacity:(long)capacity;	// 0x327e22f9
- (void)_nscfBridgeURLCacheStoreCachedResponse:(CFCachedURLResponseRef)response forRequest:(CFURLRequestRef)request;	// 0x32746e5d
- (id)cachedResponseForRequest:(id)request;	// 0x327e2c55
- (unsigned)currentDiskUsage;	// 0x327e2dd5
- (unsigned)currentMemoryUsage;	// 0x327e2db1
- (void)dealloc;	// 0x327e2531
// converted property getter: - (unsigned)diskCapacity;	// 0x32749549
// converted property getter: - (unsigned)memoryCapacity;	// 0x3274956d
- (void)removeAllCachedResponses;	// 0x32773b09
- (void)removeCachedResponseForRequest:(id)request;	// 0x327e2d75
// converted property setter: - (void)setDiskCapacity:(unsigned)capacity;	// 0x327494e1
// converted property setter: - (void)setMemoryCapacity:(unsigned)capacity;	// 0x327494b9
- (void)storeCachedResponse:(id)response forRequest:(id)request;	// 0x327e2d15
@end


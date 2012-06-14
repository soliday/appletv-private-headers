/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"

@class NSURLCacheInternal;

@interface NSURLCache : NSObject {
@private
	NSURLCacheInternal *_internal;	// 4 = 0x4
}
@property(assign) unsigned diskCapacity;	// G=0x3159216d; S=0x31591f25; converted property
@property(assign) unsigned memoryCapacity;	// G=0x3162e9c1; S=0x31591ef5; converted property
+ (void)_diskCacheSyncLoop:(id)loop;	// 0x3162f12d
+ (void)_performDiskCacheSync;	// 0x3162f111
+ (void)setSharedURLCache:(id)cache;	// 0x3159eda9
+ (id)sharedURLCache;	// 0x31591ba9
- (id)init;	// 0x31591c99
- (id)initWithExistingSharedCFURLCache:(CFURLCacheRef)existingSharedCFURLCache;	// 0x3162e761
- (id)initWithMemoryCapacity:(unsigned)memoryCapacity diskCapacity:(unsigned)capacity diskPath:(id)path;	// 0x31591cc5
- (CFURLCacheRef)_CFURLCache;	// 0x31591fdd
- (id)_cacheDirectory;	// 0x31591fd9
- (XXStruct_K5nmsA)_cacheStatistics;	// 0x3162ea21
- (void)_diskCacheClear;	// 0x3162fbc1
- (BOOL)_diskCacheCreateDirectory;	// 0x3162f639
- (void)_diskCacheCreateLRUList:(id)list;	// 0x3162f555
- (id)_diskCacheDefaultPath;	// 0x31591f81
- (void)_diskCacheExecuteRemoval:(id)removal;	// 0x316301e1
- (void)_diskCacheExecuteWrite:(id)write;	// 0x3162fec5
- (id)_diskCacheGet:(id)get;	// 0x3162f755
- (void)_diskCacheScheduleRemoval:(id)removal;	// 0x316300f5
- (void)_diskCacheScheduleWrite:(id)write;	// 0x3162fdf1
- (void)_diskCacheSetSyncTimer;	// 0x3162f1e1
- (void)_diskCacheSync;	// 0x3162f2b5
- (void)_diskCacheTruncate:(unsigned)truncate;	// 0x3162fca1
- (void)_memoryCacheAppendNodeToLRUList:(id)lrulist;	// 0x3162eb99
- (void)_memoryCacheClear;	// 0x3162f05d
- (id)_memoryCacheGet:(id)get;	// 0x3162ed5d
- (void)_memoryCachePut:(id)put;	// 0x3162ee19
- (void)_memoryCacheRemove:(id)remove;	// 0x3162ef49
- (void)_memoryCacheRemoveNodeFromLRUList:(id)lrulist;	// 0x3162eab9
- (void)_memoryCacheTouchNode:(id)node;	// 0x3162ec2d
- (void)_memoryCacheTruncate:(unsigned)truncate;	// 0x3162ec81
- (CFCachedURLResponseRef)_nscfBridgeURLCacheCopyResponseForRequest:(CFURLRequestRef)request;	// 0x3162e5ad
- (long)_nscfBridgeURLCacheCurrentDiskUsage;	// 0x3162e751
- (long)_nscfBridgeURLCacheCurrentMemoryUsage;	// 0x3162e741
- (long)_nscfBridgeURLCacheDiskCapacity;	// 0x3162e6e1
- (long)_nscfBridgeURLCacheMemoryCapacity;	// 0x3162e731
- (void)_nscfBridgeURLCacheRemoveAllCachedResponses;	// 0x3162e721
- (void)_nscfBridgeURLCacheRemoveCachedResponseForRequest:(id)request;	// 0x3162e711
- (void)_nscfBridgeURLCacheSetDiskCapacity:(long)capacity;	// 0x3162e701
- (void)_nscfBridgeURLCacheSetMemoryCapacity:(long)capacity;	// 0x3162e6f1
- (void)_nscfBridgeURLCacheStoreCachedResponse:(CFCachedURLResponseRef)response forRequest:(CFURLRequestRef)request;	// 0x3162e62d
- (id)cachedResponseForRequest:(id)request;	// 0x3162e83d
- (unsigned)currentDiskUsage;	// 0x3162ea01
- (unsigned)currentMemoryUsage;	// 0x3162e9e1
- (void)dealloc;	// 0x3162ea6d
// converted property getter: - (unsigned)diskCapacity;	// 0x3159216d
// converted property getter: - (unsigned)memoryCapacity;	// 0x3162e9c1
- (void)removeAllCachedResponses;	// 0x315b1421
- (void)removeCachedResponseForRequest:(id)request;	// 0x3162e97d
// converted property setter: - (void)setDiskCapacity:(unsigned)capacity;	// 0x31591f25
// converted property setter: - (void)setMemoryCapacity:(unsigned)capacity;	// 0x31591ef5
- (void)storeCachedResponse:(id)response forRequest:(id)request;	// 0x3162e911
@end


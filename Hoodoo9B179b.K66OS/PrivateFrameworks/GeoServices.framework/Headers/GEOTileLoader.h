/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library
#import "GeoServices-Structs.h"

@class NSMutableArray, GEOExpiringTileCache, NSMapTable, NSLock, GEOTileCache;
@protocol GEOTileServerProxy;

@interface GEOTileLoader : NSObject {
	GEOTileCache *_tiles;	// 4 = 0x4
	GEOExpiringTileCache *_expTiles;	// 8 = 0x8
	NSMapTable *_pendingLoads;	// 12 = 0xc
	NSLock *_pendingLoadsLock;	// 16 = 0x10
	NSMapTable *_pendingNetworkLoads;	// 20 = 0x14
	NSLock *_pendingNetworkLoadsLock;	// 24 = 0x18
	NSMutableArray *_tileDecoders;	// 28 = 0x1c
	id<GEOTileServerProxy> _serverConnection;	// 32 = 0x20
	int _memoryHits;	// 36 = 0x24
	int _diskHits;	// 40 = 0x28
	int _networkHits;	// 44 = 0x2c
}
@property(readonly, assign, nonatomic) int diskHits;	// G=0x32cdf3a5; 
@property(readonly, assign, nonatomic) int memoryHits;	// G=0x32cdf395; 
@property(readonly, assign, nonatomic) int networkHits;	// G=0x32cdf3b5; 
+ (id)diskCacheLocation;	// 0x32cdd6c1
+ (void)setDiskCacheLocation:(id)location;	// 0x32cdd681
+ (id)sharedLoader;	// 0x32cdd6dd
+ (void)useLocalLoader;	// 0x32cdd671
+ (void)useRemoteLoader;	// 0x32cdd661
- (id)init;	// 0x32cdd749
- (void)_asyncDecodeTile:(id)tile forKey:(const GEOTileKey *)key completion:(id)completion;	// 0x32cddbd5
- (id)_decodeTile:(id)tile forKey:(const GEOTileKey *)key;	// 0x32cddb01
- (void)_loadTilesFromServer:(id)server checkDisk:(BOOL)disk allowNetworking:(BOOL)networking;	// 0x32cde4e1
- (void)_tileEditionChanged:(id)changed;	// 0x32cde3bd
- (void)cancelAllRequests;	// 0x32cdea99
- (void)cancelRequest:(id)request;	// 0x32cdecfd
- (void)clearAllCaches;	// 0x32cddac5
- (void)closeDatabase;	// 0x32cde37d
- (void)dealloc;	// 0x32cdd96d
// declared property getter: - (int)diskHits;	// 0x32cdf3a5
- (id)expireTilesWithType:(unsigned char)type provider:(unsigned short)provider olderThan:(double)than;	// 0x32cdf2c1
- (id)hostnameForProviderID:(unsigned short)providerID;	// 0x32cdf335
- (void)loadTiles:(id)tiles progress:(id)progress finished:(id)finished error:(id)error;	// 0x32cde9ad
- (void)loadTilesFromCache:(id)cache progress:(id)progress finished:(id)finished error:(id)error;	// 0x32cde981
- (void)loadTilesFromCacheAndNetwork:(id)cacheAndNetwork progress:(id)progress finished:(id)finished error:(id)error;	// 0x32cde955
- (void)loadTilesFromCacheAndNetwork:(id)cacheAndNetwork progress:(id)progress finished:(id)finished error:(id)error skipNetwork:(BOOL)network;	// 0x32cde6c1
// declared property getter: - (int)memoryHits;	// 0x32cdf395
// declared property getter: - (int)networkHits;	// 0x32cdf3b5
- (void)openDatabase;	// 0x32cde39d
- (void)registerTileDecoder:(id)decoder;	// 0x32cdda61
- (void)registerTileLoader:(Class)loader;	// 0x32cdf2e1
- (id)renderDataForKey:(GEOTileKey *)key;	// 0x32cddf61
- (id)renderDataForKey:(GEOTileKey *)key asyncHandler:(id)handler;	// 0x32cde095
- (void)tileServerProxy:(id)proxy receivedData:(id)data forKey:(GEOTileKey)key forRequest:(id)request fromDisk:(BOOL)disk;	// 0x32cdee19
- (void)tileServerProxy:(id)proxy receivedError:(id)error forRequest:(id)request;	// 0x32cdf085
- (void)tileServerProxy:(id)proxy requestFinished:(id)finished;	// 0x32cdf1a5
- (void)tileServerProxy:(id)proxy requestMovedToNetwork:(id)network;	// 0x32cdf081
@end


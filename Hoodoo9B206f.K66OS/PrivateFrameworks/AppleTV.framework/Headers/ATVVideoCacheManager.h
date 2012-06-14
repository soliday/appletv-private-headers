/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRVideoCacheManager.h"

@class AVAssetCache, AVPlayerLayer, AVQueuePlayer, AVAsset, NSTimer, AVPlayerItem, NSMutableDictionary, BRStreamingMediaAsset, BRKeyValueObservingRegistry;
@protocol BRVideoCacheManagerDelegate;

@interface ATVVideoCacheManager : BRVideoCacheManager {
@private
	AVAssetCache *_rentalCache;	// 4 = 0x4
	AVAssetCache *_otherCache;	// 8 = 0x8
	AVAssetCache *_avFoundationPrivateCache;	// 12 = 0xc
	NSMutableDictionary *_cacheKeys;	// 16 = 0x10
	BRStreamingMediaAsset *_mediaAssetBeingCached;	// 20 = 0x14
	BRKeyValueObservingRegistry *_kvoRegistry;	// 24 = 0x18
	id<BRVideoCacheManagerDelegate> _delegate;	// 28 = 0x1c
	AVPlayerLayer *_playerLayer;	// 32 = 0x20
	AVQueuePlayer *_player;	// 36 = 0x24
	AVAsset *_avAsset;	// 40 = 0x28
	AVPlayerItem *_playerItem;	// 44 = 0x2c
	BOOL _isItemLikelyToKeepUp;	// 48 = 0x30
	BOOL _itemPrepared;	// 49 = 0x31
	double _videoStartTime;	// 52 = 0x34
	NSTimer *_bufferProgressTimer;	// 60 = 0x3c
	double _computedReadyToPlayTime;	// 64 = 0x40
	BOOL _computedReadyToPlayTimeReady;	// 72 = 0x48
}
@property(readonly, assign) double videoStartTime;	// G=0x365decd1; converted property
- (id)init;	// 0x365de35d
- (BOOL)_assetIsLiveStreaming:(id)streaming;	// 0x365df185
- (void)_bufferProgressTimerFired:(id)fired;	// 0x365dece9
- (void)_cacheNotification:(BOOL)notification;	// 0x365df6b9
- (long long)_clearSpaceInCache:(id)cache smallestFirst:(BOOL)first upTo:(unsigned long long)to;	// 0x365df475
- (void)_deleteCloudCacheContents;	// 0x365e07e1
- (void)_handleDiskSpaceRequest:(id)request;	// 0x365df289
- (void)_iTunesAccountChanged:(id)changed;	// 0x365e089d
- (void)_networkStatusChanged:(id)changed;	// 0x365df879
- (id)_otherCache;	// 0x365df021
- (void)_performTracksLoadedAction;	// 0x365dfe49
- (void)_postItemStateChangedNotification:(ATVMediaItemRef)notification;	// 0x365e08f1
- (id)_rentalCache;	// 0x365deebd
- (void)_startCachingURL:(id)url orItem:(ATVMediaItemRef)item avAsset:(id)asset withElapsedTime:(double)elapsedTime;	// 0x365df8e9
- (void)_stopCaching;	// 0x365e0555
- (BOOL)_verifyDirectoryExists:(id)exists;	// 0x365df1d1
- (BRTimeRange)bufferedRange;	// 0x365e0a95
- (id)cacheInfoForAsset:(id)asset;	// 0x365de6c1
- (id)currentPlayer;	// 0x365dee7d
- (id)currentPlayerItem;	// 0x365dee8d
- (id)currentPlayerLayer;	// 0x365dee6d
- (ATVMediaItemRef)currentlyCachingItem;	// 0x365dee9d
- (void)dealloc;	// 0x365de56d
- (void)deleteCloudCacheContents;	// 0x365deb79
- (double)duration;	// 0x365e09bd
- (double)elapsedTime;	// 0x365e0a29
- (void)evictAsset:(id)asset;	// 0x365de949
- (void)evictURL:(id)url;	// 0x365dea51
- (BOOL)isAssetLoading:(id)loading;	// 0x365deb89
- (BOOL)isItemLoading:(ATVMediaItemRef)loading;	// 0x365debe5
- (BOOL)isItemReadyToPlay:(ATVMediaItemRef)play;	// 0x365dec29
- (int)playerState;	// 0x365e0991
- (void)saveCacheKey:(id)key forAsset:(id)asset;	// 0x365de8cd
- (void)saveCacheKey:(id)key forURL:(id)url;	// 0x365de919
- (double)secondsUntilItemWillBeReadyToPlay:(ATVMediaItemRef)secondsUntilItem;	// 0x365dedcd
- (void)setDelegate:(id)delegate;	// 0x365de6b1
- (void)startCachingAVAsset:(id)asset mediaItem:(ATVMediaItemRef)item withElapsedTime:(double)elapsedTime;	// 0x365deb15
- (void)startCachingItem:(ATVMediaItemRef)item;	// 0x365deac9
- (void)startCachingItem:(ATVMediaItemRef)item withElapsedTime:(double)elapsedTime;	// 0x365deaed
- (void)startCachingURL:(id)url;	// 0x365deb3d
- (void)stopCaching;	// 0x365deb69
// converted property getter: - (double)videoStartTime;	// 0x365decd1
@end


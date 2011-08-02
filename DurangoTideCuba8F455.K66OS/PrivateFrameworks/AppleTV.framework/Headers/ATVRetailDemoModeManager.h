/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <BRSingleton.h> // Unknown library

@class NSMutableArray, NSTimer, NSURLDownload;

@interface ATVRetailDemoModeManager : BRSingleton {
@private
	NSTimer *_retailPlaybackLimitTimer;	// 4 = 0x4
	BOOL _hasStartedPlaying;	// 8 = 0x8
	NSURLDownload *_retailMovieDownload;	// 12 = 0xc
	NSMutableArray *_topPodcastsFavCandidates;	// 16 = 0x10
	NSMutableArray *_topShowsFavCandidates;	// 20 = 0x14
}
+ (void)checkAndStart;	// 0x306c7985
+ (id)retailDemoCacheDir;	// 0x306c77fd
+ (BOOL)retailDemoMovieDownloadComplete;	// 0x306c7749
+ (id)retailDemoMoviePath;	// 0x306c77c9
+ (void)setSingleton:(id)singleton;	// 0x306c703d
+ (id)singleton;	// 0x306c7031
- (id)init;	// 0x306c7895
- (void)_downloadRetailDemoMovie;	// 0x306c7a21
- (void)_fetchNextPodcastFav;	// 0x306c7ee9
- (void)_fetchNextTVShowFav;	// 0x306c839d
- (void)_nowPlayingStateChanged:(id)changed;	// 0x306c7655
- (void)_podcastReady:(id)ready;	// 0x306c7231
- (id)_retailDemoMovieURL;	// 0x306c73d1
- (void)_retailPlaybackLimitTimerFired:(id)fired;	// 0x306c74e5
- (void)_retryMovieDownloadLater;	// 0x306c739d
- (BOOL)_shouldLimitPlaybackForAsset:(id)asset;	// 0x306c75e9
- (void)_startPlaybackLimitTimer;	// 0x306c7531
- (void)_topPodcastsReady:(id)ready;	// 0x306c8055
- (void)_topTVShowsReady:(id)ready;	// 0x306c7ba1
- (void)_tvShowReady:(id)ready;	// 0x306c709d
- (void)_updatePodcastFavorites;	// 0x306c81b5
- (void)_updateTVShowFavorites;	// 0x306c7d01
- (void)dealloc;	// 0x306c7841
- (void)download:(id)download didFailWithError:(id)error;	// 0x306c79dd
- (void)downloadDidFinish:(id)download;	// 0x306c7049
- (void)updateRetailFavorites;	// 0x306c7721
@end

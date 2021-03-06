/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSingleton.h"
#import "NSURLDownloadDelegate.h"

@class NSMutableArray, NSTimer, NSURLDownload;

@interface ATVRetailDemoModeManager : BRSingleton <NSURLDownloadDelegate> {
@private
	NSTimer *_retailPlaybackLimitTimer;	// 4 = 0x4
	BOOL _hasStartedPlaying;	// 8 = 0x8
	NSURLDownload *_retailMovieDownload;	// 12 = 0xc
	NSMutableArray *_topPodcastsFavCandidates;	// 16 = 0x10
	NSMutableArray *_topShowsFavCandidates;	// 20 = 0x14
	BOOL _retryOccurred;	// 24 = 0x18
}
+ (void)checkAndStart;	// 0x35d40ca9
+ (id)retailDemoCacheDir;	// 0x35d40e75
+ (BOOL)retailDemoMovieDownloadComplete;	// 0x35d40f05
+ (id)retailDemoMoviePath;	// 0x35d40ec5
+ (void)setSingleton:(id)singleton;	// 0x35d40c99
+ (id)singleton;	// 0x35d40c89
- (id)init;	// 0x35d40d11
- (void)_downloadRetailDemoMovie;	// 0x35d421dd
- (void)_fetchNextPodcastFav;	// 0x35d428c1
- (void)_fetchNextTVShowFav;	// 0x35d42fbd
- (void)_nowPlayingStateChanged:(id)changed;	// 0x35d41f51
- (void)_podcastReady:(id)ready;	// 0x35d42a59
- (void)_resetRetailSettings;	// 0x35d41b89
- (id)_retailDemoMovieURL;	// 0x35d42375
- (void)_retailPlaybackLimitTimerFired:(id)fired;	// 0x35d42181
- (void)_retryMovieDownloadLater;	// 0x35d424a9
- (BOOL)_shouldLimitPlaybackForAsset:(id)asset;	// 0x35d42035
- (void)_startPlaybackLimitTimer;	// 0x35d420b1
- (void)_topPodcastsReady:(id)ready;	// 0x35d4271d
- (void)_topTVShowsReady:(id)ready;	// 0x35d42e19
- (void)_tvShowReady:(id)ready;	// 0x35d432f1
- (void)_updatePodcastFavorites;	// 0x35d424f5
- (void)_updateTVShowFavorites;	// 0x35d42bf1
- (void)dealloc;	// 0x35d40e19
- (void)download:(id)download didFailWithError:(id)error;	// 0x35d434b5
- (void)downloadDidFinish:(id)download;	// 0x35d43501
- (void)performRetailReset;	// 0x35d40f89
- (void)updateRetailFavorites;	// 0x35d41b59
@end


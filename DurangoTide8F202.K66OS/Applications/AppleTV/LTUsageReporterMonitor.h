/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "LTUsageReporterMonitor.h"
#import <XXUnknownSuperclass.h> // Unknown library

@protocol BRMediaAsset;

@interface LTUsageReporterMonitor : XXUnknownSuperclass {
	id<BRMediaAsset> _currentAsset;	// 4 = 0x4
	unsigned _playbackStalledCount;	// 8 = 0x8
}
+ (void)setSingleton:(id)singleton;	// 0x3c465
+ (id)singleton;	// 0x3c459
- (id)init;	// 0x3c4e5
- (void)dealloc;	// 0x3c5b9
@end

@interface LTUsageReporterMonitor (Private)
- (void)_resetPlaybackStalledCountAndAssetFromPlayerIfNeeded:(id)playerIfNeeded;	// 0x3c629
@end

@interface LTUsageReporterMonitor (Notifications)
- (void)_currentAssetPlaybackChanged:(id)changed;	// 0x3c6a1
- (void)_currentAssetPlaybackStalled:(id)stalled;	// 0x3c7d5
- (void)_homeSharesChanged:(id)changed;	// 0x3c471
@end


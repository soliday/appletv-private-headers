/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "SSDownloadManagerObserverPrivate.h"
#import "MediaPlayer-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary, SSDownloadManager;

@interface MPDownloadManager : NSObject <SSDownloadManagerObserverPrivate> {
	dispatch_queue_s *_dispatchQueue;	// 4 = 0x4
	SSDownloadManager *_downloadManager;	// 8 = 0x8
	NSMutableDictionary *_downloadsByID;	// 12 = 0xc
	CFArrayRef _observers;	// 16 = 0x10
}
- (id)init;	// 0x301b43cd
- (void)_applyBlockToObservers:(id)observers;	// 0x301b4f3d
- (id)_copyObservers;	// 0x301b518d
- (void)_rebuildCacheIfNecessary;	// 0x301b521d
- (void)addObserver:(id)observer;	// 0x301b4609
- (void)cancelDownloads:(id)downloads completionBlock:(id)block;	// 0x301b46d9
- (void)dealloc;	// 0x301b4565
- (void)downloadManager:(id)manager downloadStatesDidChange:(id)downloadStates;	// 0x301b4b1d
- (void)downloadManager:(id)manager downloadsDidChange:(id)downloads;	// 0x301b4a49
- (void)downloadManagerDownloadsDidChange:(id)downloadManagerDownloads;	// 0x301b4bf1
- (void)downloadManagerNetworkUsageDidChange:(id)downloadManagerNetworkUsage;	// 0x301b4e95
- (id)downloadWithIdentifier:(long long)identifier;	// 0x301b46f9
- (void)removeObserver:(id)observer;	// 0x301b4971
@end

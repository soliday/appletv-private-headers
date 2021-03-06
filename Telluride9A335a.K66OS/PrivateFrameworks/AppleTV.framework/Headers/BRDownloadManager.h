/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray;

@interface BRDownloadManager : NSObject {
@private
	NSMutableArray *_downloads;	// 4 = 0x4
	NSMutableArray *_playableNotifications;	// 8 = 0x8
}
@property(readonly, retain) NSMutableArray *downloads;	// G=0x342aa5d1; converted property
+ (id)allDownloads;	// 0x342a98bd
+ (id)displayStringForDownloadEstimatedTimeUntilPlayableForItem:(id)item;	// 0x342a9e3d
+ (id)displayStringForDownloadState:(int)downloadState context:(int)context;	// 0x342a9a09
+ (id)displayStringForDownloadStateWithPercentageForItem:(id)item;	// 0x342a9bf5
+ (id)downloadManagerForMediaType:(id)mediaType;	// 0x342a960d
+ (id)downloadTestManager;	// 0x342a979d
+ (BOOL)downloadsInProgress;	// 0x342a985d
+ (void)initialize;	// 0x342a93f5
+ (void)registerDownloadManager:(id)manager forMediaType:(id)mediaType;	// 0x342a9459
+ (void)registerDownloadTestManager:(id)manager;	// 0x342a96dd
+ (void)removeDownloadManagerForMediaType:(id)mediaType;	// 0x342a9541
+ (id)shortDisplayStringForDownloadState:(int)downloadState;	// 0x342a9b09
+ (id)shortDisplayStringForDownloadStateWithPercentageForItem:(id)item;	// 0x342a9d21
- (id)init;	// 0x342aa0c9
- (void)_assetPlayable:(id)playable;	// 0x342aa7b9
- (void)addDownload:(id)download;	// 0x342aa235
- (void)cancelNetworkSpeedTest;	// 0x342aaa09
- (void)dealloc;	// 0x342aa1a5
- (void)deleteDownloadFromITunesQueue:(id)itunesQueue removeFromDisk:(BOOL)disk;	// 0x342aa5c1
// converted property getter: - (id)downloads;	// 0x342aa5d1
- (id)downloadsWithQualifiedState:(int)qualifiedState;	// 0x340a123d
- (BOOL)networkDiagnosticsAvailable;	// 0x342aa9fd
- (BOOL)networkTestInProgress;	// 0x342aaa01
- (void)pauseCurrentDownloads;	// 0x340a1301
- (void)prioritizeDownload:(id)download;	// 0x342aa6a5
- (void)removeDownload:(id)download;	// 0x342aa3ad
- (void)startNetworkSpeedTestWithUserInput:(id)userInput;	// 0x342aaa05
@end


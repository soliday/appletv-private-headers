/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPMediaDownloadObserver.h"
#import "SSDownloadManagerObserver.h"


@interface MPStoreMediaDownloadObserver : MPMediaDownloadObserver <SSDownloadManagerObserver> {
@private
	long long _downloadID;	// 20 = 0x14
	BOOL _isRestoreDownload;	// 28 = 0x1c
}
@property(readonly, assign) BOOL isRestoreDownload;	// G=0x303f1079; converted property
- (id)initWithDownloadIdentifier:(long long)downloadIdentifier;	// 0x303f0bd5
- (id)_download;	// 0x303f0b8d
- (void)_onQueue_invalidate;	// 0x303f0c65
- (BOOL)canCancel;	// 0x303f0ee9
- (void)cancelDownload;	// 0x303f0f0d
- (void)downloadManager:(id)manager downloadStatesDidChange:(id)downloadStates;	// 0x303f10dd
- (double)downloadProgress;	// 0x303f0cc1
- (BOOL)isCurrentlyPlayable;	// 0x303f0de5
// converted property getter: - (BOOL)isRestoreDownload;	// 0x303f1079
@end


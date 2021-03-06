/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "MediaPlayer-Structs.h"
#import "MPAVQueuePlayerFeederSource.h"

@class NSString, MPQueuePlayer, MPAVItem, MPAVQueuePlayerFeeder;
@protocol MPAVPlaylistFeeder;

@interface MPAVPlaylistManager : NSObject <MPAVQueuePlayerFeederSource> {
@private
	NSString *_audioSessionModeOverride;	// 4 = 0x4
	MPAVItem *_currentItem;	// 8 = 0x8
	MPAVQueuePlayerFeeder *_feeder;	// 12 = 0xc
	BOOL _goToTargetIndex;	// 16 = 0x10
	int _isChangingPlaylistFeeder;	// 20 = 0x14
	int _lastSelectionDirection;	// 24 = 0x18
	MPQueuePlayer *_player;	// 28 = 0x1c
	id<MPAVPlaylistFeeder> _playlistFeeder;	// 32 = 0x20
	int _repeatMode;	// 36 = 0x24
	int _retainCount;	// 40 = 0x28
	int _targetIndex;	// 44 = 0x2c
	BOOL _updatedAudioSessionMode;	// 48 = 0x30
}
@property(retain, nonatomic) NSString *audioSessionModeOverride;	// G=0x348b834d; S=0x348b835d; @synthesize=_audioSessionModeOverride
@property(readonly, assign, nonatomic) BOOL canChangePlaylistFeeder;	// G=0x348b7a1d; 
@property(readonly, assign) int currentIndex;	// G=0x348b7941; 
@property(readonly, assign) MPAVItem *currentItem;	// G=0x348b836d; @synthesize=_currentItem
@property(assign, nonatomic) BOOL forceSynchronousQueueFilling;	// G=0x348b74a1; S=0x348b7529; 
@property(readonly, assign, nonatomic) BOOL isChangingPlaylistFeeder;	// G=0x348b7a05; 
@property(readonly, assign) int lastSelectionDirection;	// G=0x348b83a5; @synthesize=_lastSelectionDirection
@property(assign, nonatomic) BOOL managesSystemDownloads;	// G=0x348b74c5; S=0x348b7549; 
@property(assign, nonatomic) unsigned maxQueueDepth;	// G=0x348b74e9; S=0x348b7569; 
@property(assign, nonatomic) unsigned minQueueDepth;	// G=0x348b7509; S=0x348b7589; 
@property(readonly, assign) MPQueuePlayer *player;	// G=0x348b8381; @synthesize=_player
@property(retain, nonatomic) id<MPAVPlaylistFeeder> playlistFeeder;	// G=0x348b8395; S=0x348b7a35; @synthesize=_playlistFeeder
@property(assign) int repeatMode;	// G=0x348b7975; S=0x348b7985; 
- (id)init;	// 0x348b6c85
- (void)_assetCancelNotification:(id)notification;	// 0x348b716d
- (id)_audioSessionModeForMediaType:(int)mediaType;	// 0x348b8139
- (id)_feeder;	// 0x348b8129
- (id)_feederItemForIndex:(int)index;	// 0x348b75a9
- (BOOL)_isDeallocating;	// 0x348b6c59
- (id)_itemToFollowItemIndex:(int)followItemIndex skipUnavailableContent:(BOOL)content;	// 0x348b7f31
- (void)_mediaLibraryDisplayValuesDidChangeNotification:(id)_mediaLibraryDisplayValues;	// 0x348b7355
- (void)_networkTypeDidChangeNotification:(id)_networkType;	// 0x348b73d1
- (int)_nextItemIndex:(int)index repeatMode:(int)mode;	// 0x348b7e41
- (int)_prepareToQueuePlaybackIndex:(int)queuePlaybackIndex selectionDirection:(int)direction;	// 0x348b76d1
- (void)_reloadQueuedItemsIfPathBecameAvailable;	// 0x348b7bbd
- (BOOL)_tryRetain;	// 0x348b6c09
- (void)_updateAudioSessionMode;	// 0x348b8179
// declared property getter: - (id)audioSessionModeOverride;	// 0x348b834d
// declared property getter: - (BOOL)canChangePlaylistFeeder;	// 0x348b7a1d
- (void)contentInvalidated;	// 0x348b7de1
- (void)contentInvalidatedWithCurrentItemMovedToIndex:(unsigned)index;	// 0x348b7d99
- (void)contentInvalidatedWithNewIndex:(unsigned)newIndex;	// 0x348b7e01
- (void)contentsDidChangeByRemovingRange:(NSRange)contents;	// 0x348b7cd1
// declared property getter: - (int)currentIndex;	// 0x348b7941
// declared property getter: - (id)currentItem;	// 0x348b836d
- (void)dealloc;	// 0x348b6e75
// declared property getter: - (BOOL)forceSynchronousQueueFilling;	// 0x348b74a1
// declared property getter: - (BOOL)isChangingPlaylistFeeder;	// 0x348b7a05
// declared property getter: - (int)lastSelectionDirection;	// 0x348b83a5
// declared property getter: - (BOOL)managesSystemDownloads;	// 0x348b74c5
// declared property getter: - (unsigned)maxQueueDepth;	// 0x348b74e9
// declared property getter: - (unsigned)minQueueDepth;	// 0x348b7509
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x348b6ff5
// declared property getter: - (id)player;	// 0x348b8381
// declared property getter: - (id)playlistFeeder;	// 0x348b8395
- (id)queuePlayerFeeder:(id)feeder itemToFollowItem:(id)followItem;	// 0x348b8015
- (BOOL)queuePlayerFeeder:(id)feeder willInsertItem:(id)item;	// 0x348b8051
- (void)queuePlayerFeeder:(id)feeder willRemoveItem:(id)item;	// 0x348b804d
- (void)queuePlayerFeederDidUpdateQueue:(id)queuePlayerFeeder queuedItems:(id)items dequeuedItems:(id)items3;	// 0x348b8055
- (void)queuePlayerFeederFailedToQueueAnyItems:(id)queueAnyItems;	// 0x348b80bd
- (oneway void)release;	// 0x348b6b81
// declared property getter: - (int)repeatMode;	// 0x348b7975
- (id)retain;	// 0x348b6b49
- (unsigned)retainCount;	// 0x348b6bf5
// declared property setter: - (void)setAudioSessionModeOverride:(id)override;	// 0x348b835d
- (void)setCurrentIndex:(int)index selectionDirection:(int)direction;	// 0x348b7865
// declared property setter: - (void)setForceSynchronousQueueFilling:(BOOL)filling;	// 0x348b7529
// declared property setter: - (void)setManagesSystemDownloads:(BOOL)downloads;	// 0x348b7549
// declared property setter: - (void)setMaxQueueDepth:(unsigned)depth;	// 0x348b7569
// declared property setter: - (void)setMinQueueDepth:(unsigned)depth;	// 0x348b7589
// declared property setter: - (void)setPlaylistFeeder:(id)feeder;	// 0x348b7a35
- (BOOL)setPlaylistFeeder:(id)feeder startIndex:(int)index;	// 0x348b7b25
// declared property setter: - (void)setRepeatMode:(int)mode;	// 0x348b7985
@end


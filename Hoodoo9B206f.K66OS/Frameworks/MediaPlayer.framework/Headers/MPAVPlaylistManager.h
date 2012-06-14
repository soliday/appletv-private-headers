/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "MPAVQueuePlayerFeederSource.h"
#import "MediaPlayer-Structs.h"

@class MPQueuePlayer, MPAVQueuePlayerFeeder, MPAVItem;
@protocol AVPlaylistFeeder;

@interface MPAVPlaylistManager : NSObject <MPAVQueuePlayerFeederSource> {
	id<AVPlaylistFeeder> _playlistFeeder;	// 4 = 0x4
	MPQueuePlayer *_player;	// 8 = 0x8
	MPAVQueuePlayerFeeder *_feeder;	// 12 = 0xc
	int _repeatMode;	// 16 = 0x10
	MPAVItem *_currentItem;	// 20 = 0x14
	int _isChangingPlaylistFeeder;	// 24 = 0x18
	int _targetIndex;	// 28 = 0x1c
	int _lastSelectionDirection;	// 32 = 0x20
	unsigned _goToTargetIndex : 1;	// 36 = 0x24
@private
	int _retainCount;	// 40 = 0x28
}
@property(readonly, assign, nonatomic) BOOL canChangePlaylistFeeder;	// G=0x303d7a1d; 
@property(readonly, assign) int currentIndex;	// G=0x303d793d; 
@property(readonly, assign) MPAVItem *currentItem;	// G=0x303d81e1; @synthesize=_currentItem
@property(assign, nonatomic) BOOL forceSynchronousQueueFilling;	// G=0x303d756d; S=0x303d7591; 
@property(readonly, assign, nonatomic) BOOL isChangingPlaylistFeeder;	// G=0x303d7a05; 
@property(readonly, assign) int lastSelectionDirection;	// G=0x303d8201; @synthesize=_lastSelectionDirection
@property(readonly, assign) MPQueuePlayer *player;	// G=0x303d81d1; @synthesize=_player
@property(retain, nonatomic) id<AVPlaylistFeeder> playlistFeeder;	// G=0x303d81f1; S=0x303d7a35; @synthesize=_playlistFeeder
@property(assign) int repeatMode;	// G=0x303d7979; S=0x303d7989; 
- (id)init;	// 0x303d6c59
- (id)_feeder;	// 0x303d81c1
- (id)_feederItemForIndex:(int)index;	// 0x303d75b1
- (BOOL)_isDeallocating;	// 0x303d6c2d
- (id)_itemToFollowItemIndex:(int)followItemIndex skipUnavailableContent:(BOOL)content;	// 0x303d7ef5
- (void)_networkTypeDidChangeNotification:(id)_networkType;	// 0x303d74a1
- (int)_nextItemIndex:(int)index repeatMode:(int)mode;	// 0x303d7e01
- (int)_prepareToQueuePlaybackIndex:(int)queuePlaybackIndex selectionDirection:(int)direction;	// 0x303d76d9
- (void)_reloadQueuedItemsIfPathBecameAvailable;	// 0x303d7b71
- (BOOL)_tryRetain;	// 0x303d6bd1
// declared property getter: - (BOOL)canChangePlaylistFeeder;	// 0x303d7a1d
- (void)contentInvalidated;	// 0x303d7da1
- (void)contentInvalidatedWithCurrentItemMovedToIndex:(unsigned)index;	// 0x303d7d59
- (void)contentInvalidatedWithNewIndex:(unsigned)newIndex;	// 0x303d7dc1
- (void)contentsDidChangeByRemovingRange:(NSRange)contents;	// 0x303d7c91
// declared property getter: - (int)currentIndex;	// 0x303d793d
// declared property getter: - (id)currentItem;	// 0x303d81e1
- (void)dealloc;	// 0x303d7209
// declared property getter: - (BOOL)forceSynchronousQueueFilling;	// 0x303d756d
// declared property getter: - (BOOL)isChangingPlaylistFeeder;	// 0x303d7a05
// declared property getter: - (int)lastSelectionDirection;	// 0x303d8201
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x303d7331
// declared property getter: - (id)player;	// 0x303d81d1
// declared property getter: - (id)playlistFeeder;	// 0x303d81f1
- (id)queuePlayerFeeder:(id)feeder itemToFollowItem:(id)followItem;	// 0x303d7fc5
- (BOOL)queuePlayerFeeder:(id)feeder willInsertItem:(id)item;	// 0x303d8001
- (void)queuePlayerFeeder:(id)feeder willRemoveItem:(id)item;	// 0x303d7ffd
- (void)queuePlayerFeederDidUpdateQueue:(id)queuePlayerFeeder queuedItems:(id)items dequeuedItems:(id)items3;	// 0x303d8039
- (void)queuePlayerFeederFailedToQueueAnyItems:(id)queueAnyItems;	// 0x303d8155
- (oneway void)release;	// 0x303d6b41
// declared property getter: - (int)repeatMode;	// 0x303d7979
- (id)retain;	// 0x303d6b09
- (unsigned)retainCount;	// 0x303d6bbd
- (void)setCurrentIndex:(int)index selectionDirection:(int)direction;	// 0x303d785d
// declared property setter: - (void)setForceSynchronousQueueFilling:(BOOL)filling;	// 0x303d7591
// declared property setter: - (void)setPlaylistFeeder:(id)feeder;	// 0x303d7a35
- (BOOL)setPlaylistFeeder:(id)feeder startIndex:(int)index;	// 0x303d7ad5
// declared property setter: - (void)setRepeatMode:(int)mode;	// 0x303d7989
@end


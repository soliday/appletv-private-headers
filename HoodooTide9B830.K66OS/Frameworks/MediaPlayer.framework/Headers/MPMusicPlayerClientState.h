/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class MPMediaQuery, MPMediaItem, MPMediaPlaylist;

@interface MPMusicPlayerClientState : NSObject {
@private
	BOOL _allowsRemoteUIAccess;	// 4 = 0x4
	int _backgroundPlaybackAccess;	// 8 = 0x8
	MPMediaItem *_firstItem;	// 12 = 0xc
	MPMediaPlaylist *_geniusMixPlaylist;	// 16 = 0x10
	BOOL _hasAudioBackgroundMode;	// 20 = 0x14
	MPMediaQuery *_query;	// 24 = 0x18
	int _repeatMode;	// 28 = 0x1c
	BOOL _seeking;	// 32 = 0x20
	int _shuffleMode;	// 36 = 0x24
	BOOL _useApplicationSpecificQueue;	// 40 = 0x28
	BOOL _videoPlaybackEnabled;	// 41 = 0x29
}
@property(assign, nonatomic) BOOL allowsRemoteUIAccess;	// G=0x346986b5; S=0x346986c5; @synthesize=_allowsRemoteUIAccess
@property(assign, nonatomic) int backgroundPlaybackAccess;	// G=0x346986d5; S=0x346986e5; @synthesize=_backgroundPlaybackAccess
@property(retain, nonatomic) MPMediaItem *firstItem;	// G=0x346986f5; S=0x34698705; @synthesize=_firstItem
@property(retain, nonatomic) MPMediaPlaylist *geniusMixPlaylist;	// G=0x34698729; S=0x346985dd; @synthesize=_geniusMixPlaylist
@property(assign, nonatomic) BOOL hasAudioBackgroundMode;	// G=0x34698739; S=0x34698749; @synthesize=_hasAudioBackgroundMode
@property(retain, nonatomic) MPMediaQuery *query;	// G=0x34698759; S=0x34698649; @synthesize=_query
@property(assign, nonatomic) int repeatMode;	// G=0x34698769; S=0x34698779; @synthesize=_repeatMode
@property(assign, nonatomic) BOOL seeking;	// G=0x34698789; S=0x34698799; @synthesize=_seeking
@property(assign, nonatomic) int shuffleMode;	// G=0x346987a9; S=0x346987b9; @synthesize=_shuffleMode
@property(assign, nonatomic) BOOL useApplicationSpecificQueue;	// G=0x346987c9; S=0x346987d9; @synthesize=_useApplicationSpecificQueue
@property(assign, nonatomic) BOOL videoPlaybackEnabled;	// G=0x346987e9; S=0x346987f9; @synthesize=_videoPlaybackEnabled
// declared property getter: - (BOOL)allowsRemoteUIAccess;	// 0x346986b5
// declared property getter: - (int)backgroundPlaybackAccess;	// 0x346986d5
- (void)dealloc;	// 0x34698569
// declared property getter: - (id)firstItem;	// 0x346986f5
// declared property getter: - (id)geniusMixPlaylist;	// 0x34698729
// declared property getter: - (BOOL)hasAudioBackgroundMode;	// 0x34698739
// declared property getter: - (id)query;	// 0x34698759
// declared property getter: - (int)repeatMode;	// 0x34698769
// declared property getter: - (BOOL)seeking;	// 0x34698789
// declared property setter: - (void)setAllowsRemoteUIAccess:(BOOL)access;	// 0x346986c5
// declared property setter: - (void)setBackgroundPlaybackAccess:(int)access;	// 0x346986e5
// declared property setter: - (void)setFirstItem:(id)item;	// 0x34698705
// declared property setter: - (void)setGeniusMixPlaylist:(id)playlist;	// 0x346985dd
// declared property setter: - (void)setHasAudioBackgroundMode:(BOOL)mode;	// 0x34698749
// declared property setter: - (void)setQuery:(id)query;	// 0x34698649
// declared property setter: - (void)setRepeatMode:(int)mode;	// 0x34698779
// declared property setter: - (void)setSeeking:(BOOL)seeking;	// 0x34698799
// declared property setter: - (void)setShuffleMode:(int)mode;	// 0x346987b9
// declared property setter: - (void)setUseApplicationSpecificQueue:(BOOL)queue;	// 0x346987d9
// declared property setter: - (void)setVideoPlaybackEnabled:(BOOL)enabled;	// 0x346987f9
// declared property getter: - (int)shuffleMode;	// 0x346987a9
// declared property getter: - (BOOL)useApplicationSpecificQueue;	// 0x346987c9
// declared property getter: - (BOOL)videoPlaybackEnabled;	// 0x346987e9
@end


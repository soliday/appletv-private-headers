/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRTransportDataProvider.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray;
@protocol BRPlayerDelegate;

@interface BRMediaPlayer : NSObject <BRTransportDataProvider> {
@private
	NSMutableArray *_stateStack;	// 4 = 0x4
	id<BRPlayerDelegate> _playerDelegate;	// 8 = 0x8
}
@property(assign) long chapterGroupIndex;	// G=0x332b1e91; S=0x332b1e8d; converted property
@property(assign) long currentChapterIndex;	// G=0x332b1e79; S=0x332b1e75; converted property
@property(assign) BOOL disablePlatformFilters;	// G=0x332b1ed5; S=0x332b1ed1; converted property
@property(assign) double elapsedTime;	// G=0x332b1df5; S=0x332b1df1; converted property
@property(assign) BOOL isPlaylistDynamic;	// G=0x332b1fb9; S=0x332b1fb5; converted property
@property(assign) BOOL muted;	// G=0x332b1fc9; S=0x332b1fc5; converted property
@property(retain) id playbackDate;	// G=0x332b1e15; S=0x332b1e11; converted property
@property(retain, nonatomic) id<BRPlayerDelegate> playerDelegate;	// G=0x332b1f25; S=0x332b1f35; @synthesize=_playerDelegate
@property(retain) id playerSpecificOptions;	// G=0x332b200d; S=0x332b2009; converted property
@property(assign) int playlistEndAction;	// G=0x332b1f21; S=0x332b1f1d; converted property
@property(assign) int repeatMode;	// G=0x332b1fa5; S=0x332b1fa1; converted property
@property(retain) id selectedAudioOption;	// G=0x332b1f81; S=0x332b1f7d; converted property
@property(retain) id selectedMedia;	// G=0x332b1f8d; S=0x332b1f91; converted property
@property(retain) id selectedSubtitleOption;	// G=0x332b1f75; S=0x332b1f71; converted property
@property(assign) BOOL shufflePlayback;	// G=0x332b1f99; S=0x332b1f95; converted property
@property(assign) BOOL skipExplicit;	// G=0x332b1fb1; S=0x332b1fad; converted property
@property(assign) double startTime;	// G=0x332b1e3d; S=0x332b1e39; converted property
@property(assign) double stopTime;	// G=0x332b1e25; S=0x332b1e21; converted property
@property(assign) double virtualChapterMark;	// G=0x332b1e59; S=0x332b1e55; converted property
@property(assign) float volume;	// G=0x332b1fd5; S=0x332b1fd1; converted property
+ (BOOL)allowMultiplePlayers;	// 0x332b1b65
+ (id)contentTypes;	// 0x332b1b61
+ (BOOL)handlesVideoForType:(id)type;	// 0x332b1b69
- (id)init;	// 0x332b1b6d
- (void)_checkPlayerMedia:(id)media;	// 0x332b2305
- (void)_invalidateAsset:(id)asset;	// 0x332b22a1
- (void)appendMediaList:(id)list;	// 0x332b1d05
- (void)appendMediaToSlidingWindow:(id)slidingWindow;	// 0x332b1d09
- (BOOL)attemptAuthorizationWithError:(id *)error;	// 0x332b1ed9
- (id)audioOptions;	// 0x332b1f79
- (BRTimeRange)bufferedRange;	// 0x332b1eb5
- (float)bufferingProgress;	// 0x332b1ec5
- (id)chapterAtIndex:(long)index;	// 0x332b1ead
- (long)chapterCount;	// 0x332b1ea9
- (id)chapterGroupAtIndex:(long)index;	// 0x332b1e95
- (long)chapterGroupCount;	// 0x332b1e89
// converted property getter: - (long)chapterGroupIndex;	// 0x332b1e91
- (long)chapterIndexForTime:(double)time;	// 0x332b1e7d
- (BOOL)chapterIsPlayable:(long)playable;	// 0x332b1e81
- (id)chapters;	// 0x332b1ea5
- (void)clearStack;	// 0x332b226d
- (id)collection;	// 0x332b1d0d
- (BOOL)cueMediaWithError:(id *)error;	// 0x332b1d69
// converted property getter: - (long)currentChapterIndex;	// 0x332b1e79
- (long)currentInterstitialIndex;	// 0x332b1e9d
- (id)currentVideoFrame;	// 0x332b1f61
- (void)dealloc;	// 0x332b1c29
- (id)debugStringForState:(int)state;	// 0x332b2011
// converted property getter: - (BOOL)disablePlatformFilters;	// 0x332b1ed5
- (double)duration;	// 0x332b1ddd
// converted property getter: - (double)elapsedTime;	// 0x332b1df5
- (void)handleFailedURLResponse:(id)response requester:(id)requester;	// 0x332b229d
- (BOOL)hasRealChapters;	// 0x332b1e85
- (id)interstitialTimes;	// 0x332b1e99
// converted property getter: - (BOOL)isPlaylistDynamic;	// 0x332b1fb9
- (BOOL)isTrackEnabled:(int)enabled;	// 0x332b1f85
- (double)keyframeTimeNearTime:(double)time searchForwards:(BOOL)forwards;	// 0x332b1f65
- (id)media;	// 0x332b1d11
- (int)mediaCount;	// 0x332b1d19
- (long)mediaIndex;	// 0x332b1d65
// converted property getter: - (BOOL)muted;	// 0x332b1fc9
- (void)nextChapter;	// 0x332b1e6d
- (void)nextMedia;	// 0x332b1fc1
- (int)peekState;	// 0x332b21b5
// converted property getter: - (id)playbackDate;	// 0x332b1e15
- (id)playbackInfo;	// 0x332b1ecd
// declared property getter: - (id)playerDelegate;	// 0x332b1f25
// converted property getter: - (id)playerSpecificOptions;	// 0x332b200d
- (int)playerState;	// 0x332b1dd1
- (BOOL)playingVisualContent;	// 0x332b1f59
// converted property getter: - (int)playlistEndAction;	// 0x332b1f21
- (int)popState;	// 0x332b21ed
- (void)previousChapter;	// 0x332b1e71
- (void)previousMedia;	// 0x332b1fbd
- (void)pushState:(int)state;	// 0x332b20f5
// converted property getter: - (int)repeatMode;	// 0x332b1fa5
- (void)resetToBeginning;	// 0x332b1e51
- (BOOL)reverseTouchSwipeBehavior;	// 0x332b1cbd
// converted property getter: - (id)selectedAudioOption;	// 0x332b1f81
// converted property getter: - (id)selectedMedia;	// 0x332b1f8d
// converted property getter: - (id)selectedSubtitleOption;	// 0x332b1f75
// converted property setter: - (void)setChapterGroupIndex:(long)index;	// 0x332b1e8d
// converted property setter: - (void)setCurrentChapterIndex:(long)index;	// 0x332b1e75
// converted property setter: - (void)setDisablePlatformFilters:(BOOL)filters;	// 0x332b1ed1
// converted property setter: - (void)setElapsedTime:(double)time;	// 0x332b1df1
- (void)setFailedURLDelegate:(id)delegate;	// 0x332b2299
- (void)setForwardPlaybackEndTime:(double)time;	// 0x332b1e09
// converted property setter: - (void)setIsPlaylistDynamic:(BOOL)dynamic;	// 0x332b1fb5
- (void)setMediaAsCurrentlyPlayingAppendingTrackList:(id)list;	// 0x332b1d01
- (BOOL)setMediaAtIndex:(long)index inCollection:(id)collection error:(id *)error;	// 0x332b1cc5
- (BOOL)setMediaAtIndex:(long)index inTrackList:(id)trackList error:(id *)error;	// 0x332b1cc1
// converted property setter: - (void)setMuted:(BOOL)muted;	// 0x332b1fc5
// converted property setter: - (void)setPlaybackDate:(id)date;	// 0x332b1e11
// declared property setter: - (void)setPlayerDelegate:(id)delegate;	// 0x332b1f35
// converted property setter: - (void)setPlayerSpecificOptions:(id)options;	// 0x332b2009
// converted property setter: - (void)setPlaylistEndAction:(int)action;	// 0x332b1f1d
// converted property setter: - (void)setRepeatMode:(int)mode;	// 0x332b1fa1
- (void)setReversePlaybackEndTime:(double)time;	// 0x332b1e0d
// converted property setter: - (void)setSelectedAudioOption:(id)option;	// 0x332b1f7d
// converted property setter: - (void)setSelectedMedia:(id)media;	// 0x332b1f91
// converted property setter: - (void)setSelectedSubtitleOption:(id)option;	// 0x332b1f71
// converted property setter: - (void)setShufflePlayback:(BOOL)playback;	// 0x332b1f95
// converted property setter: - (void)setSkipExplicit:(BOOL)anExplicit;	// 0x332b1fad
- (void)setStartDate:(id)date isEstimate:(BOOL)estimate;	// 0x332b1e19
// converted property setter: - (void)setStartTime:(double)time;	// 0x332b1e39
- (BOOL)setState:(int)state error:(id *)error;	// 0x332b1dcd
// converted property setter: - (void)setStopTime:(double)time;	// 0x332b1e21
- (void)setTrackEnabled:(BOOL)enabled forTrackID:(int)trackID;	// 0x332b1f89
// converted property setter: - (void)setVirtualChapterMark:(double)mark;	// 0x332b1e55
// converted property setter: - (void)setVolume:(float)volume;	// 0x332b1fd1
// converted property getter: - (BOOL)shufflePlayback;	// 0x332b1f99
// converted property getter: - (BOOL)skipExplicit;	// 0x332b1fb1
- (id)startDate;	// 0x332b1e1d
// converted property getter: - (double)startTime;	// 0x332b1e3d
// converted property getter: - (double)stopTime;	// 0x332b1e25
- (BOOL)stopsActiveAudioPlayer;	// 0x332b1cb9
- (id)subtitleOptions;	// 0x332b1f6d
- (BOOL)supportsBufferedRange;	// 0x332b1eb1
- (BOOL)supportsMultipleTrickSpeeds;	// 0x332b1dd5
- (BOOL)supportsRepeatModes;	// 0x332b1fa9
- (BOOL)supportsShufflePlayback;	// 0x332b1f9d
- (BOOL)supportsTrickPlay;	// 0x332b1dd9
- (BOOL)supportsVolumeControl;	// 0x332b1fcd
- (int)swapState:(int)state;	// 0x332b2181
- (id)trackList;	// 0x332b1d15
// converted property getter: - (double)virtualChapterMark;	// 0x332b1e59
- (id)visuals;	// 0x332b1f5d
// converted property getter: - (float)volume;	// 0x332b1fd5
@end


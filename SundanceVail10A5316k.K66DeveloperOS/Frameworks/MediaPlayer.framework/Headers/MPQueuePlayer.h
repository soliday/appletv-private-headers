/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "MPAudioDeviceControllerDelegate.h"
#import "MediaPlayer-Structs.h"

@class MPAudioDeviceController, NSArray, NSDictionary, NSError, AVAudioSessionMediaPlayerOnly, AVPlayerItem, NSMutableArray, AVQueuePlayer, AVPlayer;

@interface MPQueuePlayer : NSObject <MPAudioDeviceControllerDelegate> {
@private
	MPAudioDeviceController *_audioDeviceController;	// 4 = 0x4
	AVPlayerItem *_currentItem;	// 8 = 0x8
	XXStruct_pwHToB _currentTime;	// 12 = 0xc
	BOOL _isAirPlayVideoActive;	// 36 = 0x24
	BOOL _pausedForPlaybackQueueTransaction;	// 37 = 0x25
	NSDictionary *_pickedRouteDescription;	// 40 = 0x28
	id _playbackQueueCommitHandler;	// 44 = 0x2c
	int _playbackQueueTransactionCount;	// 48 = 0x30
	AVQueuePlayer *_player;	// 52 = 0x34
	NSMutableArray *_queuedOperations;	// 56 = 0x38
	float _rate;	// 60 = 0x3c
	float _rateBeforePlaybackQueueTransaction;	// 64 = 0x40
	BOOL _routeDidChangeDuringPlaybackQueueTransaction;	// 68 = 0x44
	int _status;	// 72 = 0x48
	int _defaultItemEQPresetType;	// 76 = 0x4c
	BOOL _outputObscuredDueToInsufficientExternalProtection;	// 80 = 0x50
}
@property(copy, nonatomic, setter=_setDisplaysUsedForPlayback:) NSArray *_displaysUsedForPlayback;	// G=0x348df079; S=0x348dfab1; 
@property(readonly, assign, nonatomic) int _externalProtectionStatus;	// G=0x348df0b9; 
@property(readonly, assign, nonatomic) AVPlayer *_player;	// G=0x348df371; 
@property(assign, nonatomic) int actionAtItemEnd;	// G=0x348dec79; S=0x348df8d1; 
@property(readonly, assign, nonatomic, getter=isAirPlayVideoActive) BOOL airPlayVideoActive;	// G=0x348df145; 
@property(assign, nonatomic) BOOL allowsAirPlayVideo;	// G=0x348decd9; S=0x348df9bd; 
@property(assign, nonatomic, getter=isClosedCaptionDisplayEnabled) BOOL closedCaptionDisplayEnabled;	// G=0x348df155; S=0x348df411; 
@property(readonly, assign, nonatomic) AVPlayerItem *currentItem;	// G=0x348defc9; 
@property(readonly, assign) XXStruct_pwHToB currentTime;	// G=0x348df001; converted property
@property(assign, nonatomic) int defaultItemEQPresetType;	// G=0x348e0629; S=0x348e0179; @synthesize=_defaultItemEQPresetType
@property(assign, nonatomic) BOOL disallowsAMRAudio;	// G=0x348dfdfd; S=0x348e0189; 
@property(readonly, assign, nonatomic) NSError *error;	// G=0x348df099; 
@property(readonly, assign, nonatomic) BOOL isPlaybackQueueTransactionActive;	// G=0x348dee29; 
@property(readonly, assign, nonatomic) NSArray *items;	// G=0x348df179; 
@property(readonly, assign, nonatomic) BOOL outputObscuredDueToInsufficientExternalProtection;	// G=0x348dfdc9; 
@property(copy, nonatomic) id playbackQueueCommitHandler;	// G=0x348e0605; S=0x348e0619; @synthesize=_playbackQueueCommitHandler
@property(readonly, assign, nonatomic) AVAudioSessionMediaPlayerOnly *playerAVAudioSession;	// G=0x348dfda9; 
@property(assign, nonatomic) float rate;	// G=0x348df3a1; S=0x348dfad1; 
@property(readonly, assign, nonatomic) int status;	// G=0x348dfd75; 
@property(assign, nonatomic) BOOL usesAirPlayVideoWhileAirPlayScreenIsActive;	// G=0x348dfd85; S=0x348dfc81; 
- (id)init;	// 0x348de63d
- (BOOL)_CALayerDestinationIsTVOut;	// 0x348dfdd9
// declared property getter: - (id)_displaysUsedForPlayback;	// 0x348df079
// declared property getter: - (int)_externalProtectionStatus;	// 0x348df0b9
// declared property getter: - (id)_player;	// 0x348df371
- (BOOL)_resumePlayback:(double)playback error:(id *)error;	// 0x348dfe45
- (void)_setCALayerDestinationIsTVOut:(BOOL)anOut;	// 0x348dff6d
- (void)_setClientName:(id)name;	// 0x348e0061
// declared property setter: - (void)_setDisplaysUsedForPlayback:(id)playback;	// 0x348dfab1
- (void)_setEQPreset:(int)preset;	// 0x348e01e1
- (void)_setPreferredLanguageList:(id)list;	// 0x348e01f1
- (void)_setStoppingFadeOutDuration:(float)duration;	// 0x348e0309
- (void)_setVolume:(float)volume;	// 0x348e0405
- (void)_setWantsVolumeChangesWhenPausedOrInactive:(BOOL)inactive;	// 0x348e0425
- (float)_volume;	// 0x348e0519
// declared property getter: - (int)actionAtItemEnd;	// 0x348dec79
- (id)addBoundaryTimeObserverForTimes:(id)times queue:(id)queue usingBlock:(id)block;	// 0x348dec99
- (void)advanceToNextItem;	// 0x348decb9
// declared property getter: - (BOOL)allowsAirPlayVideo;	// 0x348decd9
- (void)audioDeviceControllerAudioRoutesChanged:(id)changed;	// 0x348e0539
- (void)beginPlaybackQueueTransactionAndPause:(BOOL)pause;	// 0x348decfd
- (void)commitPlaybackQueueTransaction;	// 0x348dee41
// declared property getter: - (id)currentItem;	// 0x348defc9
// converted property getter: - (XXStruct_pwHToB)currentTime;	// 0x348df001
- (void)dealloc;	// 0x348de8bd
// declared property getter: - (int)defaultItemEQPresetType;	// 0x348e0629
// declared property getter: - (BOOL)disallowsAMRAudio;	// 0x348dfdfd
// declared property getter: - (id)error;	// 0x348df099
- (void)insertItem:(id)item afterItem:(id)item2;	// 0x348df0d9
// declared property getter: - (BOOL)isAirPlayVideoActive;	// 0x348df145
// declared property getter: - (BOOL)isClosedCaptionDisplayEnabled;	// 0x348df155
// declared property getter: - (BOOL)isPlaybackQueueTransactionActive;	// 0x348dee29
// declared property getter: - (id)items;	// 0x348df179
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x348dea3d
// declared property getter: - (BOOL)outputObscuredDueToInsufficientExternalProtection;	// 0x348dfdc9
- (void)pause;	// 0x348df199
- (void)play;	// 0x348df285
// declared property getter: - (id)playbackQueueCommitHandler;	// 0x348e0605
// declared property getter: - (id)playerAVAudioSession;	// 0x348dfda9
- (void)prepareItem:(id)item withCompletionHandler:(id)completionHandler;	// 0x348df381
// declared property getter: - (float)rate;	// 0x348df3a1
- (void)removeItem:(id)item;	// 0x348df3d1
- (void)removeTimeObserver:(id)observer;	// 0x348df3f1
- (void)seekToTime:(XXStruct_pwHToB)time;	// 0x348df539
- (void)seekToTime:(XXStruct_pwHToB)time toleranceBefore:(XXStruct_pwHToB)before toleranceAfter:(XXStruct_pwHToB)after;	// 0x348df685
// declared property setter: - (void)setActionAtItemEnd:(int)itemEnd;	// 0x348df8d1
// declared property setter: - (void)setAllowsAirPlayVideo:(BOOL)video;	// 0x348df9bd
// declared property setter: - (void)setClosedCaptionDisplayEnabled:(BOOL)enabled;	// 0x348df411
- (void)setCurrentPlaybackQueueTransactionDisplayTime:(XXStruct_pwHToB)time;	// 0x348df505
// declared property setter: - (void)setDefaultItemEQPresetType:(int)type;	// 0x348e0179
// declared property setter: - (void)setDisallowsAMRAudio:(BOOL)audio;	// 0x348e0189
// declared property setter: - (void)setPlaybackQueueCommitHandler:(id)handler;	// 0x348e0619
// declared property setter: - (void)setRate:(float)rate;	// 0x348dfad1
// declared property setter: - (void)setUsesAirPlayVideoWhileAirPlayScreenIsActive:(BOOL)active;	// 0x348dfc81
// declared property getter: - (int)status;	// 0x348dfd75
// declared property getter: - (BOOL)usesAirPlayVideoWhileAirPlayScreenIsActive;	// 0x348dfd85
@end

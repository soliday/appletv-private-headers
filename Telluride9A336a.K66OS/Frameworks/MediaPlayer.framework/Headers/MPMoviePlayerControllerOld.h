/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class MPMoviePlayerControllerInternalOld, MPMoviePlayerController;

@interface MPMoviePlayerControllerOld : NSObject {
@private
	MPMoviePlayerController *_moviePlayer;	// 4 = 0x4
	MPMoviePlayerControllerInternalOld *_internalOld;	// 8 = 0x8
}
@property(retain) id backgroundColor;	// G=0x35be5795; S=0x35be57b5; converted property
@property(assign) double initialPlaybackTime;	// G=0x35be5995; S=0x35be590d; converted property
@property(assign) int movieControlMode;	// G=0x35be58ed; S=0x35be58bd; converted property
@property(assign) int scalingMode;	// G=0x35be589d; S=0x35be57ed; converted property
+ (id)_currentMoviePlayerController;	// 0x35be5a0d
+ (BOOL)_playbackInProgress;	// 0x35be5a2d
+ (id)_playerKeysToObserve;	// 0x35be5d81
+ (void)_setCurrentMoviePlayerController:(id)controller;	// 0x35be59cd
+ (void)_setPlaybackInProgress:(BOOL)progress;	// 0x35be5a1d
+ (Class)windowClass;	// 0x35be5245
- (id)initWithContentURL:(id)contentURL;	// 0x35be53c9
- (void)_audioRouteChanged:(id)changed;	// 0x35be82ed
- (void)_bufferingStatusDidChangeNotification:(id)_bufferingStatus;	// 0x35be8731
- (void)_checkNetworkMediaType;	// 0x35be5a4d
- (void)_createPlayer;	// 0x35be6129
- (void)_delayedBeginFadeOut;	// 0x35be7721
- (void)_delayedHideOverlay;	// 0x35be86b1
- (void)_expireImplicitAudioRouteChangePlaybackRestart;	// 0x35be84d1
- (void)_itemFailedToPlay:(id)play;	// 0x35be819d
- (id)_localizedDescriptionForErrorCode:(int)errorCode;	// 0x35be7c65
- (void)_mediaServerDied:(id)died;	// 0x35be8255
- (void)_observeAVPlayer;	// 0x35be5de1
- (void)_pausePlaybackForNotification:(id)notification;	// 0x35be7f11
- (void)_play;	// 0x35be6c45
- (void)_playbackEnded:(id)ended;	// 0x35be8499
- (void)_playbackFailedWithError:(id)error;	// 0x35be7b3d
- (void)_playbackRateChangedFrom:(float)from to:(float)to;	// 0x35be83ad
- (void)_playbackStateDidChangeNotification:(id)_playbackState;	// 0x35be84f5
- (void)_playerFadeInAnimationDidEnd:(id)_playerFadeInAnimation finished:(id)finished;	// 0x35be77e1
- (void)_playerFadeOutAnimationDidEnd:(id)_playerFadeOutAnimation finished:(id)finished;	// 0x35be78e5
- (void)_playerFinishAndFadeOut;	// 0x35be743d
- (void)_preloadingComplete;	// 0x35be7e91
- (void)_setMoviePlayer:(id)player;	// 0x35be59bd
- (void)_simpleRemoteNotification:(id)notification;	// 0x35be8025
- (void)_tearDownPlayer:(BOOL)player;	// 0x35be6b29
- (void)_unobserveAVPlayer;	// 0x35be5ecd
- (void)_updateForCurrentMovieControlMode;	// 0x35be7db9
- (void)_videoViewScaleModeDidChange:(id)_videoViewScaleMode;	// 0x35be8849
- (unsigned)_visiblePartsForMovieControlMode;	// 0x35be7d4d
- (id)_volumeAudioCategory;	// 0x35be5a3d
- (void)_willBeginSuspendAnimationNotification:(id)notification;	// 0x35be7ff5
- (void)_willResignNotification:(id)notification;	// 0x35be8005
- (void)_willSuspendNotification:(id)notification;	// 0x35be7fe5
- (void)_willTerminateNotification:(id)notification;	// 0x35be8015
// converted property getter: - (id)backgroundColor;	// 0x35be5795
- (id)contentURL;	// 0x35be56e9
- (void)dealloc;	// 0x35be5261
// converted property getter: - (double)initialPlaybackTime;	// 0x35be5995
// converted property getter: - (int)movieControlMode;	// 0x35be58ed
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x35be5fb1
- (void)play;	// 0x35be5709
// converted property getter: - (int)scalingMode;	// 0x35be589d
// converted property setter: - (void)setBackgroundColor:(id)color;	// 0x35be57b5
// converted property setter: - (void)setInitialPlaybackTime:(double)time;	// 0x35be590d
// converted property setter: - (void)setMovieControlMode:(int)mode;	// 0x35be58bd
// converted property setter: - (void)setScalingMode:(int)mode;	// 0x35be57ed
- (void)stop;	// 0x35be5719
- (void)viewControllerRequestsExit:(id)exit;	// 0x35be88e5
@end


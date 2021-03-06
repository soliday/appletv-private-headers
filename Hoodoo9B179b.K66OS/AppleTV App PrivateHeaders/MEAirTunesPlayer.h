/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTVAPPBinary-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "MEAirTunesPlayer.h"

@class NSTimer, MEAirTunesMediaProvider, MEAirTunesMediaAsset;

__attribute__((visibility("hidden")))
@interface MEAirTunesPlayer : XXUnknownSuperclass {
	float _position;	// 8 = 0x8
	int _state;	// 12 = 0xc
	int _stateBeforeSeek;	// 16 = 0x10
	MEAirTunesMediaProvider *_provider;	// 20 = 0x14
	MEAirTunesMediaAsset *_asset;	// 24 = 0x18
	NSTimer *_progressNotificationTimer;	// 28 = 0x1c
	BOOL _enabled;	// 32 = 0x20
	BOOL _waitingForIdleNotification;	// 33 = 0x21
	BOOL _waitingForArtwork;	// 34 = 0x22
	BOOL _waitingForMetaData;	// 35 = 0x23
	BOOL _waitingForProgress;	// 36 = 0x24
	SCDynamicStoreRef _dynStoreRef;	// 40 = 0x28
	CFRunLoopSourceRef _dynStoreRunLoopSource;	// 44 = 0x2c
	SCPreferencesRef _prefsRef;	// 48 = 0x30
}
@property(assign) double elapsedTime;	// G=0x4bfe5; S=0x4bfb1; converted property
+ (BOOL)allowMultiplePlayers;	// 0x4bd79
+ (id)contentTypes;	// 0x4bd15
+ (BOOL)handlesVideoForType:(id)type;	// 0x4bd75
- (id)init;	// 0x4b6d5
- (void).cxx_destruct;	// 0x4c111
- (void)dealloc;	// 0x4baa5
- (void)disable;	// 0x4bc01
- (double)duration;	// 0x4bf81
// converted property getter: - (double)elapsedTime;	// 0x4bfe5
- (void)enable;	// 0x4bba9
- (id)media;	// 0x4bed5
- (void)nextMedia;	// 0x4c099
- (int)playerState;	// 0x4bf71
- (void)previousMedia;	// 0x4c021
- (void)resetToBeginning;	// 0x4c001
- (void)resume;	// 0x4bc6d
// converted property setter: - (void)setElapsedTime:(double)time;	// 0x4bfb1
- (BOOL)setMediaAtIndex:(long)index inTrackList:(id)trackList error:(id *)error;	// 0x4bd7d
- (BOOL)setState:(int)state error:(id *)error;	// 0x4bee9
- (void)zeroPlayer;	// 0x4bd11
@end

@interface MEAirTunesPlayer (Rules)
- (BOOL)_isAllowedToPlay;	// 0x4c159
@end

@interface MEAirTunesPlayer (PlaybackControl)
- (BOOL)_handlePauseActionWithError:(id *)error;	// 0x4c33d
- (BOOL)_handlePauseActionWithError:(id *)error shouldSendPause:(BOOL)pause;	// 0x4c355
- (BOOL)_handlePlayActionWithError:(id *)error;	// 0x4c3a9
- (BOOL)_handleRateChangeState:(int)state withError:(id *)error;	// 0x4c41d
- (BOOL)_handleStopActionWithError:(id *)error;	// 0x4c325
- (void)_setNewState:(int)state;	// 0x4c4bd
@end

@interface MEAirTunesPlayer (Notifications)
- (void)_daemonPostedDACPError;	// 0x4d8c1
- (void)_daemonUpdatedArtwork;	// 0x4d40d
- (void)_daemonUpdatedMetaData;	// 0x4d0e1
- (void)_daemonUpdatedProgress;	// 0x4d651
- (void)_daemonUpdatedStatus;	// 0x4cf15
- (void)_notificationDACPError:(id)error;	// 0x4d991
- (void)_notificationDeviceNamedChanged:(id)changed;	// 0x4dae5
- (void)_notificationOnOffToggleDidChange:(id)_notificationOnOffToggle;	// 0x4d9a1
- (void)_notificationOtherPlayers:(id)players;	// 0x4daf5
- (void)_notificationPasswordDidChange:(id)_notificationPassword;	// 0x4dad5
- (void)_notificationSWUpdateApplyFailed:(id)failed;	// 0x4db59
- (void)_notificationSWUpdateApplyStarted:(id)started;	// 0x4db49
- (void)_notificationTemporaryEnableStateChange:(id)change;	// 0x4da39
- (void)_registerForNotifications;	// 0x4c599
- (void)_sendProgressNotification:(id)notification;	// 0x4ccc9
- (void)_setAllowPlayback:(BOOL)playback;	// 0x4cb4d
- (BOOL)_setDaemonPreference:(id)preference value:(id)value;	// 0x4db69
- (void)_setPreferences;	// 0x4ca81
- (void)_startPlaybackProgressNotifications;	// 0x4cc11
- (void)_stopPlaybackProgressNotifications;	// 0x4cc8d
@end


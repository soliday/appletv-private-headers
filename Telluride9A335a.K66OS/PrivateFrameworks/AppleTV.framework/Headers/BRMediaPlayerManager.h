/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSingleton.h"
#import "AppleTV-Structs.h"

@class NSMutableArray, NSTimer, BRWindow, NSDictionary;

@interface BRMediaPlayerManager : BRSingleton {
@private
	NSMutableArray *_registrations;	// 4 = 0x4
	NSDictionary *_singletons;	// 8 = 0x8
	BRWindow *_shroudyMcShroud;	// 12 = 0xc
	BRWindow *_playerWindow;	// 16 = 0x10
	NSTimer *_popupDelay;	// 20 = 0x14
	NSTimer *_autoPresentTimer;	// 24 = 0x18
	NSTimer *_safetyTimer;	// 28 = 0x1c
	NSTimer *_cloudMusicStopTimer;	// 32 = 0x20
	double _autoPresentTimeout;	// 36 = 0x24
	int _playerWindowState;	// 44 = 0x2c
	BOOL _screensaverUp;	// 48 = 0x30
	float _savedVolume;	// 52 = 0x34
}
@property(assign) double autoPresentTimeout;	// G=0x34279929; S=0x342798ed; converted property
+ (void)setSingleton:(id)singleton;	// 0x3427871d
+ (id)singleton;	// 0x3427870d
- (id)init;	// 0x3427872d
- (void)_addPlayerWindowForController:(id)controller;	// 0x3427a509
- (void)_addPlayerWindowUnderShroud;	// 0x3427a72d
- (void)_addShroudWindowWithSelector:(SEL)selector;	// 0x34279f71
- (id)_autoPresentPlayer;	// 0x3427ad41
- (void)_autoPresentTimerFired:(id)fired;	// 0x3427ae45
- (int)_calculateAccessModeForExtrasAsset:(id)extrasAsset;	// 0x34279d65
- (void)_cloudMusicStopTimerFired:(id)fired;	// 0x34279ee1
- (void)_dataClientStatusChanged:(id)changed;	// 0x3427b611
- (void)_deferredPresentPlayerAndOptions:(id)options;	// 0x34279e9d
- (Class)_findRegisteredPlayerClassForType:(id)type visualContent:(BOOL)content;	// 0x342799a1
- (void)_networkStatusChanged:(id)changed;	// 0x3427b775
- (void)_playerAssetChanged:(id)changed;	// 0x3427b271
- (void)_playerControllerUserEvent:(id)event;	// 0x3427a9c1
- (void)_playerControllerWasPopped:(id)popped;	// 0x3427b8e9
- (id)_playerInstanceForAssetAtIndex:(long)index inTrackList:(id)trackList;	// 0x34279a4d
- (id)_playerInstanceForClass:(Class)aClass;	// 0x34279bf5
- (void)_playerStackBankrupt:(id)bankrupt;	// 0x3427a9e1
- (void)_playerStateChanged:(id)changed;	// 0x3427afcd
- (void)_playerVolumeChanged:(id)changed;	// 0x3427b2d1
- (void)_popupDelayTimerFired:(id)fired;	// 0x3427ad01
- (id)_presentedPlayer;	// 0x3427a479
- (id)_presentedPlayerController;	// 0x3427a4a1
- (void)_removePlayerWindow:(BOOL)window;	// 0x3427a7d9
- (void)_removePlayerWindowUnderShroud;	// 0x3427a8e9
- (void)_removeShroudWindow;	// 0x3427a415
- (void)_removeShroudWindowWithAnimation;	// 0x3427a1c5
- (void)_removeTrackPopup;	// 0x3427aa55
- (void)_safetyTimerFired:(id)fired;	// 0x3427a389
- (void)_screenSaverActivated:(id)activated;	// 0x3427b3dd
- (void)_screenSaverDismissed:(id)dismissed;	// 0x3427b449
- (void)_serverStatusChanged:(id)changed;	// 0x3427b4b1
- (void)_showTrackPopupForPlayer:(id)player;	// 0x3427aabd
- (void)_showTrackPopupWithDelayForPlayer:(id)player;	// 0x3427ac61
- (BOOL)_stopCurrentPlayerUsingNewPlayer:(id)player;	// 0x34279df9
- (void)_updateAutoPresentPlayer;	// 0x3427ae91
- (void)_updateTrackPopupForPlayer:(id)player;	// 0x3427a9f5
- (void)_userActivity:(id)activity;	// 0x3427b861
- (id)activeAudioPlayer;	// 0x34279495
- (id)activePlayer;	// 0x3427944d
- (id)airtunesAudioPlayer;	// 0x342795d9
- (id)audioPlayer;	// 0x34279581
- (id)audioVisualizer;	// 0x34279769
// converted property getter: - (double)autoPresentTimeout;	// 0x34279929
- (void)dealloc;	// 0x34278985
- (void)endPresentation;	// 0x34279401
- (id)playerForATVMediaAssetAtIndex:(long)index inTrackList:(id)trackList error:(id *)error;	// 0x34278c79
- (id)playerForMediaAsset:(id)mediaAsset error:(id *)error;	// 0x34278aed
- (id)playerForMediaAssetAtIndex:(long)index inCollection:(id)collection error:(id *)error;	// 0x34278bdd
- (id)playerForMediaAssetAtIndex:(long)index inTrackList:(id)trackList error:(id *)error;	// 0x34278b59
- (void)presentATVMediaAsset:(ATVMediaItemRef)asset options:(id)options;	// 0x3427929d
- (void)presentATVMediaAssetAtIndex:(long)index inItemList:(id)itemList options:(id)options;	// 0x342792f9
- (void)presentMediaAsset:(id)asset options:(id)options;	// 0x342791fd
- (void)presentMediaAssetAtIndex:(long)index inCollection:(id)collection options:(id)options;	// 0x342793b1
- (void)presentMediaAssetAtIndex:(long)index inTrackList:(id)trackList options:(id)options;	// 0x34279375
- (void)presentPlayer:(id)player options:(id)options;	// 0x34278cb9
- (BOOL)presentationCanBeScreenSaver;	// 0x34279425
- (id)presentationWindow;	// 0x34279415
- (void)registerPlayerClass:(Class)aClass;	// 0x34278a65
- (void)removePresentation;	// 0x342793ed
// converted property setter: - (void)setAutoPresentTimeout:(double)timeout;	// 0x342798ed
- (void)setJavascriptOverlay:(id)overlay;	// 0x34279941
- (void)setTransportControlDisabled:(BOOL)disabled;	// 0x342798c1
- (void)showVolumeControl;	// 0x34279785
- (void)stopMediaPlayersWithMediaFromProvider:(id)provider;	// 0x34279689
- (id)videoPlayer;	// 0x34279631
@end


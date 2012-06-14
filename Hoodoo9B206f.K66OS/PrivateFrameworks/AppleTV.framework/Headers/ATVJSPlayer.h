/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class BRStateMachine, ATVJSContext, BRMediaPlayer, ATVInterstitialGroup, ATVJSPlayerMoreAssetsSpinnerController;

__attribute__((visibility("hidden")))
@interface ATVJSPlayer : NSObject {
@private
	BRMediaPlayer *_activePlayer;	// 4 = 0x4
	BRStateMachine *_playlistStateMachine;	// 8 = 0x8
	ATVJSPlayerMoreAssetsSpinnerController *_moreAssetsSpinner;	// 12 = 0xc
	ATVJSContext *context;	// 16 = 0x10
	ATVInterstitialGroup *interstitialGroup;	// 20 = 0x14
}
@property(retain, nonatomic) ATVJSContext *context;	// G=0x36634ef1; S=0x36634f01; @synthesize
@property(retain) ATVInterstitialGroup *interstitialGroup;	// G=0x36634f25; S=0x36634f39; @synthesize
- (BOOL)_isNotificationForMyMerchant:(id)myMerchant;	// 0x366328b9
- (void)_loadAssetsActivity;	// 0x36633a45
- (void)_playerBufferSufficientToPlay:(id)play;	// 0x36632d95
- (void)_playerCurrentAssetChanged:(id)changed;	// 0x36633981
- (void)_playerPlaybackEnded:(id)ended;	// 0x36633a19
- (void)_playerPlaybackError:(id)error;	// 0x36632de5
- (void)_playerQualityOfServiceReport:(id)serviceReport;	// 0x36632f91
- (void)_playerStallDuringPlayback:(id)playback;	// 0x36632eb5
- (void)_playerStartedBuffering:(id)buffering;	// 0x36632ced
- (void)_playerStateChanged:(id)changed;	// 0x36632979
- (void)_playerWillStop:(id)_player;	// 0x36633005
- (void)_registerPlaylistHandlers;	// 0x36634455
- (void)_setupSpinnerActivity;	// 0x3663433d
- (void)_updateAsset:(id)asset;	// 0x366330a5
- (void)_updateEventGroupsForEventMediaAsset:(id)eventMediaAsset;	// 0x3663334d
- (void)_updateEventGroupsNotification:(id)notification;	// 0x36633915
// declared property getter: - (id)context;	// 0x36634ef1
// declared property getter: - (id)interstitialGroup;	// 0x36634f25
// declared property setter: - (void)setContext:(id)context;	// 0x36634f01
// declared property setter: - (void)setInterstitialGroup:(id)group;	// 0x36634f39
- (void)setup;	// 0x366325b1
- (void)tearDown;	// 0x36632811
@end

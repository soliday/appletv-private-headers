/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRSecureResource.h"
#import "BRVideoCacheManagerDelegate.h"
#import "BRController.h"

@class BRResumeMenuControl, BRTransportControl, BRDescriptionOverlayControl, NSTimer, BRMediaPlayer, BRMediaPlayerEventHandler, BRTextControl;

__attribute__((visibility("hidden")))
@interface BRMediaPlayerController : BRController <BRVideoCacheManagerDelegate, BRSecureResource> {
@private
	long _state;	// 88 = 0x58
	BRControl *_content;	// 92 = 0x5c
	BRControl *_audioVisualizer;	// 96 = 0x60
	BRMediaPlayer *_player;	// 100 = 0x64
	BRMediaPlayerEventHandler *_eventHandler;	// 104 = 0x68
	BRResumeMenuControl *_resumeMenu;	// 108 = 0x6c
	BRTransportControl *_transport;	// 112 = 0x70
	BRControl *_javascriptOverlay;	// 116 = 0x74
	BRDescriptionOverlayControl *_descriptionOverlay;	// 120 = 0x78
	BRTextControl *_explanatoryTextControl;	// 124 = 0x7c
	id _delegate;	// 128 = 0x80
	id _transitionAnimationDelegate;	// 132 = 0x84
	NSTimer *_suppressBackgroundProcessTimer;	// 136 = 0x88
	NSTimer *_explanatoryTextFadeTimer;	// 140 = 0x8c
	NSTimer *_readyToPlayTimer;	// 144 = 0x90
	NSTimer *_readyToPlayUpdateMinsTimer;	// 148 = 0x94
	NSTimer *_readyToPlayBandwidthHintTimer;	// 152 = 0x98
	NSTimer *_loadingSpinnerDelayTimer;	// 156 = 0x9c
	float _lastBufferingProgress;	// 160 = 0xa0
	unsigned _startChapterIndex;	// 164 = 0xa4
	float _startPosition;	// 168 = 0xa8
	double _bandwidthHintReadyToPlayMaxTimeInSeconds;	// 172 = 0xac
	BOOL _drmAttempted;	// 180 = 0xb4
	BOOL _authenticationAttempted;	// 181 = 0xb5
	BOOL _playbackInitiated;	// 182 = 0xb6
	BOOL _shouldRestoreVoiceOver;	// 183 = 0xb7
	BOOL _alwaysStopOnPop;	// 184 = 0xb8
	BOOL _transportDisabled;	// 185 = 0xb9
	BOOL _resumeMenuDisabled;	// 186 = 0xba
	BOOL _waitingForTransition;	// 187 = 0xbb
	BOOL _visualsHidden;	// 188 = 0xbc
	BOOL _inChapterMode;	// 189 = 0xbd
	BOOL _digitalExtrasMenuItemDisabled;	// 190 = 0xbe
	BOOL _itemReadyToPlay;	// 191 = 0xbf
	BOOL _supportsBandwidthHints;	// 192 = 0xc0
	BOOL _supportsPreviewBandwidthHints;	// 193 = 0xc1
}
@property(assign) BOOL alwaysStopPlaybackWhenPopped;	// G=0x32994241; S=0x32994231; converted property
@property(assign) BOOL digitalExtrasMenuItemDisabled;	// G=0x3299412d; S=0x3299411d; converted property
@property(readonly, retain) BRControl *javascriptOverlay;	// G=0x32994de9; converted property
@property(readonly, retain) BRMediaPlayer *player;	// G=0x32993f61; converted property
@property(assign) id playerDelegate;	// G=0x32994079; S=0x32994039; converted property
@property(assign) int repeatMode;	// G=0x32994211; S=0x329941f1; converted property
@property(assign) BOOL resumeMenuDisabled;	// G=0x32994099; S=0x32994089; converted property
@property(assign) unsigned startChapterIndex;	// G=0x3299414d; S=0x3299413d; converted property
@property(assign) float startPosition;	// G=0x329941a1; S=0x3299415d; converted property
@property(assign) BOOL transportControlDisabled;	// G=0x3299410d; S=0x329940a9; converted property
@property(assign) BOOL visualsHidden;	// G=0x3299433d; S=0x3299432d; converted property
+ (id)controllerForPlayer:(id)player;	// 0x32993f71
- (id)initWithPlayer:(id)player;	// 0x329938a1
- (id)_audioVisualizer;	// 0x329975d1
- (void)_authenticationCancelled:(id)cancelled;	// 0x32998675
- (void)_authenticationFailed:(id)failed;	// 0x329985f1
- (void)_authenticationSucceeded:(id)succeeded;	// 0x32998581
- (void)_authorizationAttemptComplete:(id)complete;	// 0x3299829d
- (BOOL)_cycleInfoDisplay:(id)display;	// 0x3299772d
- (id)_descriptionOverlayForType:(id)type;	// 0x3299755d
- (void)_dismissResumeMenu;	// 0x329987a9
- (BOOL)_enterAudioSubtitleChapterPicker;	// 0x32997659
- (void)_enterAuthenticationState;	// 0x32996969
- (void)_enterChaptersSubtitlesAndAlternateAudioPickingState;	// 0x32996231
- (void)_enterDRMSyncState;	// 0x32996525
- (void)_enterDownloadWaitStateWithTime:(double)time;	// 0x32995ae9
- (void)_enterErrorStateWithError:(id)error;	// 0x329966d1
- (void)_enterMediaCueingState;	// 0x329960dd
- (void)_enterMediaResolutionState;	// 0x32995269
- (void)_enterPINEntryState;	// 0x32995031
- (void)_enterPlaybackStatePlaying:(BOOL)playing;	// 0x329964c9
- (void)_enterPostResumeMenuStateAtTime:(double)time;	// 0x32995785
- (void)_enterResumeMenuState;	// 0x329953e5
- (void)_exitChaptersSubtitlesAndAlternateAudioPickingState;	// 0x329963f5
- (void)_explanatoryTextTimerFired:(id)fired;	// 0x32999035
- (BOOL)_handleContextMenuEvent:(id)event;	// 0x32998c09
- (void)_handleContextMenuSelection:(id)selection;	// 0x32998e3d
- (BOOL)_handleDownEvent:(id)event;	// 0x32998cad
- (BOOL)_handleDownloadStateEvent:(id)event;	// 0x32998eb9
- (void)_handleHideChapterMarkers;	// 0x329974b9
- (BOOL)_handleMenuButtonEvent:(id)event;	// 0x329988ad
- (void)_handleShowChapterMarkers;	// 0x32997469
- (BOOL)_handleUpDownCommandsForInfoDisplay:(id)infoDisplay;	// 0x32998db1
- (BOOL)_handleUpEvent:(id)event;	// 0x32998c55
- (void)_initiatePlayback;	// 0x32996b01
- (id)_javascriptOverlay;	// 0x32997429
- (id)_photoSet;	// 0x32997b5d
- (void)_playerAssetChanged:(id)changed;	// 0x3299814d
- (void)_playerError:(id)error;	// 0x329980fd
- (void)_playerIsReadyToPlay:(id)play;	// 0x3299842d
- (void)_playerMediaCued:(id)cued;	// 0x329984a9
- (void)_playerPlaybackEnded:(id)ended;	// 0x32997f49
- (void)_playerStateChanged:(id)changed;	// 0x32997f9d
- (void)_playerTimeSkipped:(id)skipped;	// 0x32998171
- (void)_playerVisualsChanged:(id)changed;	// 0x329980bd
- (void)_readyToPlayBandwidthHintTimerFired:(id)playBandwidthHintTimerFired;	// 0x32995fbd
- (void)_readyToPlayTimerFired:(id)playTimerFired;	// 0x32995e5d
- (void)_readyToPlayUpdateMinsTimerFired:(id)playUpdateMinsTimerFired;	// 0x32995f39
- (BOOL)_requiresLeaseForAsset:(id)asset;	// 0x32996c15
- (void)_restoreVoiceOverIfNeeded;	// 0x32997aed
- (void)_resumeItemSelected:(id)selected;	// 0x32998809
- (double)_resumeTime;	// 0x32998755
- (BOOL)_shouldShowResumeMenu;	// 0x32997bf5
- (BOOL)_shouldUseMusicContextMenu;	// 0x32997d8d
- (void)_showLoadingSpinner;	// 0x32997951
- (void)_showTransport:(id)transport;	// 0x32997525
- (void)_spinnerDelayTimerFired:(id)fired;	// 0x32997b3d
- (void)_startFromBeginningItemSelected:(id)beginningItemSelected;	// 0x3299885d
- (void)_suppressBackgroundProcesses:(id)processes;	// 0x32998f5d
- (void)_transitionAnimationFinished;	// 0x329986f9
- (id)_transportControlForType:(id)type;	// 0x329972b9
- (void)_updateExplantoryText;	// 0x32996fe5
- (void)_updatePlaybackControls;	// 0x32996c39
- (void)_updateReadyToPlayTime:(ATVMediaItemRef)playTime;	// 0x32995d95
- (void)_updateVoiceOverDisabling;	// 0x32997a1d
- (BOOL)accessibilityOutputsRangeForChildren;	// 0x32994b8d
// converted property getter: - (BOOL)alwaysStopPlaybackWhenPopped;	// 0x32994241
- (BOOL)brEventAction:(id)action;	// 0x329947a9
- (BOOL)canBeScreenSaver;	// 0x3299434d
- (void)clearPlayer;	// 0x32993fbd
- (void)controlWasActivated;	// 0x32994379
- (void)controlWasDeactivated;	// 0x3299454d
- (void)dealloc;	// 0x32993dd9
// converted property getter: - (BOOL)digitalExtrasMenuItemDisabled;	// 0x3299412d
- (BOOL)handleAssetFailedToLoad:(id)load;	// 0x32994f15
- (BOOL)handleAssetReadyToPlay:(id)play;	// 0x32994e39
// converted property getter: - (id)javascriptOverlay;	// 0x32994de9
- (void)layoutSubcontrols;	// 0x32994935
// converted property getter: - (id)player;	// 0x32993f61
// converted property getter: - (id)playerDelegate;	// 0x32994079
- (id)providersForContextMenu;	// 0x32994d0d
// converted property getter: - (int)repeatMode;	// 0x32994211
- (void)requiredScope:(unsigned *)scope accountType:(id *)type;	// 0x32994fbd
// converted property getter: - (BOOL)resumeMenuDisabled;	// 0x32994099
// converted property setter: - (void)setAlwaysStopPlaybackWhenPopped:(BOOL)popped;	// 0x32994231
// converted property setter: - (void)setDigitalExtrasMenuItemDisabled:(BOOL)disabled;	// 0x3299411d
- (void)setFailedURLDelegate:(id)delegate;	// 0x32994ced
- (void)setForwardPlaybackEndTime:(double)time;	// 0x32994df9
// converted property setter: - (void)setPlayerDelegate:(id)delegate;	// 0x32994039
// converted property setter: - (void)setRepeatMode:(int)mode;	// 0x329941f1
// converted property setter: - (void)setResumeMenuDisabled:(BOOL)disabled;	// 0x32994089
- (void)setReversePlaybackEndTime:(double)time;	// 0x32994e19
// converted property setter: - (void)setStartChapterIndex:(unsigned)index;	// 0x3299413d
- (void)setStartDate:(id)date isEstimate:(BOOL)estimate;	// 0x329941b1
// converted property setter: - (void)setStartPosition:(float)position;	// 0x3299415d
// converted property setter: - (void)setTransportControlDisabled:(BOOL)disabled;	// 0x329940a9
// converted property setter: - (void)setVisualsHidden:(BOOL)hidden;	// 0x3299432d
- (BOOL)shouldShowTrackPopup;	// 0x32994b91
- (BOOL)shouldTransitionIn;	// 0x32994c41
// converted property getter: - (unsigned)startChapterIndex;	// 0x3299414d
- (id)startDate;	// 0x329941d1
// converted property getter: - (float)startPosition;	// 0x329941a1
// converted property getter: - (BOOL)transportControlDisabled;	// 0x3299410d
// converted property getter: - (BOOL)visualsHidden;	// 0x3299433d
- (void)wasPopped;	// 0x32994651
- (void)wasPushed;	// 0x329945e5
@end


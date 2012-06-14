/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class AVPlayerInternal, NSError, NSArray;

@interface AVPlayer : NSObject {
@private
	AVPlayerInternal *_player;	// 4 = 0x4
}
@property(copy, nonatomic, setter=_setDisplaysUsedForPlayback:) NSArray *_displaysUsedForPlayback;	// G=0x35e1b7cd; S=0x35e1b811; 
@property(readonly, assign, nonatomic) int _externalProtectionStatus;	// G=0x35e1b8f1; 
@property(assign) int actionAtItemEnd;	// G=0x35e17bbd; S=0x35e17ef1; converted property
@property(assign) BOOL allowsAirPlayVideo;	// G=0x35e182cd; S=0x35e183a9; converted property
@property(readonly, assign, nonatomic, getter=isAudioPlaybackEnabledAtAllRates) BOOL audioPlaybackEnabledAtAllRates;	// G=0x35e1ba75; 
@property(assign, getter=isClosedCaptionDisplayEnabled) BOOL closedCaptionDisplayEnabled;	// G=0x35e17ffd; S=0x35e180d9; converted property
@property(readonly, assign, nonatomic) NSError *error;	// G=0x35e15781; @dynamic
@property(assign, nonatomic) float maxRateForAudioPlayback;	// G=0x35e1bd95; S=0x35e1bcf5; 
@property(assign, nonatomic) float minRateForAudioPlayback;	// G=0x35e1bc3d; S=0x35e1bb9d; 
@property(assign) float rate;	// G=0x35e17409; S=0x35e174e5; converted property
@property(readonly, assign, nonatomic) int status;	// G=0x35e15761; @dynamic
@property(assign) BOOL usesAirPlayVideoWhileAirPlayScreenIsActive;	// G=0x35e18705; S=0x35e187e1; converted property
@property(assign) BOOL waitsUntilItemsAreReadyForInspectionBeforeMakingEligibleForPlayback;	// G=0x35e15e71; S=0x35e15e91; converted property
+ (BOOL)automaticallyNotifiesObserversOfActionAtItemEnd;	// 0x35e17f05
+ (BOOL)automaticallyNotifiesObserversOfAirPlayVideoActive;	// 0x35e18651
+ (BOOL)automaticallyNotifiesObserversOfAllowsAirPlayVideo;	// 0x35e184c1
+ (BOOL)automaticallyNotifiesObserversOfClosedCaptionDisplayEnabled;	// 0x35e181f1
+ (BOOL)automaticallyNotifiesObserversOfCurrentItem;	// 0x35e15a3d
+ (BOOL)automaticallyNotifiesObserversOfRate;	// 0x35e175e5
+ (BOOL)automaticallyNotifiesObserversOfUsesAirPlayVideoWhileAirPlayScreenIsActive;	// 0x35e188f9
+ (BOOL)automaticallyNotifiesObserversOfVolume;	// 0x35e17a91
+ (void)initialize;	// 0x35e14a91
+ (id)keyPathsForValuesAffectingActionAtItemEnd;	// 0x35e17f09
+ (id)keyPathsForValuesAffectingClosedCaptionDisplayEnabled;	// 0x35e181f5
+ (id)keyPathsForValuesAffectingRate;	// 0x35e175e9
+ (id)playerWithPlayerItem:(id)playerItem;	// 0x35e14af5
+ (id)playerWithURL:(id)url;	// 0x35e14aad
- (id)init;	// 0x35e14bb5
- (id)initWithDispatchQueue:(dispatch_queue_s *)dispatchQueue;	// 0x35e15025
- (id)initWithPlayerItem:(id)playerItem;	// 0x35e14b3d
- (id)initWithURL:(id)url;	// 0x35e14b79
- (BOOL)_CALayerDestinationIsTVOut;	// 0x35e1ca45
- (int)_actionAtItemEnd;	// 0x35e17a99
- (void)_addFPListeners;	// 0x35e18e41
- (void)_addLayer:(id)layer;	// 0x35e18d91
- (void)_advanceCurrentItemAccordingToFigPlaybackItem:(OpaqueFigPlaybackItem *)figPlaybackItem;	// 0x35e15a41
- (BOOL)_airPlayVideoActive;	// 0x35e184c5
- (BOOL)_allowsAirPlayVideo;	// 0x35e1821d
- (BOOL)_applicationHasExternallyDisplayedAVPlayerLayerAndIsUnderDeviceLock;	// 0x35e1be49
- (BOOL)_attachItem:(id)item andPerformOperation:(int)operation withObject:(id)object;	// 0x35e160e1
- (void)_attachLayerToFigPlayer;	// 0x35e18c25
- (id)_cachedValueForKey:(id)key;	// 0x35e15431
- (void)_changeStatusToFailedWithError:(id)error;	// 0x35e157c5
- (void)_checkDefaultsWriteForPerformanceLogging;	// 0x35e19145
- (id)_clientName;	// 0x35e1c849
- (id)_currentItem;	// 0x35e15849
- (void)_currentItemStatusIsReadyToPlay;	// 0x35e15999
- (int)_defaultActionAtItemEnd;	// 0x35e17a95
- (void)_detachLayerFromFigPlayer;	// 0x35e18d09
- (void)_didAccessKVOForKey:(id)key;	// 0x35e154bd
- (void)_didFinishSuspension:(id)suspension;	// 0x35e1c3fd
// declared property getter: - (id)_displaysUsedForPlayback;	// 0x35e1b7cd
- (void)_enumerateItemsUsingBlock:(id)block;	// 0x35e171a9
// declared property getter: - (int)_externalProtectionStatus;	// 0x35e1b8f1
- (OpaqueFigPlayer *)_figPlayer;	// 0x35e153d1
- (id)_fpNotificationNames;	// 0x35e18da1
- (BOOL)_hasAssociatedOnscreenAVPlayerLayer;	// 0x35e1bfcd
- (BOOL)_iapdExtendedModeIsActive;	// 0x35e1c081
- (BOOL)_insertItem:(id)item afterItem:(id)item2;	// 0x35e160c1
- (BOOL)_insertPlaybackItemOfItem:(id)item inPlayerQueueAfterPlaybackItemOfItem:(id)item2;	// 0x35e15eb1
- (BOOL)_isClosedCaptionDisplayEnabled;	// 0x35e17f31
- (int)_itemOkayToPlayWhileTransitioningToBackground:(id)background;	// 0x35e1c0dd
- (id)_items;	// 0x35e17205
- (void)_logPerformanceDataForCurrentItem;	// 0x35e192cd
- (void)_logPerformanceDataForPreviousItem;	// 0x35e191ad
- (id)_playbackDisplaysForFigPlayer;	// 0x35e1b6ed
- (id)_playerLayers;	// 0x35e18bc1
- (int)_playerType;	// 0x35e153f1
- (void)_preparePlaybackItemOfItemForEnqueueing:(id)enqueueing withCompletionHandler:(id)completionHandler;	// 0x35e16061
- (id)_propertyStorage;	// 0x35e15411
- (float)_rate;	// 0x35e17389
- (void)_removeAllItems;	// 0x35e172d5
- (BOOL)_removeAnItem:(id)item;	// 0x35e17009
- (void)_removeFPListeners;	// 0x35e18fe1
- (BOOL)_removeItem:(id)item;	// 0x35e17119
- (void)_removeLayer:(id)layer;	// 0x35e18d55
- (BOOL)_resumePlayback:(double)playback error:(id *)error;	// 0x35e1cb99
- (void)_setActionAtItemEnd:(int)itemEnd allowingAdvance:(BOOL)advance;	// 0x35e17ca9
- (void)_setCALayerDestinationIsTVOut:(BOOL)anOut;	// 0x35e1c9a5
- (void)_setCachedValue:(id)value forKey:(id)key;	// 0x35e1545d
- (void)_setClientName:(id)name;	// 0x35e1c901
- (void)_setCurrentItem:(id)item;	// 0x35e158a1
// declared property setter: - (void)_setDisplaysUsedForPlayback:(id)playback;	// 0x35e1b811
- (void)_setEQPreset:(int)preset;	// 0x35e1c70d
- (void)_setFigPlaybackItemToMakeCurrent:(OpaqueFigPlaybackItem *)makeCurrent;	// 0x35e19125
- (void)_setLayer:(id)layer;	// 0x35e18b21
- (void)_setPreferredLanguageList:(id)list;	// 0x35e1caf5
- (void)_setStoppingFadeOutDuration:(float)duration;	// 0x35e1c7a9
- (void)_setVolume:(float)volume;	// 0x35e179b9
- (void)_setWantsVolumeChangesWhenPausedOrInactive:(BOOL)inactive;	// 0x35e1c66d
- (BOOL)_shouldDetachContentLayersFromFigPlayer;	// 0x35e1c39d
- (BOOL)_shouldLogPerformanceData;	// 0x35e1918d
- (dispatch_queue_s *)_stateDispatchQueue;	// 0x35e153b1
- (BOOL)_usesAirPlayVideoWhileAirPlayScreenIsActive;	// 0x35e18655
- (float)_volume;	// 0x35e17895
- (id)_weakReference;	// 0x35e15381
- (void)_willAccessKVOForKey:(id)key;	// 0x35e15491
- (void)_willEnterForeground:(id)foreground;	// 0x35e1c541
// converted property getter: - (int)actionAtItemEnd;	// 0x35e17bbd
- (id)addBoundaryTimeObserverForTimes:(id)times queue:(dispatch_queue_s *)queue usingBlock:(id)block;	// 0x35e189ed
- (void)addObserver:(id)observer forKeyPath:(id)keyPath options:(unsigned)options context:(void *)context;	// 0x35e155a9
- (id)addPeriodicTimeObserverForInterval:(XXStruct_pwHToB)interval queue:(dispatch_queue_s *)queue usingBlock:(id)block;	// 0x35e18975
// converted property getter: - (BOOL)allowsAirPlayVideo;	// 0x35e182cd
- (id)currentItem;	// 0x35e15869
- (XXStruct_pwHToB)currentTime;	// 0x35e17611
- (void)dealloc;	// 0x35e1508d
- (void)didChangeValueForKey:(id)key;	// 0x35e15549
- (dispatch_queue_s *)dispatchQueue;	// 0x35e153a1
// declared property getter: - (id)error;	// 0x35e15781
- (void)finalize;	// 0x35e152ad
- (BOOL)isAirPlayVideoActive;	// 0x35e18575
// declared property getter: - (BOOL)isAudioPlaybackEnabledAtAllRates;	// 0x35e1ba75
// converted property getter: - (BOOL)isClosedCaptionDisplayEnabled;	// 0x35e17ffd
// declared property getter: - (float)maxRateForAudioPlayback;	// 0x35e1bd95
// declared property getter: - (float)minRateForAudioPlayback;	// 0x35e1bc3d
- (void)pause;	// 0x35e18911
- (void)play;	// 0x35e188fd
- (id)playerAVAudioSession;	// 0x35e1cc95
- (void)prepareItem:(id)item withCompletionHandler:(id)completionHandler;	// 0x35e160a1
// converted property getter: - (float)rate;	// 0x35e17409
- (void)removeAudioPlaybackRateLimits;	// 0x35e1b99d
- (void)removeTimeObserver:(id)observer;	// 0x35e18a45
- (void)replaceCurrentItemWithPlayerItem:(id)playerItem;	// 0x35e18925
- (void)seekToTime:(XXStruct_pwHToB)time;	// 0x35e17671
- (void)seekToTime:(XXStruct_pwHToB)time completionHandler:(id)handler;	// 0x35e1775d
- (void)seekToTime:(XXStruct_pwHToB)time toleranceBefore:(XXStruct_pwHToB)before toleranceAfter:(XXStruct_pwHToB)after;	// 0x35e176bd
- (void)seekToTime:(XXStruct_pwHToB)time toleranceBefore:(XXStruct_pwHToB)before toleranceAfter:(XXStruct_pwHToB)after completionHandler:(id)handler;	// 0x35e177e9
// converted property setter: - (void)setActionAtItemEnd:(int)itemEnd;	// 0x35e17ef1
// converted property setter: - (void)setAllowsAirPlayVideo:(BOOL)video;	// 0x35e183a9
// converted property setter: - (void)setClosedCaptionDisplayEnabled:(BOOL)enabled;	// 0x35e180d9
// declared property setter: - (void)setMaxRateForAudioPlayback:(float)audioPlayback;	// 0x35e1bcf5
// declared property setter: - (void)setMinRateForAudioPlayback:(float)audioPlayback;	// 0x35e1bb9d
// converted property setter: - (void)setRate:(float)rate;	// 0x35e174e5
// converted property setter: - (void)setUsesAirPlayVideoWhileAirPlayScreenIsActive:(BOOL)active;	// 0x35e187e1
// converted property setter: - (void)setWaitsUntilItemsAreReadyForInspectionBeforeMakingEligibleForPlayback:(BOOL)playback;	// 0x35e15e91
// declared property getter: - (int)status;	// 0x35e15761
// converted property getter: - (BOOL)usesAirPlayVideoWhileAirPlayScreenIsActive;	// 0x35e18705
// converted property getter: - (BOOL)waitsUntilItemsAreReadyForInspectionBeforeMakingEligibleForPlayback;	// 0x35e15e71
- (void)willChangeValueForKey:(id)key;	// 0x35e154e9
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "Celestial-Structs.h"
#import <NSObject.h> // Unknown library


@interface AVController : NSObject {
@private
	AVControllerPrivate *_priv;	// 4 = 0x4
}
@property(assign) double currentTime;	// G=0x30683fad; S=0x30697d81; converted property
@property(assign) id delegate;	// G=0x30698999; S=0x30683a6d; converted property
@property(assign) BOOL muted;	// G=0x30697e25; S=0x30697ec1; converted property
@property(retain) id outputQTESFilePath;	// G=0x3068836d; S=0x30697ff1; converted property
@property(retain) id queue;	// G=0x306971f9; S=0x30681205; converted property
@property(retain) id queueFeeder;	// G=0x30697931; S=0x3068b851; converted property
@property(assign) BOOL shouldDisplayClosedCaptions;	// G=0x30698035; S=0x30683b69; converted property
@property(assign) BOOL vibrationEnabled;	// G=0x30696c09; S=0x30696c21; converted property
@property(retain) id vibrationPattern;	// G=0x30696cfd; S=0x30696c79; converted property
@property(assign) OpaqueFigVisualContext *visualContext;	// G=0x30697f79; S=0x30697f8d; converted property
@property(assign) float volume;	// G=0x30683a0d; S=0x3068bbf1; converted property
+ (id)avController;	// 0x30696eed
+ (id)avControllerWithQueue:(id)queue error:(id *)error;	// 0x30696f29
+ (id)compatibleAudioRouteForRoute:(id)route;	// 0x30696d39
+ (id)convertFigTimeDictionaryToTimeIntervalWithKey:(id)key stringURLToNSURLWithKey:(id)key2 inDictionaries:(id)dictionaries;	// 0x30696f69
+ (BOOL)isNetworkSupportedPath:(id)path;	// 0x3068aa3d
+ (BOOL)isSupportedFileExtension:(id)extension;	// 0x30696e99
+ (BOOL)isSupportedMimeType:(id)type;	// 0x30696e45
+ (void)setEnableNetworkMode:(BOOL)mode;	// 0x3068bc75
- (id)init;	// 0x30680c3d
- (id)initForStreaming;	// 0x30697069
- (id)initWithError:(id *)error;	// 0x30681061
- (id)initWithQueue:(id)queue error:(id *)error;	// 0x30680c51
- (id)initWithQueue:(id)queue fmpType:(unsigned)type error:(id *)error;	// 0x30680c85
- (id)_figPlayerNotifications;	// 0x30698a99
- (BOOL)activate:(id *)activate;	// 0x30697c6d
- (id)addNextFeederItemToQueue;	// 0x306842b1
- (void)applyDesiredRepeatMode;	// 0x30698469
- (id)attributeForKey:(id)key;	// 0x306831bd
- (void)avPlaybackQueueCurrentItemChangedNotification:(id)notification;	// 0x306819a5
- (BOOL)beginInterruption:(id *)interruption;	// 0x30697b3d
- (BOOL)beginRepeatGap;	// 0x3068c0bd
- (id)bookmarkGroupIDForAVItem:(id)avitem;	// 0x30685e39
- (double)bookmarkTimeForAVItem:(id)avitem;	// 0x30685e5d
- (BOOL)canBeginInterruption;	// 0x30697bf5
- (void)cancelAllCGImageRequests;	// 0x30698301
- (void)cancelContinueAfterRepeatGap;	// 0x30687b09
- (void)checkQueueSpace;	// 0x30684209
- (void)continueAfterRepeatGap;	// 0x30697959
- (long)copyImageForTime:(CVBufferRef *)time time:(const XXStruct_pwHToB *)time2;	// 0x306971f1
- (OpaqueFigPlaybackItem *)createItemWithURL:(id)url flags:(unsigned long)flags error:(int *)error;	// 0x30688209
- (OpaqueFigPlaybackItem *)currentFPItem;	// 0x30684059
- (id)currentItem;	// 0x30684079
- (void)currentItemHasChanged:(id)changed;	// 0x306865e9
- (void)currentItemWillChangeToItem:(id)currentItem oldItemCurrentTime:(double)time;	// 0x3068618d
// converted property getter: - (double)currentTime;	// 0x30683fad
- (void)dealloc;	// 0x3069195d
// converted property getter: - (id)delegate;	// 0x30698999
- (void)dequeueDeadItem;	// 0x30699125
- (void)dequeueFirstItem;	// 0x3068ad91
- (void)endInterruptionWithStatus:(id)status;	// 0x30697d25
- (void)ensurePlaybackQueueImmed;	// 0x3069902d
- (int)eqPreset;	// 0x30697f65
- (id)errorWithDescription:(id)description code:(long)code;	// 0x30697aa5
- (void)feederInvalidatedWithCurrentItemMoved:(id)currentItemMoved;	// 0x30697775
- (void)feederRangeWasInserted:(id)inserted;	// 0x3069720d
- (void)feederRangeWasRemoved:(id)removed;	// 0x306974cd
- (void)figPlayerNotificationHandler:(id)handler;	// 0x30699155
- (void)fmpEffectiveVolumeDidChange;	// 0x3069833d
- (void)fpItemNotification:(id)notification sender:(id)sender;	// 0x30686a49
- (CGImageRef)grabCGImageAtTime:(double)time withTimeOptions:(int)timeOptions withImageOptions:(id)imageOptions actualTime:(double *)time4;	// 0x30691529
- (BOOL)havePlayedCurrentItem;	// 0x30697945
- (unsigned)indexOfCurrentQueueFeederItem;	// 0x3068ab25
- (BOOL)isCurrentItemReady;	// 0x30698fe1
- (BOOL)isNewImageAvailableForTime:(const XXStruct_pwHToB *)time willNeverBeAvailable:(BOOL *)available;	// 0x306971ed
- (BOOL)isValid;	// 0x30698a35
- (void)itemHasFinishedPlayingNotification:(id)notification;	// 0x3068c011
- (id)lkLayer;	// 0x30698021
- (void)logPerformanceDataForCurrentItem;	// 0x30698cdd
- (void)makeCurrentItemReady;	// 0x30687b45
- (void)makeError:(id *)error withDescription:(id)description code:(long)code;	// 0x3068b811
// converted property getter: - (BOOL)muted;	// 0x30697e25
- (BOOL)okToNotifyFromThisThread;	// 0x306864b9
// converted property getter: - (id)outputQTESFilePath;	// 0x3068836d
- (void)pause;	// 0x3068ab11
- (BOOL)play:(id *)play;	// 0x3069796d
- (BOOL)playNextItem:(id *)item;	// 0x3068ad21
- (AVControllerPrivate *)privateStorage;	// 0x306971dd
// converted property getter: - (id)queue;	// 0x306971f9
// converted property getter: - (id)queueFeeder;	// 0x30697931
- (float)rate;	// 0x3068674d
- (void)rateDidChangeToRate:(float)rate;	// 0x30689a51
- (void)registerTimeMarkerObserver:(id)observer forItem:(id)item times:(id)times context:(id)context;	// 0x30698e71
- (void)removeObserver:(id)observer fromTMOArray:(id)tmoarray;	// 0x3068b4cd
- (int)repeatMode;	// 0x3068b83d
- (void)requestAsyncCGImagesAtTimes:(id)times requestIDs:(id)ids withTimeOptions:(int)timeOptions withImageOptions:(id)imageOptions;	// 0x30698139
- (void)requestAsyncCGImagesAtTimes:(id)times withTimeOptions:(int)timeOptions withImageOptions:(id)imageOptions;	// 0x30698115
- (BOOL)resumePlayback:(double)playback error:(id *)error;	// 0x30697989
- (void)safeSubtitleCommandPosted:(void *)posted;	// 0x306989ad
- (void)scheduleQueueSpaceCheck;	// 0x30687929
- (void)scheduleUpdateTimeMarkerObservations;	// 0x306867ad
- (void)seekToDate:(id)date;	// 0x30697da5
- (void)setAVItemClass:(Class)aClass;	// 0x30697055
- (void)setApplyVideoTrackMatrix;	// 0x30698049
- (BOOL)setAttribute:(id)attribute forKey:(id)key error:(id *)error;	// 0x30681c6d
// converted property setter: - (void)setCurrentTime:(double)time;	// 0x30697d81
- (void)setCurrentTime:(double)time options:(int)options;	// 0x3068b909
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x30683a6d
- (void)setEQPreset:(int)preset;	// 0x30683abd
- (BOOL)setIndexOfCurrentQueueFeederItem:(unsigned)currentQueueFeederItem error:(id *)error;	// 0x3068ab91
- (void)setLayer:(id)layer;	// 0x30683c6d
// converted property setter: - (void)setMuted:(BOOL)muted;	// 0x30697ec1
// converted property setter: - (void)setOutputQTESFilePath:(id)path;	// 0x30697ff1
- (BOOL)setPickedRouteWithPassword:(id)password withPassword:(id)password2;	// 0x3069904d
// converted property setter: - (void)setQueue:(id)queue;	// 0x30681205
// converted property setter: - (void)setQueueFeeder:(id)feeder;	// 0x3068b851
- (void)setQueueFeeder:(id)feeder withIndex:(int)index;	// 0x30683d11
- (BOOL)setRate:(float)rate error:(id *)error;	// 0x306879b5
- (BOOL)setRepeatMode:(int)mode;	// 0x30683ce1
// converted property setter: - (void)setShouldDisplayClosedCaptions:(BOOL)displayClosedCaptions;	// 0x30683b69
- (void)setSubtitleRecipient:(id)recipient;	// 0x30683b25
// converted property setter: - (void)setVibrationEnabled:(BOOL)enabled;	// 0x30696c21
// converted property setter: - (void)setVibrationPattern:(id)pattern;	// 0x30696c79
// converted property setter: - (void)setVisualContext:(OpaqueFigVisualContext *)context;	// 0x30697f8d
// converted property setter: - (void)setVolume:(float)volume;	// 0x3068bbf1
- (BOOL)shouldBeginPlayingItem:(id)item error:(id *)error;	// 0x30688da9
// converted property getter: - (BOOL)shouldDisplayClosedCaptions;	// 0x30698035
- (void)stepByCount:(int)count;	// 0x30697df5
- (void)unregisterTimeMarkerObserver:(id)observer forItem:(id)item;	// 0x3068b361
- (long)updateActionAtEnd;	// 0x30683b7d
- (void)updateTimeMarkerObservations;	// 0x30688fc1
// converted property getter: - (BOOL)vibrationEnabled;	// 0x30696c09
// converted property getter: - (id)vibrationPattern;	// 0x30696cfd
// converted property getter: - (OpaqueFigVisualContext *)visualContext;	// 0x30697f79
// converted property getter: - (float)volume;	// 0x30683a0d
@end


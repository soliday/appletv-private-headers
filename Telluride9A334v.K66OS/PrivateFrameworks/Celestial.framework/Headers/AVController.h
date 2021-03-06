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
@property(assign) double currentTime;	// G=0x3503cd89; S=0x35052001; converted property
@property(assign) id delegate;	// G=0x35050231; S=0x3503c835; converted property
@property(assign) BOOL muted;	// G=0x35051ee9; S=0x35051e49; converted property
@property(retain) id outputQTESFilePath;	// G=0x35041399; S=0x35051db9; converted property
@property(retain) id queue;	// G=0x350501a5; S=0x35039ed9; converted property
@property(retain) id queueFeeder;	// G=0x350501b9; S=0x350449d9; converted property
@property(assign) BOOL shouldDisplayClosedCaptions;	// G=0x3505021d; S=0x3503c92d; converted property
@property(assign) BOOL vibrationEnabled;	// G=0x35050049; S=0x35050061; converted property
@property(retain) id vibrationPattern;	// G=0x35050139; S=0x350500b9; converted property
@property(assign) OpaqueFigVisualContext *visualContext;	// G=0x350501f5; S=0x35051de9; converted property
@property(assign) float volume;	// G=0x3503c7d1; S=0x35044dad; converted property
+ (id)avController;	// 0x35050381
+ (id)avControllerWithQueue:(id)queue error:(id *)error;	// 0x35050341
+ (id)compatibleAudioRouteForRoute:(id)route;	// 0x3505046d
+ (id)convertFigTimeDictionaryToTimeIntervalWithKey:(id)key stringURLToNSURLWithKey:(id)key2 inDictionaries:(id)dictionaries;	// 0x35050245
+ (BOOL)isNetworkSupportedPath:(id)path;	// 0x35043b55
+ (BOOL)isSupportedFileExtension:(id)extension;	// 0x350503bd
+ (BOOL)isSupportedMimeType:(id)type;	// 0x35050415
+ (void)setEnableNetworkMode:(BOOL)mode;	// 0x35044e31
- (id)init;	// 0x350398d9
- (id)initForStreaming;	// 0x35052b89
- (id)initWithError:(id *)error;	// 0x35039d21
- (id)initWithQueue:(id)queue error:(id *)error;	// 0x350398ed
- (id)initWithQueue:(id)queue fmpType:(unsigned)type error:(id *)error;	// 0x35039921
- (id)_figPlayerNotifications;	// 0x350511f1
- (BOOL)activate:(id *)activate;	// 0x3505207d
- (id)addNextFeederItemToQueue;	// 0x3503d0a1
- (void)applyDesiredRepeatMode;	// 0x3505143d
- (id)attributeForKey:(id)key;	// 0x3503bfc5
- (void)avPlaybackQueueCurrentItemChangedNotification:(id)notification;	// 0x3503a69d
- (BOOL)beginInterruption:(id *)interruption;	// 0x350521b5
- (BOOL)beginRepeatGap;	// 0x35045269
- (id)bookmarkGroupIDForAVItem:(id)avitem;	// 0x3503ed05
- (double)bookmarkTimeForAVItem:(id)avitem;	// 0x3503ed29
- (BOOL)canBeginInterruption;	// 0x35052141
- (void)cancelAllCGImageRequests;	// 0x35051a95
- (void)cancelContinueAfterRepeatGap;	// 0x35040b0d
- (void)checkQueueSpace;	// 0x3503cff9
- (void)continueAfterRepeatGap;	// 0x35052455
- (long)copyImageForTime:(CVBufferRef *)time time:(const XXStruct_pwHToB *)time2;	// 0x3505019d
- (OpaqueFigPlaybackItem *)createItemWithURL:(id)url flags:(unsigned long)flags error:(int *)error;	// 0x3504123d
- (OpaqueFigPlaybackItem *)currentFPItem;	// 0x3503ce31
- (id)currentItem;	// 0x3503ce51
- (void)currentItemHasChanged:(id)changed;	// 0x3503f4f1
- (void)currentItemWillChangeToItem:(id)currentItem oldItemCurrentTime:(double)time;	// 0x3503f085
// converted property getter: - (double)currentTime;	// 0x3503cd89
- (void)dealloc;	// 0x3504acd1
// converted property getter: - (id)delegate;	// 0x35050231
- (void)dequeueDeadItem;	// 0x35050d89
- (void)dequeueFirstItem;	// 0x35043ef1
- (void)endInterruptionWithStatus:(id)status;	// 0x35052025
- (void)ensurePlaybackQueueImmed;	// 0x35050ea1
- (int)eqPreset;	// 0x350501e1
- (id)errorWithDescription:(id)description code:(long)code;	// 0x35052279
- (void)feederInvalidatedWithCurrentItemMoved:(id)currentItemMoved;	// 0x35052469
- (void)feederRangeWasInserted:(id)inserted;	// 0x350528d1
- (void)feederRangeWasRemoved:(id)removed;	// 0x35052625
- (void)figPlayerNotificationHandler:(id)handler;	// 0x35050571
- (void)fmpEffectiveVolumeDidChange;	// 0x35051979
- (void)fpItemNotification:(id)notification sender:(id)sender;	// 0x3503f959
- (CGImageRef)grabCGImageAtTime:(double)time withTimeOptions:(int)timeOptions withImageOptions:(id)imageOptions actualTime:(double *)time4;	// 0x3504a7f9
- (BOOL)havePlayedCurrentItem;	// 0x350501cd
- (unsigned)indexOfCurrentQueueFeederItem;	// 0x35043c55
- (BOOL)isCurrentItemReady;	// 0x35050ec1
- (BOOL)isNewImageAvailableForTime:(const XXStruct_pwHToB *)time willNeverBeAvailable:(BOOL *)available;	// 0x35050199
- (BOOL)isValid;	// 0x3505134d
- (void)itemHasFinishedPlayingNotification:(id)notification;	// 0x350451bd
- (id)lkLayer;	// 0x35050209
- (void)logPerformanceDataForCurrentItem;	// 0x35051079
- (void)makeCurrentItemReady;	// 0x35040b4d
- (void)makeError:(id *)error withDescription:(id)description code:(long)code;	// 0x35044999
// converted property getter: - (BOOL)muted;	// 0x35051ee9
- (BOOL)okToNotifyFromThisThread;	// 0x3503f3b9
// converted property getter: - (id)outputQTESFilePath;	// 0x35041399
- (void)pause;	// 0x35043c41
- (BOOL)play:(id *)play;	// 0x35052439
- (BOOL)playNextItem:(id *)item;	// 0x35043e81
- (AVControllerPrivate *)privateStorage;	// 0x35050189
// converted property getter: - (id)queue;	// 0x350501a5
// converted property getter: - (id)queueFeeder;	// 0x350501b9
- (float)rate;	// 0x3503f651
- (void)rateDidChangeToRate:(float)rate;	// 0x35042b11
- (void)registerTimeMarkerObserver:(id)observer forItem:(id)item times:(id)times context:(id)context;	// 0x35050f11
- (void)removeObserver:(id)observer fromTMOArray:(id)tmoarray;	// 0x35044645
- (int)repeatMode;	// 0x350449c5
- (void)requestAsyncCGImagesAtTimes:(id)times requestIDs:(id)ids withTimeOptions:(int)timeOptions withImageOptions:(id)imageOptions;	// 0x35051acd
- (void)requestAsyncCGImagesAtTimes:(id)times withTimeOptions:(int)timeOptions withImageOptions:(id)imageOptions;	// 0x35051ccd
- (BOOL)resumePlayback:(double)playback error:(id *)error;	// 0x35052311
- (void)safeSubtitleCommandPosted:(void *)posted;	// 0x350513b5
- (void)scheduleQueueSpaceCheck;	// 0x35040939
- (void)scheduleUpdateTimeMarkerObservations;	// 0x3503f6ad
- (void)seekToDate:(id)date;	// 0x35051fb5
- (void)setAVItemClass:(Class)aClass;	// 0x35050175
- (void)setApplyVideoTrackMatrix;	// 0x35051cf1
- (BOOL)setAttribute:(id)attribute forKey:(id)key error:(id *)error;	// 0x3503a955
// converted property setter: - (void)setCurrentTime:(double)time;	// 0x35052001
- (void)setCurrentTime:(double)time options:(int)options;	// 0x35044a91
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x3503c835
- (void)setEQPreset:(int)preset;	// 0x3503c87d
- (BOOL)setIndexOfCurrentQueueFeederItem:(unsigned)currentQueueFeederItem error:(id *)error;	// 0x35043cc1
- (void)setLayer:(id)layer;	// 0x3503ca31
// converted property setter: - (void)setMuted:(BOOL)muted;	// 0x35051e49
// converted property setter: - (void)setOutputQTESFilePath:(id)path;	// 0x35051db9
- (BOOL)setPickedRouteWithPassword:(id)password withPassword:(id)password2;	// 0x35050db9
// converted property setter: - (void)setQueue:(id)queue;	// 0x35039ed9
// converted property setter: - (void)setQueueFeeder:(id)feeder;	// 0x350449d9
- (void)setQueueFeeder:(id)feeder withIndex:(int)index;	// 0x3503cad1
- (BOOL)setRate:(float)rate error:(id *)error;	// 0x350409c1
- (BOOL)setRepeatMode:(int)mode;	// 0x3503caa1
// converted property setter: - (void)setShouldDisplayClosedCaptions:(BOOL)displayClosedCaptions;	// 0x3503c92d
- (void)setSubtitleRecipient:(id)recipient;	// 0x3503c8e9
// converted property setter: - (void)setVibrationEnabled:(BOOL)enabled;	// 0x35050061
// converted property setter: - (void)setVibrationPattern:(id)pattern;	// 0x350500b9
// converted property setter: - (void)setVisualContext:(OpaqueFigVisualContext *)context;	// 0x35051de9
// converted property setter: - (void)setVolume:(float)volume;	// 0x35044dad
- (BOOL)shouldBeginPlayingItem:(id)item error:(id *)error;	// 0x35041e69
// converted property getter: - (BOOL)shouldDisplayClosedCaptions;	// 0x3505021d
- (void)stepByCount:(int)count;	// 0x35051f85
- (void)unregisterTimeMarkerObserver:(id)observer forItem:(id)item;	// 0x350444c1
- (long)updateActionAtEnd;	// 0x3503c941
- (void)updateTimeMarkerObservations;	// 0x35042071
// converted property getter: - (BOOL)vibrationEnabled;	// 0x35050049
// converted property getter: - (id)vibrationPattern;	// 0x35050139
// converted property getter: - (OpaqueFigVisualContext *)visualContext;	// 0x350501f5
// converted property getter: - (float)volume;	// 0x3503c7d1
@end


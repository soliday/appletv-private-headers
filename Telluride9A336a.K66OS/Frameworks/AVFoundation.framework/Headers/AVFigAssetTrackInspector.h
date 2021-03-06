/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVAssetTrackInspector.h"

@class AVWeakReference, NSMutableArray;

@interface AVFigAssetTrackInspector : AVAssetTrackInspector {
@private
	OpaqueFigAssetTrack *_figAssetTrack;	// 8 = 0x8
	OpaqueFigSimpleMutex *_loadingMutex;	// 12 = 0xc
	OpaqueFigSemaphore *_playabilityValidationSemaphore;	// 16 = 0x10
	dispatch_queue_s *_completionHandlerQueue;	// 20 = 0x14
	int _playableStatus;	// 24 = 0x18
	int _playableResult;	// 28 = 0x1c
	BOOL _playable;	// 32 = 0x20
	NSMutableArray *_loadingBatches;	// 36 = 0x24
	AVWeakReference *_weakReferenceToAsset;	// 40 = 0x28
}
@property(readonly, assign, getter=isPlayable) BOOL playable;	// G=0x314ae391; converted property
- (void)_addFigAssetTrackNotifications;	// 0x314aec45
- (dispatch_queue_s *)_completionHandlerQueue;	// 0x314aced5
- (void)_ensureAllDependenciesOfKeyAreLoaded:(id)keyAreLoaded;	// 0x314ae5cd
- (OpaqueFigAssetTrack *)_figAssetTrack;	// 0x314acec5
- (id)_initWithAsset:(id)asset trackID:(int)anId trackIndex:(long)index;	// 0x314aee85
- (int)_loadStatusForFigAssetTrackProperty:(id)figAssetTrackProperty returningError:(int *)error;	// 0x314aeaf9
- (id)_loadingBatches;	// 0x314acef5
- (OpaqueFigSimpleMutex *)_loadingMutex;	// 0x314acee5
- (OpaqueFigSemaphore *)_playabilityValidationSemaphore;	// 0x314acf05
- (void)_removeFigAssetTrackNotifications;	// 0x314aeb7d
- (void *)_valueAsCFTypeForProperty:(CFStringRef)property;	// 0x314ae4b9
- (id)asset;	// 0x314ae5ad
- (id)availableMetadataFormats;	// 0x314adbb1
- (id)commonMetadata;	// 0x314adbf5
- (void)dealloc;	// 0x314aedbd
- (float)estimatedDataRate;	// 0x314ae2a5
- (id)extendedLanguageTag;	// 0x314ae265
- (void)finalize;	// 0x314aed25
- (id)formatDescriptions;	// 0x314ae499
- (unsigned)hash;	// 0x314ad959
- (BOOL)isEnabled;	// 0x314ae369
- (BOOL)isEqual:(id)equal;	// 0x314ad9a1
- (BOOL)isExcludedFromAutoselectionInTrackGroup;	// 0x314ada11
// converted property getter: - (BOOL)isPlayable;	// 0x314ae391
- (BOOL)isSelfContained;	// 0x314ae341
- (id)languageCode;	// 0x314ae285
- (int)layer;	// 0x314ae1f1
- (void)loadValuesAsynchronouslyForKeys:(id)keys completionHandler:(id)handler;	// 0x314ae689
- (id)mediaType;	// 0x314ae509
- (id)metadataForFormat:(id)format;	// 0x314ada39
- (CGSize)naturalSize;	// 0x314ae23d
- (int)naturalTimeScale;	// 0x314ae2d9
- (float)nominalFrameRate;	// 0x314ae1a9
- (CGAffineTransform)preferredTransform;	// 0x314ae215
- (float)preferredVolume;	// 0x314ae1c9
- (id)segmentForTrackTime:(XXStruct_pwHToB)trackTime;	// 0x314add0d
- (id)segments;	// 0x314adff5
- (void)setIsPlayable:(BOOL)playable result:(long)result;	// 0x314acf15
- (int)statusOfValueForKey:(id)key error:(id *)error;	// 0x314ae99d
- (XXStruct_yD8eWC)timeRange;	// 0x314ae2f9
- (long long)totalSampleDataLength;	// 0x314ae321
- (int)trackID;	// 0x314ae579
@end


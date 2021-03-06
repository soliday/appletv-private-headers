/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVAssetInspectorLoader.h"

@class NSDictionary, NSMutableArray, AVAssetCache, AVAssetInspector, NSURL;

@interface AVFigAssetInspectorLoader : AVAssetInspectorLoader {
@private
	OpaqueFigAsset *_figAsset;	// 8 = 0x8
	OpaqueFigFormatReader *_formatReader;	// 12 = 0xc
	long _figAssetCreationStatus;	// 16 = 0x10
	dispatch_queue_s *_completionHandlerQueue;	// 20 = 0x14
	OpaqueFigSimpleMutex *_loadingMutex;	// 24 = 0x18
	OpaqueFigSemaphore *_playabilityValidationSemaphore;	// 28 = 0x1c
	int _playableStatus;	// 32 = 0x20
	long _playableResult;	// 36 = 0x24
	BOOL _playable;	// 40 = 0x28
	OpaqueFigSemaphore *_cameraRollValidationSemaphor;	// 44 = 0x2c
	int _compatibleWithSavedPhotosAlbumStatus;	// 48 = 0x30
	long _compatibleWithSavedPhotosAlbumResult;	// 52 = 0x34
	BOOL _compatibleWithSavedPhotosAlbum;	// 56 = 0x38
	NSMutableArray *_loadingBatches;	// 60 = 0x3c
	BOOL _loadingCanceled;	// 64 = 0x40
	AVAssetInspector *_assetInspector;	// 68 = 0x44
	AVAssetCache *_assetCache;	// 72 = 0x48
	BOOL _shouldMatchDataInCacheByURLPathComponentOnly;	// 76 = 0x4c
	BOOL _shouldMatchDataInCacheByURLWithoutQueryComponent;	// 77 = 0x4d
	NSURL *_downloadDestinationURL;	// 80 = 0x50
	NSDictionary *_validationPlist;	// 84 = 0x54
	unsigned _referenceRestrictions;	// 88 = 0x58
}
@property(readonly, retain) AVAssetCache *assetCache;	// G=0x35e74d75; converted property
@property(readonly, retain) AVAssetInspector *assetInspector;	// G=0x35e73ab9; converted property
@property(readonly, assign, getter=isCompatibleWithSavedPhotosAlbum) BOOL compatibleWithSavedPhotosAlbum;	// G=0x35e74b15; converted property
@property(readonly, retain) NSURL *downloadDestinationURL;	// G=0x35e74da5; converted property
@property(readonly, assign, getter=isPlayable) BOOL playable;	// G=0x35e74865; converted property
@property(readonly, assign) unsigned referenceRestrictions;	// G=0x35e74d65; converted property
@property(readonly, assign) BOOL shouldMatchDataInCacheByURLPathComponentOnly;	// G=0x35e74d85; converted property
@property(readonly, assign) BOOL shouldMatchDataInCacheByURLWithoutQueryComponent;	// G=0x35e74d95; converted property
@property(readonly, assign, nonatomic) NSDictionary *validationPlist;	// G=0x35e74db5; @synthesize=_validationPlist
+ (id)_figAssetPropertiesForKeys;	// 0x35e72b69
+ (id)_figAssetTrackPropertiesForKeys;	// 0x35e72b95
- (id)initWithURL:(id)url options:(id)options;	// 0x35e72bc1
- (id)URL;	// 0x35e74c75
- (void)_addFigAssetNotifications;	// 0x35e73161
- (OpaqueFigSemaphore *)_cameraRollValidationSemaphor;	// 0x35e73b71
- (dispatch_queue_s *)_completionHandlerQueue;	// 0x35e73b31
- (void)_ensureAllDependenciesOfKeyAreLoaded:(id)keyAreLoaded;	// 0x35e746fd
- (OpaqueFigAsset *)_figAsset;	// 0x35e73b21
- (OpaqueFigFormatReader *)_formatReader;	// 0x35e73a49
- (BOOL)_isStreaming;	// 0x35e74ced
- (int)_loadStatusForProperty:(id)property returningError:(int *)error;	// 0x35e73b81
- (id)_loadingBatches;	// 0x35e73b51
- (OpaqueFigSimpleMutex *)_loadingMutex;	// 0x35e73b41
- (OpaqueFigSemaphore *)_playabilityValidationSemaphore;	// 0x35e73b61
- (void)_removeFigAssetNotifications;	// 0x35e73701
// converted property getter: - (id)assetCache;	// 0x35e74d75
// converted property getter: - (id)assetInspector;	// 0x35e73ab9
- (void)cancelLoading;	// 0x35e745c5
- (id)chapterGroupInfo;	// 0x35e74c4d
- (void)dealloc;	// 0x35e737f1
// converted property getter: - (id)downloadDestinationURL;	// 0x35e74da5
- (XXStruct_pwHToB)duration;	// 0x35e747c1
- (void)finalize;	// 0x35e738f9
- (BOOL)hasProtectedContent;	// 0x35e74cc5
- (unsigned)hash;	// 0x35e73a01
// converted property getter: - (BOOL)isCompatibleWithSavedPhotosAlbum;	// 0x35e74b15
- (BOOL)isComposable;	// 0x35e74a7d
- (BOOL)isEqual:(id)equal;	// 0x35e73991
- (BOOL)isExportable;	// 0x35e749c5
// converted property getter: - (BOOL)isPlayable;	// 0x35e74865
- (BOOL)isReadable;	// 0x35e74a21
- (void)loadValuesAsynchronouslyForKeys:(id)keys completionHandler:(id)handler;	// 0x35e73e0d
- (void)loadValuesAsynchronouslyForKeys:(id)keys keysForCollectionKeys:(id)collectionKeys completionHandler:(id)handler;	// 0x35e73e2d
- (id)lyrics;	// 0x35e74801
// converted property getter: - (unsigned)referenceRestrictions;	// 0x35e74d65
- (id)resolvedURL;	// 0x35e74c9d
- (void)setIsCompatibleWithSavedPhotosAlbum:(BOOL)savedPhotosAlbum result:(long)result;	// 0x35e74ad9
- (void)setIsPlayable:(BOOL)playable result:(long)result;	// 0x35e74829
// converted property getter: - (BOOL)shouldMatchDataInCacheByURLPathComponentOnly;	// 0x35e74d85
// converted property getter: - (BOOL)shouldMatchDataInCacheByURLWithoutQueryComponent;	// 0x35e74d95
- (int)statusOfValueForKey:(id)key error:(id *)error;	// 0x35e73be9
// declared property getter: - (id)validationPlist;	// 0x35e74db5
@end


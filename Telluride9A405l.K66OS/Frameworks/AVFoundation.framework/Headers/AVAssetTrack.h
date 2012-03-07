/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library
#import "AVAsynchronousKeyValueLoading.h"
#import "NSCopying.h"

@class AVAssetTrackInternal, AVAsset;

@interface AVAssetTrack : NSObject <NSCopying, AVAsynchronousKeyValueLoading> {
@private
	AVAssetTrackInternal *_track;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) AVAsset *asset;	// G=0x34697469; 
@property(readonly, assign, nonatomic) int trackID;	// G=0x34697495; 
+ (id)keyPathsForValuesAffectingTimeRange;	// 0x3469793d
+ (id)mediaCharacteristicsForMediaTypes;	// 0x34697999
+ (id)mediaTypesForMediaCharacteristics;	// 0x3469796d
- (id)init;	// 0x346973f1
- (id)_allReferencedTracksWithReferenceType:(id)referenceType;	// 0x34697ead
- (id)_assetTrackInspector;	// 0x346973d1
- (id)_associatedSubtitleTrack;	// 0x34697a89
- (BOOL)_containsMixedSubtitles;	// 0x346977d1
- (BOOL)_containsOnlyForcedSubtitles;	// 0x346977b5
- (id)_fallbackTrack;	// 0x34697e8d
- (id)_firstReferencedTrackWithReferenceType:(id)referenceType;	// 0x34697fd5
- (BOOL)_hasMultipleNonEmptyEdits;	// 0x346ca14d
- (id)_initWithAsset:(id)asset trackID:(int)anId;	// 0x34697415
- (id)_initWithAsset:(id)asset trackID:(int)anId trackIndex:(long)index;	// 0x34698741
- (id)_initWithAsset:(id)asset trackIndex:(long)index;	// 0x34697439
- (BOOL)_isAuxiliaryContent;	// 0x34697715
- (BOOL)_isMainProgramContent;	// 0x34697791
- (id)_pairedForcedOnlySubtitlesTrack;	// 0x34697a69
- (BOOL)_subtitleFormatDescriptionMatchesTextDisplayFlags:(unsigned)flags flagsMask:(unsigned)mask;	// 0x34698491
- (id)_taggedCharacteristics;	// 0x34698559
// declared property getter: - (id)asset;	// 0x34697469
- (id)availableMetadataFormats;	// 0x3469812d
- (id)commonMetadata;	// 0x34698159
- (id)copyWithZone:(NSZone *)zone;	// 0x34697459
- (void)dealloc;	// 0x346986a1
- (id)description;	// 0x346985d9
- (float)estimatedDataRate;	// 0x346983b5
- (id)extendedLanguageTag;	// 0x3469835d
- (void)finalize;	// 0x3469865d
- (id)formatDescriptions;	// 0x34697579
- (BOOL)hasMediaCharacteristic:(id)characteristic;	// 0x346977f1
- (unsigned)hash;	// 0x346979c5
- (BOOL)isEnabled;	// 0x346975d9
- (BOOL)isEqual:(id)equal;	// 0x346979f1
- (BOOL)isExcludedFromAutoselectionInTrackGroup;	// 0x346980c9
- (BOOL)isPlayable;	// 0x346975a5
- (BOOL)isSelfContained;	// 0x3469760d
- (id)languageCode;	// 0x34698389
- (int)layer;	// 0x3469829d
- (void)loadValuesAsynchronouslyForKeys:(id)keys completionHandler:(id)handler;	// 0x34697511
- (id)locale;	// 0x34698331
- (id)mediaCharacteristics;	// 0x34698441
- (id)mediaType;	// 0x3469754d
- (id)metadataForFormat:(id)format;	// 0x346980fd
- (CGSize)naturalSize;	// 0x346982fd
- (int)naturalTimeScale;	// 0x346983e1
- (float)nominalFrameRate;	// 0x34698245
- (CGAffineTransform)preferredTransform;	// 0x346982c9
- (float)preferredVolume;	// 0x34698271
- (XXStruct_pwHToB)samplePresentationTimeForTrackTime:(XXStruct_pwHToB)trackTime;	// 0x34698185
- (id)segmentForTrackTime:(XXStruct_pwHToB)trackTime;	// 0x346981dd
- (id)segments;	// 0x34698219
- (int)statusOfValueForKey:(id)key;	// 0x346974c1
- (int)statusOfValueForKey:(id)key error:(id *)error;	// 0x346974d5
- (XXStruct_yD8eWC)timeRange;	// 0x3469840d
- (long long)totalSampleDataLength;	// 0x34697641
// declared property getter: - (int)trackID;	// 0x34697495
@end

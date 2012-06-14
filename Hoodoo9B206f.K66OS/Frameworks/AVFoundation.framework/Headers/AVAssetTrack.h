/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVAsynchronousKeyValueLoading.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class AVAssetTrackInternal, AVAsset;

@interface AVAssetTrack : NSObject <NSCopying, AVAsynchronousKeyValueLoading> {
@private
	AVAssetTrackInternal *_track;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) AVAsset *asset;	// G=0x32691951; 
@property(readonly, assign, nonatomic) int trackID;	// G=0x3269199d; 
+ (id)keyPathsForValuesAffectingTimeRange;	// 0x32692a61
+ (id)mediaCharacteristicsForMediaTypes;	// 0x326912c5
+ (id)mediaTypesForMediaCharacteristics;	// 0x32691629
- (id)init;	// 0x32691771
- (id)_allReferencedTracksWithReferenceType:(id)referenceType;	// 0x32692469
- (id)_assetTrackInspector;	// 0x3269197d
- (id)_associatedSubtitleTrack;	// 0x326925b1
- (BOOL)_containsMixedSubtitles;	// 0x32691e11
- (BOOL)_containsOnlyForcedSubtitles;	// 0x32691df1
- (id)_fallbackTrack;	// 0x32692591
- (id)_firstReferencedTrackWithReferenceType:(id)referenceType;	// 0x32692371
- (BOOL)_hasMultipleNonEmptyEdits;	// 0x326c725d
- (id)_initWithAsset:(id)asset trackID:(int)anId;	// 0x32691795
- (id)_initWithAsset:(id)asset trackID:(int)anId trackIndex:(long)index;	// 0x32691655
- (id)_initWithAsset:(id)asset trackIndex:(long)index;	// 0x326917b9
- (BOOL)_isAuxiliaryContent;	// 0x32691c8d
- (BOOL)_isMainProgramContent;	// 0x32691d0d
- (id)_pairedForcedOnlySubtitlesTrack;	// 0x326929a9
- (BOOL)_subtitleFormatDescriptionMatchesTextDisplayFlags:(unsigned)flags flagsMask:(unsigned)mask;	// 0x32691d31
- (id)_taggedCharacteristics;	// 0x32691b65
// declared property getter: - (id)asset;	// 0x32691951
- (id)availableMetadataFormats;	// 0x326922e5
- (id)commonMetadata;	// 0x326922b9
- (id)copyWithZone:(NSZone *)zone;	// 0x326917d9
- (void)dealloc;	// 0x326917e9
- (id)description;	// 0x326918cd
- (float)estimatedDataRate;	// 0x32692029
- (id)extendedLanguageTag;	// 0x32692081
- (void)finalize;	// 0x32691889
- (id)formatDescriptions;	// 0x32691a71
- (BOOL)hasMediaCharacteristic:(id)characteristic;	// 0x32691e31
- (unsigned)hash;	// 0x32692a35
- (BOOL)isEnabled;	// 0x32691ad1
- (BOOL)isEqual:(id)equal;	// 0x326929c9
- (BOOL)isExcludedFromAutoselectionInTrackGroup;	// 0x3269233d
- (BOOL)isPlayable;	// 0x32691a9d
- (BOOL)isSelfContained;	// 0x32691b05
- (id)languageCode;	// 0x32692055
- (int)layer;	// 0x32692155
- (void)loadValuesAsynchronouslyForKeys:(id)keys completionHandler:(id)handler;	// 0x32691a11
- (id)locale;	// 0x326920ad
- (id)mediaCharacteristics;	// 0x32691f6d
- (id)mediaType;	// 0x32691a45
- (id)metadataForFormat:(id)format;	// 0x32692311
- (CGSize)naturalSize;	// 0x326920d9
- (int)naturalTimeScale;	// 0x32691ffd
- (float)nominalFrameRate;	// 0x326921ad
- (CGAffineTransform)preferredTransform;	// 0x32692115
- (float)preferredVolume;	// 0x32692181
- (XXStruct_pwHToB)samplePresentationTimeForTrackTime:(XXStruct_pwHToB)trackTime;	// 0x32692255
- (id)segmentForTrackTime:(XXStruct_pwHToB)trackTime;	// 0x32692205
- (id)segments;	// 0x326921d9
- (int)statusOfValueForKey:(id)key;	// 0x326919c9
- (int)statusOfValueForKey:(id)key error:(id *)error;	// 0x326919dd
- (XXStruct_yD8eWC)timeRange;	// 0x32691fbd
- (long long)totalSampleDataLength;	// 0x32691b39
// declared property getter: - (int)trackID;	// 0x3269199d
@end


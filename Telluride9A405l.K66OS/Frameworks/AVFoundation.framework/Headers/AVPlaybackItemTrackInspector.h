/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVAssetTrackInspector.h"

@class AVWeakReference;

@interface AVPlaybackItemTrackInspector : AVAssetTrackInspector {
@private
	OpaqueFigPlaybackItem *_playbackItem;	// 8 = 0x8
	int _trackID;	// 12 = 0xc
	unsigned _mediaType;	// 16 = 0x10
	AVWeakReference *_weakReferenceToAsset;	// 20 = 0x14
}
@property(readonly, assign) int trackID;	// G=0x346fbf69; converted property
- (id)_initWithAsset:(id)asset trackID:(int)anId trackIndex:(long)index;	// 0x346ff795
- (OpaqueFigPlaybackItem *)_playbackItem;	// 0x346fbf79
- (void *)_valueAsCFTypeForProperty:(CFStringRef)property;	// 0x346ff611
- (id)asset;	// 0x346ff6cd
- (void)dealloc;	// 0x346ff731
- (float)estimatedDataRate;	// 0x346ff555
- (id)extendedLanguageTag;	// 0x346fbfa1
- (void)finalize;	// 0x346ff6ed
- (id)formatDescriptions;	// 0x346ff5f1
- (unsigned)hash;	// 0x346ff401
- (BOOL)isEnabled;	// 0x346ff5c9
- (BOOL)isEqual:(id)equal;	// 0x346ff449
- (BOOL)isSelfContained;	// 0x346fbf89
- (id)languageCode;	// 0x346fbf9d
- (id)mediaType;	// 0x346ff66d
- (CGSize)naturalSize;	// 0x346ff52d
- (int)naturalTimeScale;	// 0x346fbf95
- (float)nominalFrameRate;	// 0x346ff4e5
- (CGAffineTransform)preferredTransform;	// 0x346ff505
- (float)preferredVolume;	// 0x346fbfa5
- (XXStruct_pwHToB)samplePresentationTimeForTrackTime:(XXStruct_pwHToB)trackTime;	// 0x346fbfad
- (XXStruct_yD8eWC)timeRange;	// 0x346ff589
- (long long)totalSampleDataLength;	// 0x346fbf8d
// converted property getter: - (int)trackID;	// 0x346fbf69
@end


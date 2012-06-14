/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVAssetInspector.h"

@class NSArray, NSURL;

@interface AVFigAssetInspector : AVAssetInspector {
	OpaqueFigAsset *_figAsset;	// 4 = 0x4
	OpaqueFigFormatReader *_formatReader;	// 8 = 0x8
	BOOL didCheckForSaveRestriction;	// 12 = 0xc
	BOOL hasSaveRestriction;	// 13 = 0xd
}
@property(readonly, assign, nonatomic) NSURL *URL;	// G=0x35e71251; 
@property(readonly, assign, nonatomic) NSArray *chapterGroupInfo;	// G=0x35e71231; 
@property(readonly, assign, nonatomic, getter=_figAsset) OpaqueFigAsset *figAsset;	// G=0x35e708bd; 
@property(readonly, assign, nonatomic) BOOL hasProtectedContent;	// G=0x35e71291; 
@property(readonly, assign, nonatomic) NSURL *resolvedURL;	// G=0x35e71271; 
- (id)initWithFigAsset:(OpaqueFigAsset *)figAsset;	// 0x35e706e9
// declared property getter: - (id)URL;	// 0x35e71251
// declared property getter: - (OpaqueFigAsset *)_figAsset;	// 0x35e708bd
- (OpaqueFigFormatReader *)_formatReader;	// 0x35e708cd
- (BOOL)_hasQTSaveRestriction;	// 0x35e71041
- (void *)_valueAsCFTypeForProperty:(CFStringRef)property;	// 0x35e7093d
- (id)alternateTrackGroups;	// 0x35e70b2d
- (id)availableMetadataFormats;	// 0x35e70e5d
// declared property getter: - (id)chapterGroupInfo;	// 0x35e71231
- (id)commonMetadata;	// 0x35e70d45
- (id)creationDate;	// 0x35e70be1
- (void)dealloc;	// 0x35e7074d
- (XXStruct_pwHToB)duration;	// 0x35e70989
- (void)finalize;	// 0x35e707a9
// declared property getter: - (BOOL)hasProtectedContent;	// 0x35e71291
- (unsigned)hash;	// 0x35e70875
- (BOOL)isComposable;	// 0x35e711ed
- (BOOL)isEqual:(id)equal;	// 0x35e70805
- (BOOL)isExportable;	// 0x35e71165
- (BOOL)isReadable;	// 0x35e711a9
- (id)lyrics;	// 0x35e70d25
- (id)mediaSelectionGroups;	// 0x35e70b6d
- (id)metadataForFormat:(id)format;	// 0x35e70e7d
- (CGSize)naturalSize;	// 0x35e70a31
- (int)naturalTimeScale;	// 0x35e70a5d
- (float)preferredRate;	// 0x35e709b9
- (CGAffineTransform)preferredTransform;	// 0x35e70a01
- (float)preferredVolume;	// 0x35e709dd
- (BOOL)providesPreciseDurationAndTiming;	// 0x35e70acd
// declared property getter: - (id)resolvedURL;	// 0x35e71271
- (long)trackCount;	// 0x35e70af5
- (id)trackReferences;	// 0x35e70b4d
@end


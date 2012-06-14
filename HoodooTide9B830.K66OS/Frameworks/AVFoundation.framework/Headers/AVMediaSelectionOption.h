/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "NSCopying.h"
#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class AVMediaSelectionOptionInternal, NSArray, NSLocale, NSString;

@interface AVMediaSelectionOption : NSObject <NSCopying> {
	AVMediaSelectionOptionInternal *_mediaSelectionOption;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSArray *availableMetadataFormats;	// G=0x35e8bf65; 
@property(readonly, assign, nonatomic) NSArray *commonMetadata;	// G=0x35e8bd89; 
@property(readonly, assign, nonatomic) NSLocale *locale;	// G=0x35e8bd85; 
@property(readonly, assign, nonatomic) NSArray *mediaSubTypes;	// G=0x35e8bd75; 
@property(readonly, assign, nonatomic) NSString *mediaType;	// G=0x35e8bd71; 
@property(readonly, assign, nonatomic, getter=isPlayable) BOOL playable;	// G=0x35e8bd7d; 
+ (id)mediaSelectionOptionWithAssetTrack:(id)assetTrack group:(id)group;	// 0x35e8bad9
+ (id)mediaSelectionOptionWithAssetTrack:(id)assetTrack group:(id)group displaysNonForcedSubtitles:(BOOL)subtitles;	// 0x35e8bb25
+ (id)mediaSelectionOptionWithDictionary:(id)dictionary group:(id)group;	// 0x35e8bb79
- (id)init;	// 0x35e8bbc5
- (id)_ancillaryDescription;	// 0x35e8bd65
- (BOOL)_isDesignatedDefault;	// 0x35e8bd81
- (id)_title;	// 0x35e8bd8d
- (id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)mediaSelectionGroup;	// 0x35e8bf6d
// declared property getter: - (id)availableMetadataFormats;	// 0x35e8bf65
// declared property getter: - (id)commonMetadata;	// 0x35e8bd89
- (id)copyWithZone:(NSZone *)zone;	// 0x35e8bc95
- (void)dealloc;	// 0x35e8bc45
- (id)description;	// 0x35e8bca5
- (BOOL)hasMediaCharacteristic:(id)characteristic;	// 0x35e8bd79
// declared property getter: - (BOOL)isPlayable;	// 0x35e8bd7d
// declared property getter: - (id)locale;	// 0x35e8bd85
// declared property getter: - (id)mediaSubTypes;	// 0x35e8bd75
// declared property getter: - (id)mediaType;	// 0x35e8bd71
- (id)metadataForFormat:(id)format;	// 0x35e8bf69
- (id)propertyList;	// 0x35e8bf71
@end


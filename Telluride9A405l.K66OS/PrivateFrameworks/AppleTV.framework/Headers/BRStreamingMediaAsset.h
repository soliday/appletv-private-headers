/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRMediaAssetDerivesMediaURL.h"
#import "AppleTV-Structs.h"
#import "BRBaseMediaAsset.h"
#import "BRSecureResource.h"
#import "BRATVMediaItem.h"

@class NSMutableDictionary;

@interface BRStreamingMediaAsset : BRBaseMediaAsset <BRATVMediaItem, BRMediaAssetDerivesMediaURL, BRSecureResource> {
@private
	ATVMediaItemRef _mediaItem;	// 8 = 0x8
	NSMutableDictionary *_metadata;	// 12 = 0xc
}
@property(assign) unsigned bookmarkTimeInMS;	// G=0x35dce24d; S=0x35dce2c1; converted property
+ (void)setImplementationClass:(Class)aClass;	// 0x35dcdd95
+ (id)streamingMediaAssetWithMediaItem:(ATVMediaItemRef)mediaItem;	// 0x35dcdda5
- (id)initWithMediaItem:(ATVMediaItemRef)mediaItem;	// 0x35dcec55
- (BOOL)_supportsBookmarkProperty;	// 0x35dcecd5
- (BOOL)alwaysRequiresAuthorization;	// 0x35dceb0d
- (id)artist;	// 0x35dce029
- (id)assetID;	// 0x35dcdded
// converted property getter: - (unsigned)bookmarkTimeInMS;	// 0x35dce24d
- (void)dealloc;	// 0x35dcdd31
- (long)duration;	// 0x35dce1f5
- (BOOL)hasVideoContent;	// 0x35dcdec5
- (id)imageProxy;	// 0x35dce5c9
- (void)incrementPerformanceCount;	// 0x35dce481
- (void)incrementPerformanceOrSkipCount:(unsigned)count;	// 0x35dce511
- (BOOL)isHD;	// 0x35dce1a1
- (id)mediaDescription;	// 0x35dce0dd
- (ATVMediaItemRef)mediaItemRef;	// 0x35dceb31
- (id)mediaSummary;	// 0x35dce0a1
- (id)mediaType;	// 0x35dcde99
- (id)mediaURL;	// 0x35dcde45
- (id)playbackMetadata;	// 0x35dce705
- (id)primaryCollectionTitle;	// 0x35dce065
- (id)primaryGenre;	// 0x35dce119
- (void)requiredScope:(unsigned *)scope accountType:(id *)type;	// 0x35dcec4d
- (id)resolveMediaURL;	// 0x35dceb41
// converted property setter: - (void)setBookmarkTimeInMS:(unsigned)ms;	// 0x35dce2c1
- (void)setPlaybackMetadataValue:(id)value forKey:(id)key;	// 0x35dce6c1
- (void)setWatched:(BOOL)watched;	// 0x35dce979
- (unsigned)startTimeInMS;	// 0x35dce429
- (id)title;	// 0x35dcdfed
@end


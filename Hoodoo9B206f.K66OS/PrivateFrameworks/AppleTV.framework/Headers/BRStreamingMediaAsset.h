/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSecureResource.h"
#import "BRBaseMediaAsset.h"
#import "AppleTV-Structs.h"
#import "BRATVMediaItem.h"
#import "BRMediaAssetDerivesMediaURL.h"

@class NSString, NSMutableDictionary;

@interface BRStreamingMediaAsset : BRBaseMediaAsset <BRATVMediaItem, BRMediaAssetDerivesMediaURL, BRSecureResource> {
@private
	ATVMediaItemRef _mediaItem;	// 8 = 0x8
	NSMutableDictionary *_metadata;	// 12 = 0xc
	NSString *_assetID;	// 16 = 0x10
}
@property(readonly, retain) NSString *assetID;	// G=0x366678c5; converted property
@property(assign) unsigned bookmarkTimeInMS;	// G=0x36667d8d; S=0x36667e01; converted property
+ (void)setImplementationClass:(Class)aClass;	// 0x3666786d
+ (id)streamingMediaAssetWithMediaItem:(ATVMediaItemRef)mediaItem;	// 0x3666787d
- (id)initWithMediaItem:(ATVMediaItemRef)mediaItem;	// 0x366687ed
- (BOOL)_supportsBookmarkProperty;	// 0x3666886d
- (BOOL)alwaysRequiresAuthorization;	// 0x3666864d
- (id)artist;	// 0x36667b2d
// converted property getter: - (id)assetID;	// 0x366678c5
// converted property getter: - (unsigned)bookmarkTimeInMS;	// 0x36667d8d
- (void)dealloc;	// 0x366677f5
- (long)duration;	// 0x36667d35
- (BOOL)hasVideoContent;	// 0x366679c9
- (id)imageProxy;	// 0x36668109
- (void)incrementPerformanceCount;	// 0x36667fc1
- (void)incrementPerformanceOrSkipCount:(unsigned)count;	// 0x36668051
- (BOOL)isHD;	// 0x36667ca5
- (id)mediaDescription;	// 0x36667be1
- (id)mediaFlavor;	// 0x36667cf9
- (ATVMediaItemRef)mediaItemRef;	// 0x36668671
- (id)mediaSummary;	// 0x36667ba5
- (id)mediaType;	// 0x3666799d
- (id)mediaURL;	// 0x36667949
- (id)playbackMetadata;	// 0x36668245
- (id)primaryCollectionTitle;	// 0x36667b69
- (id)primaryGenre;	// 0x36667c1d
- (void)requiredScope:(unsigned *)scope accountType:(id *)type;	// 0x366687e5
- (void)resolveMediaURL:(id)url;	// 0x36668681
// converted property setter: - (void)setBookmarkTimeInMS:(unsigned)ms;	// 0x36667e01
- (void)setPlaybackMetadataValue:(id)value forKey:(id)key;	// 0x36668201
- (void)setWatched:(BOOL)watched;	// 0x366684b9
- (unsigned)startTimeInMS;	// 0x36667f69
- (id)title;	// 0x36667af1
@end


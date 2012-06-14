/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRBaseMediaAsset.h"
#import "BRSecureResource.h"

@class NSMutableDictionary;

@interface BRXMLMediaAsset : BRBaseMediaAsset <BRSecureResource> {
@private
	NSMutableDictionary *_info;	// 8 = 0x8
}
@property(retain) id dictionary;	// G=0x329aebf5; S=0x329aec05; converted property
- (id)init;	// 0x329add01
- (id)initWithMediaProvider:(id)mediaProvider;	// 0x329add15
- (id)artist;	// 0x329ade75
- (id)assetID;	// 0x329ade49
- (unsigned)bookmarkTimeInMS;	// 0x329aeb11
- (unsigned)bookmarkTimeInSeconds;	// 0x329aeae1
- (id)cast;	// 0x329ae5b5
- (id)composer;	// 0x329ae119
- (id)copyright;	// 0x329adef9
- (id)coverArt;	// 0x329ae5e1
- (id)coverArtID;	// 0x329ae7b9
- (id)dateAcquired;	// 0x329ae0b1
- (id)dateCreated;	// 0x329ae109
- (id)datePublished;	// 0x329ae059
- (void)dealloc;	// 0x329add81
- (id)description;	// 0x329aeac1
// converted property getter: - (id)dictionary;	// 0x329aebf5
- (id)directors;	// 0x329ae11d
- (long)duration;	// 0x329ae271
- (BOOL)forceHDCPProtection;	// 0x329aebad
- (id)genres;	// 0x329ae589
- (BOOL)hasCoverArt;	// 0x329aea91
- (BOOL)hasVideoContent;	// 0x329ae4f9
- (id)imageProxy;	// 0x329addcd
- (BOOL)isExplicit;	// 0x329ae44d
- (id)mediaSummary;	// 0x329adecd
- (id)mediaType;	// 0x329ae4cd
- (id)mediaURL;	// 0x329adfd5
- (id)merchant;	// 0x329aecd1
- (long)parentalControlRatingRank;	// 0x329ae3cd
- (long)parentalControlRatingSystemID;	// 0x329ae34d
- (id)playbackMetadata;	// 0x329aeb59
- (id)previewURL;	// 0x329adfa9
- (id)primaryCollectionTitle;	// 0x329adea1
- (id)primaryGenre;	// 0x329ae541
- (id)publisher;	// 0x329ae02d
- (id)rating;	// 0x329ae321
- (void)requiredScope:(unsigned *)scope accountType:(id *)type;	// 0x329aec45
- (id)resolution;	// 0x329ade1d
// converted property setter: - (void)setDictionary:(id)dictionary;	// 0x329aec05
- (void)setObject:(id)object forKey:(id)key;	// 0x329added
- (id)thumbnailArt;	// 0x329ae6cd
- (id)thumbnailArtID;	// 0x329ae925
- (id)thumbnailURL;	// 0x329adf7d
- (id)title;	// 0x329ae001
- (id)trickPlayConfig;	// 0x329adf51
- (id)trickPlayURL;	// 0x329adf25
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRRSSMediaAsset.h"

@class ATVMusicStoreShowInfo, NSDictionary;

@interface ATVMusicStorePodcastAsset : BRRSSMediaAsset {
@private
	NSDictionary *_feedInfo;	// 16 = 0x10
	ATVMusicStoreShowInfo *_showInfo;	// 20 = 0x14
}
@property(assign) unsigned bookmarkTimeInMS;	// G=0x3659b875; S=0x3659b775; converted property
@property(retain) NSDictionary *feedInfo;	// G=0x3659afc5; S=0x3659af85; converted property
- (id)initWithFeedInfo:(id)feedInfo;	// 0x3659ae69
- (id)_podcastID;	// 0x3659ba29
- (id)_showInfo;	// 0x3659ba85
- (id)artist;	// 0x3659b56d
- (id)assetID;	// 0x3659afd5
// converted property getter: - (unsigned)bookmarkTimeInMS;	// 0x3659b875
- (id)cast;	// 0x3659b109
- (id)copyright;	// 0x3659b605
- (id)coverArtID;	// 0x3659b2d5
- (id)dateAcquired;	// 0x3659b38d
- (id)datePublished;	// 0x3659b355
- (id)datePublishedString;	// 0x3659b545
- (void)dealloc;	// 0x3659af25
- (id)description;	// 0x3659b651
- (id)directors;	// 0x3659b189
- (long)duration;	// 0x3659b08d
// converted property getter: - (id)feedInfo;	// 0x3659afc5
- (id)genres;	// 0x3659b49d
- (BOOL)hasCoverArt;	// 0x3659b2a5
- (BOOL)hasVideoContent;	// 0x3659b4c5
- (void)incrementPerformanceCount;	// 0x3659b709
- (BOOL)isExplicit;	// 0x3659b679
- (id)mediaDescription;	// 0x3659b055
- (id)mediaSummary;	// 0x3659b5f5
- (id)mediaType;	// 0x3659b39d
- (id)mediaURL;	// 0x3659b1c1
- (long)performanceCount;	// 0x3659b6e1
- (id)previewURL;	// 0x3659b229
- (id)primaryCollectionTitle;	// 0x3659b5b1
- (id)primaryGenre;	// 0x3659b3f1
- (id)primaryGenreAsString;	// 0x3659b3b9
- (id)producers;	// 0x3659b1a5
- (id)publisher;	// 0x3659b64d
- (id)rating;	// 0x3659b4c1
// converted property setter: - (void)setBookmarkTimeInMS:(unsigned)ms;	// 0x3659b775
// converted property setter: - (void)setFeedInfo:(id)info;	// 0x3659af85
- (void)setHasBeenPlayed:(BOOL)played;	// 0x3659b749
- (id)thumbnailArtID;	// 0x3659b345
- (id)thumbnailURL;	// 0x3659b63d
- (id)title;	// 0x3659b01d
- (float)userStarRating;	// 0x3659b4b9
- (void)willBeginPlayback;	// 0x3659b89d
@end


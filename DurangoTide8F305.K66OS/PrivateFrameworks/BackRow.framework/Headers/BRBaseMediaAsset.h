/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRMediaAsset.h"
#import <NSObject.h> // Unknown library

@protocol BRMediaProvider;

@interface BRBaseMediaAsset : NSObject <BRMediaAsset> {
@private
	id<BRMediaProvider> _provider;	// 4 = 0x4
}
@property(assign) unsigned bookmarkTimeInMS;	// G=0x3293c3a9; S=0x3293c535; converted property
@property(assign) unsigned bookmarkTimeInSeconds;	// G=0x3293c379; S=0x3292f4cd; converted property
@property(assign) BOOL hasBeenPlayed;	// G=0x329521e9; S=0x329333e9; converted property
@property(retain) id lastPlayed;	// G=0x32952289; S=0x3295228d; converted property
@property(assign) float userStarRating;	// G=0x32952241; S=0x32952249; converted property
- (id)initWithMediaProvider:(id)mediaProvider;	// 0x329158bd
- (id)artist;	// 0x329521c5
- (id)artistCollection;	// 0x3295229d
- (id)artistForSorting;	// 0x329521c9
- (id)assetID;	// 0x329521bd
- (id)authorName;	// 0x329522a1
// converted property getter: - (unsigned)bookmarkTimeInMS;	// 0x3293c3a9
// converted property getter: - (unsigned)bookmarkTimeInSeconds;	// 0x3293c379
- (id)broadcaster;	// 0x3295222d
- (BOOL)canBePlayedInShuffle;	// 0x329522bd
- (id)cast;	// 0x32952725
- (id)category;	// 0x329522ad
- (void)cleanUpPlaybackContext;	// 0x329522d1
- (BOOL)closedCaptioned;	// 0x32952259
- (id)collections;	// 0x3295264d
- (id)composer;	// 0x3295226d
- (id)composerForSorting;	// 0x32952271
- (id)copyright;	// 0x329521d1
- (void *)createMovieWithProperties:(void *)properties count:(long)count;	// 0x32932f91
- (id)dateAcquired;	// 0x32952201
- (id)dateAcquiredString;	// 0x32952629
- (id)dateCreated;	// 0x32952205
- (id)dateCreatedString;	// 0x32952605
- (id)datePublished;	// 0x32952209
- (id)datePublishedString;	// 0x329525e1
- (void)dealloc;	// 0x3293377d
- (id)directors;	// 0x32952705
- (BOOL)dolbyDigital;	// 0x3295225d
- (long)duration;	// 0x329521d5
- (unsigned)episode;	// 0x32952239
- (id)episodeNumber;	// 0x32952231
- (BOOL)forceHDCPProtection;	// 0x32952281
- (id)genres;	// 0x329526b1
- (int)grFormat;	// 0x329522b5
// converted property getter: - (BOOL)hasBeenPlayed;	// 0x329521e9
- (BOOL)hasCoverArt;	// 0x329521fd
- (BOOL)hasVideoContent;	// 0x32952275
- (unsigned)hash;	// 0x3295259d
- (id)imageProxy;	// 0x329521f9
- (id)imageProxyWithBookMarkTimeInMS:(unsigned)ms;	// 0x329526d1
- (void)incrementPerformanceCount;	// 0x329521dd
- (void)incrementPerformanceOrSkipCount:(unsigned)count;	// 0x329521e1
- (BOOL)isAvailable;	// 0x329522c1
- (BOOL)isCheckedOut;	// 0x329522ed
- (BOOL)isDisabled;	// 0x32952279
- (BOOL)isEqual:(id)equal;	// 0x32938081
- (BOOL)isExplicit;	// 0x329522dd
- (BOOL)isHD;	// 0x32952251
- (BOOL)isInappropriate;	// 0x329522b1
- (BOOL)isLocal;	// 0x329381bd
- (BOOL)isPlaying;	// 0x32952451
- (BOOL)isPlayingOrPaused;	// 0x329522f1
- (BOOL)isProtectedContent;	// 0x3295227d
- (BOOL)isValid;	// 0x329521c1
- (BOOL)isWidescreen;	// 0x32952255
- (id)keywords;	// 0x329522a5
// converted property getter: - (id)lastPlayed;	// 0x32952289
- (void)logDescription;	// 0x32952799
- (id)mediaCollections;	// 0x3295223d
- (id)mediaDescription;	// 0x3293abcd
- (id)mediaObjectID;	// 0x32952785
- (id)mediaSummary;	// 0x329521cd
- (id)mediaType;	// 0x3295220d
- (id)mediaURL;	// 0x329521ed
- (long)parentalControlRatingRank;	// 0x329522d9
- (long)parentalControlRatingSystemID;	// 0x329522d5
- (void)performSelector:(SEL)selector target:(id)target;	// 0x32952585
- (void)performSelector:(SEL)selector target:(id)target withObject:(id)object;	// 0x3295256d
- (long)performanceCount;	// 0x329521d9
- (int)physicalMediaID;	// 0x3295221d
- (BOOL)playable;	// 0x3293c375
- (id)playbackMetadata;	// 0x329522e1
- (id)playbackRightsOwner;	// 0x32952285
- (void)preparePlaybackContext;	// 0x329522cd
- (id)previewURL;	// 0x329521f1
- (id)primaryCollection;	// 0x32952299
- (int)primaryCollectionOrder;	// 0x32952215
- (id)primaryCollectionTitle;	// 0x3293f0a5
- (id)primaryCollectionTitleForSorting;	// 0x3295266d
- (id)primaryGenre;	// 0x32952211
- (id)producers;	// 0x329526e5
- (id)provider;	// 0x329254f1
- (id)publisher;	// 0x32952269
- (id)rating;	// 0x3295224d
- (id)resolution;	// 0x329525c1
- (unsigned)season;	// 0x32952235
- (id)seriesName;	// 0x32952225
- (id)seriesNameForSorting;	// 0x32952229
// converted property setter: - (void)setBookmarkTimeInMS:(unsigned)ms;	// 0x3293c535
// converted property setter: - (void)setBookmarkTimeInSeconds:(unsigned)seconds;	// 0x3292f4cd
// converted property setter: - (void)setHasBeenPlayed:(BOOL)played;	// 0x329333e9
// converted property setter: - (void)setLastPlayed:(id)played;	// 0x3295228d
- (void)setPlaybackMetadataValue:(id)value forKey:(id)key;	// 0x329522e5
// converted property setter: - (void)setUserStarRating:(float)rating;	// 0x32952249
- (void)skip;	// 0x329522c5
- (id)sourceID;	// 0x329522e9
- (float)starRating;	// 0x32952261
- (id)startDate;	// 0x32952291
- (unsigned)startTimeInMS;	// 0x32932fed
- (unsigned)startTimeInSeconds;	// 0x32932fc1
- (unsigned)stopTimeInMS;	// 0x32952295
- (unsigned)stopTimeInSeconds;	// 0x32952691
- (id)title;	// 0x32952759
- (id)titleForSorting;	// 0x32952745
- (id)trickPlayURL;	// 0x329521f5
// converted property getter: - (float)userStarRating;	// 0x32952241
- (id)viewCount;	// 0x329522a9
- (void)willBeDeleted;	// 0x329522c9
- (void)willBeginPlayback;	// 0x329521e5
@end

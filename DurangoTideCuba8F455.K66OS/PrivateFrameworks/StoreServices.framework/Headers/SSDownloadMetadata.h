/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "NSCopying.h"
#import "NSCoding.h"
#import <NSObject.h> // Unknown library
#import "StoreServices-Structs.h"

@class NSArray, NSData, NSMutableDictionary, NSString, SSItemContentRating, SSItemImageCollection, NSURL, NSDate, NSNumber, NSDictionary, NSLock;

@interface SSDownloadMetadata : NSObject <NSCoding, NSCopying> {
@private
	NSMutableDictionary *_dictionary;	// 4 = 0x4
	NSLock *_lock;	// 8 = 0x8
}
@property(readonly, assign) NSString *applicationIdentifier;	// G=0x327204d5; 
@property(assign) unsigned long long artistIdentifier;	// G=0x32720921; S=0x3271f935; 
@property(copy) NSString *artistName;	// G=0x32720469; S=0x3271f919; 
@property(assign) BOOL artworkIsPrerendered;	// G=0x32720415; S=0x3271f8d1; 
@property(assign, getter=isAutomaticDownload) BOOL automaticDownload;	// G=0x3271eaf5; S=0x3271e8d9; 
@property(retain) NSString *bundleIdentifier;	// G=0x327203a9; S=0x3271f8b5; 
@property(retain) NSURL *cancelDownloadURL;	// G=0x3271ed99; S=0x3271e8a5; 
@property(copy) NSString *collectionArtistName;	// G=0x32720341; S=0x3271f899; 
@property(assign) unsigned long long collectionIdentifier;	// G=0x327208e9; S=0x3271f85d; 
@property(retain) NSNumber *collectionIndexInCollectionGroup;	// G=0x327202d5; S=0x3271f83d; 
@property(retain) NSString *collectionName;	// G=0x32720269; S=0x3271f821; 
@property(assign, getter=isCompilation) BOOL compilation;	// G=0x3271fea1; S=0x3271f7e1; 
@property(assign) unsigned long long composerIdentifier;	// G=0x327208b1; S=0x3271f7a5; 
@property(copy) NSString *composerName;	// G=0x32720211; S=0x3271f789; 
@property(copy) SSItemContentRating *contentRating;	// G=0x32720189; S=0x3271f755; 
@property(readonly, assign, getter=isContentRestricted) BOOL contentRestricted;	// G=0x32720df1; 
@property(retain) NSString *copyright;	// G=0x3271ed41; S=0x3271e889; 
@property(retain) NSDictionary *dictionary;	// G=0x3271ec49; S=0x3271e819; 
@property(copy) NSString *documentTargetIdentifier;	// G=0x32720131; S=0x3271f739; 
@property(retain) NSString *downloadKey;	// G=0x3271ebf1; S=0x3271e7fd; 
@property(retain) NSNumber *durationInMilliseconds;	// G=0x327200d9; S=0x3271f71d; 
@property(copy) NSString *episodeIdentifier;	// G=0x327200a5; S=0x3271f701; 
@property(retain) NSNumber *episodeSortIdentifier;	// G=0x3272003d; S=0x3271f6e5; 
@property(retain) NSData *epubRightsData;	// G=0x3271eb99; S=0x3271e7e1; 
@property(assign, getter=isExplicitContent) BOOL explicitContent;	// G=0x3271fe55; S=0x3271f6a5; 
@property(retain) NSString *fileExtension;	// G=0x3271eb41; S=0x3271e7c5; 
@property(retain) NSURL *fullSizeImageURL;	// G=0x3271ffd1; S=0x3271f671; 
@property(retain) NSString *genre;	// G=0x3271ff59; S=0x3271f655; 
@property(assign) unsigned long long genreIdentifier;	// G=0x32720879; S=0x3271f619; 
@property(retain) NSNumber *indexInCollection;	// G=0x3271feed; S=0x3271f5fd; 
@property(assign) unsigned long long itemIdentifier;	// G=0x32720835; S=0x3271f5c1; 
@property(retain) NSString *kind;	// G=0x3271fd65; S=0x3271f5a5; 
@property(copy) NSString *longDescription;	// G=0x3271fcf9; S=0x3271f589; 
@property(copy) NSString *networkName;	// G=0x3271fca1; S=0x3271f56d; 
@property(retain) NSNumber *numberOfCollectionsInCollectionGroup;	// G=0x3271fc35; S=0x3271f551; 
@property(retain) NSNumber *numberOfItemsInCollection;	// G=0x3271fbc9; S=0x3271f535; 
@property(copy) NSString *podcastEpisodeGUID;	// G=0x3271fb71; S=0x3271f519; 
@property(retain) NSURL *podcastFeedURL;	// G=0x3271fb3d; S=0x3271f4e5; 
@property(copy) NSString *podcastType;	// G=0x3271fae5; S=0x3271f4c9; 
@property(assign) unsigned long long preOrderIdentifier;	// G=0x3271ea41; S=0x3271e789; 
@property(retain) NSDate *purchaseDate;	// G=0x3271fab1; S=0x3271f4ad; 
@property(assign, getter=isRedownloadDownload) BOOL redownloadDownload;	// G=0x3271eaa9; S=0x3271e749; 
@property(retain) NSDate *releaseDate;	// G=0x3271fa89; S=0x3271f491; 
@property(retain) NSString *releaseDateString;	// G=0x3271e991; S=0x3271e72d; 
@property(retain) NSNumber *releaseYear;	// G=0x3271fa31; S=0x3271f475; 
@property(assign, getter=isRental) BOOL rental;	// G=0x3271fe09; S=0x3271f435; 
@property(copy) id requiredDeviceCapabilities;	// G=0x3271e919; S=0x3271e711; 
@property(assign, getter=isSample) BOOL sample;	// G=0x3271fdbd; S=0x3271f3f5; 
@property(retain) NSNumber *seasonNumber;	// G=0x3271f9d9; S=0x3271f3d9; 
@property(copy) NSString *seriesName;	// G=0x3271f971; S=0x3271f3bd; 
@property(copy) NSString *shortDescription;	// G=0x3271f225; S=0x3271f3a1; 
@property(assign) BOOL shouldDownloadAutomatically;	// G=0x3271e505; S=0x3271e6d1; 
@property(retain) NSArray *sinfs;	// G=0x3271e4ad; S=0x3271e6b5; 
@property(retain) NSString *sortArtistName;	// G=0x3271f1bd; S=0x3271f385; 
@property(retain) NSString *sortCollectionName;	// G=0x3271f155; S=0x3271f369; 
@property(retain) NSString *sortTitle;	// G=0x3271f0ed; S=0x3271f34d; 
@property(retain) NSString *subtitle;	// G=0x3271f0d9; S=0x3271f339; 
@property(readonly, assign) SSItemImageCollection *thumbnailImageCollection;	// G=0x3271efc1; 
@property(retain) NSURL *thumbnailImageURL;	// G=0x3271ef61; S=0x3271f305; 
@property(retain) NSString *title;	// G=0x3271eee9; S=0x3271f2e9; 
@property(retain) NSString *transactionIdentifier;	// G=0x3271ee91; S=0x3271f2cd; 
@property(copy) NSDictionary *videoDetailsDictionary;	// G=0x3271ee39; S=0x3271f2b1; 
@property(retain) NSURL *viewStoreItemURL;	// G=0x3271ee05; S=0x3271f27d; 
- (id)init;	// 0x3272073d
- (id)initWithCoder:(id)coder;	// 0x32720959
- (id)initWithDictionary:(id)dictionary;	// 0x327207b1
- (id)initWithItem:(id)item;	// 0x3272070d
- (id)initWithItem:(id)item offer:(id)offer;	// 0x32720cad
- (id)initWithKind:(id)kind;	// 0x327206dd
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x32720531
- (id)_dateValueForValue:(id)value;	// 0x3271e3f5
- (id)_newDateFormatter;	// 0x3271e281
- (id)_newImageCollectionWithURLString:(id)urlstring;	// 0x3271e309
- (id)_releaseDateValue;	// 0x3271e24d
- (void)_setValueCopy:(id)copy forMetadataKey:(id)metadataKey;	// 0x3271e20d
- (id)_stringValueForValue:(id)value;	// 0x3271e199
- (id)_urlValueForValue:(id)value;	// 0x3271e11d
- (id)_valueForFirstAvailableKey:(id)firstAvailableKey;	// 0x32720e41
// declared property getter: - (id)applicationIdentifier;	// 0x327204d5
// declared property getter: - (unsigned long long)artistIdentifier;	// 0x32720921
// declared property getter: - (id)artistName;	// 0x32720469
// declared property getter: - (BOOL)artworkIsPrerendered;	// 0x32720415
// declared property getter: - (id)bundleIdentifier;	// 0x327203a9
// declared property getter: - (id)cancelDownloadURL;	// 0x3271ed99
// declared property getter: - (id)collectionArtistName;	// 0x32720341
// declared property getter: - (unsigned long long)collectionIdentifier;	// 0x327208e9
// declared property getter: - (id)collectionIndexInCollectionGroup;	// 0x327202d5
// declared property getter: - (id)collectionName;	// 0x32720269
// declared property getter: - (unsigned long long)composerIdentifier;	// 0x327208b1
// declared property getter: - (id)composerName;	// 0x32720211
// declared property getter: - (id)contentRating;	// 0x32720189
- (id)copyPropertyListEncoding;	// 0x32720545
- (id)copyWithZone:(NSZone *)zone;	// 0x32720565
- (id)copyWritableMetadata;	// 0x3271ec79
// declared property getter: - (id)copyright;	// 0x3271ed41
- (void)dealloc;	// 0x32720755
// declared property getter: - (id)dictionary;	// 0x3271ec49
// declared property getter: - (id)documentTargetIdentifier;	// 0x32720131
// declared property getter: - (id)downloadKey;	// 0x3271ebf1
// declared property getter: - (id)durationInMilliseconds;	// 0x327200d9
- (void)encodeWithCoder:(id)coder;	// 0x327205f1
// declared property getter: - (id)episodeIdentifier;	// 0x327200a5
// declared property getter: - (id)episodeSortIdentifier;	// 0x3272003d
// declared property getter: - (id)epubRightsData;	// 0x3271eb99
// declared property getter: - (id)fileExtension;	// 0x3271eb41
// declared property getter: - (id)fullSizeImageURL;	// 0x3271ffd1
// declared property getter: - (id)genre;	// 0x3271ff59
// declared property getter: - (unsigned long long)genreIdentifier;	// 0x32720879
// declared property getter: - (id)indexInCollection;	// 0x3271feed
// declared property getter: - (BOOL)isAutomaticDownload;	// 0x3271eaf5
// declared property getter: - (BOOL)isCompilation;	// 0x3271fea1
// declared property getter: - (BOOL)isContentRestricted;	// 0x32720df1
// declared property getter: - (BOOL)isExplicitContent;	// 0x3271fe55
// declared property getter: - (BOOL)isRedownloadDownload;	// 0x3271eaa9
// declared property getter: - (BOOL)isRental;	// 0x3271fe09
// declared property getter: - (BOOL)isSample;	// 0x3271fdbd
// declared property getter: - (unsigned long long)itemIdentifier;	// 0x32720835
// declared property getter: - (id)kind;	// 0x3271fd65
// declared property getter: - (id)longDescription;	// 0x3271fcf9
// declared property getter: - (id)networkName;	// 0x3271fca1
// declared property getter: - (id)numberOfCollectionsInCollectionGroup;	// 0x3271fc35
// declared property getter: - (id)numberOfItemsInCollection;	// 0x3271fbc9
// declared property getter: - (id)podcastEpisodeGUID;	// 0x3271fb71
// declared property getter: - (id)podcastFeedURL;	// 0x3271fb3d
// declared property getter: - (id)podcastType;	// 0x3271fae5
// declared property getter: - (unsigned long long)preOrderIdentifier;	// 0x3271ea41
// declared property getter: - (id)purchaseDate;	// 0x3271fab1
// declared property getter: - (id)releaseDate;	// 0x3271fa89
// declared property getter: - (id)releaseDateString;	// 0x3271e991
// declared property getter: - (id)releaseYear;	// 0x3271fa31
// declared property getter: - (id)requiredDeviceCapabilities;	// 0x3271e919
// declared property getter: - (id)seasonNumber;	// 0x3271f9d9
// declared property getter: - (id)seriesName;	// 0x3271f971
// declared property setter: - (void)setArtistIdentifier:(unsigned long long)identifier;	// 0x3271f935
// declared property setter: - (void)setArtistName:(id)name;	// 0x3271f919
// declared property setter: - (void)setArtworkIsPrerendered:(BOOL)prerendered;	// 0x3271f8d1
// declared property setter: - (void)setAutomaticDownload:(BOOL)download;	// 0x3271e8d9
// declared property setter: - (void)setBundleIdentifier:(id)identifier;	// 0x3271f8b5
// declared property setter: - (void)setCancelDownloadURL:(id)url;	// 0x3271e8a5
// declared property setter: - (void)setCollectionArtistName:(id)name;	// 0x3271f899
// declared property setter: - (void)setCollectionIdentifier:(unsigned long long)identifier;	// 0x3271f85d
// declared property setter: - (void)setCollectionIndexInCollectionGroup:(id)collectionGroup;	// 0x3271f83d
// declared property setter: - (void)setCollectionName:(id)name;	// 0x3271f821
// declared property setter: - (void)setCompilation:(BOOL)compilation;	// 0x3271f7e1
// declared property setter: - (void)setComposerIdentifier:(unsigned long long)identifier;	// 0x3271f7a5
// declared property setter: - (void)setComposerName:(id)name;	// 0x3271f789
// declared property setter: - (void)setContentRating:(id)rating;	// 0x3271f755
// declared property setter: - (void)setCopyright:(id)copyright;	// 0x3271e889
// declared property setter: - (void)setDictionary:(id)dictionary;	// 0x3271e819
// declared property setter: - (void)setDocumentTargetIdentifier:(id)identifier;	// 0x3271f739
// declared property setter: - (void)setDownloadKey:(id)key;	// 0x3271e7fd
// declared property setter: - (void)setDurationInMilliseconds:(id)milliseconds;	// 0x3271f71d
// declared property setter: - (void)setEpisodeIdentifier:(id)identifier;	// 0x3271f701
// declared property setter: - (void)setEpisodeSortIdentifier:(id)identifier;	// 0x3271f6e5
// declared property setter: - (void)setEpubRightsData:(id)data;	// 0x3271e7e1
// declared property setter: - (void)setExplicitContent:(BOOL)content;	// 0x3271f6a5
// declared property setter: - (void)setFileExtension:(id)extension;	// 0x3271e7c5
// declared property setter: - (void)setFullSizeImageURL:(id)url;	// 0x3271f671
// declared property setter: - (void)setGenre:(id)genre;	// 0x3271f655
// declared property setter: - (void)setGenreIdentifier:(unsigned long long)identifier;	// 0x3271f619
// declared property setter: - (void)setIndexInCollection:(id)collection;	// 0x3271f5fd
// declared property setter: - (void)setItemIdentifier:(unsigned long long)identifier;	// 0x3271f5c1
// declared property setter: - (void)setKind:(id)kind;	// 0x3271f5a5
// declared property setter: - (void)setLongDescription:(id)description;	// 0x3271f589
// declared property setter: - (void)setNetworkName:(id)name;	// 0x3271f56d
// declared property setter: - (void)setNumberOfCollectionsInCollectionGroup:(id)collectionGroup;	// 0x3271f551
// declared property setter: - (void)setNumberOfItemsInCollection:(id)collection;	// 0x3271f535
// declared property setter: - (void)setPodcastEpisodeGUID:(id)guid;	// 0x3271f519
// declared property setter: - (void)setPodcastFeedURL:(id)url;	// 0x3271f4e5
// declared property setter: - (void)setPodcastType:(id)type;	// 0x3271f4c9
// declared property setter: - (void)setPreOrderIdentifier:(unsigned long long)identifier;	// 0x3271e789
// declared property setter: - (void)setPurchaseDate:(id)date;	// 0x3271f4ad
// declared property setter: - (void)setRedownloadDownload:(BOOL)download;	// 0x3271e749
// declared property setter: - (void)setReleaseDate:(id)date;	// 0x3271f491
// declared property setter: - (void)setReleaseDateString:(id)string;	// 0x3271e72d
// declared property setter: - (void)setReleaseYear:(id)year;	// 0x3271f475
// declared property setter: - (void)setRental:(BOOL)rental;	// 0x3271f435
// declared property setter: - (void)setRequiredDeviceCapabilities:(id)capabilities;	// 0x3271e711
// declared property setter: - (void)setSample:(BOOL)sample;	// 0x3271f3f5
// declared property setter: - (void)setSeasonNumber:(id)number;	// 0x3271f3d9
// declared property setter: - (void)setSeriesName:(id)name;	// 0x3271f3bd
// declared property setter: - (void)setShortDescription:(id)description;	// 0x3271f3a1
// declared property setter: - (void)setShouldDownloadAutomatically:(BOOL)downloadAutomatically;	// 0x3271e6d1
// declared property setter: - (void)setSinfs:(id)sinfs;	// 0x3271e6b5
// declared property setter: - (void)setSortArtistName:(id)name;	// 0x3271f385
// declared property setter: - (void)setSortCollectionName:(id)name;	// 0x3271f369
// declared property setter: - (void)setSortTitle:(id)title;	// 0x3271f34d
// declared property setter: - (void)setSubtitle:(id)subtitle;	// 0x3271f339
// declared property setter: - (void)setThumbnailImageURL:(id)url;	// 0x3271f305
// declared property setter: - (void)setTitle:(id)title;	// 0x3271f2e9
// declared property setter: - (void)setTransactionIdentifier:(id)identifier;	// 0x3271f2cd
- (void)setValue:(id)value forMetadataKey:(id)metadataKey;	// 0x3271e551
// declared property setter: - (void)setVideoDetailsDictionary:(id)dictionary;	// 0x3271f2b1
// declared property setter: - (void)setViewStoreItemURL:(id)url;	// 0x3271f27d
// declared property getter: - (id)shortDescription;	// 0x3271f225
// declared property getter: - (BOOL)shouldDownloadAutomatically;	// 0x3271e505
// declared property getter: - (id)sinfs;	// 0x3271e4ad
// declared property getter: - (id)sortArtistName;	// 0x3271f1bd
// declared property getter: - (id)sortCollectionName;	// 0x3271f155
// declared property getter: - (id)sortTitle;	// 0x3271f0ed
// declared property getter: - (id)subtitle;	// 0x3271f0d9
// declared property getter: - (id)thumbnailImageCollection;	// 0x3271efc1
// declared property getter: - (id)thumbnailImageURL;	// 0x3271ef61
// declared property getter: - (id)title;	// 0x3271eee9
// declared property getter: - (id)transactionIdentifier;	// 0x3271ee91
- (id)valueForMetadataKey:(id)metadataKey;	// 0x3271e495
// declared property getter: - (id)videoDetailsDictionary;	// 0x3271ee39
// declared property getter: - (id)viewStoreItemURL;	// 0x3271ee05
@end


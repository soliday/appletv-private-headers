/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library
#import "SSURLConnectionRequestDelegate.h"

@class NSURL, NSDate, NSDictionary, SSItemImageCollection, SSItemOffer, NSArray, SSURLConnectionRequest, NSMutableArray, NSNumber, NSString;

@interface SSItem : NSObject <SSURLConnectionRequestDelegate> {
@private
	NSDate *_expirationDate;	// 4 = 0x4
	NSArray *_offers;	// 8 = 0x8
	NSDictionary *_properties;	// 12 = 0xc
	NSString *_tellAFriendBody;	// 16 = 0x10
	NSString *_tellAFriendBodyMIMEType;	// 20 = 0x14
	NSMutableArray *_tellAFriendHandlers;	// 24 = 0x18
	SSURLConnectionRequest *_tellAFriendRequest;	// 28 = 0x1c
	NSString *_tellAFriendSubject;	// 32 = 0x20
}
@property(readonly, assign, nonatomic) NSNumber *ITunesStoreIdentifier;	// G=0x327c8811; 
@property(readonly, assign, nonatomic) NSArray *allItemOffers;	// G=0x327c7f81; 
@property(readonly, assign, nonatomic) NSString *artistName;	// G=0x327c7fb9; 
@property(readonly, assign, nonatomic) float averageUserRating;	// G=0x327c802d; 
@property(readonly, assign, nonatomic) SSItemOffer *defaultItemOffer;	// G=0x327c808d; 
@property(readonly, assign, nonatomic) NSDate *expirationDate;	// G=0x327ca07d; @synthesize=_expirationDate
@property(readonly, assign, nonatomic, getter=isGameCenterEnabled) BOOL gameCenterEnabled;	// G=0x327c8225; 
@property(readonly, assign, nonatomic) SSItemImageCollection *imageCollection;	// G=0x327c81a9; 
@property(readonly, assign, nonatomic) NSString *itemKind;	// G=0x327c85e5; 
@property(readonly, assign, nonatomic) NSString *itemTitle;	// G=0x327c87d5; 
@property(readonly, assign, nonatomic) int numberOfUserRatings;	// G=0x327c8afd; 
@property(readonly, assign, nonatomic, getter=isRestricted) BOOL restricted;	// G=0x327c8281; 
@property(readonly, retain) NSString *tellAFriendBody;	// G=0x327c8d35; converted property
@property(readonly, retain) NSString *tellAFriendBodyMIMEType;	// G=0x327c8ded; converted property
@property(readonly, retain) NSString *tellAFriendSubject;	// G=0x327c8f71; converted property
@property(readonly, assign, nonatomic) NSArray *thumbnailImages;	// G=0x327c9029; 
@property(readonly, assign, nonatomic) NSURL *viewItemURL;	// G=0x327c9099; 
- (id)initWithItemDictionary:(id)itemDictionary;	// 0x327c92a1
// declared property getter: - (id)ITunesStoreIdentifier;	// 0x327c8811
- (void)_finishTellAFriendLoadWithError:(id)error;	// 0x327c9cf9
- (id)_offers;	// 0x327c9e31
- (void)_setExpirationDate:(id)date;	// 0x327c9aa1
- (id)_tellAFriendDictionary;	// 0x327ca011
// declared property getter: - (id)allItemOffers;	// 0x327c7f81
- (id)artistIdentifier;	// 0x327c92f5
// declared property getter: - (id)artistName;	// 0x327c7fb9
// declared property getter: - (float)averageUserRating;	// 0x327c802d
- (id)bundleIdentifier;	// 0x327c9311
- (id)bundleVersion;	// 0x327c932d
- (id)buyParameters;	// 0x327c90e1
- (id)collectionArtistName;	// 0x327c9349
- (id)collectionIdentifier;	// 0x327c9365
- (id)collectionIndexInCollectionGroup;	// 0x327c9381
- (id)collectionName;	// 0x327c939d
- (id)composerName;	// 0x327c93b9
- (id)contentRating;	// 0x327c93d5
- (void)dealloc;	// 0x327c7e5d
// declared property getter: - (id)defaultItemOffer;	// 0x327c808d
- (id)description;	// 0x327c9225
- (id)episodeIdentifier;	// 0x327c9471
- (id)episodeSortIdentifier;	// 0x327c948d
// declared property getter: - (id)expirationDate;	// 0x327ca07d
- (id)genreIdentifier;	// 0x327c94a9
- (id)genreName;	// 0x327c94c5
// declared property getter: - (id)imageCollection;	// 0x327c81a9
- (id)indexInCollection;	// 0x327c94e1
- (BOOL)isCompilation;	// 0x327c94fd
// declared property getter: - (BOOL)isGameCenterEnabled;	// 0x327c8225
// declared property getter: - (BOOL)isRestricted;	// 0x327c8281
// declared property getter: - (id)itemKind;	// 0x327c85e5
- (id)itemOfferForIdentifier:(id)identifier;	// 0x327c86ad
// declared property getter: - (id)itemTitle;	// 0x327c87d5
- (void)loadTellAFriendMessageWithCompletionHandler:(id)completionHandler;	// 0x327c8859
- (id)longDescription;	// 0x327c9551
- (id)mediaKind;	// 0x327c956d
- (id)networkName;	// 0x327c9851
- (id)numberOfCollectionsInCollectionGroup;	// 0x327c986d
- (id)numberOfItemsInCollection;	// 0x327c9889
// declared property getter: - (int)numberOfUserRatings;	// 0x327c8afd
- (id)playableMedia;	// 0x327c9109
- (id)preOrderIdentifier;	// 0x327c99ed
- (id)priceDisplay;	// 0x327c91fd
- (id)rawItemDictionary;	// 0x327c98a5
- (id)relatedItemsForRelationType:(id)relationType;	// 0x327c8b51
- (id)releaseDate;	// 0x327c98dd
- (id)releaseDateString;	// 0x327c99d1
- (void)request:(id)request didFailWithError:(id)error;	// 0x327c9b81
- (void)requestDidFinish:(id)request;	// 0x327c9bcd
- (id)seasonNumber;	// 0x327c9a09
- (id)sendGiftURL;	// 0x327c9a25
- (id)seriesName;	// 0x327c9a85
- (id)shortDescription;	// 0x327c9ae5
- (id)softwareType;	// 0x327c9b01
// converted property getter: - (id)tellAFriendBody;	// 0x327c8d35
// converted property getter: - (id)tellAFriendBodyMIMEType;	// 0x327c8ded
- (id)tellAFriendBodyURL;	// 0x327c8ee5
// converted property getter: - (id)tellAFriendSubject;	// 0x327c8f71
// declared property getter: - (id)thumbnailImages;	// 0x327c9029
- (void)urlConnectionRequest:(id)request didReceiveResponse:(id)response;	// 0x327c9bf9
- (id)valueForProperty:(id)property;	// 0x327c9051
- (id)videoDetails;	// 0x327c9b1d
// declared property getter: - (id)viewItemURL;	// 0x327c9099
- (id)viewReviewsURL;	// 0x327c9b39
@end


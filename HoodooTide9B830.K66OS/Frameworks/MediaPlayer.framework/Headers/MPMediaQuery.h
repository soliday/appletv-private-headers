/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"
#import "MediaPlayer-Structs.h"
#import "NSCopying.h"

@class NSArray, MPMediaLibrary, MPMediaQuerySectionInfo, NSSet;

@interface MPMediaQuery : NSObject <NSCoding, NSCopying> {
@private
	MPMediaQueryInternal _internal;	// 4 = 0x4
}
@property(assign, nonatomic) MPMediaQueryInternal _internal;	// G=0x34682b4d; S=0x34682b75; @synthesize
@property(copy, nonatomic) NSSet *collectionPropertiesToFetch;	// G=0x34681bed; S=0x34681c35; 
@property(readonly, assign, nonatomic) MPMediaQuerySectionInfo *collectionSectionInfo;	// G=0x34681cc5; 
@property(readonly, assign, nonatomic) NSArray *collectionSections;	// G=0x34682179; 
@property(readonly, assign, nonatomic) NSArray *collections;	// G=0x34681555; 
@property(retain) id criteria;	// G=0x34682af1; S=0x34682b05; converted property
@property(readonly, assign, nonatomic) BOOL excludesEntitiesWithBlankNames;	// G=0x34681df5; 
@property(retain, nonatomic) NSSet *filterPredicates;	// G=0x346812b5; S=0x346812fd; 
@property(assign, nonatomic) int groupingType;	// G=0x34681591; S=0x346815b5; 
@property(copy, nonatomic) NSSet *itemPropertiesToFetch;	// G=0x34681b61; S=0x34681b85; 
@property(readonly, assign, nonatomic) MPMediaQuerySectionInfo *itemSectionInfo;	// G=0x34681c9d; 
@property(readonly, assign, nonatomic) NSArray *itemSections;	// G=0x34682151; 
@property(readonly, assign, nonatomic) NSArray *items;	// G=0x34681541; 
@property(retain, nonatomic) MPMediaLibrary *mediaLibrary;	// G=0x346814ad; S=0x346814bd; 
@property(copy, nonatomic, getter=_orderingProperties, setter=_setOrderingProperties:) NSArray *orderingProperties;	// G=0x34681d55; S=0x34681ced; 
@property(assign, nonatomic) BOOL sortItems;	// G=0x34681dc9; S=0x34681d9d; 
@property(readonly, assign, nonatomic) BOOL specifiesPlaylistItems;	// G=0x346820b1; 
@property(readonly, assign, nonatomic) BOOL willGroupEntities;	// G=0x346820dd; 
+ (id)ITunesUAudioQuery;	// 0x34680ed5
+ (id)activeGeniusPlaylist;	// 0x346c248d
+ (id)albumsQuery;	// 0x34680b31
+ (id)artistsQuery;	// 0x34680c01
+ (id)audibleAudiobooksQuery;	// 0x346810b1
+ (id)audiobooksQuery;	// 0x34680ff9
+ (id)compilationsQuery;	// 0x3468112d
+ (id)composersQuery;	// 0x346811fd
+ (id)geniusMixesQuery;	// 0x34681a59
+ (id)genresQuery;	// 0x34681259
+ (void)initialize;	// 0x3467ff49
+ (id)movieRentalsQuery;	// 0x34681925
+ (id)moviesQuery;	// 0x3468186d
+ (id)musicVideosQuery;	// 0x346816fd
+ (id)playlistsQuery;	// 0x34680da9
+ (id)podcastsQuery;	// 0x34680e05
+ (void)setFilteringDisabled:(BOOL)disabled;	// 0x34681605
+ (id)songsQuery;	// 0x34680cd1
+ (id)tvShowsQuery;	// 0x346817b5
+ (id)videoPodcastsQuery;	// 0x346819a1
+ (id)videosQuery;	// 0x34681645
- (id)init;	// 0x3467ff99
- (id)initWithCoder:(id)coder;	// 0x34680549
- (id)initWithCriteria:(id)criteria library:(id)library;	// 0x3467ffad
- (id)initWithEntities:(id)entities entityType:(int)type;	// 0x3468012d
- (id)initWithFilterPredicates:(id)filterPredicates;	// 0x346800b9
- (id)initWithFilterPredicatesInternal:(id)filterPredicatesInternal;	// 0x34680025
- (void)_enumerateCollectionsUsingBlock:(id)block;	// 0x34682771
- (void)_enumerateItemsUsingBlock:(id)block;	// 0x346825d9
// declared property getter: - (MPMediaQueryInternal)_internal;	// 0x34682b4d
- (BOOL)_isFilteringDisabled;	// 0x3468258d
- (id)_itemsImmediately:(BOOL)immediately;	// 0x34681501
// declared property getter: - (id)_orderingProperties;	// 0x34681d55
- (id)_sanitizedQuery;	// 0x346821a1
// declared property setter: - (void)_setOrderingProperties:(id)properties;	// 0x34681ced
- (id)_valueForAggregateFunction:(id)aggregateFunction onProperty:(id)property entityType:(int)type;	// 0x34682211
- (void)addFilterPredicate:(id)predicate;	// 0x34681365
// declared property getter: - (id)collectionPropertiesToFetch;	// 0x34681bed
// declared property getter: - (id)collectionSectionInfo;	// 0x34681cc5
// declared property getter: - (id)collectionSections;	// 0x34682179
// declared property getter: - (id)collections;	// 0x34681555
- (id)copyWithZone:(NSZone *)zone;	// 0x346809c9
// converted property getter: - (id)criteria;	// 0x34682af1
- (void)dealloc;	// 0x34680179
- (id)description;	// 0x346801d5
- (void)encodeWithCoder:(id)coder;	// 0x346807dd
// declared property getter: - (BOOL)excludesEntitiesWithBlankNames;	// 0x34681df5
// declared property getter: - (id)filterPredicates;	// 0x346812b5
- (unsigned)groupingThreshold;	// 0x346820d9
// declared property getter: - (int)groupingType;	// 0x34681591
- (unsigned)hash;	// 0x34680505
- (BOOL)isEqual:(id)equal;	// 0x3468044d
// declared property getter: - (id)itemPropertiesToFetch;	// 0x34681b61
// declared property getter: - (id)itemSectionInfo;	// 0x34681c9d
// declared property getter: - (id)itemSections;	// 0x34682151
// declared property getter: - (id)items;	// 0x34681541
// declared property getter: - (id)mediaLibrary;	// 0x346814ad
- (id)predicateForProperty:(id)property;	// 0x346c262d
- (void)removeFilterPredicate:(id)predicate;	// 0x34681401
- (void)removePredicatesForProperty:(id)property;	// 0x346c2731
// declared property setter: - (void)setCollectionPropertiesToFetch:(id)fetch;	// 0x34681c35
// converted property setter: - (void)setCriteria:(id)criteria;	// 0x34682b05
- (void)setFilterPredicate:(id)predicate forProperty:(id)property;	// 0x346c2841
// declared property setter: - (void)setFilterPredicates:(id)predicates;	// 0x346812fd
- (void)setFilterPropertyPredicate:(id)predicate;	// 0x346c289d
// declared property setter: - (void)setGroupingType:(int)type;	// 0x346815b5
// declared property setter: - (void)setItemPropertiesToFetch:(id)fetch;	// 0x34681b85
// declared property setter: - (void)setMediaLibrary:(id)library;	// 0x346814bd
// declared property setter: - (void)setSortItems:(BOOL)items;	// 0x34681d9d
- (void)setStaticEntities:(id)entities entityType:(int)type;	// 0x34682a99
// declared property setter: - (void)set_internal:(MPMediaQueryInternal)internal;	// 0x34682b75
// declared property getter: - (BOOL)sortItems;	// 0x34681dc9
// declared property getter: - (BOOL)specifiesPlaylistItems;	// 0x346820b1
- (id)valueForAggregateFunction:(id)aggregateFunction onCollectionsForProperty:(id)property;	// 0x34682569
- (id)valueForAggregateFunction:(id)aggregateFunction onItemsForProperty:(id)property;	// 0x34682545
// declared property getter: - (BOOL)willGroupEntities;	// 0x346820dd
@end


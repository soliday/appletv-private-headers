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
@property(assign, nonatomic) MPMediaQueryInternal _internal;	// G=0x3038bb4d; S=0x3038bb75; @synthesize
@property(copy, nonatomic) NSSet *collectionPropertiesToFetch;	// G=0x3038abed; S=0x3038ac35; 
@property(readonly, assign, nonatomic) MPMediaQuerySectionInfo *collectionSectionInfo;	// G=0x3038acc5; 
@property(readonly, assign, nonatomic) NSArray *collectionSections;	// G=0x3038b179; 
@property(readonly, assign, nonatomic) NSArray *collections;	// G=0x3038a555; 
@property(retain) id criteria;	// G=0x3038baf1; S=0x3038bb05; converted property
@property(readonly, assign, nonatomic) BOOL excludesEntitiesWithBlankNames;	// G=0x3038adf5; 
@property(retain, nonatomic) NSSet *filterPredicates;	// G=0x3038a2b5; S=0x3038a2fd; 
@property(assign, nonatomic) int groupingType;	// G=0x3038a591; S=0x3038a5b5; 
@property(copy, nonatomic) NSSet *itemPropertiesToFetch;	// G=0x3038ab61; S=0x3038ab85; 
@property(readonly, assign, nonatomic) MPMediaQuerySectionInfo *itemSectionInfo;	// G=0x3038ac9d; 
@property(readonly, assign, nonatomic) NSArray *itemSections;	// G=0x3038b151; 
@property(readonly, assign, nonatomic) NSArray *items;	// G=0x3038a541; 
@property(retain, nonatomic) MPMediaLibrary *mediaLibrary;	// G=0x3038a4ad; S=0x3038a4bd; 
@property(copy, nonatomic, getter=_orderingProperties, setter=_setOrderingProperties:) NSArray *orderingProperties;	// G=0x3038ad55; S=0x3038aced; 
@property(assign, nonatomic) BOOL sortItems;	// G=0x3038adc9; S=0x3038ad9d; 
@property(readonly, assign, nonatomic) BOOL specifiesPlaylistItems;	// G=0x3038b0b1; 
@property(readonly, assign, nonatomic) BOOL willGroupEntities;	// G=0x3038b0dd; 
+ (id)ITunesUAudioQuery;	// 0x30389ed5
+ (id)activeGeniusPlaylist;	// 0x303cb48d
+ (id)albumsQuery;	// 0x30389b31
+ (id)artistsQuery;	// 0x30389c01
+ (id)audibleAudiobooksQuery;	// 0x3038a0b1
+ (id)audiobooksQuery;	// 0x30389ff9
+ (id)compilationsQuery;	// 0x3038a12d
+ (id)composersQuery;	// 0x3038a1fd
+ (id)geniusMixesQuery;	// 0x3038aa59
+ (id)genresQuery;	// 0x3038a259
+ (void)initialize;	// 0x30388f49
+ (id)movieRentalsQuery;	// 0x3038a925
+ (id)moviesQuery;	// 0x3038a86d
+ (id)musicVideosQuery;	// 0x3038a6fd
+ (id)playlistsQuery;	// 0x30389da9
+ (id)podcastsQuery;	// 0x30389e05
+ (void)setFilteringDisabled:(BOOL)disabled;	// 0x3038a605
+ (id)songsQuery;	// 0x30389cd1
+ (id)tvShowsQuery;	// 0x3038a7b5
+ (id)videoPodcastsQuery;	// 0x3038a9a1
+ (id)videosQuery;	// 0x3038a645
- (id)init;	// 0x30388f99
- (id)initWithCoder:(id)coder;	// 0x30389549
- (id)initWithCriteria:(id)criteria library:(id)library;	// 0x30388fad
- (id)initWithEntities:(id)entities entityType:(int)type;	// 0x3038912d
- (id)initWithFilterPredicates:(id)filterPredicates;	// 0x303890b9
- (id)initWithFilterPredicatesInternal:(id)filterPredicatesInternal;	// 0x30389025
- (void)_enumerateCollectionsUsingBlock:(id)block;	// 0x3038b771
- (void)_enumerateItemsUsingBlock:(id)block;	// 0x3038b5d9
// declared property getter: - (MPMediaQueryInternal)_internal;	// 0x3038bb4d
- (BOOL)_isFilteringDisabled;	// 0x3038b58d
- (id)_itemsImmediately:(BOOL)immediately;	// 0x3038a501
// declared property getter: - (id)_orderingProperties;	// 0x3038ad55
- (id)_sanitizedQuery;	// 0x3038b1a1
// declared property setter: - (void)_setOrderingProperties:(id)properties;	// 0x3038aced
- (id)_valueForAggregateFunction:(id)aggregateFunction onProperty:(id)property entityType:(int)type;	// 0x3038b211
- (void)addFilterPredicate:(id)predicate;	// 0x3038a365
// declared property getter: - (id)collectionPropertiesToFetch;	// 0x3038abed
// declared property getter: - (id)collectionSectionInfo;	// 0x3038acc5
// declared property getter: - (id)collectionSections;	// 0x3038b179
// declared property getter: - (id)collections;	// 0x3038a555
- (id)copyWithZone:(NSZone *)zone;	// 0x303899c9
// converted property getter: - (id)criteria;	// 0x3038baf1
- (void)dealloc;	// 0x30389179
- (id)description;	// 0x303891d5
- (void)encodeWithCoder:(id)coder;	// 0x303897dd
// declared property getter: - (BOOL)excludesEntitiesWithBlankNames;	// 0x3038adf5
// declared property getter: - (id)filterPredicates;	// 0x3038a2b5
- (unsigned)groupingThreshold;	// 0x3038b0d9
// declared property getter: - (int)groupingType;	// 0x3038a591
- (unsigned)hash;	// 0x30389505
- (BOOL)isEqual:(id)equal;	// 0x3038944d
// declared property getter: - (id)itemPropertiesToFetch;	// 0x3038ab61
// declared property getter: - (id)itemSectionInfo;	// 0x3038ac9d
// declared property getter: - (id)itemSections;	// 0x3038b151
// declared property getter: - (id)items;	// 0x3038a541
// declared property getter: - (id)mediaLibrary;	// 0x3038a4ad
- (id)predicateForProperty:(id)property;	// 0x303cb62d
- (void)removeFilterPredicate:(id)predicate;	// 0x3038a401
- (void)removePredicatesForProperty:(id)property;	// 0x303cb731
// declared property setter: - (void)setCollectionPropertiesToFetch:(id)fetch;	// 0x3038ac35
// converted property setter: - (void)setCriteria:(id)criteria;	// 0x3038bb05
- (void)setFilterPredicate:(id)predicate forProperty:(id)property;	// 0x303cb841
// declared property setter: - (void)setFilterPredicates:(id)predicates;	// 0x3038a2fd
- (void)setFilterPropertyPredicate:(id)predicate;	// 0x303cb89d
// declared property setter: - (void)setGroupingType:(int)type;	// 0x3038a5b5
// declared property setter: - (void)setItemPropertiesToFetch:(id)fetch;	// 0x3038ab85
// declared property setter: - (void)setMediaLibrary:(id)library;	// 0x3038a4bd
// declared property setter: - (void)setSortItems:(BOOL)items;	// 0x3038ad9d
- (void)setStaticEntities:(id)entities entityType:(int)type;	// 0x3038ba99
// declared property setter: - (void)set_internal:(MPMediaQueryInternal)internal;	// 0x3038bb75
// declared property getter: - (BOOL)sortItems;	// 0x3038adc9
// declared property getter: - (BOOL)specifiesPlaylistItems;	// 0x3038b0b1
- (id)valueForAggregateFunction:(id)aggregateFunction onCollectionsForProperty:(id)property;	// 0x3038b569
- (id)valueForAggregateFunction:(id)aggregateFunction onItemsForProperty:(id)property;	// 0x3038b545
// declared property getter: - (BOOL)willGroupEntities;	// 0x3038b0dd
@end


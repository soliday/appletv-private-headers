/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class NSMutableArray, GEOMapRegion;

@interface GEOPlaceSearchResponse : PBCodable {
	int _status;	// 4 = 0x4
	NSMutableArray *_placeResults;	// 8 = 0x8
	GEOMapRegion *_mapRegion;	// 12 = 0xc
	NSMutableArray *_searchs;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) BOOL hasMapRegion;	// G=0x32874ec1; 
@property(retain, nonatomic) GEOMapRegion *mapRegion;	// G=0x3287571d; S=0x3287572d; @synthesize=_mapRegion
@property(retain, nonatomic) NSMutableArray *placeResults;	// G=0x328756e9; S=0x328756f9; @synthesize=_placeResults
@property(retain, nonatomic) NSMutableArray *searchs;	// G=0x32875751; S=0x32875761; @synthesize=_searchs
@property(assign, nonatomic) int status;	// G=0x328756c9; S=0x328756d9; @synthesize=_status
- (void)addPlaceResult:(id)result;	// 0x32874e1d
- (void)addSearch:(id)search;	// 0x32874ed9
- (void)dealloc;	// 0x32874db1
- (id)description;	// 0x32874f7d
- (id)dictionaryRepresentation;	// 0x32874fed
// declared property getter: - (BOOL)hasMapRegion;	// 0x32874ec1
// declared property getter: - (id)mapRegion;	// 0x3287571d
- (id)placeResultAtIndex:(unsigned)index;	// 0x32874ea1
// declared property getter: - (id)placeResults;	// 0x328756e9
- (unsigned)placeResultsCount;	// 0x32874e81
- (BOOL)readFrom:(id)from;	// 0x3287520d
- (id)searchAtIndex:(unsigned)index;	// 0x32874f5d
// declared property getter: - (id)searchs;	// 0x32875751
- (unsigned)searchsCount;	// 0x32874f3d
// declared property setter: - (void)setMapRegion:(id)region;	// 0x3287572d
// declared property setter: - (void)setPlaceResults:(id)results;	// 0x328756f9
// declared property setter: - (void)setSearchs:(id)searchs;	// 0x32875761
// declared property setter: - (void)setStatus:(int)status;	// 0x328756d9
// declared property getter: - (int)status;	// 0x328756c9
- (void)writeTo:(id)to;	// 0x3287546d
@end


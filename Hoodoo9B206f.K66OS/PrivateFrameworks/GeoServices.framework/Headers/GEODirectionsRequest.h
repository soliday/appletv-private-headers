/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBRequest.h> // Unknown library

@class GEOLocation, NSMutableArray, GEOMapRegion;

@interface GEODirectionsRequest : PBRequest {
	int _type;	// 4 = 0x4
	NSMutableArray *_placeSearchs;	// 8 = 0x8
	BOOL _hasTimestampType;	// 12 = 0xc
	int _timestampType;	// 16 = 0x10
	BOOL _hasTimestamp;	// 20 = 0x14
	double _timestamp;	// 24 = 0x18
	BOOL _hasPreference;	// 32 = 0x20
	int _preference;	// 36 = 0x24
	BOOL _hasIncludePhonetics;	// 40 = 0x28
	BOOL _includePhonetics;	// 41 = 0x29
	BOOL _hasIncludeNavigationInfo;	// 42 = 0x2a
	BOOL _includeNavigationInfo;	// 43 = 0x2b
	BOOL _hasMaxRouteCount;	// 44 = 0x2c
	int _maxRouteCount;	// 48 = 0x30
	GEOLocation *_currentUserLocation;	// 52 = 0x34
	GEOMapRegion *_currentMapRegion;	// 56 = 0x38
	BOOL _hasIncludeRoutePoints;	// 60 = 0x3c
	BOOL _includeRoutePoints;	// 61 = 0x3d
	BOOL _hasIncludeRouteSegments;	// 62 = 0x3e
	BOOL _includeRouteSegments;	// 63 = 0x3f
	BOOL _hasPageOffset;	// 64 = 0x40
	int _pageOffset;	// 68 = 0x44
}
@property(retain, nonatomic) GEOMapRegion *currentMapRegion;	// G=0x3286c571; S=0x3286c581; @synthesize=_currentMapRegion
@property(retain, nonatomic) GEOLocation *currentUserLocation;	// G=0x3286c53d; S=0x3286c54d; @synthesize=_currentUserLocation
@property(readonly, assign, nonatomic) BOOL hasCurrentMapRegion;	// G=0x3286b5e1; 
@property(readonly, assign, nonatomic) BOOL hasCurrentUserLocation;	// G=0x3286b5c9; 
@property(assign, nonatomic) BOOL hasIncludeNavigationInfo;	// G=0x3286c4ed; S=0x3286c4fd; @synthesize=_hasIncludeNavigationInfo
@property(assign, nonatomic) BOOL hasIncludePhonetics;	// G=0x3286c4bd; S=0x3286c4cd; @synthesize=_hasIncludePhonetics
@property(assign, nonatomic) BOOL hasIncludeRoutePoints;	// G=0x3286c5a5; S=0x3286c5b5; @synthesize=_hasIncludeRoutePoints
@property(assign, nonatomic) BOOL hasIncludeRouteSegments;	// G=0x3286c5d5; S=0x3286c5e5; @synthesize=_hasIncludeRouteSegments
@property(assign, nonatomic) BOOL hasMaxRouteCount;	// G=0x3286c51d; S=0x3286c52d; @synthesize=_hasMaxRouteCount
@property(assign, nonatomic) BOOL hasPageOffset;	// G=0x3286c605; S=0x3286c615; @synthesize=_hasPageOffset
@property(assign, nonatomic) BOOL hasPreference;	// G=0x3286c48d; S=0x3286c49d; @synthesize=_hasPreference
@property(assign, nonatomic) BOOL hasTimestamp;	// G=0x3286c455; S=0x3286c465; @synthesize=_hasTimestamp
@property(assign, nonatomic) BOOL hasTimestampType;	// G=0x3286c425; S=0x3286c435; @synthesize=_hasTimestampType
@property(assign, nonatomic) BOOL includeNavigationInfo;	// G=0x3286c50d; S=0x3286b55d; @synthesize=_includeNavigationInfo
@property(assign, nonatomic) BOOL includePhonetics;	// G=0x3286c4dd; S=0x3286b539; @synthesize=_includePhonetics
@property(assign, nonatomic) BOOL includeRoutePoints;	// G=0x3286c5c5; S=0x3286b5f9; @synthesize=_includeRoutePoints
@property(assign, nonatomic) BOOL includeRouteSegments;	// G=0x3286c5f5; S=0x3286b61d; @synthesize=_includeRouteSegments
@property(assign, nonatomic) int maxRouteCount;	// G=0x3286b581; S=0x3286b5a5; @synthesize=_maxRouteCount
@property(assign, nonatomic) int pageOffset;	// G=0x3286c625; S=0x3286b641; @synthesize=_pageOffset
@property(retain, nonatomic) NSMutableArray *placeSearchs;	// G=0x3286c3f1; S=0x3286c401; @synthesize=_placeSearchs
@property(assign, nonatomic) int preference;	// G=0x3286c4ad; S=0x3286b515; @synthesize=_preference
@property(assign, nonatomic) double timestamp;	// G=0x3286c475; S=0x3286b4e9; @synthesize=_timestamp
@property(assign, nonatomic) int timestampType;	// G=0x3286c445; S=0x3286b4c5; @synthesize=_timestampType
@property(assign, nonatomic) int type;	// G=0x3286c3d1; S=0x3286c3e1; @synthesize=_type
- (void)addPlaceSearch:(id)search;	// 0x3286b421
// declared property getter: - (id)currentMapRegion;	// 0x3286c571
// declared property getter: - (id)currentUserLocation;	// 0x3286c53d
- (void)dealloc;	// 0x3286b3b5
- (id)description;	// 0x3286b665
- (id)dictionaryRepresentation;	// 0x3286b6d5
// declared property getter: - (BOOL)hasCurrentMapRegion;	// 0x3286b5e1
// declared property getter: - (BOOL)hasCurrentUserLocation;	// 0x3286b5c9
// declared property getter: - (BOOL)hasIncludeNavigationInfo;	// 0x3286c4ed
// declared property getter: - (BOOL)hasIncludePhonetics;	// 0x3286c4bd
// declared property getter: - (BOOL)hasIncludeRoutePoints;	// 0x3286c5a5
// declared property getter: - (BOOL)hasIncludeRouteSegments;	// 0x3286c5d5
// declared property getter: - (BOOL)hasMaxRouteCount;	// 0x3286c51d
// declared property getter: - (BOOL)hasPageOffset;	// 0x3286c605
// declared property getter: - (BOOL)hasPreference;	// 0x3286c48d
// declared property getter: - (BOOL)hasTimestamp;	// 0x3286c455
// declared property getter: - (BOOL)hasTimestampType;	// 0x3286c425
// declared property getter: - (BOOL)includeNavigationInfo;	// 0x3286c50d
// declared property getter: - (BOOL)includePhonetics;	// 0x3286c4dd
// declared property getter: - (BOOL)includeRoutePoints;	// 0x3286c5c5
// declared property getter: - (BOOL)includeRouteSegments;	// 0x3286c5f5
// declared property getter: - (int)maxRouteCount;	// 0x3286b581
// declared property getter: - (int)pageOffset;	// 0x3286c625
- (id)placeSearchAtIndex:(unsigned)index;	// 0x3286b4a5
// declared property getter: - (id)placeSearchs;	// 0x3286c3f1
- (unsigned)placeSearchsCount;	// 0x3286b485
// declared property getter: - (int)preference;	// 0x3286c4ad
- (BOOL)readFrom:(id)from;	// 0x3286bb9d
- (unsigned)requestTypeCode;	// 0x3286c3b1
- (Class)responseClass;	// 0x3286c3b5
// declared property setter: - (void)setCurrentMapRegion:(id)region;	// 0x3286c581
// declared property setter: - (void)setCurrentUserLocation:(id)location;	// 0x3286c54d
// declared property setter: - (void)setHasIncludeNavigationInfo:(BOOL)info;	// 0x3286c4fd
// declared property setter: - (void)setHasIncludePhonetics:(BOOL)phonetics;	// 0x3286c4cd
// declared property setter: - (void)setHasIncludeRoutePoints:(BOOL)points;	// 0x3286c5b5
// declared property setter: - (void)setHasIncludeRouteSegments:(BOOL)segments;	// 0x3286c5e5
// declared property setter: - (void)setHasMaxRouteCount:(BOOL)count;	// 0x3286c52d
// declared property setter: - (void)setHasPageOffset:(BOOL)offset;	// 0x3286c615
// declared property setter: - (void)setHasPreference:(BOOL)preference;	// 0x3286c49d
// declared property setter: - (void)setHasTimestamp:(BOOL)timestamp;	// 0x3286c465
// declared property setter: - (void)setHasTimestampType:(BOOL)type;	// 0x3286c435
// declared property setter: - (void)setIncludeNavigationInfo:(BOOL)info;	// 0x3286b55d
// declared property setter: - (void)setIncludePhonetics:(BOOL)phonetics;	// 0x3286b539
// declared property setter: - (void)setIncludeRoutePoints:(BOOL)points;	// 0x3286b5f9
// declared property setter: - (void)setIncludeRouteSegments:(BOOL)segments;	// 0x3286b61d
// declared property setter: - (void)setMaxRouteCount:(int)count;	// 0x3286b5a5
// declared property setter: - (void)setPageOffset:(int)offset;	// 0x3286b641
// declared property setter: - (void)setPlaceSearchs:(id)searchs;	// 0x3286c401
// declared property setter: - (void)setPreference:(int)preference;	// 0x3286b515
// declared property setter: - (void)setTimestamp:(double)timestamp;	// 0x3286b4e9
// declared property setter: - (void)setTimestampType:(int)type;	// 0x3286b4c5
// declared property setter: - (void)setType:(int)type;	// 0x3286c3e1
// declared property getter: - (double)timestamp;	// 0x3286c475
// declared property getter: - (int)timestampType;	// 0x3286c445
// declared property getter: - (int)type;	// 0x3286c3d1
- (void)writeTo:(id)to;	// 0x3286bfa5
@end


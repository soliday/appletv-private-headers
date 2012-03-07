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
@property(retain, nonatomic) GEOMapRegion *currentMapRegion;	// G=0x367086a9; S=0x367086b9; @synthesize=_currentMapRegion
@property(retain, nonatomic) GEOLocation *currentUserLocation;	// G=0x36708675; S=0x36708685; @synthesize=_currentUserLocation
@property(readonly, assign, nonatomic) BOOL hasCurrentMapRegion;	// G=0x36707719; 
@property(readonly, assign, nonatomic) BOOL hasCurrentUserLocation;	// G=0x36707701; 
@property(assign, nonatomic) BOOL hasIncludeNavigationInfo;	// G=0x36708625; S=0x36708635; @synthesize=_hasIncludeNavigationInfo
@property(assign, nonatomic) BOOL hasIncludePhonetics;	// G=0x367085f5; S=0x36708605; @synthesize=_hasIncludePhonetics
@property(assign, nonatomic) BOOL hasIncludeRoutePoints;	// G=0x367086dd; S=0x367086ed; @synthesize=_hasIncludeRoutePoints
@property(assign, nonatomic) BOOL hasIncludeRouteSegments;	// G=0x3670870d; S=0x3670871d; @synthesize=_hasIncludeRouteSegments
@property(assign, nonatomic) BOOL hasMaxRouteCount;	// G=0x36708655; S=0x36708665; @synthesize=_hasMaxRouteCount
@property(assign, nonatomic) BOOL hasPageOffset;	// G=0x3670873d; S=0x3670874d; @synthesize=_hasPageOffset
@property(assign, nonatomic) BOOL hasPreference;	// G=0x367085c5; S=0x367085d5; @synthesize=_hasPreference
@property(assign, nonatomic) BOOL hasTimestamp;	// G=0x3670858d; S=0x3670859d; @synthesize=_hasTimestamp
@property(assign, nonatomic) BOOL hasTimestampType;	// G=0x3670855d; S=0x3670856d; @synthesize=_hasTimestampType
@property(assign, nonatomic) BOOL includeNavigationInfo;	// G=0x36708645; S=0x36707695; @synthesize=_includeNavigationInfo
@property(assign, nonatomic) BOOL includePhonetics;	// G=0x36708615; S=0x36707671; @synthesize=_includePhonetics
@property(assign, nonatomic) BOOL includeRoutePoints;	// G=0x367086fd; S=0x36707731; @synthesize=_includeRoutePoints
@property(assign, nonatomic) BOOL includeRouteSegments;	// G=0x3670872d; S=0x36707755; @synthesize=_includeRouteSegments
@property(assign, nonatomic) int maxRouteCount;	// G=0x367076b9; S=0x367076dd; @synthesize=_maxRouteCount
@property(assign, nonatomic) int pageOffset;	// G=0x3670875d; S=0x36707779; @synthesize=_pageOffset
@property(retain, nonatomic) NSMutableArray *placeSearchs;	// G=0x36708529; S=0x36708539; @synthesize=_placeSearchs
@property(assign, nonatomic) int preference;	// G=0x367085e5; S=0x3670764d; @synthesize=_preference
@property(assign, nonatomic) double timestamp;	// G=0x367085ad; S=0x36707621; @synthesize=_timestamp
@property(assign, nonatomic) int timestampType;	// G=0x3670857d; S=0x367075fd; @synthesize=_timestampType
@property(assign, nonatomic) int type;	// G=0x36708509; S=0x36708519; @synthesize=_type
- (void)addPlaceSearch:(id)search;	// 0x36707559
// declared property getter: - (id)currentMapRegion;	// 0x367086a9
// declared property getter: - (id)currentUserLocation;	// 0x36708675
- (void)dealloc;	// 0x367074ed
- (id)description;	// 0x3670779d
- (id)dictionaryRepresentation;	// 0x3670780d
// declared property getter: - (BOOL)hasCurrentMapRegion;	// 0x36707719
// declared property getter: - (BOOL)hasCurrentUserLocation;	// 0x36707701
// declared property getter: - (BOOL)hasIncludeNavigationInfo;	// 0x36708625
// declared property getter: - (BOOL)hasIncludePhonetics;	// 0x367085f5
// declared property getter: - (BOOL)hasIncludeRoutePoints;	// 0x367086dd
// declared property getter: - (BOOL)hasIncludeRouteSegments;	// 0x3670870d
// declared property getter: - (BOOL)hasMaxRouteCount;	// 0x36708655
// declared property getter: - (BOOL)hasPageOffset;	// 0x3670873d
// declared property getter: - (BOOL)hasPreference;	// 0x367085c5
// declared property getter: - (BOOL)hasTimestamp;	// 0x3670858d
// declared property getter: - (BOOL)hasTimestampType;	// 0x3670855d
// declared property getter: - (BOOL)includeNavigationInfo;	// 0x36708645
// declared property getter: - (BOOL)includePhonetics;	// 0x36708615
// declared property getter: - (BOOL)includeRoutePoints;	// 0x367086fd
// declared property getter: - (BOOL)includeRouteSegments;	// 0x3670872d
// declared property getter: - (int)maxRouteCount;	// 0x367076b9
// declared property getter: - (int)pageOffset;	// 0x3670875d
- (id)placeSearchAtIndex:(unsigned)index;	// 0x367075dd
// declared property getter: - (id)placeSearchs;	// 0x36708529
- (unsigned)placeSearchsCount;	// 0x367075bd
// declared property getter: - (int)preference;	// 0x367085e5
- (BOOL)readFrom:(id)from;	// 0x36707cd5
- (unsigned)requestTypeCode;	// 0x367084e9
- (Class)responseClass;	// 0x367084ed
// declared property setter: - (void)setCurrentMapRegion:(id)region;	// 0x367086b9
// declared property setter: - (void)setCurrentUserLocation:(id)location;	// 0x36708685
// declared property setter: - (void)setHasIncludeNavigationInfo:(BOOL)info;	// 0x36708635
// declared property setter: - (void)setHasIncludePhonetics:(BOOL)phonetics;	// 0x36708605
// declared property setter: - (void)setHasIncludeRoutePoints:(BOOL)points;	// 0x367086ed
// declared property setter: - (void)setHasIncludeRouteSegments:(BOOL)segments;	// 0x3670871d
// declared property setter: - (void)setHasMaxRouteCount:(BOOL)count;	// 0x36708665
// declared property setter: - (void)setHasPageOffset:(BOOL)offset;	// 0x3670874d
// declared property setter: - (void)setHasPreference:(BOOL)preference;	// 0x367085d5
// declared property setter: - (void)setHasTimestamp:(BOOL)timestamp;	// 0x3670859d
// declared property setter: - (void)setHasTimestampType:(BOOL)type;	// 0x3670856d
// declared property setter: - (void)setIncludeNavigationInfo:(BOOL)info;	// 0x36707695
// declared property setter: - (void)setIncludePhonetics:(BOOL)phonetics;	// 0x36707671
// declared property setter: - (void)setIncludeRoutePoints:(BOOL)points;	// 0x36707731
// declared property setter: - (void)setIncludeRouteSegments:(BOOL)segments;	// 0x36707755
// declared property setter: - (void)setMaxRouteCount:(int)count;	// 0x367076dd
// declared property setter: - (void)setPageOffset:(int)offset;	// 0x36707779
// declared property setter: - (void)setPlaceSearchs:(id)searchs;	// 0x36708539
// declared property setter: - (void)setPreference:(int)preference;	// 0x3670764d
// declared property setter: - (void)setTimestamp:(double)timestamp;	// 0x36707621
// declared property setter: - (void)setTimestampType:(int)type;	// 0x367075fd
// declared property setter: - (void)setType:(int)type;	// 0x36708519
// declared property getter: - (double)timestamp;	// 0x367085ad
// declared property getter: - (int)timestampType;	// 0x3670857d
// declared property getter: - (int)type;	// 0x36708509
- (void)writeTo:(id)to;	// 0x367080dd
@end

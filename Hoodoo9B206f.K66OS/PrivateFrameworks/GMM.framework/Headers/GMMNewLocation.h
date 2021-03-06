/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSString, GMMGeometry;

@interface GMMNewLocation : PBCodable {
	NSString *_query;	// 4 = 0x4
	GMMGeometry *_geocode;	// 8 = 0x8
	NSString *_queryRefinementToken;	// 12 = 0xc
	BOOL _hasIsVia;	// 16 = 0x10
	BOOL _isVia;	// 17 = 0x11
	BOOL _hasWaypointType;	// 18 = 0x12
	int _waypointType;	// 20 = 0x14
}
@property(retain, nonatomic) GMMGeometry *geocode;	// G=0x33cd0071; S=0x33cd0081; @synthesize=_geocode
@property(readonly, assign, nonatomic) BOOL hasGeocode;	// G=0x33ccfa51; 
@property(assign, nonatomic) BOOL hasIsVia;	// G=0x33cd00d9; S=0x33cd00e9; @synthesize=_hasIsVia
@property(readonly, assign, nonatomic) BOOL hasQuery;	// G=0x33ccfa39; 
@property(readonly, assign, nonatomic) BOOL hasQueryRefinementToken;	// G=0x33ccfa69; 
@property(assign, nonatomic) BOOL hasWaypointType;	// G=0x33cd00f9; S=0x33cd0109; @synthesize=_hasWaypointType
@property(assign, nonatomic) BOOL isVia;	// G=0x33ccfa81; S=0x33ccfaa5; @synthesize=_isVia
@property(retain, nonatomic) NSString *query;	// G=0x33cd003d; S=0x33cd004d; @synthesize=_query
@property(retain, nonatomic) NSString *queryRefinementToken;	// G=0x33cd00a5; S=0x33cd00b5; @synthesize=_queryRefinementToken
@property(assign, nonatomic) int waypointType;	// G=0x33ccfac9; S=0x33ccfaed; @synthesize=_waypointType
- (id)initWithGEOPlaceSearchRequest:(id)geoplaceSearchRequest placeToken:(id)token;	// 0x33cebaa9
- (void)dealloc;	// 0x33ccf9cd
- (id)description;	// 0x33ccfb11
- (id)description;	// 0x33cb956d
- (id)dictionaryRepresentation;	// 0x33ccfb81
// declared property getter: - (id)geocode;	// 0x33cd0071
// declared property getter: - (BOOL)hasGeocode;	// 0x33ccfa51
// declared property getter: - (BOOL)hasIsVia;	// 0x33cd00d9
// declared property getter: - (BOOL)hasQuery;	// 0x33ccfa39
// declared property getter: - (BOOL)hasQueryRefinementToken;	// 0x33ccfa69
// declared property getter: - (BOOL)hasWaypointType;	// 0x33cd00f9
// declared property getter: - (BOOL)isVia;	// 0x33ccfa81
// declared property getter: - (id)query;	// 0x33cd003d
// declared property getter: - (id)queryRefinementToken;	// 0x33cd00a5
- (BOOL)readFrom:(id)from;	// 0x33ccfcdd
// declared property setter: - (void)setGeocode:(id)geocode;	// 0x33cd0081
// declared property setter: - (void)setHasIsVia:(BOOL)via;	// 0x33cd00e9
// declared property setter: - (void)setHasWaypointType:(BOOL)type;	// 0x33cd0109
// declared property setter: - (void)setIsVia:(BOOL)via;	// 0x33ccfaa5
// declared property setter: - (void)setQuery:(id)query;	// 0x33cd004d
// declared property setter: - (void)setQueryRefinementToken:(id)token;	// 0x33cd00b5
// declared property setter: - (void)setWaypointType:(int)type;	// 0x33ccfaed
// declared property getter: - (int)waypointType;	// 0x33ccfac9
- (void)writeTo:(id)to;	// 0x33ccfee9
@end


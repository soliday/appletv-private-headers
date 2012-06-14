/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class NSMutableArray;

@interface GEODirectionsResponse : PBCodable {
	int _status;	// 4 = 0x4
	NSMutableArray *_routes;	// 8 = 0x8
	NSMutableArray *_locationResponses;	// 12 = 0xc
	BOOL _hasLocalDistanceUnits;	// 16 = 0x10
	int _localDistanceUnits;	// 20 = 0x14
	NSMutableArray *_transitAgents;	// 24 = 0x18
}
@property(assign, nonatomic) BOOL hasLocalDistanceUnits;	// G=0x35f2746d; S=0x35f2747d; @synthesize=_hasLocalDistanceUnits
@property(assign, nonatomic) int localDistanceUnits;	// G=0x35f2748d; S=0x35f267e9; @synthesize=_localDistanceUnits
@property(retain, nonatomic) NSMutableArray *locationResponses;	// G=0x35f27439; S=0x35f27449; @synthesize=_locationResponses
@property(retain, nonatomic) NSMutableArray *routes;	// G=0x35f27405; S=0x35f27415; @synthesize=_routes
@property(assign, nonatomic) int status;	// G=0x35f273e5; S=0x35f273f5; @synthesize=_status
@property(retain, nonatomic) NSMutableArray *transitAgents;	// G=0x35f2749d; S=0x35f274ad; @synthesize=_transitAgents
- (void)addLocationResponse:(id)response;	// 0x35f26745
- (void)addRoute:(id)route;	// 0x35f266a1
- (void)addTransitAgent:(id)agent;	// 0x35f2680d
- (void)dealloc;	// 0x35f26635
- (id)description;	// 0x35f268b1
- (id)dictionaryRepresentation;	// 0x35f26921
// declared property getter: - (BOOL)hasLocalDistanceUnits;	// 0x35f2746d
// declared property getter: - (int)localDistanceUnits;	// 0x35f2748d
- (id)locationResponseAtIndex:(unsigned)index;	// 0x35f267c9
// declared property getter: - (id)locationResponses;	// 0x35f27439
- (unsigned)locationResponsesCount;	// 0x35f267a9
- (BOOL)readFrom:(id)from;	// 0x35f26d99
- (id)routeAtIndex:(unsigned)index;	// 0x35f26725
// declared property getter: - (id)routes;	// 0x35f27405
- (unsigned)routesCount;	// 0x35f26705
// declared property setter: - (void)setHasLocalDistanceUnits:(BOOL)units;	// 0x35f2747d
// declared property setter: - (void)setLocalDistanceUnits:(int)units;	// 0x35f267e9
// declared property setter: - (void)setLocationResponses:(id)responses;	// 0x35f27449
// declared property setter: - (void)setRoutes:(id)routes;	// 0x35f27415
// declared property setter: - (void)setStatus:(int)status;	// 0x35f273f5
// declared property setter: - (void)setTransitAgents:(id)agents;	// 0x35f274ad
// declared property getter: - (int)status;	// 0x35f273e5
- (id)transitAgentAtIndex:(unsigned)index;	// 0x35f26891
// declared property getter: - (id)transitAgents;	// 0x35f2749d
- (unsigned)transitAgentsCount;	// 0x35f26871
- (void)writeTo:(id)to;	// 0x35f27081
@end


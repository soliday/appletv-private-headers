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
@property(assign, nonatomic) BOOL hasLocalDistanceUnits;	// G=0x314465a5; S=0x314465b5; @synthesize=_hasLocalDistanceUnits
@property(assign, nonatomic) int localDistanceUnits;	// G=0x314465c5; S=0x31445921; @synthesize=_localDistanceUnits
@property(retain, nonatomic) NSMutableArray *locationResponses;	// G=0x31446571; S=0x31446581; @synthesize=_locationResponses
@property(retain, nonatomic) NSMutableArray *routes;	// G=0x3144653d; S=0x3144654d; @synthesize=_routes
@property(assign, nonatomic) int status;	// G=0x3144651d; S=0x3144652d; @synthesize=_status
@property(retain, nonatomic) NSMutableArray *transitAgents;	// G=0x314465d5; S=0x314465e5; @synthesize=_transitAgents
- (void)addLocationResponse:(id)response;	// 0x3144587d
- (void)addRoute:(id)route;	// 0x314457d9
- (void)addTransitAgent:(id)agent;	// 0x31445945
- (void)dealloc;	// 0x3144576d
- (id)description;	// 0x314459e9
- (id)dictionaryRepresentation;	// 0x31445a59
// declared property getter: - (BOOL)hasLocalDistanceUnits;	// 0x314465a5
// declared property getter: - (int)localDistanceUnits;	// 0x314465c5
- (id)locationResponseAtIndex:(unsigned)index;	// 0x31445901
// declared property getter: - (id)locationResponses;	// 0x31446571
- (unsigned)locationResponsesCount;	// 0x314458e1
- (BOOL)readFrom:(id)from;	// 0x31445ed1
- (id)routeAtIndex:(unsigned)index;	// 0x3144585d
// declared property getter: - (id)routes;	// 0x3144653d
- (unsigned)routesCount;	// 0x3144583d
// declared property setter: - (void)setHasLocalDistanceUnits:(BOOL)units;	// 0x314465b5
// declared property setter: - (void)setLocalDistanceUnits:(int)units;	// 0x31445921
// declared property setter: - (void)setLocationResponses:(id)responses;	// 0x31446581
// declared property setter: - (void)setRoutes:(id)routes;	// 0x3144654d
// declared property setter: - (void)setStatus:(int)status;	// 0x3144652d
// declared property setter: - (void)setTransitAgents:(id)agents;	// 0x314465e5
// declared property getter: - (int)status;	// 0x3144651d
- (id)transitAgentAtIndex:(unsigned)index;	// 0x314459c9
// declared property getter: - (id)transitAgents;	// 0x314465d5
- (unsigned)transitAgentsCount;	// 0x314459a9
- (void)writeTo:(id)to;	// 0x314461b9
@end

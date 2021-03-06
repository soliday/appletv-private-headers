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
@property(assign, nonatomic) BOOL hasLocalDistanceUnits;	// G=0x367095a5; S=0x367095b5; @synthesize=_hasLocalDistanceUnits
@property(assign, nonatomic) int localDistanceUnits;	// G=0x367095c5; S=0x36708921; @synthesize=_localDistanceUnits
@property(retain, nonatomic) NSMutableArray *locationResponses;	// G=0x36709571; S=0x36709581; @synthesize=_locationResponses
@property(retain, nonatomic) NSMutableArray *routes;	// G=0x3670953d; S=0x3670954d; @synthesize=_routes
@property(assign, nonatomic) int status;	// G=0x3670951d; S=0x3670952d; @synthesize=_status
@property(retain, nonatomic) NSMutableArray *transitAgents;	// G=0x367095d5; S=0x367095e5; @synthesize=_transitAgents
- (void)addLocationResponse:(id)response;	// 0x3670887d
- (void)addRoute:(id)route;	// 0x367087d9
- (void)addTransitAgent:(id)agent;	// 0x36708945
- (void)dealloc;	// 0x3670876d
- (id)description;	// 0x367089e9
- (id)dictionaryRepresentation;	// 0x36708a59
// declared property getter: - (BOOL)hasLocalDistanceUnits;	// 0x367095a5
// declared property getter: - (int)localDistanceUnits;	// 0x367095c5
- (id)locationResponseAtIndex:(unsigned)index;	// 0x36708901
// declared property getter: - (id)locationResponses;	// 0x36709571
- (unsigned)locationResponsesCount;	// 0x367088e1
- (BOOL)readFrom:(id)from;	// 0x36708ed1
- (id)routeAtIndex:(unsigned)index;	// 0x3670885d
// declared property getter: - (id)routes;	// 0x3670953d
- (unsigned)routesCount;	// 0x3670883d
// declared property setter: - (void)setHasLocalDistanceUnits:(BOOL)units;	// 0x367095b5
// declared property setter: - (void)setLocalDistanceUnits:(int)units;	// 0x36708921
// declared property setter: - (void)setLocationResponses:(id)responses;	// 0x36709581
// declared property setter: - (void)setRoutes:(id)routes;	// 0x3670954d
// declared property setter: - (void)setStatus:(int)status;	// 0x3670952d
// declared property setter: - (void)setTransitAgents:(id)agents;	// 0x367095e5
// declared property getter: - (int)status;	// 0x3670951d
- (id)transitAgentAtIndex:(unsigned)index;	// 0x367089c9
// declared property getter: - (id)transitAgents;	// 0x367095d5
- (unsigned)transitAgentsCount;	// 0x367089a9
- (void)writeTo:(id)to;	// 0x367091b9
@end


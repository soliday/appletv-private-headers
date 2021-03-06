/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GEODirectionsRequest.h"

@class NSString, NSMutableArray;

@interface GEODirectionsRouteRequest : GEODirectionsRequest {
	unsigned short _providerID;	// 72 = 0x48
	unsigned _transitIconSize;	// 76 = 0x4c
	int _mapZoomLevel;	// 80 = 0x50
	unsigned _maxRoutes;	// 84 = 0x54
	int _timezoneOffset;	// 88 = 0x58
	int _cachedIconVersion;	// 92 = 0x5c
	NSMutableArray *_cachedIconIDs;	// 96 = 0x60
	NSString *_startPlaceToken;	// 100 = 0x64
	NSString *_endPlaceToken;	// 104 = 0x68
	NSMutableArray *_viaWaypoints;	// 108 = 0x6c
}
@property(retain, nonatomic) NSMutableArray *cachedIconIDs;	// G=0x32c79ae1; S=0x32c79af1; @synthesize=_cachedIconIDs
@property(assign, nonatomic) int cachedIconVersion;	// G=0x32c79ac1; S=0x32c79ad1; @synthesize=_cachedIconVersion
@property(retain, nonatomic) NSString *endPlaceToken;	// G=0x32c79b49; S=0x32c79b59; @synthesize=_endPlaceToken
@property(assign, nonatomic) int mapZoomLevel;	// G=0x32c79a61; S=0x32c79a71; @synthesize=_mapZoomLevel
@property(assign, nonatomic) unsigned maxRoutes;	// G=0x32c79a81; S=0x32c79a91; @synthesize=_maxRoutes
@property(assign, nonatomic) unsigned short providerID;	// G=0x32c79a21; S=0x32c79a31; @synthesize=_providerID
@property(retain, nonatomic) NSString *startPlaceToken;	// G=0x32c79b15; S=0x32c79b25; @synthesize=_startPlaceToken
@property(assign, nonatomic) int timezoneOffset;	// G=0x32c79aa1; S=0x32c79ab1; @synthesize=_timezoneOffset
@property(assign, nonatomic) unsigned transitIconSize;	// G=0x32c79a41; S=0x32c79a51; @synthesize=_transitIconSize
@property(readonly, assign, nonatomic) NSMutableArray *viaWaypoints;	// G=0x32c79b7d; @synthesize=_viaWaypoints
- (id)init;	// 0x32c798bd
- (void)addViaWaypoint:(id)waypoint;	// 0x32c799b9
// declared property getter: - (id)cachedIconIDs;	// 0x32c79ae1
// declared property getter: - (int)cachedIconVersion;	// 0x32c79ac1
- (void)dealloc;	// 0x32c79915
// declared property getter: - (id)endPlaceToken;	// 0x32c79b49
// declared property getter: - (int)mapZoomLevel;	// 0x32c79a61
// declared property getter: - (unsigned)maxRoutes;	// 0x32c79a81
// declared property getter: - (unsigned short)providerID;	// 0x32c79a21
- (Class)responseClass;	// 0x32c7999d
// declared property setter: - (void)setCachedIconIDs:(id)ids;	// 0x32c79af1
// declared property setter: - (void)setCachedIconVersion:(int)version;	// 0x32c79ad1
// declared property setter: - (void)setEndPlaceToken:(id)token;	// 0x32c79b59
// declared property setter: - (void)setMapZoomLevel:(int)level;	// 0x32c79a71
// declared property setter: - (void)setMaxRoutes:(unsigned)routes;	// 0x32c79a91
// declared property setter: - (void)setProviderID:(unsigned short)anId;	// 0x32c79a31
// declared property setter: - (void)setStartPlaceToken:(id)token;	// 0x32c79b25
// declared property setter: - (void)setTimezoneOffset:(int)offset;	// 0x32c79ab1
// declared property setter: - (void)setTransitIconSize:(unsigned)size;	// 0x32c79a51
// declared property getter: - (id)startPlaceToken;	// 0x32c79b15
// declared property getter: - (int)timezoneOffset;	// 0x32c79aa1
// declared property getter: - (unsigned)transitIconSize;	// 0x32c79a41
// declared property getter: - (id)viaWaypoints;	// 0x32c79b7d
@end


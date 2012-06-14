/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import "GEOPlaceSearchRequest.h"


@interface GEOSearchRequest : GEOPlaceSearchRequest {
	int _type;	// 140 = 0x8c
	int _zoomLevel;	// 144 = 0x90
	unsigned short _provider;	// 148 = 0x94
}
@property(assign, nonatomic) unsigned short provider;	// G=0x32876145; S=0x32876155; @synthesize=_provider
@property(assign, nonatomic) int type;	// G=0x32876105; S=0x32876115; @synthesize=_type
@property(assign, nonatomic) int zoomLevel;	// G=0x32876125; S=0x32876135; @synthesize=_zoomLevel
- (id)init;	// 0x328760a1
// declared property getter: - (unsigned short)provider;	// 0x32876145
- (Class)responseClass;	// 0x328760e9
// declared property setter: - (void)setProvider:(unsigned short)provider;	// 0x32876155
// declared property setter: - (void)setType:(int)type;	// 0x32876115
// declared property setter: - (void)setZoomLevel:(int)level;	// 0x32876135
// declared property getter: - (int)type;	// 0x32876105
// declared property getter: - (int)zoomLevel;	// 0x32876125
@end


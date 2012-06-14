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
@property(assign, nonatomic) unsigned short provider;	// G=0x35f30145; S=0x35f30155; @synthesize=_provider
@property(assign, nonatomic) int type;	// G=0x35f30105; S=0x35f30115; @synthesize=_type
@property(assign, nonatomic) int zoomLevel;	// G=0x35f30125; S=0x35f30135; @synthesize=_zoomLevel
- (id)init;	// 0x35f300a1
// declared property getter: - (unsigned short)provider;	// 0x35f30145
- (Class)responseClass;	// 0x35f300e9
// declared property setter: - (void)setProvider:(unsigned short)provider;	// 0x35f30155
// declared property setter: - (void)setType:(int)type;	// 0x35f30115
// declared property setter: - (void)setZoomLevel:(int)level;	// 0x35f30135
// declared property getter: - (int)type;	// 0x35f30105
// declared property getter: - (int)zoomLevel;	// 0x35f30125
@end


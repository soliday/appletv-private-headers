/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library


@interface GEOLatLng : PBCodable {
@private
	double _lat;	// 4 = 0x4
	double _lng;	// 12 = 0xc
}
@property(assign, nonatomic) double lat;	// G=0x30d67bd1; S=0x30d67be1; @synthesize=_lat
@property(assign, nonatomic) double lng;	// G=0x30d67bad; S=0x30d67bbd; @synthesize=_lng
- (id)init;	// 0x30d67c21
- (void)dealloc;	// 0x30d67bf5
- (id)description;	// 0x30d67ced
- (id)dictionaryRepresentation;	// 0x30d67c4d
// declared property getter: - (double)lat;	// 0x30d67bd1
// declared property getter: - (double)lng;	// 0x30d67bad
- (BOOL)readFrom:(id)from;	// 0x30d67e35
// declared property setter: - (void)setLat:(double)lat;	// 0x30d67be1
// declared property setter: - (void)setLng:(double)lng;	// 0x30d67bbd
- (void)writeTo:(id)to;	// 0x30d67ddd
@end

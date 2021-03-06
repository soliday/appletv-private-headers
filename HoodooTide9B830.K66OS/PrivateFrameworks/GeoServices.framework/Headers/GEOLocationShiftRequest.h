/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBRequest.h> // Unknown library

@class GEOPixelPoint;

@interface GEOLocationShiftRequest : PBRequest {
	GEOPixelPoint *_pixel;	// 4 = 0x4
}
@property(retain, nonatomic) GEOPixelPoint *pixel;	// G=0x35f3c041; S=0x35f3c051; @synthesize=_pixel
- (void)dealloc;	// 0x35f3bcfd
- (id)description;	// 0x35f3bd41
- (id)dictionaryRepresentation;	// 0x35f3bdb1
// declared property getter: - (id)pixel;	// 0x35f3c041
- (BOOL)readFrom:(id)from;	// 0x35f3be19
- (unsigned)requestTypeCode;	// 0x35f3c021
- (Class)responseClass;	// 0x35f3c025
// declared property setter: - (void)setPixel:(id)pixel;	// 0x35f3c051
- (void)writeTo:(id)to;	// 0x35f3bf8d
@end


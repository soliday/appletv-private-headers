/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library


@interface GEOSessionID : PBCodable {
	unsigned long long _low;	// 4 = 0x4
	unsigned long long _high;	// 12 = 0xc
}
@property(assign, nonatomic) unsigned long long high;	// G=0x35f326d5; S=0x35f326ed; @synthesize=_high
@property(assign, nonatomic) unsigned long long low;	// G=0x35f326a9; S=0x35f326c1; @synthesize=_low
- (void)dealloc;	// 0x35f323f9
- (id)description;	// 0x35f32425
- (id)dictionaryRepresentation;	// 0x35f32495
// declared property getter: - (unsigned long long)high;	// 0x35f326d5
// declared property getter: - (unsigned long long)low;	// 0x35f326a9
- (BOOL)readFrom:(id)from;	// 0x35f32549
// declared property setter: - (void)setHigh:(unsigned long long)high;	// 0x35f326ed
// declared property setter: - (void)setLow:(unsigned long long)low;	// 0x35f326c1
- (void)writeTo:(id)to;	// 0x35f32641
@end


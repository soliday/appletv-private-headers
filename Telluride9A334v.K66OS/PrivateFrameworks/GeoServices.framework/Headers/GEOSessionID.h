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
@property(assign, nonatomic) unsigned long long high;	// G=0x32c7c80d; S=0x32c7c825; @synthesize=_high
@property(assign, nonatomic) unsigned long long low;	// G=0x32c7c7e1; S=0x32c7c7f9; @synthesize=_low
- (void)dealloc;	// 0x32c7c531
- (id)description;	// 0x32c7c55d
- (id)dictionaryRepresentation;	// 0x32c7c5cd
// declared property getter: - (unsigned long long)high;	// 0x32c7c80d
// declared property getter: - (unsigned long long)low;	// 0x32c7c7e1
- (BOOL)readFrom:(id)from;	// 0x32c7c681
// declared property setter: - (void)setHigh:(unsigned long long)high;	// 0x32c7c825
// declared property setter: - (void)setLow:(unsigned long long)low;	// 0x32c7c7f9
- (void)writeTo:(id)to;	// 0x32c7c779
@end


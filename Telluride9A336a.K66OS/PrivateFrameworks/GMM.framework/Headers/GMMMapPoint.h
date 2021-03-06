/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import "GMM-Structs.h"
#import <PBCodable.h> // Unknown library


@interface GMMMapPoint : PBCodable {
	int _latitude;	// 4 = 0x4
	int _longitude;	// 8 = 0x8
}
@property(assign, nonatomic) int latitude;	// G=0x33845dc9; S=0x33845dd9; @synthesize=_latitude
@property(assign, nonatomic) int longitude;	// G=0x33845de9; S=0x33845df9; @synthesize=_longitude
- (id)initWithCoordinate:(XXStruct_UNJ7RC)coordinate;	// 0x3386e945
- (void)dealloc;	// 0x33845b45
- (id)description;	// 0x33845b71
- (id)dictionaryRepresentation;	// 0x33845be1
// declared property getter: - (int)latitude;	// 0x33845dc9
// declared property getter: - (int)longitude;	// 0x33845de9
- (BOOL)readFrom:(id)from;	// 0x33845c8d
// declared property setter: - (void)setLatitude:(int)latitude;	// 0x33845dd9
// declared property setter: - (void)setLongitude:(int)longitude;	// 0x33845df9
- (void)writeTo:(id)to;	// 0x33845d81
@end


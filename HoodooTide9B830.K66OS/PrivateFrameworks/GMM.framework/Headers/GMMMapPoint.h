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
@property(assign, nonatomic) int latitude;	// G=0x31f9ddb9; S=0x31f9ddc9; @synthesize=_latitude
@property(assign, nonatomic) int longitude;	// G=0x31f9ddd9; S=0x31f9dde9; @synthesize=_longitude
- (id)initWithCoordinate:(XXStruct_UNJ7RC)coordinate;	// 0x31fc6935
- (void)dealloc;	// 0x31f9db35
- (id)description;	// 0x31f9db61
- (id)dictionaryRepresentation;	// 0x31f9dbd1
// declared property getter: - (int)latitude;	// 0x31f9ddb9
// declared property getter: - (int)longitude;	// 0x31f9ddd9
- (BOOL)readFrom:(id)from;	// 0x31f9dc7d
// declared property setter: - (void)setLatitude:(int)latitude;	// 0x31f9ddc9
// declared property setter: - (void)setLongitude:(int)longitude;	// 0x31f9dde9
- (void)writeTo:(id)to;	// 0x31f9dd71
@end


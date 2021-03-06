/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library


@interface GMMMapPoint : PBCodable {
@private
	int _latitude;	// 4 = 0x4
	int _longitude;	// 8 = 0x8
}
@property(assign, nonatomic) int latitude;	// G=0x30a69da9; S=0x30a69db9; @synthesize=_latitude
@property(assign, nonatomic) int longitude;	// G=0x30a69d89; S=0x30a69d99; @synthesize=_longitude
- (id)init;	// 0x30a69df5
- (void)dealloc;	// 0x30a69dc9
- (id)description;	// 0x30a69ebd
- (id)dictionaryRepresentation;	// 0x30a69e21
// declared property getter: - (int)latitude;	// 0x30a69da9
// declared property getter: - (int)longitude;	// 0x30a69d89
- (BOOL)readFrom:(id)from;	// 0x30a69fed
// declared property setter: - (void)setLatitude:(int)latitude;	// 0x30a69db9
// declared property setter: - (void)setLongitude:(int)longitude;	// 0x30a69d99
- (void)writeTo:(id)to;	// 0x30a69fa1
@end


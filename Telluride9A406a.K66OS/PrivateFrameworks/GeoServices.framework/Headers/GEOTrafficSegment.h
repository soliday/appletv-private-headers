/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library


__attribute__((visibility("hidden")))
@interface GEOTrafficSegment : PBCodable {
	int _vertexOffset;	// 4 = 0x4
	int _vertexCount;	// 8 = 0x8
	BOOL _hasSpeed;	// 12 = 0xc
	int _speed;	// 16 = 0x10
	BOOL _hasWidth;	// 20 = 0x14
	int _width;	// 24 = 0x18
}
@property(assign, nonatomic) BOOL hasSpeed;	// G=0x34c067a1; S=0x34c067b1; @synthesize=_hasSpeed
@property(assign, nonatomic) BOOL hasWidth;	// G=0x34c067c1; S=0x34c067d1; @synthesize=_hasWidth
@property(assign, nonatomic) int speed;	// G=0x34c0639d; S=0x34c063c1; @synthesize=_speed
@property(assign, nonatomic) int vertexCount;	// G=0x34c06781; S=0x34c06791; @synthesize=_vertexCount
@property(assign, nonatomic) int vertexOffset;	// G=0x34c06761; S=0x34c06771; @synthesize=_vertexOffset
@property(assign, nonatomic) int width;	// G=0x34c067e1; S=0x34c063e5; @synthesize=_width
- (void)dealloc;	// 0x34c06371
- (id)description;	// 0x34c06409
- (id)dictionaryRepresentation;	// 0x34c06479
// declared property getter: - (BOOL)hasSpeed;	// 0x34c067a1
// declared property getter: - (BOOL)hasWidth;	// 0x34c067c1
- (BOOL)readFrom:(id)from;	// 0x34c065a1
// declared property setter: - (void)setHasSpeed:(BOOL)speed;	// 0x34c067b1
// declared property setter: - (void)setHasWidth:(BOOL)width;	// 0x34c067d1
// declared property setter: - (void)setSpeed:(int)speed;	// 0x34c063c1
// declared property setter: - (void)setVertexCount:(int)count;	// 0x34c06791
// declared property setter: - (void)setVertexOffset:(int)offset;	// 0x34c06771
// declared property setter: - (void)setWidth:(int)width;	// 0x34c063e5
// declared property getter: - (int)speed;	// 0x34c0639d
// declared property getter: - (int)vertexCount;	// 0x34c06781
// declared property getter: - (int)vertexOffset;	// 0x34c06761
// declared property getter: - (int)width;	// 0x34c067e1
- (void)writeTo:(id)to;	// 0x34c066c9
@end


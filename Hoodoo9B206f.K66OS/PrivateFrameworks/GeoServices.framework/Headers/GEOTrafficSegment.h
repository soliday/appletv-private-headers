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
@property(assign, nonatomic) BOOL hasSpeed;	// G=0x32880669; S=0x32880679; @synthesize=_hasSpeed
@property(assign, nonatomic) BOOL hasWidth;	// G=0x32880689; S=0x32880699; @synthesize=_hasWidth
@property(assign, nonatomic) int speed;	// G=0x32880265; S=0x32880289; @synthesize=_speed
@property(assign, nonatomic) int vertexCount;	// G=0x32880649; S=0x32880659; @synthesize=_vertexCount
@property(assign, nonatomic) int vertexOffset;	// G=0x32880629; S=0x32880639; @synthesize=_vertexOffset
@property(assign, nonatomic) int width;	// G=0x328806a9; S=0x328802ad; @synthesize=_width
- (void)dealloc;	// 0x32880239
- (id)description;	// 0x328802d1
- (id)dictionaryRepresentation;	// 0x32880341
// declared property getter: - (BOOL)hasSpeed;	// 0x32880669
// declared property getter: - (BOOL)hasWidth;	// 0x32880689
- (BOOL)readFrom:(id)from;	// 0x32880469
// declared property setter: - (void)setHasSpeed:(BOOL)speed;	// 0x32880679
// declared property setter: - (void)setHasWidth:(BOOL)width;	// 0x32880699
// declared property setter: - (void)setSpeed:(int)speed;	// 0x32880289
// declared property setter: - (void)setVertexCount:(int)count;	// 0x32880659
// declared property setter: - (void)setVertexOffset:(int)offset;	// 0x32880639
// declared property setter: - (void)setWidth:(int)width;	// 0x328802ad
// declared property getter: - (int)speed;	// 0x32880265
// declared property getter: - (int)vertexCount;	// 0x32880649
// declared property getter: - (int)vertexOffset;	// 0x32880629
// declared property getter: - (int)width;	// 0x328806a9
- (void)writeTo:(id)to;	// 0x32880591
@end


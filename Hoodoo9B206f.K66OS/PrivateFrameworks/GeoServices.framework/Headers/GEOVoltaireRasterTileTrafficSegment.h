/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library
#import "GeoServices-Structs.h"


@interface GEOVoltaireRasterTileTrafficSegment : NSObject {
	XXStruct_K5nmsA *_vertices;	// 4 = 0x4
	int _vertexCount;	// 8 = 0x8
	BOOL _hasSpeed;	// 12 = 0xc
	int _speed;	// 16 = 0x10
	BOOL _hasWidth;	// 20 = 0x14
	int _width;	// 24 = 0x18
}
@property(assign, nonatomic) BOOL hasSpeed;	// G=0x32881531; S=0x32881541; @synthesize=_hasSpeed
@property(assign, nonatomic) BOOL hasWidth;	// G=0x32881551; S=0x32881561; @synthesize=_hasWidth
@property(assign, nonatomic) int speed;	// G=0x32881571; S=0x328814b9; @synthesize=_speed
@property(readonly, assign, nonatomic) int vertexCount;	// G=0x32881521; @synthesize=_vertexCount
@property(readonly, assign, nonatomic) XXStruct_K5nmsA *vertices;	// G=0x32881511; @synthesize=_vertices
@property(assign, nonatomic) int width;	// G=0x32881581; S=0x328814e5; @synthesize=_width
// declared property getter: - (BOOL)hasSpeed;	// 0x32881531
// declared property getter: - (BOOL)hasWidth;	// 0x32881551
// declared property setter: - (void)setHasSpeed:(BOOL)speed;	// 0x32881541
// declared property setter: - (void)setHasWidth:(BOOL)width;	// 0x32881561
// declared property setter: - (void)setSpeed:(int)speed;	// 0x328814b9
- (void)setVertices:(XXStruct_K5nmsA *)vertices count:(int)count;	// 0x32881465
// declared property setter: - (void)setWidth:(int)width;	// 0x328814e5
// declared property getter: - (int)speed;	// 0x32881571
// declared property getter: - (int)vertexCount;	// 0x32881521
// declared property getter: - (XXStruct_K5nmsA *)vertices;	// 0x32881511
// declared property getter: - (int)width;	// 0x32881581
@end


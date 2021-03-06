/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library


__attribute__((visibility("hidden")))
@interface GMMMapTile : PBCodable {
	int _tileType;	// 4 = 0x4
	int _tileIndexX;	// 8 = 0x8
	int _tileIndexY;	// 12 = 0xc
	int _zoomLevel;	// 16 = 0x10
	BOOL _hasTextSize;	// 20 = 0x14
	int _textSize;	// 24 = 0x18
}
@property(assign, nonatomic) BOOL hasTextSize;	// G=0x33a8b291; S=0x33a8b2a1; @synthesize=_hasTextSize
@property(assign, nonatomic) int textSize;	// G=0x33a8ae35; S=0x33a8ae59; @synthesize=_textSize
@property(assign, nonatomic) int tileIndexX;	// G=0x33a8b231; S=0x33a8b241; @synthesize=_tileIndexX
@property(assign, nonatomic) int tileIndexY;	// G=0x33a8b251; S=0x33a8b261; @synthesize=_tileIndexY
@property(assign, nonatomic) int tileType;	// G=0x33a8b211; S=0x33a8b221; @synthesize=_tileType
@property(assign, nonatomic) int zoomLevel;	// G=0x33a8b271; S=0x33a8b281; @synthesize=_zoomLevel
- (void)dealloc;	// 0x33a8ae09
- (id)description;	// 0x33a8ae7d
- (id)dictionaryRepresentation;	// 0x33a8aeed
// declared property getter: - (BOOL)hasTextSize;	// 0x33a8b291
- (BOOL)readFrom:(id)from;	// 0x33a8b031
// declared property setter: - (void)setHasTextSize:(BOOL)size;	// 0x33a8b2a1
// declared property setter: - (void)setTextSize:(int)size;	// 0x33a8ae59
// declared property setter: - (void)setTileIndexX:(int)x;	// 0x33a8b241
// declared property setter: - (void)setTileIndexY:(int)y;	// 0x33a8b261
// declared property setter: - (void)setTileType:(int)type;	// 0x33a8b221
// declared property setter: - (void)setZoomLevel:(int)level;	// 0x33a8b281
// declared property getter: - (int)textSize;	// 0x33a8ae35
// declared property getter: - (int)tileIndexX;	// 0x33a8b231
// declared property getter: - (int)tileIndexY;	// 0x33a8b251
// declared property getter: - (int)tileType;	// 0x33a8b211
- (void)writeTo:(id)to;	// 0x33a8b171
// declared property getter: - (int)zoomLevel;	// 0x33a8b271
@end


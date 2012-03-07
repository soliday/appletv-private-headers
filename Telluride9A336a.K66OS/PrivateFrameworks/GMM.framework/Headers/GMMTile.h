/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSData;

@interface GMMTile : PBCodable {
	int _tileXIndex;	// 4 = 0x4
	int _tileYIndex;	// 8 = 0x8
	BOOL _hasFace;	// 12 = 0xc
	int _face;	// 16 = 0x10
	NSData *_tileData;	// 20 = 0x14
}
@property(assign, nonatomic) int face;	// G=0x33842b39; S=0x33842771; @synthesize=_face
@property(assign, nonatomic) BOOL hasFace;	// G=0x33842b19; S=0x33842b29; @synthesize=_hasFace
@property(retain, nonatomic) NSData *tileData;	// G=0x33842b49; S=0x33842b59; @synthesize=_tileData
@property(assign, nonatomic) int tileXIndex;	// G=0x33842ad9; S=0x33842ae9; @synthesize=_tileXIndex
@property(assign, nonatomic) int tileYIndex;	// G=0x33842af9; S=0x33842b09; @synthesize=_tileYIndex
+ (void *)createImageRefFromTileData:(id)tileData isCompact:(BOOL)compact;	// 0x3383c889
+ (void *)createImageRefFromTileData:(const char *)tileData length:(unsigned long)length;	// 0x3383c895
- (void)dealloc;	// 0x3384272d
- (id)description;	// 0x33842795
- (id)dictionaryRepresentation;	// 0x33842805
// declared property getter: - (int)face;	// 0x33842b39
// declared property getter: - (BOOL)hasFace;	// 0x33842b19
- (BOOL)readFrom:(id)from;	// 0x33842911
// declared property setter: - (void)setFace:(int)face;	// 0x33842771
// declared property setter: - (void)setHasFace:(BOOL)face;	// 0x33842b29
// declared property setter: - (void)setTileData:(id)data;	// 0x33842b59
// declared property setter: - (void)setTileXIndex:(int)index;	// 0x33842ae9
// declared property setter: - (void)setTileYIndex:(int)index;	// 0x33842b09
// declared property getter: - (id)tileData;	// 0x33842b49
// declared property getter: - (int)tileXIndex;	// 0x33842ad9
// declared property getter: - (int)tileYIndex;	// 0x33842af9
- (void)writeTo:(id)to;	// 0x33842a45
@end

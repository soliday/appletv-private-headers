/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSData, NSMutableArray;

__attribute__((visibility("hidden")))
@interface GMMPolygon : PBCodable {
	BOOL _hasLineWidth;	// 4 = 0x4
	int _lineWidth;	// 8 = 0x8
	BOOL _hasLineColor;	// 12 = 0xc
	int _lineColor;	// 16 = 0x10
	NSData *_line;	// 20 = 0x14
	BOOL _hasFillColor;	// 24 = 0x18
	int _fillColor;	// 28 = 0x1c
	NSMutableArray *_innerBoundarys;	// 32 = 0x20
}
@property(assign, nonatomic) int fillColor;	// G=0x35b85cd1; S=0x35b856ad; @synthesize=_fillColor
@property(assign, nonatomic) BOOL hasFillColor;	// G=0x35b85cb1; S=0x35b85cc1; @synthesize=_hasFillColor
@property(readonly, assign, nonatomic) BOOL hasLine;	// G=0x35b85695; 
@property(assign, nonatomic) BOOL hasLineColor;	// G=0x35b85c4d; S=0x35b85c5d; @synthesize=_hasLineColor
@property(assign, nonatomic) BOOL hasLineWidth;	// G=0x35b85c1d; S=0x35b85c2d; @synthesize=_hasLineWidth
@property(retain, nonatomic) NSMutableArray *innerBoundarys;	// G=0x35b85ce1; S=0x35b85cf1; @synthesize=_innerBoundarys
@property(retain, nonatomic) NSData *line;	// G=0x35b85c7d; S=0x35b85c8d; @synthesize=_line
@property(assign, nonatomic) int lineColor;	// G=0x35b85c6d; S=0x35b85671; @synthesize=_lineColor
@property(assign, nonatomic) int lineWidth;	// G=0x35b85c3d; S=0x35b8564d; @synthesize=_lineWidth
- (void)addInnerBoundary:(id)boundary;	// 0x35b856d1
- (void)dealloc;	// 0x35b855f5
- (id)description;	// 0x35b85775
- (id)dictionaryRepresentation;	// 0x35b857e5
// declared property getter: - (int)fillColor;	// 0x35b85cd1
// declared property getter: - (BOOL)hasFillColor;	// 0x35b85cb1
// declared property getter: - (BOOL)hasLine;	// 0x35b85695
// declared property getter: - (BOOL)hasLineColor;	// 0x35b85c4d
// declared property getter: - (BOOL)hasLineWidth;	// 0x35b85c1d
- (id)innerBoundaryAtIndex:(unsigned)index;	// 0x35b85755
// declared property getter: - (id)innerBoundarys;	// 0x35b85ce1
- (unsigned)innerBoundarysCount;	// 0x35b85735
// declared property getter: - (id)line;	// 0x35b85c7d
// declared property getter: - (int)lineColor;	// 0x35b85c6d
// declared property getter: - (int)lineWidth;	// 0x35b85c3d
- (BOOL)readFrom:(id)from;	// 0x35b8596d
// declared property setter: - (void)setFillColor:(int)color;	// 0x35b856ad
// declared property setter: - (void)setHasFillColor:(BOOL)color;	// 0x35b85cc1
// declared property setter: - (void)setHasLineColor:(BOOL)color;	// 0x35b85c5d
// declared property setter: - (void)setHasLineWidth:(BOOL)width;	// 0x35b85c2d
// declared property setter: - (void)setInnerBoundarys:(id)boundarys;	// 0x35b85cf1
// declared property setter: - (void)setLine:(id)line;	// 0x35b85c8d
// declared property setter: - (void)setLineColor:(int)color;	// 0x35b85671
// declared property setter: - (void)setLineWidth:(int)width;	// 0x35b8564d
- (void)writeTo:(id)to;	// 0x35b85ab9
@end

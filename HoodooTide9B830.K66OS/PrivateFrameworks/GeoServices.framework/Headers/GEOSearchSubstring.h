/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library


@interface GEOSearchSubstring : PBCodable {
	int _stringType;	// 4 = 0x4
	int _beginIndex;	// 8 = 0x8
	int _endIndex;	// 12 = 0xc
}
@property(assign, nonatomic) int beginIndex;	// G=0x35f3f30d; S=0x35f3f31d; @synthesize=_beginIndex
@property(assign, nonatomic) int endIndex;	// G=0x35f3f32d; S=0x35f3f33d; @synthesize=_endIndex
@property(assign, nonatomic) int stringType;	// G=0x35f3f2ed; S=0x35f3f2fd; @synthesize=_stringType
// declared property getter: - (int)beginIndex;	// 0x35f3f30d
- (void)dealloc;	// 0x35f3f009
- (id)description;	// 0x35f3f035
- (id)dictionaryRepresentation;	// 0x35f3f0a5
// declared property getter: - (int)endIndex;	// 0x35f3f32d
- (BOOL)readFrom:(id)from;	// 0x35f3f17d
// declared property setter: - (void)setBeginIndex:(int)index;	// 0x35f3f31d
// declared property setter: - (void)setEndIndex:(int)index;	// 0x35f3f33d
// declared property setter: - (void)setStringType:(int)type;	// 0x35f3f2fd
// declared property getter: - (int)stringType;	// 0x35f3f2ed
- (void)writeTo:(id)to;	// 0x35f3f28d
@end


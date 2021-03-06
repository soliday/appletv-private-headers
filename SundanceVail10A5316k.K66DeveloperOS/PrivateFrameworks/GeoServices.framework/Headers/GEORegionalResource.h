/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <PBCodable.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEORegionalResource : PBCodable {
@private
	XXStruct_1aFH4A *_tileRanges;	// 4 = 0x4
	unsigned _tileRangesCount;	// 8 = 0x8
	unsigned _tileRangesSpace;	// 12 = 0xc
	XXStruct_stqouA _validSubManifestVersions;	// 16 = 0x10
	NSMutableArray *_attributions;	// 28 = 0x1c
	NSMutableArray *_icons;	// 32 = 0x20
	unsigned _x;	// 36 = 0x24
	unsigned _y;	// 40 = 0x28
	unsigned _z;	// 44 = 0x2c
	struct {
		unsigned departureTime : 1;
		unsigned maxRouteCount : 1;
		unsigned timeSinceLastRerouteRequest : 1;
	} _has;	// 48 = 0x30
}
@property(retain, nonatomic) NSMutableArray *attributions;	// G=0x34b562f5; S=0x34b56305; @synthesize=_attributions
@property(assign, nonatomic) BOOL hasX;	// G=0x34b54991; S=0x34b54975; 
@property(assign, nonatomic) BOOL hasY;	// G=0x34b549ed; S=0x34b549cd; 
@property(assign, nonatomic) BOOL hasZ;	// G=0x34b54a49; S=0x34b54a29; 
@property(retain, nonatomic) NSMutableArray *icons;	// G=0x34b562d5; S=0x34b562e5; @synthesize=_icons
@property(readonly, assign, nonatomic) XXStruct_1aFH4A *tileRanges;	// G=0x34b54c05; 
@property(readonly, assign, nonatomic) unsigned tileRangesCount;	// G=0x34b54bf5; 
@property(readonly, assign, nonatomic) unsigned *validSubManifestVersions;	// G=0x34b54e89; 
@property(readonly, assign, nonatomic) unsigned validSubManifestVersionsCount;	// G=0x34b54e75; 
@property(assign, nonatomic) unsigned x;	// G=0x34b562a5; S=0x34b5494d; @synthesize=_x
@property(assign, nonatomic) unsigned y;	// G=0x34b562b5; S=0x34b549a5; @synthesize=_y
@property(assign, nonatomic) unsigned z;	// G=0x34b562c5; S=0x34b54a01; @synthesize=_z
- (void)addAttribution:(id)attribution;	// 0x34b54b49
- (void)addIcon:(id)icon;	// 0x34b54a7d
- (void)addTileRange:(XXStruct_1aFH4A)range;	// 0x34b54c51
- (void)addValidSubManifestVersion:(unsigned)version;	// 0x34b54ead
- (id)attributionAtIndex:(unsigned)index;	// 0x34b54bd5
// declared property getter: - (id)attributions;	// 0x34b562f5
- (unsigned)attributionsCount;	// 0x34b54bb5
- (void)clearAttributions;	// 0x34b54b29
- (void)clearIcons;	// 0x34b54a5d
- (void)clearTileRanges;	// 0x34b54c15
- (void)clearValidSubManifestVersions;	// 0x34b54e99
- (void)copyTo:(id)to;	// 0x34b55d15
- (void)dealloc;	// 0x34b548d1
- (id)description;	// 0x34b54f7d
- (id)dictionaryRepresentation;	// 0x34b54fed
// declared property getter: - (BOOL)hasX;	// 0x34b54991
// declared property getter: - (BOOL)hasY;	// 0x34b549ed
// declared property getter: - (BOOL)hasZ;	// 0x34b54a49
- (unsigned)hash;	// 0x34b56181
- (id)iconAtIndex:(unsigned)index;	// 0x34b54b09
// declared property getter: - (id)icons;	// 0x34b562d5
- (unsigned)iconsCount;	// 0x34b54ae9
- (BOOL)isEqual:(id)equal;	// 0x34b55fe9
- (BOOL)readFrom:(id)from;	// 0x34b5598d
// declared property setter: - (void)setAttributions:(id)attributions;	// 0x34b56305
// declared property setter: - (void)setHasX:(BOOL)x;	// 0x34b54975
// declared property setter: - (void)setHasY:(BOOL)y;	// 0x34b549cd
// declared property setter: - (void)setHasZ:(BOOL)z;	// 0x34b54a29
// declared property setter: - (void)setIcons:(id)icons;	// 0x34b562e5
- (void)setTileRanges:(XXStruct_1aFH4A *)ranges count:(unsigned)count;	// 0x34b54e25
- (void)setValidSubManifestVersions:(unsigned *)versions count:(unsigned)count;	// 0x34b54f65
// declared property setter: - (void)setX:(unsigned)x;	// 0x34b5494d
// declared property setter: - (void)setY:(unsigned)y;	// 0x34b549a5
// declared property setter: - (void)setZ:(unsigned)z;	// 0x34b54a01
- (XXStruct_1aFH4A)tileRangeAtIndex:(unsigned)index;	// 0x34b54d5d
// declared property getter: - (XXStruct_1aFH4A *)tileRanges;	// 0x34b54c05
// declared property getter: - (unsigned)tileRangesCount;	// 0x34b54bf5
- (unsigned)validSubManifestVersionAtIndex:(unsigned)index;	// 0x34b54ec1
// declared property getter: - (unsigned *)validSubManifestVersions;	// 0x34b54e89
// declared property getter: - (unsigned)validSubManifestVersionsCount;	// 0x34b54e75
- (void)writeTo:(id)to;	// 0x34b55999
// declared property getter: - (unsigned)x;	// 0x34b562a5
// declared property getter: - (unsigned)y;	// 0x34b562b5
// declared property getter: - (unsigned)z;	// 0x34b562c5
@end


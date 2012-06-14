/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class GMMMapPoint, NSString;

@interface GMMDataProperties : PBCodable {
	BOOL _hasDisabled;	// 4 = 0x4
	BOOL _disabled;	// 5 = 0x5
	BOOL _hasInfoLevel;	// 6 = 0x6
	int _infoLevel;	// 8 = 0x8
	BOOL _hasInfoValue;	// 12 = 0xc
	int _infoValue;	// 16 = 0x10
	int _imageWidth;	// 20 = 0x14
	int _imageHeight;	// 24 = 0x18
	BOOL _hasTileWidth;	// 28 = 0x1c
	int _tileWidth;	// 32 = 0x20
	BOOL _hasTileHeight;	// 36 = 0x24
	int _tileHeight;	// 40 = 0x28
	NSString *_panoId;	// 44 = 0x2c
	BOOL _hasNumZoomLevels;	// 48 = 0x30
	int _numZoomLevels;	// 52 = 0x34
	GMMMapPoint *_latLon;	// 56 = 0x38
	NSString *_copyright;	// 60 = 0x3c
	NSString *_text;	// 64 = 0x40
	NSString *_streetRange;	// 68 = 0x44
	int _maxZoomLevel;	// 72 = 0x48
	int _radius;	// 76 = 0x4c
	BOOL _hasImageSource;	// 80 = 0x50
	int _imageSource;	// 84 = 0x54
	BOOL _hasScene;	// 88 = 0x58
	int _scene;	// 92 = 0x5c
}
@property(retain, nonatomic) NSString *copyright;	// G=0x33cba325; S=0x33cbb03d; @synthesize=_copyright
@property(assign, nonatomic) BOOL disabled;	// G=0x33cba151; S=0x33cba175; @synthesize=_disabled
@property(readonly, assign, nonatomic) BOOL hasCopyright;	// G=0x33cba30d; 
@property(assign, nonatomic) BOOL hasDisabled;	// G=0x33cbaed5; S=0x33cbaee5; @synthesize=_hasDisabled
@property(assign, nonatomic) BOOL hasImageSource;	// G=0x33cbb0e9; S=0x33cbb0f9; @synthesize=_hasImageSource
@property(assign, nonatomic) BOOL hasInfoLevel;	// G=0x33cbaef5; S=0x33cbaf05; @synthesize=_hasInfoLevel
@property(assign, nonatomic) BOOL hasInfoValue;	// G=0x33cbaf15; S=0x33cbaf25; @synthesize=_hasInfoValue
@property(assign, nonatomic) BOOL hasNumZoomLevels;	// G=0x33cbafe9; S=0x33cbaff9; @synthesize=_hasNumZoomLevels
@property(assign, nonatomic) BOOL hasScene;	// G=0x33cbb109; S=0x33cbb119; @synthesize=_hasScene
@property(readonly, assign, nonatomic) BOOL hasStreetRange;	// G=0x33cba37d; 
@property(readonly, assign, nonatomic) BOOL hasText;	// G=0x33cba345; 
@property(assign, nonatomic) BOOL hasTileHeight;	// G=0x33cbaf95; S=0x33cbafa5; @synthesize=_hasTileHeight
@property(assign, nonatomic) BOOL hasTileWidth;	// G=0x33cbaf75; S=0x33cbaf85; @synthesize=_hasTileWidth
@property(assign, nonatomic) int imageHeight;	// G=0x33cbaf55; S=0x33cbaf65; @synthesize=_imageHeight
@property(assign, nonatomic) int imageSource;	// G=0x33cba3b5; S=0x33cba3d9; @synthesize=_imageSource
@property(assign, nonatomic) int imageWidth;	// G=0x33cbaf35; S=0x33cbaf45; @synthesize=_imageWidth
@property(assign, nonatomic) int infoLevel;	// G=0x33cba199; S=0x33cba1bd; @synthesize=_infoLevel
@property(assign, nonatomic) int infoValue;	// G=0x33cba1e1; S=0x33cba209; @synthesize=_infoValue
@property(retain, nonatomic) GMMMapPoint *latLon;	// G=0x33cbb009; S=0x33cbb019; @synthesize=_latLon
@property(assign, nonatomic) int maxZoomLevel;	// G=0x33cbb0a9; S=0x33cbb0b9; @synthesize=_maxZoomLevel
@property(assign, nonatomic) int numZoomLevels;	// G=0x33cba2c5; S=0x33cba2e9; @synthesize=_numZoomLevels
@property(retain, nonatomic) NSString *panoId;	// G=0x33cbafb5; S=0x33cbafc5; @synthesize=_panoId
@property(assign, nonatomic) int radius;	// G=0x33cbb0c9; S=0x33cbb0d9; @synthesize=_radius
@property(assign, nonatomic) int scene;	// G=0x33cba3fd; S=0x33cba421; @synthesize=_scene
@property(retain, nonatomic) NSString *streetRange;	// G=0x33cba395; S=0x33cbb085; @synthesize=_streetRange
@property(retain, nonatomic) NSString *text;	// G=0x33cba35d; S=0x33cbb061; @synthesize=_text
@property(assign, nonatomic) int tileHeight;	// G=0x33cba279; S=0x33cba2a1; @synthesize=_tileHeight
@property(assign, nonatomic) int tileWidth;	// G=0x33cba22d; S=0x33cba255; @synthesize=_tileWidth
// declared property getter: - (id)copyright;	// 0x33cba325
- (void)dealloc;	// 0x33cba0bd
- (id)description;	// 0x33cba445
- (id)dictionaryRepresentation;	// 0x33cba4b5
// declared property getter: - (BOOL)disabled;	// 0x33cba151
// declared property getter: - (BOOL)hasCopyright;	// 0x33cba30d
// declared property getter: - (BOOL)hasDisabled;	// 0x33cbaed5
// declared property getter: - (BOOL)hasImageSource;	// 0x33cbb0e9
// declared property getter: - (BOOL)hasInfoLevel;	// 0x33cbaef5
// declared property getter: - (BOOL)hasInfoValue;	// 0x33cbaf15
// declared property getter: - (BOOL)hasNumZoomLevels;	// 0x33cbafe9
// declared property getter: - (BOOL)hasScene;	// 0x33cbb109
// declared property getter: - (BOOL)hasStreetRange;	// 0x33cba37d
// declared property getter: - (BOOL)hasText;	// 0x33cba345
// declared property getter: - (BOOL)hasTileHeight;	// 0x33cbaf95
// declared property getter: - (BOOL)hasTileWidth;	// 0x33cbaf75
// declared property getter: - (int)imageHeight;	// 0x33cbaf55
// declared property getter: - (int)imageSource;	// 0x33cba3b5
// declared property getter: - (int)imageWidth;	// 0x33cbaf35
// declared property getter: - (int)infoLevel;	// 0x33cba199
// declared property getter: - (int)infoValue;	// 0x33cba1e1
// declared property getter: - (id)latLon;	// 0x33cbb009
// declared property getter: - (int)maxZoomLevel;	// 0x33cbb0a9
// declared property getter: - (int)numZoomLevels;	// 0x33cba2c5
// declared property getter: - (id)panoId;	// 0x33cbafb5
// declared property getter: - (int)radius;	// 0x33cbb0c9
- (BOOL)readFrom:(id)from;	// 0x33cba8a5
// declared property getter: - (int)scene;	// 0x33cba3fd
// declared property setter: - (void)setCopyright:(id)copyright;	// 0x33cbb03d
// declared property setter: - (void)setDisabled:(BOOL)disabled;	// 0x33cba175
// declared property setter: - (void)setHasDisabled:(BOOL)disabled;	// 0x33cbaee5
// declared property setter: - (void)setHasImageSource:(BOOL)source;	// 0x33cbb0f9
// declared property setter: - (void)setHasInfoLevel:(BOOL)level;	// 0x33cbaf05
// declared property setter: - (void)setHasInfoValue:(BOOL)value;	// 0x33cbaf25
// declared property setter: - (void)setHasNumZoomLevels:(BOOL)levels;	// 0x33cbaff9
// declared property setter: - (void)setHasScene:(BOOL)scene;	// 0x33cbb119
// declared property setter: - (void)setHasTileHeight:(BOOL)height;	// 0x33cbafa5
// declared property setter: - (void)setHasTileWidth:(BOOL)width;	// 0x33cbaf85
// declared property setter: - (void)setImageHeight:(int)height;	// 0x33cbaf65
// declared property setter: - (void)setImageSource:(int)source;	// 0x33cba3d9
// declared property setter: - (void)setImageWidth:(int)width;	// 0x33cbaf45
// declared property setter: - (void)setInfoLevel:(int)level;	// 0x33cba1bd
// declared property setter: - (void)setInfoValue:(int)value;	// 0x33cba209
// declared property setter: - (void)setLatLon:(id)lon;	// 0x33cbb019
// declared property setter: - (void)setMaxZoomLevel:(int)level;	// 0x33cbb0b9
// declared property setter: - (void)setNumZoomLevels:(int)levels;	// 0x33cba2e9
// declared property setter: - (void)setPanoId:(id)anId;	// 0x33cbafc5
// declared property setter: - (void)setRadius:(int)radius;	// 0x33cbb0d9
// declared property setter: - (void)setScene:(int)scene;	// 0x33cba421
// declared property setter: - (void)setStreetRange:(id)range;	// 0x33cbb085
// declared property setter: - (void)setText:(id)text;	// 0x33cbb061
// declared property setter: - (void)setTileHeight:(int)height;	// 0x33cba2a1
// declared property setter: - (void)setTileWidth:(int)width;	// 0x33cba255
// declared property getter: - (id)streetRange;	// 0x33cba395
// declared property getter: - (id)text;	// 0x33cba35d
// declared property getter: - (int)tileHeight;	// 0x33cba279
// declared property getter: - (int)tileWidth;	// 0x33cba22d
- (void)writeTo:(id)to;	// 0x33cbabf1
@end

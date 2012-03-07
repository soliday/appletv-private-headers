/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library


@interface GMMProjectionProperties : PBCodable {
	BOOL _hasPanoYawDegreeE6;	// 4 = 0x4
	int _panoYawDegreeE6;	// 8 = 0x8
	BOOL _hasTiltYawDegreeE6;	// 12 = 0xc
	int _tiltYawDegreeE6;	// 16 = 0x10
	BOOL _hasTiltPitchDegreeE6;	// 20 = 0x14
	int _tiltPitchDegreeE6;	// 24 = 0x18
	BOOL _hasCameraPitchDegreeE6;	// 28 = 0x1c
	int _cameraPitchDegreeE6;	// 32 = 0x20
	BOOL _hasProjectionType;	// 36 = 0x24
	int _projectionType;	// 40 = 0x28
	BOOL _hasHorizontalFovE6;	// 44 = 0x2c
	int _horizontalFovE6;	// 48 = 0x30
	BOOL _hasMinVisiblePitchE6;	// 52 = 0x34
	int _minVisiblePitchE6;	// 56 = 0x38
	BOOL _hasMaxVisiblePitchE6;	// 60 = 0x3c
	int _maxVisiblePitchE6;	// 64 = 0x40
}
@property(assign, nonatomic) int cameraPitchDegreeE6;	// G=0x35b7e4a9; S=0x35b7e4cd; @synthesize=_cameraPitchDegreeE6
@property(assign, nonatomic) BOOL hasCameraPitchDegreeE6;	// G=0x35b7ed1d; S=0x35b7ed2d; @synthesize=_hasCameraPitchDegreeE6
@property(assign, nonatomic) BOOL hasHorizontalFovE6;	// G=0x35b7ed5d; S=0x35b7ed6d; @synthesize=_hasHorizontalFovE6
@property(assign, nonatomic) BOOL hasMaxVisiblePitchE6;	// G=0x35b7ed9d; S=0x35b7edad; @synthesize=_hasMaxVisiblePitchE6
@property(assign, nonatomic) BOOL hasMinVisiblePitchE6;	// G=0x35b7ed7d; S=0x35b7ed8d; @synthesize=_hasMinVisiblePitchE6
@property(assign, nonatomic) BOOL hasPanoYawDegreeE6;	// G=0x35b7ecbd; S=0x35b7eccd; @synthesize=_hasPanoYawDegreeE6
@property(assign, nonatomic) BOOL hasProjectionType;	// G=0x35b7ed3d; S=0x35b7ed4d; @synthesize=_hasProjectionType
@property(assign, nonatomic) BOOL hasTiltPitchDegreeE6;	// G=0x35b7ecfd; S=0x35b7ed0d; @synthesize=_hasTiltPitchDegreeE6
@property(assign, nonatomic) BOOL hasTiltYawDegreeE6;	// G=0x35b7ecdd; S=0x35b7eced; @synthesize=_hasTiltYawDegreeE6
@property(assign, nonatomic) int horizontalFovE6;	// G=0x35b7e539; S=0x35b7e565; @synthesize=_horizontalFovE6
@property(assign, nonatomic) int maxVisiblePitchE6;	// G=0x35b7e5d9; S=0x35b7e605; @synthesize=_maxVisiblePitchE6
@property(assign, nonatomic) int minVisiblePitchE6;	// G=0x35b7e589; S=0x35b7e5b5; @synthesize=_minVisiblePitchE6
@property(assign, nonatomic) int panoYawDegreeE6;	// G=0x35b7e3d1; S=0x35b7e3f5; @synthesize=_panoYawDegreeE6
@property(assign, nonatomic) int projectionType;	// G=0x35b7e4f1; S=0x35b7e515; @synthesize=_projectionType
@property(assign, nonatomic) int tiltPitchDegreeE6;	// G=0x35b7e461; S=0x35b7e485; @synthesize=_tiltPitchDegreeE6
@property(assign, nonatomic) int tiltYawDegreeE6;	// G=0x35b7e419; S=0x35b7e43d; @synthesize=_tiltYawDegreeE6
// declared property getter: - (int)cameraPitchDegreeE6;	// 0x35b7e4a9
- (void)dealloc;	// 0x35b7e3a5
- (id)description;	// 0x35b7e629
- (id)dictionaryRepresentation;	// 0x35b7e699
// declared property getter: - (BOOL)hasCameraPitchDegreeE6;	// 0x35b7ed1d
// declared property getter: - (BOOL)hasHorizontalFovE6;	// 0x35b7ed5d
// declared property getter: - (BOOL)hasMaxVisiblePitchE6;	// 0x35b7ed9d
// declared property getter: - (BOOL)hasMinVisiblePitchE6;	// 0x35b7ed7d
// declared property getter: - (BOOL)hasPanoYawDegreeE6;	// 0x35b7ecbd
// declared property getter: - (BOOL)hasProjectionType;	// 0x35b7ed3d
// declared property getter: - (BOOL)hasTiltPitchDegreeE6;	// 0x35b7ecfd
// declared property getter: - (BOOL)hasTiltYawDegreeE6;	// 0x35b7ecdd
// declared property getter: - (int)horizontalFovE6;	// 0x35b7e539
// declared property getter: - (int)maxVisiblePitchE6;	// 0x35b7e5d9
// declared property getter: - (int)minVisiblePitchE6;	// 0x35b7e589
// declared property getter: - (int)panoYawDegreeE6;	// 0x35b7e3d1
// declared property getter: - (int)projectionType;	// 0x35b7e4f1
- (BOOL)readFrom:(id)from;	// 0x35b7e981
// declared property setter: - (void)setCameraPitchDegreeE6:(int)a6;	// 0x35b7e4cd
// declared property setter: - (void)setHasCameraPitchDegreeE6:(BOOL)a6;	// 0x35b7ed2d
// declared property setter: - (void)setHasHorizontalFovE6:(BOOL)a6;	// 0x35b7ed6d
// declared property setter: - (void)setHasMaxVisiblePitchE6:(BOOL)a6;	// 0x35b7edad
// declared property setter: - (void)setHasMinVisiblePitchE6:(BOOL)a6;	// 0x35b7ed8d
// declared property setter: - (void)setHasPanoYawDegreeE6:(BOOL)a6;	// 0x35b7eccd
// declared property setter: - (void)setHasProjectionType:(BOOL)type;	// 0x35b7ed4d
// declared property setter: - (void)setHasTiltPitchDegreeE6:(BOOL)a6;	// 0x35b7ed0d
// declared property setter: - (void)setHasTiltYawDegreeE6:(BOOL)a6;	// 0x35b7eced
// declared property setter: - (void)setHorizontalFovE6:(int)a6;	// 0x35b7e565
// declared property setter: - (void)setMaxVisiblePitchE6:(int)a6;	// 0x35b7e605
// declared property setter: - (void)setMinVisiblePitchE6:(int)a6;	// 0x35b7e5b5
// declared property setter: - (void)setPanoYawDegreeE6:(int)a6;	// 0x35b7e3f5
// declared property setter: - (void)setProjectionType:(int)type;	// 0x35b7e515
// declared property setter: - (void)setTiltPitchDegreeE6:(int)a6;	// 0x35b7e485
// declared property setter: - (void)setTiltYawDegreeE6:(int)a6;	// 0x35b7e43d
// declared property getter: - (int)tiltPitchDegreeE6;	// 0x35b7e461
// declared property getter: - (int)tiltYawDegreeE6;	// 0x35b7e419
- (void)writeTo:(id)to;	// 0x35b7eb1d
@end

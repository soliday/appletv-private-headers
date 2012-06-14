/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library
#import "GeoServices-Structs.h"

@class GEOLatLng;

@interface GEOLocation : PBCodable {
	GEOLatLng *_latLng;	// 4 = 0x4
	BOOL _hasType;	// 8 = 0x8
	int _type;	// 12 = 0xc
	BOOL _hasTimestamp;	// 16 = 0x10
	double _timestamp;	// 20 = 0x14
	BOOL _hasAltitude;	// 28 = 0x1c
	int _altitude;	// 32 = 0x20
	BOOL _hasHorizontalAccuracy;	// 36 = 0x24
	double _horizontalAccuracy;	// 40 = 0x28
	BOOL _hasVerticalAccuracy;	// 48 = 0x30
	double _verticalAccuracy;	// 52 = 0x34
	BOOL _hasSpeed;	// 60 = 0x3c
	double _speed;	// 64 = 0x40
	BOOL _hasHeading;	// 72 = 0x48
	double _heading;	// 76 = 0x4c
	BOOL _hasCourse;	// 84 = 0x54
	double _course;	// 88 = 0x58
}
@property(assign, nonatomic) int altitude;	// G=0x32869319; S=0x328688b1; @synthesize=_altitude
@property(assign, nonatomic) double course;	// G=0x32869429; S=0x32868985; @synthesize=_course
@property(assign, nonatomic) BOOL hasAltitude;	// G=0x328692f9; S=0x32869309; @synthesize=_hasAltitude
@property(assign, nonatomic) BOOL hasCourse;	// G=0x32869409; S=0x32869419; @synthesize=_hasCourse
@property(assign, nonatomic) BOOL hasHeading;	// G=0x328693d1; S=0x328693e1; @synthesize=_hasHeading
@property(assign, nonatomic) BOOL hasHorizontalAccuracy;	// G=0x32869329; S=0x32869339; @synthesize=_hasHorizontalAccuracy
@property(assign, nonatomic) BOOL hasSpeed;	// G=0x32869399; S=0x328693a9; @synthesize=_hasSpeed
@property(assign, nonatomic) BOOL hasTimestamp;	// G=0x328692c1; S=0x328692d1; @synthesize=_hasTimestamp
@property(assign, nonatomic) BOOL hasType;	// G=0x32869291; S=0x328692a1; @synthesize=_hasType
@property(assign, nonatomic) BOOL hasVerticalAccuracy;	// G=0x32869361; S=0x32869371; @synthesize=_hasVerticalAccuracy
@property(assign, nonatomic) double heading;	// G=0x328693f1; S=0x32868959; @synthesize=_heading
@property(assign, nonatomic) double horizontalAccuracy;	// G=0x32869349; S=0x328688d5; @synthesize=_horizontalAccuracy
@property(retain, nonatomic) GEOLatLng *latLng;	// G=0x3286925d; S=0x3286926d; @synthesize=_latLng
@property(assign, nonatomic) double speed;	// G=0x328693b9; S=0x3286892d; @synthesize=_speed
@property(assign, nonatomic) double timestamp;	// G=0x328692e1; S=0x32868885; @synthesize=_timestamp
@property(assign, nonatomic) int type;	// G=0x328692b1; S=0x32868861; @synthesize=_type
@property(assign, nonatomic) double verticalAccuracy;	// G=0x32869381; S=0x32868901; @synthesize=_verticalAccuracy
- (id)initWithGEOCoordinate:(XXStruct_zYrK5D)geocoordinate;	// 0x3285e495
// declared property getter: - (int)altitude;	// 0x32869319
// declared property getter: - (double)course;	// 0x32869429
- (void)dealloc;	// 0x3286881d
- (id)description;	// 0x328689b1
- (id)dictionaryRepresentation;	// 0x32868a21
// declared property getter: - (BOOL)hasAltitude;	// 0x328692f9
// declared property getter: - (BOOL)hasCourse;	// 0x32869409
// declared property getter: - (BOOL)hasHeading;	// 0x328693d1
// declared property getter: - (BOOL)hasHorizontalAccuracy;	// 0x32869329
// declared property getter: - (BOOL)hasSpeed;	// 0x32869399
// declared property getter: - (BOOL)hasTimestamp;	// 0x328692c1
// declared property getter: - (BOOL)hasType;	// 0x32869291
// declared property getter: - (BOOL)hasVerticalAccuracy;	// 0x32869361
// declared property getter: - (double)heading;	// 0x328693f1
// declared property getter: - (double)horizontalAccuracy;	// 0x32869349
// declared property getter: - (id)latLng;	// 0x3286925d
- (BOOL)readFrom:(id)from;	// 0x32868d79
// declared property setter: - (void)setAltitude:(int)altitude;	// 0x328688b1
// declared property setter: - (void)setCourse:(double)course;	// 0x32868985
// declared property setter: - (void)setHasAltitude:(BOOL)altitude;	// 0x32869309
// declared property setter: - (void)setHasCourse:(BOOL)course;	// 0x32869419
// declared property setter: - (void)setHasHeading:(BOOL)heading;	// 0x328693e1
// declared property setter: - (void)setHasHorizontalAccuracy:(BOOL)accuracy;	// 0x32869339
// declared property setter: - (void)setHasSpeed:(BOOL)speed;	// 0x328693a9
// declared property setter: - (void)setHasTimestamp:(BOOL)timestamp;	// 0x328692d1
// declared property setter: - (void)setHasType:(BOOL)type;	// 0x328692a1
// declared property setter: - (void)setHasVerticalAccuracy:(BOOL)accuracy;	// 0x32869371
// declared property setter: - (void)setHeading:(double)heading;	// 0x32868959
// declared property setter: - (void)setHorizontalAccuracy:(double)accuracy;	// 0x328688d5
// declared property setter: - (void)setLatLng:(id)lng;	// 0x3286926d
// declared property setter: - (void)setSpeed:(double)speed;	// 0x3286892d
// declared property setter: - (void)setTimestamp:(double)timestamp;	// 0x32868885
// declared property setter: - (void)setType:(int)type;	// 0x32868861
// declared property setter: - (void)setVerticalAccuracy:(double)accuracy;	// 0x32868901
// declared property getter: - (double)speed;	// 0x328693b9
// declared property getter: - (double)timestamp;	// 0x328692e1
// declared property getter: - (int)type;	// 0x328692b1
// declared property getter: - (double)verticalAccuracy;	// 0x32869381
- (void)writeTo:(id)to;	// 0x32868ff9
@end


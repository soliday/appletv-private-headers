/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class LBSGLatLng, NSString, NSMutableArray;

@interface LBSGLocation : PBCodable {
	LBSGLatLng *_latLng;	// 4 = 0x4
	NSString *_source;	// 8 = 0x8
	BOOL _hasAccuracy;	// 12 = 0xc
	int _accuracy;	// 16 = 0x10
	BOOL _hasConfidence;	// 20 = 0x14
	int _confidence;	// 24 = 0x18
	NSMutableArray *_features;	// 28 = 0x1c
	BOOL _hasTimestamp;	// 32 = 0x20
	long long _timestamp;	// 36 = 0x24
	BOOL _hasObsolete;	// 44 = 0x2c
	BOOL _obsolete;	// 45 = 0x2d
	BOOL _hasLocType;	// 46 = 0x2e
	int _locType;	// 48 = 0x30
	NSString *_misc;	// 52 = 0x34
	BOOL _hasAltitude;	// 56 = 0x38
	int _altitude;	// 60 = 0x3c
	BOOL _hasVerticalAccuracy;	// 64 = 0x40
	int _verticalAccuracy;	// 68 = 0x44
	BOOL _hasVelocity;	// 72 = 0x48
	int _velocity;	// 76 = 0x4c
	BOOL _hasHeading;	// 80 = 0x50
	int _heading;	// 84 = 0x54
	NSString *_locationString;	// 88 = 0x58
}
@property(assign, nonatomic) int accuracy;	// G=0x33cdb97d; S=0x33cdaabd; @synthesize=_accuracy
@property(assign, nonatomic) int altitude;	// G=0x33cdbadd; S=0x33cdac35; @synthesize=_altitude
@property(assign, nonatomic) int confidence;	// G=0x33cdb9ad; S=0x33cdaae1; @synthesize=_confidence
@property(retain, nonatomic) NSMutableArray *features;	// G=0x33cdb9bd; S=0x33cdb9cd; @synthesize=_features
@property(assign, nonatomic) BOOL hasAccuracy;	// G=0x33cdb95d; S=0x33cdb96d; @synthesize=_hasAccuracy
@property(assign, nonatomic) BOOL hasAltitude;	// G=0x33cdbabd; S=0x33cdbacd; @synthesize=_hasAltitude
@property(assign, nonatomic) BOOL hasConfidence;	// G=0x33cdb98d; S=0x33cdb99d; @synthesize=_hasConfidence
@property(assign, nonatomic) BOOL hasHeading;	// G=0x33cdbb4d; S=0x33cdbb5d; @synthesize=_hasHeading
@property(readonly, assign, nonatomic) BOOL hasLatLng;	// G=0x33cdaa8d; 
@property(assign, nonatomic) BOOL hasLocType;	// G=0x33cdba59; S=0x33cdba69; @synthesize=_hasLocType
@property(readonly, assign, nonatomic) BOOL hasLocationString;	// G=0x33cdacc5; 
@property(readonly, assign, nonatomic) BOOL hasMisc;	// G=0x33cdac1d; 
@property(assign, nonatomic) BOOL hasObsolete;	// G=0x33cdba29; S=0x33cdba39; @synthesize=_hasObsolete
@property(readonly, assign, nonatomic) BOOL hasSource;	// G=0x33cdaaa5; 
@property(assign, nonatomic) BOOL hasTimestamp;	// G=0x33cdb9f1; S=0x33cdba01; @synthesize=_hasTimestamp
@property(assign, nonatomic) BOOL hasVelocity;	// G=0x33cdbb1d; S=0x33cdbb2d; @synthesize=_hasVelocity
@property(assign, nonatomic) BOOL hasVerticalAccuracy;	// G=0x33cdbaed; S=0x33cdbafd; @synthesize=_hasVerticalAccuracy
@property(assign, nonatomic) int heading;	// G=0x33cdbb6d; S=0x33cdaca1; @synthesize=_heading
@property(retain, nonatomic) LBSGLatLng *latLng;	// G=0x33cdb8f5; S=0x33cdb905; @synthesize=_latLng
@property(assign, nonatomic) int locType;	// G=0x33cdba79; S=0x33cdabf9; @synthesize=_locType
@property(retain, nonatomic) NSString *locationString;	// G=0x33cdbb7d; S=0x33cdbb8d; @synthesize=_locationString
@property(retain, nonatomic) NSString *misc;	// G=0x33cdba89; S=0x33cdba99; @synthesize=_misc
@property(assign, nonatomic) BOOL obsolete;	// G=0x33cdba49; S=0x33cdabd5; @synthesize=_obsolete
@property(retain, nonatomic) NSString *source;	// G=0x33cdb929; S=0x33cdb939; @synthesize=_source
@property(assign, nonatomic) long long timestamp;	// G=0x33cdba11; S=0x33cdaba9; @synthesize=_timestamp
@property(assign, nonatomic) int velocity;	// G=0x33cdbb3d; S=0x33cdac7d; @synthesize=_velocity
@property(assign, nonatomic) int verticalAccuracy;	// G=0x33cdbb0d; S=0x33cdac59; @synthesize=_verticalAccuracy
// declared property getter: - (int)accuracy;	// 0x33cdb97d
- (void)addFeature:(id)feature;	// 0x33cdab05
// declared property getter: - (int)altitude;	// 0x33cdbadd
// declared property getter: - (int)confidence;	// 0x33cdb9ad
- (void)dealloc;	// 0x33cda9f9
- (id)description;	// 0x33cdacdd
- (id)dictionaryRepresentation;	// 0x33cdad4d
- (id)featureAtIndex:(unsigned)index;	// 0x33cdab89
// declared property getter: - (id)features;	// 0x33cdb9bd
- (unsigned)featuresCount;	// 0x33cdab69
// declared property getter: - (BOOL)hasAccuracy;	// 0x33cdb95d
// declared property getter: - (BOOL)hasAltitude;	// 0x33cdbabd
// declared property getter: - (BOOL)hasConfidence;	// 0x33cdb98d
// declared property getter: - (BOOL)hasHeading;	// 0x33cdbb4d
// declared property getter: - (BOOL)hasLatLng;	// 0x33cdaa8d
// declared property getter: - (BOOL)hasLocType;	// 0x33cdba59
// declared property getter: - (BOOL)hasLocationString;	// 0x33cdacc5
// declared property getter: - (BOOL)hasMisc;	// 0x33cdac1d
// declared property getter: - (BOOL)hasObsolete;	// 0x33cdba29
// declared property getter: - (BOOL)hasSource;	// 0x33cdaaa5
// declared property getter: - (BOOL)hasTimestamp;	// 0x33cdb9f1
// declared property getter: - (BOOL)hasVelocity;	// 0x33cdbb1d
// declared property getter: - (BOOL)hasVerticalAccuracy;	// 0x33cdbaed
// declared property getter: - (int)heading;	// 0x33cdbb6d
// declared property getter: - (id)latLng;	// 0x33cdb8f5
// declared property getter: - (int)locType;	// 0x33cdba79
// declared property getter: - (id)locationString;	// 0x33cdbb7d
// declared property getter: - (id)misc;	// 0x33cdba89
// declared property getter: - (BOOL)obsolete;	// 0x33cdba49
- (BOOL)readFrom:(id)from;	// 0x33cdb16d
// declared property setter: - (void)setAccuracy:(int)accuracy;	// 0x33cdaabd
// declared property setter: - (void)setAltitude:(int)altitude;	// 0x33cdac35
// declared property setter: - (void)setConfidence:(int)confidence;	// 0x33cdaae1
// declared property setter: - (void)setFeatures:(id)features;	// 0x33cdb9cd
// declared property setter: - (void)setHasAccuracy:(BOOL)accuracy;	// 0x33cdb96d
// declared property setter: - (void)setHasAltitude:(BOOL)altitude;	// 0x33cdbacd
// declared property setter: - (void)setHasConfidence:(BOOL)confidence;	// 0x33cdb99d
// declared property setter: - (void)setHasHeading:(BOOL)heading;	// 0x33cdbb5d
// declared property setter: - (void)setHasLocType:(BOOL)type;	// 0x33cdba69
// declared property setter: - (void)setHasObsolete:(BOOL)obsolete;	// 0x33cdba39
// declared property setter: - (void)setHasTimestamp:(BOOL)timestamp;	// 0x33cdba01
// declared property setter: - (void)setHasVelocity:(BOOL)velocity;	// 0x33cdbb2d
// declared property setter: - (void)setHasVerticalAccuracy:(BOOL)accuracy;	// 0x33cdbafd
// declared property setter: - (void)setHeading:(int)heading;	// 0x33cdaca1
// declared property setter: - (void)setLatLng:(id)lng;	// 0x33cdb905
// declared property setter: - (void)setLocType:(int)type;	// 0x33cdabf9
// declared property setter: - (void)setLocationString:(id)string;	// 0x33cdbb8d
// declared property setter: - (void)setMisc:(id)misc;	// 0x33cdba99
// declared property setter: - (void)setObsolete:(BOOL)obsolete;	// 0x33cdabd5
// declared property setter: - (void)setSource:(id)source;	// 0x33cdb939
// declared property setter: - (void)setTimestamp:(long long)timestamp;	// 0x33cdaba9
// declared property setter: - (void)setVelocity:(int)velocity;	// 0x33cdac7d
// declared property setter: - (void)setVerticalAccuracy:(int)accuracy;	// 0x33cdac59
// declared property getter: - (id)source;	// 0x33cdb929
// declared property getter: - (long long)timestamp;	// 0x33cdba11
// declared property getter: - (int)velocity;	// 0x33cdbb3d
// declared property getter: - (int)verticalAccuracy;	// 0x33cdbb0d
- (void)writeTo:(id)to;	// 0x33cdb51d
@end


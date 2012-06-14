/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library
#import "GMM-Structs.h"

@class NSMutableArray, GMMDateTime, NSString;

__attribute__((visibility("hidden")))
@interface GMMStep : PBCodable {
	BOOL _hasStepType;	// 4 = 0x4
	int _stepType;	// 8 = 0x8
	NSString *_instructions;	// 12 = 0xc
	BOOL _hasDistanceMeters;	// 16 = 0x10
	int _distanceMeters;	// 20 = 0x14
	BOOL _hasDurationSeconds;	// 24 = 0x18
	int _durationSeconds;	// 28 = 0x1c
	BOOL _hasDeparturePointIndex;	// 32 = 0x20
	int _departurePointIndex;	// 36 = 0x24
	NSString *_departureAddress;	// 40 = 0x28
	NSString *_arrivalAddress;	// 44 = 0x2c
	GMMDateTime *_departureDateTime;	// 48 = 0x30
	GMMDateTime *_arrivalDateTime;	// 52 = 0x34
	BOOL _hasDepartureIntervalSeconds;	// 56 = 0x38
	int _departureIntervalSeconds;	// 60 = 0x3c
	NSString *_direction;	// 64 = 0x40
	BOOL _hasIconId;	// 68 = 0x44
	long long _iconId;	// 72 = 0x48
	NSString *_iconSummaryText;	// 80 = 0x50
	BOOL _hasShowInInstructions;	// 84 = 0x54
	BOOL _showInInstructions;	// 85 = 0x55
	BOOL _hasTransitAgencyIndex;	// 86 = 0x56
	int _transitAgencyIndex;	// 88 = 0x58
	NSString *_streetViewPanoId;	// 92 = 0x5c
	XXStruct_WmZAAA _alertIndexs;	// 96 = 0x60
	NSMutableArray *_notices;	// 108 = 0x6c
	BOOL _hasManeuverType;	// 112 = 0x70
	int _maneuverType;	// 116 = 0x74
	BOOL _hasManeuverTurnSide;	// 120 = 0x78
	int _maneuverTurnSide;	// 124 = 0x7c
	BOOL _hasManeuverTurnNumber;	// 128 = 0x80
	int _maneuverTurnNumber;	// 132 = 0x84
	NSMutableArray *_stepCues;	// 136 = 0x88
	NSString *_deprecatedDistance;	// 140 = 0x8c
	NSString *_deprecatedDuration;	// 144 = 0x90
}
@property(readonly, assign, nonatomic) int *alertIndexs;	// G=0x33cd1bed; 
@property(readonly, assign, nonatomic) unsigned alertIndexsCount;	// G=0x33cd1bd9; 
@property(retain, nonatomic) NSString *arrivalAddress;	// G=0x33cd3299; S=0x33cd32a9; @synthesize=_arrivalAddress
@property(retain, nonatomic) GMMDateTime *arrivalDateTime;	// G=0x33cd3301; S=0x33cd3311; @synthesize=_arrivalDateTime
@property(retain, nonatomic) NSString *departureAddress;	// G=0x33cd3265; S=0x33cd3275; @synthesize=_departureAddress
@property(retain, nonatomic) GMMDateTime *departureDateTime;	// G=0x33cd32cd; S=0x33cd32dd; @synthesize=_departureDateTime
@property(assign, nonatomic) int departureIntervalSeconds;	// G=0x33cd3355; S=0x33cd1ad5; @synthesize=_departureIntervalSeconds
@property(assign, nonatomic) int departurePointIndex;	// G=0x33cd3255; S=0x33cd1a51; @synthesize=_departurePointIndex
@property(retain, nonatomic) NSString *deprecatedDistance;	// G=0x33cd3581; S=0x33cd3591; @synthesize=_deprecatedDistance
@property(retain, nonatomic) NSString *deprecatedDuration;	// G=0x33cd35b5; S=0x33cd35c5; @synthesize=_deprecatedDuration
@property(retain, nonatomic) NSString *direction;	// G=0x33cd3365; S=0x33cd3375; @synthesize=_direction
@property(assign, nonatomic) int distanceMeters;	// G=0x33cd31f5; S=0x33cd1a09; @synthesize=_distanceMeters
@property(assign, nonatomic) int durationSeconds;	// G=0x33cd3225; S=0x33cd1a2d; @synthesize=_durationSeconds
@property(readonly, assign, nonatomic) BOOL hasArrivalAddress;	// G=0x33cd1a8d; 
@property(readonly, assign, nonatomic) BOOL hasArrivalDateTime;	// G=0x33cd1abd; 
@property(readonly, assign, nonatomic) BOOL hasDepartureAddress;	// G=0x33cd1a75; 
@property(readonly, assign, nonatomic) BOOL hasDepartureDateTime;	// G=0x33cd1aa5; 
@property(assign, nonatomic) BOOL hasDepartureIntervalSeconds;	// G=0x33cd3335; S=0x33cd3345; @synthesize=_hasDepartureIntervalSeconds
@property(assign, nonatomic) BOOL hasDeparturePointIndex;	// G=0x33cd3235; S=0x33cd3245; @synthesize=_hasDeparturePointIndex
@property(readonly, assign, nonatomic) BOOL hasDeprecatedDistance;	// G=0x33cd1e95; 
@property(readonly, assign, nonatomic) BOOL hasDeprecatedDuration;	// G=0x33cd1ead; 
@property(readonly, assign, nonatomic) BOOL hasDirection;	// G=0x33cd1af9; 
@property(assign, nonatomic) BOOL hasDistanceMeters;	// G=0x33cd31d5; S=0x33cd31e5; @synthesize=_hasDistanceMeters
@property(assign, nonatomic) BOOL hasDurationSeconds;	// G=0x33cd3205; S=0x33cd3215; @synthesize=_hasDurationSeconds
@property(assign, nonatomic) BOOL hasIconId;	// G=0x33cd3399; S=0x33cd33a9; @synthesize=_hasIconId
@property(readonly, assign, nonatomic) BOOL hasIconSummaryText;	// G=0x33cd1b3d; 
@property(readonly, assign, nonatomic) BOOL hasInstructions;	// G=0x33cd19f1; 
@property(assign, nonatomic) BOOL hasManeuverTurnNumber;	// G=0x33cd351d; S=0x33cd352d; @synthesize=_hasManeuverTurnNumber
@property(assign, nonatomic) BOOL hasManeuverTurnSide;	// G=0x33cd34ed; S=0x33cd34fd; @synthesize=_hasManeuverTurnSide
@property(assign, nonatomic) BOOL hasManeuverType;	// G=0x33cd34bd; S=0x33cd34cd; @synthesize=_hasManeuverType
@property(assign, nonatomic) BOOL hasShowInInstructions;	// G=0x33cd3405; S=0x33cd3415; @synthesize=_hasShowInInstructions
@property(assign, nonatomic) BOOL hasStepType;	// G=0x33cd3181; S=0x33cd3191; @synthesize=_hasStepType
@property(readonly, assign, nonatomic) BOOL hasStreetViewPanoId;	// G=0x33cd1bc1; 
@property(assign, nonatomic) BOOL hasTransitAgencyIndex;	// G=0x33cd3425; S=0x33cd3435; @synthesize=_hasTransitAgencyIndex
@property(assign, nonatomic) long long iconId;	// G=0x33cd33b9; S=0x33cd1b11; @synthesize=_iconId
@property(retain, nonatomic) NSString *iconSummaryText;	// G=0x33cd33d1; S=0x33cd33e1; @synthesize=_iconSummaryText
@property(retain, nonatomic) NSString *instructions;	// G=0x33cd31a1; S=0x33cd31b1; @synthesize=_instructions
@property(assign, nonatomic) int maneuverTurnNumber;	// G=0x33cd353d; S=0x33cd1dcd; @synthesize=_maneuverTurnNumber
@property(assign, nonatomic) int maneuverTurnSide;	// G=0x33cd350d; S=0x33cd1da9; @synthesize=_maneuverTurnSide
@property(assign, nonatomic) int maneuverType;	// G=0x33cd34dd; S=0x33cd1d85; @synthesize=_maneuverType
@property(retain, nonatomic) NSMutableArray *notices;	// G=0x33cd3489; S=0x33cd3499; @synthesize=_notices
@property(assign, nonatomic) BOOL showInInstructions;	// G=0x33cd1b55; S=0x33cd1b79; @synthesize=_showInInstructions
@property(retain, nonatomic) NSMutableArray *stepCues;	// G=0x33cd354d; S=0x33cd355d; @synthesize=_stepCues
@property(assign, nonatomic) int stepType;	// G=0x33cd19a9; S=0x33cd19cd; @synthesize=_stepType
@property(retain, nonatomic) NSString *streetViewPanoId;	// G=0x33cd3455; S=0x33cd3465; @synthesize=_streetViewPanoId
@property(assign, nonatomic) int transitAgencyIndex;	// G=0x33cd3445; S=0x33cd1b9d; @synthesize=_transitAgencyIndex
- (void)addAlertIndex:(int)index;	// 0x33cd1c11
- (void)addNotice:(id)notice;	// 0x33cd1ce1
- (void)addStepCue:(id)cue;	// 0x33cd1df1
- (int)alertIndexAtIndex:(unsigned)index;	// 0x33cd1c25
// declared property getter: - (int *)alertIndexs;	// 0x33cd1bed
// declared property getter: - (unsigned)alertIndexsCount;	// 0x33cd1bd9
// declared property getter: - (id)arrivalAddress;	// 0x33cd3299
// declared property getter: - (id)arrivalDateTime;	// 0x33cd3301
- (void)clearAlertIndexs;	// 0x33cd1bfd
- (void)dealloc;	// 0x33cd1879
// declared property getter: - (id)departureAddress;	// 0x33cd3265
// declared property getter: - (id)departureDateTime;	// 0x33cd32cd
// declared property getter: - (int)departureIntervalSeconds;	// 0x33cd3355
// declared property getter: - (int)departurePointIndex;	// 0x33cd3255
// declared property getter: - (id)deprecatedDistance;	// 0x33cd3581
// declared property getter: - (id)deprecatedDuration;	// 0x33cd35b5
- (id)description;	// 0x33cb8cc9
- (id)description;	// 0x33cd1ec5
- (id)dictionaryRepresentation;	// 0x33cd1f35
// declared property getter: - (id)direction;	// 0x33cd3365
// declared property getter: - (int)distanceMeters;	// 0x33cd31f5
// declared property getter: - (int)durationSeconds;	// 0x33cd3225
// declared property getter: - (BOOL)hasArrivalAddress;	// 0x33cd1a8d
// declared property getter: - (BOOL)hasArrivalDateTime;	// 0x33cd1abd
// declared property getter: - (BOOL)hasDepartureAddress;	// 0x33cd1a75
// declared property getter: - (BOOL)hasDepartureDateTime;	// 0x33cd1aa5
// declared property getter: - (BOOL)hasDepartureIntervalSeconds;	// 0x33cd3335
// declared property getter: - (BOOL)hasDeparturePointIndex;	// 0x33cd3235
// declared property getter: - (BOOL)hasDeprecatedDistance;	// 0x33cd1e95
// declared property getter: - (BOOL)hasDeprecatedDuration;	// 0x33cd1ead
// declared property getter: - (BOOL)hasDirection;	// 0x33cd1af9
// declared property getter: - (BOOL)hasDistanceMeters;	// 0x33cd31d5
// declared property getter: - (BOOL)hasDurationSeconds;	// 0x33cd3205
// declared property getter: - (BOOL)hasIconId;	// 0x33cd3399
// declared property getter: - (BOOL)hasIconSummaryText;	// 0x33cd1b3d
// declared property getter: - (BOOL)hasInstructions;	// 0x33cd19f1
// declared property getter: - (BOOL)hasManeuverTurnNumber;	// 0x33cd351d
// declared property getter: - (BOOL)hasManeuverTurnSide;	// 0x33cd34ed
// declared property getter: - (BOOL)hasManeuverType;	// 0x33cd34bd
// declared property getter: - (BOOL)hasShowInInstructions;	// 0x33cd3405
// declared property getter: - (BOOL)hasStepType;	// 0x33cd3181
// declared property getter: - (BOOL)hasStreetViewPanoId;	// 0x33cd1bc1
// declared property getter: - (BOOL)hasTransitAgencyIndex;	// 0x33cd3425
// declared property getter: - (long long)iconId;	// 0x33cd33b9
// declared property getter: - (id)iconSummaryText;	// 0x33cd33d1
// declared property getter: - (id)instructions;	// 0x33cd31a1
// declared property getter: - (int)maneuverTurnNumber;	// 0x33cd353d
// declared property getter: - (int)maneuverTurnSide;	// 0x33cd350d
// declared property getter: - (int)maneuverType;	// 0x33cd34dd
- (id)noticeAtIndex:(unsigned)index;	// 0x33cd1d65
// declared property getter: - (id)notices;	// 0x33cd3489
- (unsigned)noticesCount;	// 0x33cd1d45
- (BOOL)readFrom:(id)from;	// 0x33cd2525
- (void)setAlertIndexs:(int *)indexs count:(unsigned)count;	// 0x33cd1cc9
// declared property setter: - (void)setArrivalAddress:(id)address;	// 0x33cd32a9
// declared property setter: - (void)setArrivalDateTime:(id)time;	// 0x33cd3311
// declared property setter: - (void)setDepartureAddress:(id)address;	// 0x33cd3275
// declared property setter: - (void)setDepartureDateTime:(id)time;	// 0x33cd32dd
// declared property setter: - (void)setDepartureIntervalSeconds:(int)seconds;	// 0x33cd1ad5
// declared property setter: - (void)setDeparturePointIndex:(int)index;	// 0x33cd1a51
// declared property setter: - (void)setDeprecatedDistance:(id)distance;	// 0x33cd3591
// declared property setter: - (void)setDeprecatedDuration:(id)duration;	// 0x33cd35c5
// declared property setter: - (void)setDirection:(id)direction;	// 0x33cd3375
// declared property setter: - (void)setDistanceMeters:(int)meters;	// 0x33cd1a09
// declared property setter: - (void)setDurationSeconds:(int)seconds;	// 0x33cd1a2d
// declared property setter: - (void)setHasDepartureIntervalSeconds:(BOOL)seconds;	// 0x33cd3345
// declared property setter: - (void)setHasDeparturePointIndex:(BOOL)index;	// 0x33cd3245
// declared property setter: - (void)setHasDistanceMeters:(BOOL)meters;	// 0x33cd31e5
// declared property setter: - (void)setHasDurationSeconds:(BOOL)seconds;	// 0x33cd3215
// declared property setter: - (void)setHasIconId:(BOOL)anId;	// 0x33cd33a9
// declared property setter: - (void)setHasManeuverTurnNumber:(BOOL)number;	// 0x33cd352d
// declared property setter: - (void)setHasManeuverTurnSide:(BOOL)side;	// 0x33cd34fd
// declared property setter: - (void)setHasManeuverType:(BOOL)type;	// 0x33cd34cd
// declared property setter: - (void)setHasShowInInstructions:(BOOL)instructions;	// 0x33cd3415
// declared property setter: - (void)setHasStepType:(BOOL)type;	// 0x33cd3191
// declared property setter: - (void)setHasTransitAgencyIndex:(BOOL)index;	// 0x33cd3435
// declared property setter: - (void)setIconId:(long long)anId;	// 0x33cd1b11
// declared property setter: - (void)setIconSummaryText:(id)text;	// 0x33cd33e1
// declared property setter: - (void)setInstructions:(id)instructions;	// 0x33cd31b1
// declared property setter: - (void)setManeuverTurnNumber:(int)number;	// 0x33cd1dcd
// declared property setter: - (void)setManeuverTurnSide:(int)side;	// 0x33cd1da9
// declared property setter: - (void)setManeuverType:(int)type;	// 0x33cd1d85
// declared property setter: - (void)setNotices:(id)notices;	// 0x33cd3499
// declared property setter: - (void)setShowInInstructions:(BOOL)instructions;	// 0x33cd1b79
// declared property setter: - (void)setStepCues:(id)cues;	// 0x33cd355d
// declared property setter: - (void)setStepType:(int)type;	// 0x33cd19cd
// declared property setter: - (void)setStreetViewPanoId:(id)anId;	// 0x33cd3465
// declared property setter: - (void)setTransitAgencyIndex:(int)index;	// 0x33cd1b9d
// declared property getter: - (BOOL)showInInstructions;	// 0x33cd1b55
- (id)stepCueAtIndex:(unsigned)index;	// 0x33cd1e75
// declared property getter: - (id)stepCues;	// 0x33cd354d
- (unsigned)stepCuesCount;	// 0x33cd1e55
// declared property getter: - (int)stepType;	// 0x33cd19a9
// declared property getter: - (id)streetViewPanoId;	// 0x33cd3455
// declared property getter: - (int)transitAgencyIndex;	// 0x33cd3445
- (void)writeTo:(id)to;	// 0x33cd2b31
@end


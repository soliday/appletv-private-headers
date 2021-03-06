/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <PBCodable.h> // Unknown library

@class GEOLocation, NSMutableArray;

@interface GEODirectionsFeedbackCollection : PBCodable {
@private
	double _endTimeStamp;	// 4 = 0x4
	double _startTimeStamp;	// 12 = 0xc
	NSMutableArray *_directionsFeedbacks;	// 20 = 0x14
	GEOLocation *_routeCancelledLocation;	// 24 = 0x18
	XXStruct_UvnNeB _has;	// 28 = 0x1c
}
@property(retain, nonatomic) NSMutableArray *directionsFeedbacks;	// G=0x34b513e9; S=0x34b513f9; @synthesize=_directionsFeedbacks
@property(assign, nonatomic) double endTimeStamp;	// G=0x34b51441; S=0x34b5071d; @synthesize=_endTimeStamp
@property(assign, nonatomic) BOOL hasEndTimeStamp;	// G=0x34b5076d; S=0x34b50751; 
@property(readonly, assign, nonatomic) BOOL hasRouteCancelledLocation;	// G=0x34b5069d; 
@property(assign, nonatomic) BOOL hasStartTimeStamp;	// G=0x34b50709; S=0x34b506e9; 
@property(retain, nonatomic) GEOLocation *routeCancelledLocation;	// G=0x34b51409; S=0x34b51419; @synthesize=_routeCancelledLocation
@property(assign, nonatomic) double startTimeStamp;	// G=0x34b51429; S=0x34b506b5; @synthesize=_startTimeStamp
- (void)addDirectionsFeedback:(id)feedback;	// 0x34b505f1
- (void)clearDirectionsFeedbacks;	// 0x34b505d1
- (void)copyTo:(id)to;	// 0x34b51009
- (void)dealloc;	// 0x34b50579
- (id)description;	// 0x34b50781
- (id)dictionaryRepresentation;	// 0x34b507f1
- (id)directionsFeedbackAtIndex:(unsigned)index;	// 0x34b5067d
// declared property getter: - (id)directionsFeedbacks;	// 0x34b513e9
- (unsigned)directionsFeedbacksCount;	// 0x34b5065d
// declared property getter: - (double)endTimeStamp;	// 0x34b51441
// declared property getter: - (BOOL)hasEndTimeStamp;	// 0x34b5076d
// declared property getter: - (BOOL)hasRouteCancelledLocation;	// 0x34b5069d
// declared property getter: - (BOOL)hasStartTimeStamp;	// 0x34b50709
- (unsigned)hash;	// 0x34b51271
- (BOOL)isEqual:(id)equal;	// 0x34b5114d
- (BOOL)readFrom:(id)from;	// 0x34b50db9
// declared property getter: - (id)routeCancelledLocation;	// 0x34b51409
// declared property setter: - (void)setDirectionsFeedbacks:(id)feedbacks;	// 0x34b513f9
// declared property setter: - (void)setEndTimeStamp:(double)stamp;	// 0x34b5071d
// declared property setter: - (void)setHasEndTimeStamp:(BOOL)stamp;	// 0x34b50751
// declared property setter: - (void)setHasStartTimeStamp:(BOOL)stamp;	// 0x34b506e9
// declared property setter: - (void)setRouteCancelledLocation:(id)location;	// 0x34b51419
// declared property setter: - (void)setStartTimeStamp:(double)stamp;	// 0x34b506b5
// declared property getter: - (double)startTimeStamp;	// 0x34b51429
- (void)writeTo:(id)to;	// 0x34b50dc5
@end


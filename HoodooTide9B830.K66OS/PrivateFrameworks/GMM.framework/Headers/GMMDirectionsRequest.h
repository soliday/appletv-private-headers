/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBRequest.h> // Unknown library
#import "GMM-Structs.h"

@class GMMMapInfo, NSMutableArray, GMMDateTime, GMMDirectionsIconRequest;

__attribute__((visibility("hidden")))
@interface GMMDirectionsRequest : PBRequest {
	XXStruct_WmZAAA _modes;	// 4 = 0x4
	NSMutableArray *_waypoints;	// 16 = 0x10
	GMMDateTime *_requestedDateTime;	// 20 = 0x14
	BOOL _hasRequestedTimeType;	// 24 = 0x18
	int _requestedTimeType;	// 28 = 0x1c
	BOOL _hasTripMaxCount;	// 32 = 0x20
	int _tripMaxCount;	// 36 = 0x24
	GMMDirectionsIconRequest *_iconRequest;	// 40 = 0x28
	BOOL _hasRequestedResultType;	// 44 = 0x2c
	int _requestedResultType;	// 48 = 0x30
	BOOL _hasResultPageOffset;	// 52 = 0x34
	int _resultPageOffset;	// 56 = 0x38
	GMMMapInfo *_mapViewport;	// 60 = 0x3c
	NSMutableArray *_options;	// 64 = 0x40
	BOOL _hasIncludeStreetViewPanoId;	// 68 = 0x44
	BOOL _includeStreetViewPanoId;	// 69 = 0x45
	BOOL _hasAddStepNoticesToInstructionText;	// 70 = 0x46
	BOOL _addStepNoticesToInstructionText;	// 71 = 0x47
	BOOL _hasIncludeStructuredInstructions;	// 72 = 0x48
	BOOL _includeStructuredInstructions;	// 73 = 0x49
	BOOL _hasReturnMultipleRoutes;	// 74 = 0x4a
	BOOL _returnMultipleRoutes;	// 75 = 0x4b
	BOOL _hasIncludeNonTransitAlternates;	// 76 = 0x4c
	BOOL _includeNonTransitAlternates;	// 77 = 0x4d
	BOOL _hasAltTripsMaxPoints;	// 78 = 0x4e
	int _altTripsMaxPoints;	// 80 = 0x50
}
@property(assign, nonatomic) BOOL addStepNoticesToInstructionText;	// G=0x31fa79e1; S=0x31fa7a05; @synthesize=_addStepNoticesToInstructionText
@property(assign, nonatomic) int altTripsMaxPoints;	// G=0x31fa8db5; S=0x31fa7b01; @synthesize=_altTripsMaxPoints
@property(assign, nonatomic) BOOL hasAddStepNoticesToInstructionText;	// G=0x31fa8d15; S=0x31fa8d25; @synthesize=_hasAddStepNoticesToInstructionText
@property(assign, nonatomic) BOOL hasAltTripsMaxPoints;	// G=0x31fa8d95; S=0x31fa8da5; @synthesize=_hasAltTripsMaxPoints
@property(readonly, assign, nonatomic) BOOL hasIconRequest;	// G=0x31fa7835; 
@property(assign, nonatomic) BOOL hasIncludeNonTransitAlternates;	// G=0x31fa8d75; S=0x31fa8d85; @synthesize=_hasIncludeNonTransitAlternates
@property(assign, nonatomic) BOOL hasIncludeStreetViewPanoId;	// G=0x31fa8cf5; S=0x31fa8d05; @synthesize=_hasIncludeStreetViewPanoId
@property(assign, nonatomic) BOOL hasIncludeStructuredInstructions;	// G=0x31fa8d35; S=0x31fa8d45; @synthesize=_hasIncludeStructuredInstructions
@property(readonly, assign, nonatomic) BOOL hasMapViewport;	// G=0x31fa78dd; 
@property(readonly, assign, nonatomic) BOOL hasRequestedDateTime;	// G=0x31fa778d; 
@property(assign, nonatomic) BOOL hasRequestedResultType;	// G=0x31fa8c4d; S=0x31fa8c5d; @synthesize=_hasRequestedResultType
@property(assign, nonatomic) BOOL hasRequestedTimeType;	// G=0x31fa8bd9; S=0x31fa8be9; @synthesize=_hasRequestedTimeType
@property(assign, nonatomic) BOOL hasResultPageOffset;	// G=0x31fa8c6d; S=0x31fa8c7d; @synthesize=_hasResultPageOffset
@property(assign, nonatomic) BOOL hasReturnMultipleRoutes;	// G=0x31fa8d55; S=0x31fa8d65; @synthesize=_hasReturnMultipleRoutes
@property(assign, nonatomic) BOOL hasTripMaxCount;	// G=0x31fa8bf9; S=0x31fa8c09; @synthesize=_hasTripMaxCount
@property(retain, nonatomic) GMMDirectionsIconRequest *iconRequest;	// G=0x31fa8c19; S=0x31fa8c29; @synthesize=_iconRequest
@property(assign, nonatomic) BOOL includeNonTransitAlternates;	// G=0x31fa7ab9; S=0x31fa7add; @synthesize=_includeNonTransitAlternates
@property(assign, nonatomic) BOOL includeStreetViewPanoId;	// G=0x31fa7999; S=0x31fa79bd; @synthesize=_includeStreetViewPanoId
@property(assign, nonatomic) BOOL includeStructuredInstructions;	// G=0x31fa7a29; S=0x31fa7a4d; @synthesize=_includeStructuredInstructions
@property(retain, nonatomic) GMMMapInfo *mapViewport;	// G=0x31fa8c8d; S=0x31fa8c9d; @synthesize=_mapViewport
@property(readonly, assign, nonatomic) int *modes;	// G=0x31fa75f5; 
@property(readonly, assign, nonatomic) unsigned modesCount;	// G=0x31fa75e1; 
@property(retain, nonatomic) NSMutableArray *options;	// G=0x31fa8cc1; S=0x31fa8cd1; @synthesize=_options
@property(retain, nonatomic) GMMDateTime *requestedDateTime;	// G=0x31fa8ba5; S=0x31fa8bb5; @synthesize=_requestedDateTime
@property(assign, nonatomic) int requestedResultType;	// G=0x31fa784d; S=0x31fa7871; @synthesize=_requestedResultType
@property(assign, nonatomic) int requestedTimeType;	// G=0x31fa77a5; S=0x31fa77c9; @synthesize=_requestedTimeType
@property(assign, nonatomic) int resultPageOffset;	// G=0x31fa7895; S=0x31fa78b9; @synthesize=_resultPageOffset
@property(assign, nonatomic) BOOL returnMultipleRoutes;	// G=0x31fa7a71; S=0x31fa7a95; @synthesize=_returnMultipleRoutes
@property(assign, nonatomic) int tripMaxCount;	// G=0x31fa77ed; S=0x31fa7811; @synthesize=_tripMaxCount
@property(retain, nonatomic) NSMutableArray *waypoints;	// G=0x31fa8b71; S=0x31fa8b81; @synthesize=_waypoints
- (void)addMode:(int)mode;	// 0x31fa7619
- (void)addOptions:(id)options;	// 0x31fa78f5
// declared property getter: - (BOOL)addStepNoticesToInstructionText;	// 0x31fa79e1
- (void)addWaypoint:(id)waypoint;	// 0x31fa76e9
// declared property getter: - (int)altTripsMaxPoints;	// 0x31fa8db5
- (void)clearModes;	// 0x31fa7605
- (void)dealloc;	// 0x31fa753d
- (id)description;	// 0x31fa7b25
- (id)dictionaryRepresentation;	// 0x31fa7b95
// declared property getter: - (BOOL)hasAddStepNoticesToInstructionText;	// 0x31fa8d15
// declared property getter: - (BOOL)hasAltTripsMaxPoints;	// 0x31fa8d95
// declared property getter: - (BOOL)hasIconRequest;	// 0x31fa7835
// declared property getter: - (BOOL)hasIncludeNonTransitAlternates;	// 0x31fa8d75
// declared property getter: - (BOOL)hasIncludeStreetViewPanoId;	// 0x31fa8cf5
// declared property getter: - (BOOL)hasIncludeStructuredInstructions;	// 0x31fa8d35
// declared property getter: - (BOOL)hasMapViewport;	// 0x31fa78dd
// declared property getter: - (BOOL)hasRequestedDateTime;	// 0x31fa778d
// declared property getter: - (BOOL)hasRequestedResultType;	// 0x31fa8c4d
// declared property getter: - (BOOL)hasRequestedTimeType;	// 0x31fa8bd9
// declared property getter: - (BOOL)hasResultPageOffset;	// 0x31fa8c6d
// declared property getter: - (BOOL)hasReturnMultipleRoutes;	// 0x31fa8d55
// declared property getter: - (BOOL)hasTripMaxCount;	// 0x31fa8bf9
// declared property getter: - (id)iconRequest;	// 0x31fa8c19
// declared property getter: - (BOOL)includeNonTransitAlternates;	// 0x31fa7ab9
// declared property getter: - (BOOL)includeStreetViewPanoId;	// 0x31fa7999
// declared property getter: - (BOOL)includeStructuredInstructions;	// 0x31fa7a29
// declared property getter: - (id)mapViewport;	// 0x31fa8c8d
- (int)modeAtIndex:(unsigned)index;	// 0x31fa762d
// declared property getter: - (int *)modes;	// 0x31fa75f5
// declared property getter: - (unsigned)modesCount;	// 0x31fa75e1
// declared property getter: - (id)options;	// 0x31fa8cc1
- (id)optionsAtIndex:(unsigned)index;	// 0x31fa7979
- (unsigned)optionsCount;	// 0x31fa7959
- (BOOL)readFrom:(id)from;	// 0x31fa7fa5
- (unsigned)requestTypeCode;	// 0x31fa8b51
// declared property getter: - (id)requestedDateTime;	// 0x31fa8ba5
// declared property getter: - (int)requestedResultType;	// 0x31fa784d
// declared property getter: - (int)requestedTimeType;	// 0x31fa77a5
- (Class)responseClass;	// 0x31fa8b55
// declared property getter: - (int)resultPageOffset;	// 0x31fa7895
// declared property getter: - (BOOL)returnMultipleRoutes;	// 0x31fa7a71
// declared property setter: - (void)setAddStepNoticesToInstructionText:(BOOL)instructionText;	// 0x31fa7a05
// declared property setter: - (void)setAltTripsMaxPoints:(int)points;	// 0x31fa7b01
// declared property setter: - (void)setHasAddStepNoticesToInstructionText:(BOOL)instructionText;	// 0x31fa8d25
// declared property setter: - (void)setHasAltTripsMaxPoints:(BOOL)points;	// 0x31fa8da5
// declared property setter: - (void)setHasIncludeNonTransitAlternates:(BOOL)alternates;	// 0x31fa8d85
// declared property setter: - (void)setHasIncludeStreetViewPanoId:(BOOL)anId;	// 0x31fa8d05
// declared property setter: - (void)setHasIncludeStructuredInstructions:(BOOL)instructions;	// 0x31fa8d45
// declared property setter: - (void)setHasRequestedResultType:(BOOL)type;	// 0x31fa8c5d
// declared property setter: - (void)setHasRequestedTimeType:(BOOL)type;	// 0x31fa8be9
// declared property setter: - (void)setHasResultPageOffset:(BOOL)offset;	// 0x31fa8c7d
// declared property setter: - (void)setHasReturnMultipleRoutes:(BOOL)routes;	// 0x31fa8d65
// declared property setter: - (void)setHasTripMaxCount:(BOOL)count;	// 0x31fa8c09
// declared property setter: - (void)setIconRequest:(id)request;	// 0x31fa8c29
// declared property setter: - (void)setIncludeNonTransitAlternates:(BOOL)alternates;	// 0x31fa7add
// declared property setter: - (void)setIncludeStreetViewPanoId:(BOOL)anId;	// 0x31fa79bd
// declared property setter: - (void)setIncludeStructuredInstructions:(BOOL)instructions;	// 0x31fa7a4d
// declared property setter: - (void)setMapViewport:(id)viewport;	// 0x31fa8c9d
- (void)setModes:(int *)modes count:(unsigned)count;	// 0x31fa76d1
// declared property setter: - (void)setOptions:(id)options;	// 0x31fa8cd1
// declared property setter: - (void)setRequestedDateTime:(id)time;	// 0x31fa8bb5
// declared property setter: - (void)setRequestedResultType:(int)type;	// 0x31fa7871
// declared property setter: - (void)setRequestedTimeType:(int)type;	// 0x31fa77c9
// declared property setter: - (void)setResultPageOffset:(int)offset;	// 0x31fa78b9
// declared property setter: - (void)setReturnMultipleRoutes:(BOOL)routes;	// 0x31fa7a95
// declared property setter: - (void)setTripMaxCount:(int)count;	// 0x31fa7811
// declared property setter: - (void)setWaypoints:(id)waypoints;	// 0x31fa8b81
// declared property getter: - (int)tripMaxCount;	// 0x31fa77ed
- (id)waypointAtIndex:(unsigned)index;	// 0x31fa776d
// declared property getter: - (id)waypoints;	// 0x31fa8b71
- (unsigned)waypointsCount;	// 0x31fa774d
- (void)writeTo:(id)to;	// 0x31fa8565
@end


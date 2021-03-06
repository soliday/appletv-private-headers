/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface GMMWaypointFeedback : PBCodable {
	int _status;	// 4 = 0x4
	NSMutableArray *_waypoints;	// 8 = 0x8
	NSString *_streetViewPanoId;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) BOOL hasStreetViewPanoId;	// G=0x31594115; 
@property(assign, nonatomic) int status;	// G=0x31594571; S=0x31594581; @synthesize=_status
@property(retain, nonatomic) NSString *streetViewPanoId;	// G=0x315945c5; S=0x315945d5; @synthesize=_streetViewPanoId
@property(retain, nonatomic) NSMutableArray *waypoints;	// G=0x31594591; S=0x315945a1; @synthesize=_waypoints
- (void)addWaypoint:(id)waypoint;	// 0x31594071
- (void)dealloc;	// 0x31594019
- (id)description;	// 0x3159412d
- (id)description;	// 0x3157967d
- (id)dictionaryRepresentation;	// 0x3159419d
// declared property getter: - (BOOL)hasStreetViewPanoId;	// 0x31594115
- (BOOL)readFrom:(id)from;	// 0x31594251
// declared property setter: - (void)setStatus:(int)status;	// 0x31594581
// declared property setter: - (void)setStreetViewPanoId:(id)anId;	// 0x315945d5
// declared property setter: - (void)setWaypoints:(id)waypoints;	// 0x315945a1
// declared property getter: - (int)status;	// 0x31594571
// declared property getter: - (id)streetViewPanoId;	// 0x315945c5
- (id)waypointAtIndex:(unsigned)index;	// 0x315940f5
// declared property getter: - (id)waypoints;	// 0x31594591
- (unsigned)waypointsCount;	// 0x315940d5
- (void)writeTo:(id)to;	// 0x31594415
@end


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
@private
	int _status;	// 4 = 0x4
	NSMutableArray *_waypoints;	// 8 = 0x8
	NSString *_streetViewPanoId;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) BOOL hasStreetViewPanoId;	// G=0x30a7c80d; 
@property(assign, nonatomic) int status;	// G=0x30a7c841; S=0x30a7c851; @synthesize=_status
@property(retain, nonatomic) NSString *streetViewPanoId;	// G=0x30a7c821; S=0x30a7cf45; @synthesize=_streetViewPanoId
@property(retain, nonatomic) NSMutableArray *waypoints;	// G=0x30a7c831; S=0x30a7cf1d; @synthesize=_waypoints
@property(readonly, assign, nonatomic) int waypointsCount;	// G=0x30a7ce9d; 
- (id)init;	// 0x30a7c861
- (void)addWaypoint:(id)waypoint;	// 0x30a7cda1
- (void)dealloc;	// 0x30a7cec1
- (id)description;	// 0x30a5e321
- (id)description;	// 0x30a7c92d
- (id)dictionaryRepresentation;	// 0x30a7c88d
// declared property getter: - (BOOL)hasStreetViewPanoId;	// 0x30a7c80d
- (BOOL)readFrom:(id)from;	// 0x30a7cbcd
// declared property setter: - (void)setStatus:(int)status;	// 0x30a7c851
// declared property setter: - (void)setStreetViewPanoId:(id)anId;	// 0x30a7cf45
- (void)setWaypoint:(id)waypoint atIndex:(unsigned)index;	// 0x30a7ce35
// declared property setter: - (void)setWaypoints:(id)waypoints;	// 0x30a7cf1d
// declared property getter: - (int)status;	// 0x30a7c841
// declared property getter: - (id)streetViewPanoId;	// 0x30a7c821
- (id)waypointAtIndex:(unsigned)index;	// 0x30a7cdd1
// declared property getter: - (id)waypoints;	// 0x30a7c831
// declared property getter: - (int)waypointsCount;	// 0x30a7ce9d
- (void)writeTo:(id)to;	// 0x30a7ca45
@end


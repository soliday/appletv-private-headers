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
@property(readonly, assign, nonatomic) BOOL hasStreetViewPanoId;	// G=0x35b96115; 
@property(assign, nonatomic) int status;	// G=0x35b96571; S=0x35b96581; @synthesize=_status
@property(retain, nonatomic) NSString *streetViewPanoId;	// G=0x35b965c5; S=0x35b965d5; @synthesize=_streetViewPanoId
@property(retain, nonatomic) NSMutableArray *waypoints;	// G=0x35b96591; S=0x35b965a1; @synthesize=_waypoints
- (void)addWaypoint:(id)waypoint;	// 0x35b96071
- (void)dealloc;	// 0x35b96019
- (id)description;	// 0x35b9612d
- (id)description;	// 0x35b7b67d
- (id)dictionaryRepresentation;	// 0x35b9619d
// declared property getter: - (BOOL)hasStreetViewPanoId;	// 0x35b96115
- (BOOL)readFrom:(id)from;	// 0x35b96251
// declared property setter: - (void)setStatus:(int)status;	// 0x35b96581
// declared property setter: - (void)setStreetViewPanoId:(id)anId;	// 0x35b965d5
// declared property setter: - (void)setWaypoints:(id)waypoints;	// 0x35b965a1
// declared property getter: - (int)status;	// 0x35b96571
// declared property getter: - (id)streetViewPanoId;	// 0x35b965c5
- (id)waypointAtIndex:(unsigned)index;	// 0x35b960f5
// declared property getter: - (id)waypoints;	// 0x35b96591
- (unsigned)waypointsCount;	// 0x35b960d5
- (void)writeTo:(id)to;	// 0x35b96415
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

#import <NSObject.h> // Unknown library


@interface CLSimulationManager : NSObject {
@private
	double _locationDistance;	// 4 = 0x4
	double _locationInterval;	// 12 = 0xc
	double _locationSpeed;	// 20 = 0x14
	int _locationRepeatBehavior;	// 28 = 0x1c
	int _locationDeliveryBehavior;	// 32 = 0x20
}
@property(assign, nonatomic) int locationDeliveryBehavior;	// G=0x302c1125; S=0x302c0931; @synthesize=_locationDeliveryBehavior
@property(assign, nonatomic) double locationDistance;	// G=0x302c10cd; S=0x302c098d; @synthesize=_locationDistance
@property(assign, nonatomic) double locationInterval;	// G=0x302c10e5; S=0x302c09e1; @synthesize=_locationInterval
@property(assign, nonatomic) int locationRepeatBehavior;	// G=0x302c1115; S=0x302c0a89; @synthesize=_locationRepeatBehavior
@property(assign, nonatomic) double locationSpeed;	// G=0x302c10fd; S=0x302c0a35; @synthesize=_locationSpeed
- (id)init;	// 0x302c04d5
- (void)appendSimulatedLocation:(id)location;	// 0x302c0b0d
- (id)availableScenarios;	// 0x302c063d
- (void)clearSimulatedCells;	// 0x302c0e15
- (void)clearSimulatedLocations;	// 0x302c0ad5
- (void)flush;	// 0x302c1095
- (void)loadScenarioFromURL:(id)url;	// 0x302c07ed
- (id)localizedNameForScenario:(id)scenario;	// 0x302c0765
// declared property getter: - (int)locationDeliveryBehavior;	// 0x302c1125
// declared property getter: - (double)locationDistance;	// 0x302c10cd
// declared property getter: - (double)locationInterval;	// 0x302c10e5
// declared property getter: - (int)locationRepeatBehavior;	// 0x302c1115
// declared property getter: - (double)locationSpeed;	// 0x302c10fd
- (id)scenariosPath;	// 0x302c0565
- (void)selectScenario:(id)scenario;	// 0x302c0769
// declared property setter: - (void)setLocationDeliveryBehavior:(int)behavior;	// 0x302c0931
// declared property setter: - (void)setLocationDistance:(double)distance;	// 0x302c098d
// declared property setter: - (void)setLocationInterval:(double)interval;	// 0x302c09e1
// declared property setter: - (void)setLocationRepeatBehavior:(int)behavior;	// 0x302c0a89
// declared property setter: - (void)setLocationSpeed:(double)speed;	// 0x302c0a35
- (void)setSimulatedCell:(id)cell;	// 0x302c0e4d
- (void)setSimulatedCellRegistrationStatus:(BOOL)status;	// 0x302c0f55
- (void)setSimulatedWifiPower:(BOOL)power;	// 0x302c1059
- (void)setWifiScanResults:(id)results;	// 0x302c0f91
- (void)startCellSimulation;	// 0x302c0ee5
- (void)startLocationSimulation;	// 0x302c0da5
- (void)startWifiSimulation;	// 0x302c0fe9
- (void)stopCellSimulation;	// 0x302c0f1d
- (void)stopLocationSimulation;	// 0x302c0ddd
- (void)stopWifiSimulation;	// 0x302c1021
@end


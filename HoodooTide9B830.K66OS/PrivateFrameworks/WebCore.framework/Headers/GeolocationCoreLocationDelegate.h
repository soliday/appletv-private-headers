/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "CLLocationManagerDelegate.h"
#import <NSObject.h> // Unknown library
#import "WebCore-Structs.h"

@class CLLocationManager;

__attribute__((visibility("hidden")))
@interface GeolocationCoreLocationDelegate : NSObject <CLLocationManagerDelegate> {
@private
	double m_accuracy;	// 4 = 0x4
	GeolocationManager *m_callback;	// 12 = 0xc
	CLLocationManager *m_locationManager;	// 16 = 0x10
	BOOL m_locationDenied;	// 20 = 0x14
}
@property(assign, nonatomic) BOOL wantsHighAccuracy;	// G=0x3597b775; S=0x3597b821; 
- (id)initWithCallback:(GeolocationManager *)callback;	// 0x3597b8f1
- (void)createLocationManager;	// 0x3597b511
- (void)dealloc;	// 0x3597b9f9
- (void)locationManager:(id)manager didFailWithError:(id)error;	// 0x3597b6fd
- (void)locationManager:(id)manager didUpdateToLocation:(id)location fromLocation:(id)location3;	// 0x3597b6e9
- (void)sendError:(id)error withString:(id)string;	// 0x3597b949
- (void)sendLocation:(id)location;	// 0x3597b9a9
// declared property setter: - (void)setWantsHighAccuracy:(BOOL)accuracy;	// 0x3597b821
- (void)start;	// 0x3597b5ed
- (void)stop;	// 0x3597b699
// declared property getter: - (BOOL)wantsHighAccuracy;	// 0x3597b775
@end


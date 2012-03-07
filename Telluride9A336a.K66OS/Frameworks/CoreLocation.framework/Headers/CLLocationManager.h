/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

#import "CoreLocation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSSet, CLHeading, NSString, CLLocation;
@protocol CLLocationManagerDelegate;

@interface CLLocationManager : NSObject {
@private
	id _internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) double bestAccuracy;	// G=0x30435b9d; 
@property(assign, nonatomic) id<CLLocationManagerDelegate> delegate;	// G=0x304355bd; S=0x3043559d; 
@property(assign, nonatomic) double desiredAccuracy;	// G=0x304357bd; S=0x304356e1; 
@property(assign, nonatomic) double distanceFilter;	// G=0x304356b9; S=0x304355dd; 
@property(readonly, assign, nonatomic) double expectedGpsUpdateInterval;	// G=0x30435a65; 
@property(readonly, assign, nonatomic) CLHeading *heading;	// G=0x304361e5; 
@property(readonly, assign, nonatomic) BOOL headingAvailable;	// G=0x30435f85; 
@property(assign, nonatomic) double headingFilter;	// G=0x304360c5; S=0x30435fad; 
@property(assign, nonatomic) int headingOrientation;	// G=0x304361c5; S=0x304360ed; 
@property(readonly, assign, nonatomic) CLClientRef internalClient;	// G=0x30435bf5; 
@property(readonly, assign, nonatomic) CLLocation *location;	// G=0x304357e5; 
@property(readonly, assign, nonatomic) BOOL locationServicesApproved;	// G=0x30435a39; 
@property(readonly, assign, nonatomic) BOOL locationServicesAvailable;	// G=0x304359e9; 
@property(readonly, assign, nonatomic) BOOL locationServicesEnabled;	// G=0x30435a11; 
@property(assign, nonatomic, getter=isLocationServicesPreferencesDialogEnabled) BOOL locationServicesPreferencesDialogEnabled;	// G=0x3043a06d; S=0x3043a08d; 
@property(readonly, assign, nonatomic) double maximumRegionMonitoringDistance;	// G=0x30436941; 
@property(readonly, assign, nonatomic) NSSet *monitoredRegions;	// G=0x30436a15; 
@property(assign, nonatomic, getter=isPersistentMonitoringEnabled) BOOL persistentMonitoringEnabled;	// G=0x3043a00d; S=0x3043a02d; 
@property(assign, nonatomic) BOOL privateMode;	// G=0x30435c25; S=0x30435c15; 
@property(copy, nonatomic) NSString *purpose;	// G=0x30435cf1; S=0x30435c39; 
@property(assign, nonatomic) BOOL supportInfo;	// G=0x30435b99; S=0x30435a85; 
+ (int)_authorizationStatus;	// 0x30439f7d
+ (int)_authorizationStatusForBundleIdentifier:(id)bundleIdentifier bundle:(id)bundle;	// 0x30439f1d
+ (int)authorizationStatus;	// 0x30439f91
+ (int)authorizationStatusForBundle:(id)bundle;	// 0x30439f69
+ (int)authorizationStatusForBundleIdentifier:(id)bundleIdentifier;	// 0x30439f55
+ (id)dateLocationLastUsedForLocationDictionary:(id)locationDictionary;	// 0x30467d51
+ (unsigned)entityClassesForLocationDictionary:(id)locationDictionary;	// 0x30467d21
+ (BOOL)headingAvailable;	// 0x3043555d
+ (BOOL)isEntityAuthorizedForLocationDictionary:(id)locationDictionary;	// 0x30467d59
+ (BOOL)isLocationActiveForLocationDictionary:(id)locationDictionary;	// 0x30467d45
+ (BOOL)isStatusBarIconEnabledForLocationEntityClass:(unsigned)locationEntityClass;	// 0x30467c71
+ (BOOL)locationServicesEnabled;	// 0x30435525
+ (BOOL)locationServicesEnabled:(BOOL)enabled;	// 0x30435535
+ (unsigned)primaryEntityClassForLocationDictionary:(id)locationDictionary;	// 0x30467ced
+ (BOOL)regionMonitoringAvailable;	// 0x3043557d
+ (BOOL)regionMonitoringEnabled;	// 0x3043558d
+ (void)setAuthorizationStatus:(BOOL)status forBundle:(id)bundle;	// 0x30439fb5
+ (void)setAuthorizationStatus:(BOOL)status forBundleIdentifier:(id)bundleIdentifier;	// 0x30439fa1
+ (void)setDefaultEffectiveBundle:(id)bundle;	// 0x30439fed
+ (void)setDefaultEffectiveBundleIdentifier:(id)identifier;	// 0x30439fe5
+ (void)setEntityAuthorized:(BOOL)authorized forLocationDictionary:(id)locationDictionary;	// 0x30467dad
+ (void)setLocationServicesEnabled:(BOOL)enabled;	// 0x3043554d
+ (void)setStatusBarIconEnabled:(BOOL)enabled forLocationEntityClass:(unsigned)locationEntityClass;	// 0x30467c05
+ (id)sharedManager;	// 0x304354dd
+ (BOOL)significantLocationChangeMonitoringAvailable;	// 0x3043556d
- (id)init;	// 0x30435455
- (id)initWithEffectiveBundle:(id)effectiveBundle;	// 0x3043547d
- (id)initWithEffectiveBundleIdentifier:(id)effectiveBundleIdentifier;	// 0x30435469
- (id)initWithEffectiveBundleIdentifier:(id)effectiveBundleIdentifier bundle:(id)bundle;	// 0x304353dd
- (id)appsUsingLocation;	// 0x30436e5d
- (id)appsUsingLocationWithDetails;	// 0x30436e61
// declared property getter: - (double)bestAccuracy;	// 0x30435b9d
- (void)dealloc;	// 0x30435491
// declared property getter: - (id)delegate;	// 0x304355bd
// declared property getter: - (double)desiredAccuracy;	// 0x304357bd
- (void)dismissHeadingCalibrationDisplay;	// 0x30436545
// declared property getter: - (double)distanceFilter;	// 0x304356b9
// declared property getter: - (double)expectedGpsUpdateInterval;	// 0x30435a65
// declared property getter: - (id)heading;	// 0x304361e5
// declared property getter: - (BOOL)headingAvailable;	// 0x30435f85
// declared property getter: - (double)headingFilter;	// 0x304360c5
// declared property getter: - (int)headingOrientation;	// 0x304361c5
- (void)historicLocationsFromDate:(id)date forInterval:(double)interval;	// 0x30435f6d
// declared property getter: - (CLClientRef)internalClient;	// 0x30435bf5
// declared property getter: - (BOOL)isLocationServicesPreferencesDialogEnabled;	// 0x3043a06d
// declared property getter: - (BOOL)isPersistentMonitoringEnabled;	// 0x3043a00d
// declared property getter: - (id)location;	// 0x304357e5
// declared property getter: - (BOOL)locationServicesApproved;	// 0x30435a39
// declared property getter: - (BOOL)locationServicesAvailable;	// 0x304359e9
// declared property getter: - (BOOL)locationServicesEnabled;	// 0x30435a11
// declared property getter: - (double)maximumRegionMonitoringDistance;	// 0x30436941
// declared property getter: - (id)monitoredRegions;	// 0x30436a15
- (void)onClientEvent:(int)event supportInfo:(id)info;	// 0x30436eb9
- (void)onClientEventAuthStatus:(id)status;	// 0x30436f85
- (void)onClientEventError:(id)error;	// 0x30437bb9
- (void)onClientEventHeading:(id)heading;	// 0x30437719
- (void)onClientEventHeadingCalibration:(id)calibration;	// 0x304379c9
- (void)onClientEventHistoricLocation:(id)location;	// 0x30437bb5
- (void)onClientEventLocation:(id)location;	// 0x3043714d
- (void)onClientEventLocationUnavailable:(id)unavailable;	// 0x3043767d
- (void)onClientEventRegion:(id)region;	// 0x30437d0d
- (void)onClientEventRegionError:(id)error;	// 0x3043853d
- (void)onClientEventRegionResponseDelayed:(id)delayed;	// 0x30438c1d
- (void)onClientEventRegionSetupCompleted:(id)completed;	// 0x30439895
// declared property getter: - (BOOL)privateMode;	// 0x30435c25
// declared property getter: - (id)purpose;	// 0x30435cf1
- (void)registerAsLocationClient;	// 0x3043a0cd
- (void)resetApps;	// 0x30436dcd
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3043559d
// declared property setter: - (void)setDesiredAccuracy:(double)accuracy;	// 0x304356e1
// declared property setter: - (void)setDistanceFilter:(double)filter;	// 0x304355dd
// declared property setter: - (void)setHeadingFilter:(double)filter;	// 0x30435fad
// declared property setter: - (void)setHeadingOrientation:(int)orientation;	// 0x304360ed
// declared property setter: - (void)setLocationServicesPreferencesDialogEnabled:(BOOL)enabled;	// 0x3043a08d
// declared property setter: - (void)setPersistentMonitoringEnabled:(BOOL)enabled;	// 0x3043a02d
// declared property setter: - (void)setPrivateMode:(BOOL)mode;	// 0x30435c15
// declared property setter: - (void)setPurpose:(id)purpose;	// 0x30435c39
// declared property setter: - (void)setSupportInfo:(BOOL)info;	// 0x30435a85
- (void)startAppStatusUpdates;	// 0x304365f9
- (void)startMonitoringForRegion:(id)region;	// 0x30436781
- (void)startMonitoringForRegion:(id)region desiredAccuracy:(double)accuracy;	// 0x30436771
- (void)startMonitoringSignificantLocationChanges;	// 0x30436609
- (void)startTechStatusUpdates;	// 0x30436601
- (void)startUpdatingHeading;	// 0x3043638d
- (void)startUpdatingLocation;	// 0x30435da9
- (void)stopAppStatusUpdates;	// 0x304365fd
- (void)stopMonitoringForRegion:(id)region;	// 0x30436865
- (void)stopMonitoringSignificantLocationChanges;	// 0x304366bd
- (void)stopTechStatusUpdates;	// 0x30436605
- (void)stopUpdatingHeading;	// 0x30436485
- (void)stopUpdatingLocation;	// 0x30435ead
// declared property getter: - (BOOL)supportInfo;	// 0x30435b99
- (id)technologiesInUse;	// 0x30436e7d
@end

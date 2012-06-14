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
@property(readonly, assign, nonatomic) double bestAccuracy;	// G=0x324f53a1; 
@property(assign, nonatomic) id<CLLocationManagerDelegate> delegate;	// G=0x324f4dc1; S=0x324f4da1; 
@property(assign, nonatomic) double desiredAccuracy;	// G=0x324f4fc1; S=0x324f4ee5; 
@property(assign, nonatomic) double distanceFilter;	// G=0x324f4ebd; S=0x324f4de1; 
@property(readonly, assign, nonatomic) double expectedGpsUpdateInterval;	// G=0x324f5269; 
@property(readonly, assign, nonatomic) CLHeading *heading;	// G=0x324f59e9; 
@property(readonly, assign, nonatomic) BOOL headingAvailable;	// G=0x324f5789; 
@property(assign, nonatomic) double headingFilter;	// G=0x324f58c9; S=0x324f57b1; 
@property(assign, nonatomic) int headingOrientation;	// G=0x324f59c9; S=0x324f58f1; 
@property(readonly, assign, nonatomic) CLClientRef internalClient;	// G=0x324f53f9; 
@property(readonly, assign, nonatomic) CLLocation *location;	// G=0x324f4fe9; 
@property(readonly, assign, nonatomic) BOOL locationServicesApproved;	// G=0x324f523d; 
@property(readonly, assign, nonatomic) BOOL locationServicesAvailable;	// G=0x324f51ed; 
@property(readonly, assign, nonatomic) BOOL locationServicesEnabled;	// G=0x324f5215; 
@property(assign, nonatomic, getter=isLocationServicesPreferencesDialogEnabled) BOOL locationServicesPreferencesDialogEnabled;	// G=0x324f9871; S=0x324f9891; 
@property(readonly, assign, nonatomic) double maximumRegionMonitoringDistance;	// G=0x324f6145; 
@property(readonly, assign, nonatomic) NSSet *monitoredRegions;	// G=0x324f6219; 
@property(assign, nonatomic, getter=isPersistentMonitoringEnabled) BOOL persistentMonitoringEnabled;	// G=0x324f9811; S=0x324f9831; 
@property(assign, nonatomic) BOOL privateMode;	// G=0x324f5429; S=0x324f5419; 
@property(copy, nonatomic) NSString *purpose;	// G=0x324f54f5; S=0x324f543d; 
@property(assign, nonatomic) BOOL supportInfo;	// G=0x324f539d; S=0x324f5289; 
+ (int)_authorizationStatus;	// 0x324f9781
+ (int)_authorizationStatusForBundleIdentifier:(id)bundleIdentifier bundle:(id)bundle;	// 0x324f9721
+ (unsigned)activeLocationServiceTypesForLocationDictionary:(id)locationDictionary;	// 0x32527ab1
+ (int)authorizationStatus;	// 0x324f9795
+ (int)authorizationStatusForBundle:(id)bundle;	// 0x324f976d
+ (int)authorizationStatusForBundleIdentifier:(id)bundleIdentifier;	// 0x324f9759
+ (id)dateLocationLastUsedForLocationDictionary:(id)locationDictionary;	// 0x32527add
+ (unsigned)entityClassesForLocationDictionary:(id)locationDictionary;	// 0x32527a6d
+ (BOOL)headingAvailable;	// 0x324f4d61
+ (BOOL)isEntityAuthorizedForLocationDictionary:(id)locationDictionary;	// 0x32527ae5
+ (BOOL)isLocationActiveForLocationDictionary:(id)locationDictionary;	// 0x32527a91
+ (BOOL)isStatusBarIconEnabledForLocationEntityClass:(unsigned)locationEntityClass;	// 0x325279bd
+ (BOOL)locationServicesEnabled;	// 0x324f4d29
+ (BOOL)locationServicesEnabled:(BOOL)enabled;	// 0x324f4d39
+ (unsigned)primaryEntityClassForLocationDictionary:(id)locationDictionary;	// 0x32527a39
+ (BOOL)regionMonitoringAvailable;	// 0x324f4d81
+ (BOOL)regionMonitoringEnabled;	// 0x324f4d91
+ (void)setAuthorizationStatus:(BOOL)status forBundle:(id)bundle;	// 0x324f97b9
+ (void)setAuthorizationStatus:(BOOL)status forBundleIdentifier:(id)bundleIdentifier;	// 0x324f97a5
+ (void)setDefaultEffectiveBundle:(id)bundle;	// 0x324f97f1
+ (void)setDefaultEffectiveBundleIdentifier:(id)identifier;	// 0x324f97e9
+ (void)setEntityAuthorized:(BOOL)authorized forLocationDictionary:(id)locationDictionary;	// 0x32527af1
+ (void)setLocationServicesEnabled:(BOOL)enabled;	// 0x324f4d51
+ (void)setStatusBarIconEnabled:(BOOL)enabled forLocationEntityClass:(unsigned)locationEntityClass;	// 0x32527951
+ (id)sharedManager;	// 0x324f4ce1
+ (BOOL)significantLocationChangeMonitoringAvailable;	// 0x324f4d71
- (id)init;	// 0x324f4c59
- (id)initWithEffectiveBundle:(id)effectiveBundle;	// 0x324f4c81
- (id)initWithEffectiveBundleIdentifier:(id)effectiveBundleIdentifier;	// 0x324f4c6d
- (id)initWithEffectiveBundleIdentifier:(id)effectiveBundleIdentifier bundle:(id)bundle;	// 0x324f4be1
- (id)appsUsingLocation;	// 0x324f6661
- (id)appsUsingLocationWithDetails;	// 0x324f6665
// declared property getter: - (double)bestAccuracy;	// 0x324f53a1
- (void)dealloc;	// 0x324f4c95
// declared property getter: - (id)delegate;	// 0x324f4dc1
// declared property getter: - (double)desiredAccuracy;	// 0x324f4fc1
- (void)dismissHeadingCalibrationDisplay;	// 0x324f5d49
// declared property getter: - (double)distanceFilter;	// 0x324f4ebd
// declared property getter: - (double)expectedGpsUpdateInterval;	// 0x324f5269
// declared property getter: - (id)heading;	// 0x324f59e9
// declared property getter: - (BOOL)headingAvailable;	// 0x324f5789
// declared property getter: - (double)headingFilter;	// 0x324f58c9
// declared property getter: - (int)headingOrientation;	// 0x324f59c9
- (void)historicLocationsFromDate:(id)date forInterval:(double)interval;	// 0x324f5771
// declared property getter: - (CLClientRef)internalClient;	// 0x324f53f9
// declared property getter: - (BOOL)isLocationServicesPreferencesDialogEnabled;	// 0x324f9871
// declared property getter: - (BOOL)isPersistentMonitoringEnabled;	// 0x324f9811
// declared property getter: - (id)location;	// 0x324f4fe9
// declared property getter: - (BOOL)locationServicesApproved;	// 0x324f523d
// declared property getter: - (BOOL)locationServicesAvailable;	// 0x324f51ed
// declared property getter: - (BOOL)locationServicesEnabled;	// 0x324f5215
// declared property getter: - (double)maximumRegionMonitoringDistance;	// 0x324f6145
// declared property getter: - (id)monitoredRegions;	// 0x324f6219
- (void)onClientEvent:(int)event supportInfo:(id)info;	// 0x324f66bd
- (void)onClientEventAuthStatus:(id)status;	// 0x324f6789
- (void)onClientEventError:(id)error;	// 0x324f73bd
- (void)onClientEventHeading:(id)heading;	// 0x324f6f1d
- (void)onClientEventHeadingCalibration:(id)calibration;	// 0x324f71cd
- (void)onClientEventHistoricLocation:(id)location;	// 0x324f73b9
- (void)onClientEventLocation:(id)location;	// 0x324f6951
- (void)onClientEventLocationUnavailable:(id)unavailable;	// 0x324f6e81
- (void)onClientEventRegion:(id)region;	// 0x324f7511
- (void)onClientEventRegionError:(id)error;	// 0x324f7d41
- (void)onClientEventRegionResponseDelayed:(id)delayed;	// 0x324f8421
- (void)onClientEventRegionSetupCompleted:(id)completed;	// 0x324f9099
// declared property getter: - (BOOL)privateMode;	// 0x324f5429
// declared property getter: - (id)purpose;	// 0x324f54f5
- (void)registerAsLocationClient;	// 0x324f98d1
- (void)resetApps;	// 0x324f65d1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x324f4da1
// declared property setter: - (void)setDesiredAccuracy:(double)accuracy;	// 0x324f4ee5
// declared property setter: - (void)setDistanceFilter:(double)filter;	// 0x324f4de1
// declared property setter: - (void)setHeadingFilter:(double)filter;	// 0x324f57b1
// declared property setter: - (void)setHeadingOrientation:(int)orientation;	// 0x324f58f1
// declared property setter: - (void)setLocationServicesPreferencesDialogEnabled:(BOOL)enabled;	// 0x324f9891
// declared property setter: - (void)setPersistentMonitoringEnabled:(BOOL)enabled;	// 0x324f9831
// declared property setter: - (void)setPrivateMode:(BOOL)mode;	// 0x324f5419
// declared property setter: - (void)setPurpose:(id)purpose;	// 0x324f543d
// declared property setter: - (void)setSupportInfo:(BOOL)info;	// 0x324f5289
- (void)startAppStatusUpdates;	// 0x324f5dfd
- (void)startMonitoringForRegion:(id)region;	// 0x324f5f85
- (void)startMonitoringForRegion:(id)region desiredAccuracy:(double)accuracy;	// 0x324f5f75
- (void)startMonitoringSignificantLocationChanges;	// 0x324f5e0d
- (void)startTechStatusUpdates;	// 0x324f5e05
- (void)startUpdatingHeading;	// 0x324f5b91
- (void)startUpdatingLocation;	// 0x324f55ad
- (void)stopAppStatusUpdates;	// 0x324f5e01
- (void)stopMonitoringForRegion:(id)region;	// 0x324f6069
- (void)stopMonitoringSignificantLocationChanges;	// 0x324f5ec1
- (void)stopTechStatusUpdates;	// 0x324f5e09
- (void)stopUpdatingHeading;	// 0x324f5c89
- (void)stopUpdatingLocation;	// 0x324f56b1
// declared property getter: - (BOOL)supportInfo;	// 0x324f539d
- (id)technologiesInUse;	// 0x324f6681
@end


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
@property(readonly, assign, nonatomic) double bestAccuracy;	// G=0x319413a1; 
@property(assign, nonatomic) id<CLLocationManagerDelegate> delegate;	// G=0x31940dc1; S=0x31940da1; 
@property(assign, nonatomic) double desiredAccuracy;	// G=0x31940fc1; S=0x31940ee5; 
@property(assign, nonatomic) double distanceFilter;	// G=0x31940ebd; S=0x31940de1; 
@property(readonly, assign, nonatomic) double expectedGpsUpdateInterval;	// G=0x31941269; 
@property(readonly, assign, nonatomic) CLHeading *heading;	// G=0x319419e9; 
@property(readonly, assign, nonatomic) BOOL headingAvailable;	// G=0x31941789; 
@property(assign, nonatomic) double headingFilter;	// G=0x319418c9; S=0x319417b1; 
@property(assign, nonatomic) int headingOrientation;	// G=0x319419c9; S=0x319418f1; 
@property(readonly, assign, nonatomic) CLClientRef internalClient;	// G=0x319413f9; 
@property(readonly, assign, nonatomic) CLLocation *location;	// G=0x31940fe9; 
@property(readonly, assign, nonatomic) BOOL locationServicesApproved;	// G=0x3194123d; 
@property(readonly, assign, nonatomic) BOOL locationServicesAvailable;	// G=0x319411ed; 
@property(readonly, assign, nonatomic) BOOL locationServicesEnabled;	// G=0x31941215; 
@property(assign, nonatomic, getter=isLocationServicesPreferencesDialogEnabled) BOOL locationServicesPreferencesDialogEnabled;	// G=0x31945871; S=0x31945891; 
@property(readonly, assign, nonatomic) double maximumRegionMonitoringDistance;	// G=0x31942145; 
@property(readonly, assign, nonatomic) NSSet *monitoredRegions;	// G=0x31942219; 
@property(assign, nonatomic, getter=isPersistentMonitoringEnabled) BOOL persistentMonitoringEnabled;	// G=0x31945811; S=0x31945831; 
@property(assign, nonatomic) BOOL privateMode;	// G=0x31941429; S=0x31941419; 
@property(copy, nonatomic) NSString *purpose;	// G=0x319414f5; S=0x3194143d; 
@property(assign, nonatomic) BOOL supportInfo;	// G=0x3194139d; S=0x31941289; 
+ (int)_authorizationStatus;	// 0x31945781
+ (int)_authorizationStatusForBundleIdentifier:(id)bundleIdentifier bundle:(id)bundle;	// 0x31945721
+ (unsigned)activeLocationServiceTypesForLocationDictionary:(id)locationDictionary;	// 0x31973ab1
+ (int)authorizationStatus;	// 0x31945795
+ (int)authorizationStatusForBundle:(id)bundle;	// 0x3194576d
+ (int)authorizationStatusForBundleIdentifier:(id)bundleIdentifier;	// 0x31945759
+ (id)dateLocationLastUsedForLocationDictionary:(id)locationDictionary;	// 0x31973add
+ (unsigned)entityClassesForLocationDictionary:(id)locationDictionary;	// 0x31973a6d
+ (BOOL)headingAvailable;	// 0x31940d61
+ (BOOL)isEntityAuthorizedForLocationDictionary:(id)locationDictionary;	// 0x31973ae5
+ (BOOL)isLocationActiveForLocationDictionary:(id)locationDictionary;	// 0x31973a91
+ (BOOL)isStatusBarIconEnabledForLocationEntityClass:(unsigned)locationEntityClass;	// 0x319739bd
+ (BOOL)locationServicesEnabled;	// 0x31940d29
+ (BOOL)locationServicesEnabled:(BOOL)enabled;	// 0x31940d39
+ (unsigned)primaryEntityClassForLocationDictionary:(id)locationDictionary;	// 0x31973a39
+ (BOOL)regionMonitoringAvailable;	// 0x31940d81
+ (BOOL)regionMonitoringEnabled;	// 0x31940d91
+ (void)setAuthorizationStatus:(BOOL)status forBundle:(id)bundle;	// 0x319457b9
+ (void)setAuthorizationStatus:(BOOL)status forBundleIdentifier:(id)bundleIdentifier;	// 0x319457a5
+ (void)setDefaultEffectiveBundle:(id)bundle;	// 0x319457f1
+ (void)setDefaultEffectiveBundleIdentifier:(id)identifier;	// 0x319457e9
+ (void)setEntityAuthorized:(BOOL)authorized forLocationDictionary:(id)locationDictionary;	// 0x31973af1
+ (void)setLocationServicesEnabled:(BOOL)enabled;	// 0x31940d51
+ (void)setStatusBarIconEnabled:(BOOL)enabled forLocationEntityClass:(unsigned)locationEntityClass;	// 0x31973951
+ (id)sharedManager;	// 0x31940ce1
+ (BOOL)significantLocationChangeMonitoringAvailable;	// 0x31940d71
- (id)init;	// 0x31940c59
- (id)initWithEffectiveBundle:(id)effectiveBundle;	// 0x31940c81
- (id)initWithEffectiveBundleIdentifier:(id)effectiveBundleIdentifier;	// 0x31940c6d
- (id)initWithEffectiveBundleIdentifier:(id)effectiveBundleIdentifier bundle:(id)bundle;	// 0x31940be1
- (id)appsUsingLocation;	// 0x31942661
- (id)appsUsingLocationWithDetails;	// 0x31942665
// declared property getter: - (double)bestAccuracy;	// 0x319413a1
- (void)dealloc;	// 0x31940c95
// declared property getter: - (id)delegate;	// 0x31940dc1
// declared property getter: - (double)desiredAccuracy;	// 0x31940fc1
- (void)dismissHeadingCalibrationDisplay;	// 0x31941d49
// declared property getter: - (double)distanceFilter;	// 0x31940ebd
// declared property getter: - (double)expectedGpsUpdateInterval;	// 0x31941269
// declared property getter: - (id)heading;	// 0x319419e9
// declared property getter: - (BOOL)headingAvailable;	// 0x31941789
// declared property getter: - (double)headingFilter;	// 0x319418c9
// declared property getter: - (int)headingOrientation;	// 0x319419c9
- (void)historicLocationsFromDate:(id)date forInterval:(double)interval;	// 0x31941771
// declared property getter: - (CLClientRef)internalClient;	// 0x319413f9
// declared property getter: - (BOOL)isLocationServicesPreferencesDialogEnabled;	// 0x31945871
// declared property getter: - (BOOL)isPersistentMonitoringEnabled;	// 0x31945811
// declared property getter: - (id)location;	// 0x31940fe9
// declared property getter: - (BOOL)locationServicesApproved;	// 0x3194123d
// declared property getter: - (BOOL)locationServicesAvailable;	// 0x319411ed
// declared property getter: - (BOOL)locationServicesEnabled;	// 0x31941215
// declared property getter: - (double)maximumRegionMonitoringDistance;	// 0x31942145
// declared property getter: - (id)monitoredRegions;	// 0x31942219
- (void)onClientEvent:(int)event supportInfo:(id)info;	// 0x319426bd
- (void)onClientEventAuthStatus:(id)status;	// 0x31942789
- (void)onClientEventError:(id)error;	// 0x319433bd
- (void)onClientEventHeading:(id)heading;	// 0x31942f1d
- (void)onClientEventHeadingCalibration:(id)calibration;	// 0x319431cd
- (void)onClientEventHistoricLocation:(id)location;	// 0x319433b9
- (void)onClientEventLocation:(id)location;	// 0x31942951
- (void)onClientEventLocationUnavailable:(id)unavailable;	// 0x31942e81
- (void)onClientEventRegion:(id)region;	// 0x31943511
- (void)onClientEventRegionError:(id)error;	// 0x31943d41
- (void)onClientEventRegionResponseDelayed:(id)delayed;	// 0x31944421
- (void)onClientEventRegionSetupCompleted:(id)completed;	// 0x31945099
// declared property getter: - (BOOL)privateMode;	// 0x31941429
// declared property getter: - (id)purpose;	// 0x319414f5
- (void)registerAsLocationClient;	// 0x319458d1
- (void)resetApps;	// 0x319425d1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x31940da1
// declared property setter: - (void)setDesiredAccuracy:(double)accuracy;	// 0x31940ee5
// declared property setter: - (void)setDistanceFilter:(double)filter;	// 0x31940de1
// declared property setter: - (void)setHeadingFilter:(double)filter;	// 0x319417b1
// declared property setter: - (void)setHeadingOrientation:(int)orientation;	// 0x319418f1
// declared property setter: - (void)setLocationServicesPreferencesDialogEnabled:(BOOL)enabled;	// 0x31945891
// declared property setter: - (void)setPersistentMonitoringEnabled:(BOOL)enabled;	// 0x31945831
// declared property setter: - (void)setPrivateMode:(BOOL)mode;	// 0x31941419
// declared property setter: - (void)setPurpose:(id)purpose;	// 0x3194143d
// declared property setter: - (void)setSupportInfo:(BOOL)info;	// 0x31941289
- (void)startAppStatusUpdates;	// 0x31941dfd
- (void)startMonitoringForRegion:(id)region;	// 0x31941f85
- (void)startMonitoringForRegion:(id)region desiredAccuracy:(double)accuracy;	// 0x31941f75
- (void)startMonitoringSignificantLocationChanges;	// 0x31941e0d
- (void)startTechStatusUpdates;	// 0x31941e05
- (void)startUpdatingHeading;	// 0x31941b91
- (void)startUpdatingLocation;	// 0x319415ad
- (void)stopAppStatusUpdates;	// 0x31941e01
- (void)stopMonitoringForRegion:(id)region;	// 0x31942069
- (void)stopMonitoringSignificantLocationChanges;	// 0x31941ec1
- (void)stopTechStatusUpdates;	// 0x31941e09
- (void)stopUpdatingHeading;	// 0x31941c89
- (void)stopUpdatingLocation;	// 0x319416b1
// declared property getter: - (BOOL)supportInfo;	// 0x3194139d
- (id)technologiesInUse;	// 0x31942681
@end


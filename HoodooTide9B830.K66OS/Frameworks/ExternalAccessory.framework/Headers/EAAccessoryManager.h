/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSArray;

@interface EAAccessoryManager : NSObject {
@private
	NSMutableArray *_connectedAccessories;	// 4 = 0x4
}
@property(assign) BOOL areLocationAccessoriesEnabled;	// G=0x3152ff59; S=0x3152ff69; converted property
@property(readonly, assign, nonatomic) NSArray *connectedAccessories;	// G=0x3152e329; 
@property(assign) BOOL shouldAllowCppRuntime;	// G=0x3152fa09; S=0x3152fa19; converted property
@property(assign) BOOL shouldAllowInternalProtocols;	// G=0x3152f9e9; S=0x3152f9f9; converted property
+ (BOOL)isLoggingEnabled;	// 0x3152ff95
+ (void)registerCapabilities:(unsigned)capabilities;	// 0x3152f7ed
+ (id)sharedAccessoryManager;	// 0x3152dfb1
- (id)init;	// 0x3152d535
- (void)_applicationDidEnterBackground:(id)_application;	// 0x3152e7d5
- (void)_applicationWillEnterForeground:(id)_application;	// 0x3152eb25
- (void)_cleanUpForTaskSuspend;	// 0x3152e8b9
- (id)_connectedAccessories;	// 0x3152f9d9
- (void)_ephemerisURLAvailable:(id)available;	// 0x3152f709
- (void)_externalAccessoryConnected:(id)connected;	// 0x3152ee51
- (void)_externalAccessoryDisconnected:(id)disconnected;	// 0x3152f1a5
- (void)_externalAccessoryIPodOutOptionsChanged:(id)changed;	// 0x3152f54d
- (void)_externalAccessoryPortPropertyChanged:(id)changed;	// 0x3152f3b1
- (void)_externalAccessoryReconnected:(id)reconnected;	// 0x3152ec3d
- (void)_externalAccessoryUpdated:(id)updated;	// 0x3152f0b1
- (void)_gpsTimeRequested:(id)requested;	// 0x3152f7a1
- (void)_iapServerDied:(id)died;	// 0x3152e689
- (id)_initFromSingletonCreationMethod;	// 0x3152d56d
- (void)_locationNmeaDataAvailable:(id)available;	// 0x3152f671
- (void)_locationPointDataAvailable:(id)available;	// 0x3152f6bd
- (void)_nmeaFilteringSupportChanged:(id)changed;	// 0x3152f755
- (void)_notifyObserversThatAccessoryDisconnectedWithUserInfo:(id)userInfo;	// 0x3152e5c1
- (void)accessibilityAction:(id)action;	// 0x3152fa29
- (void)accessibilityContextChange:(id)change;	// 0x3152faf9
- (void)accessibilityItemPropertyRequest:(id)request;	// 0x3152fbc5
- (void)accessibilitySystemPropertyChange:(id)change;	// 0x3152fd25
- (void)accessibilitySystemPropertyRequest:(id)request;	// 0x3152fdf5
- (BOOL)appDeclaresProtocol:(id)protocol;	// 0x3152f861
// converted property getter: - (BOOL)areLocationAccessoriesEnabled;	// 0x3152ff59
// declared property getter: - (id)connectedAccessories;	// 0x3152e329
- (void)dealloc;	// 0x3152e111
- (void)endSession:(unsigned)session forConnectionID:(unsigned)connectionID;	// 0x3152f831
- (void)openCompleteForSession:(unsigned)session connectionID:(unsigned)anId;	// 0x3152f801
- (void)registerForLocalNotifications;	// 0x3152e371
// converted property setter: - (void)setAreLocationAccessoriesEnabled:(BOOL)enabled;	// 0x3152ff69
// converted property setter: - (void)setShouldAllowCppRuntime:(BOOL)allowCppRuntime;	// 0x3152fa19
// converted property setter: - (void)setShouldAllowInternalProtocols:(BOOL)allowInternalProtocols;	// 0x3152f9f9
// converted property getter: - (BOOL)shouldAllowCppRuntime;	// 0x3152fa09
// converted property getter: - (BOOL)shouldAllowInternalProtocols;	// 0x3152f9e9
- (void)unregisterForLocalNotifications;	// 0x3152e4c5
@end


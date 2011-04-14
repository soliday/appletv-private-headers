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
@property(assign) BOOL areLocationAccessoriesEnabled;	// G=0x32e60601; S=0x32e629e1; converted property
@property(readonly, assign, nonatomic) NSArray *connectedAccessories;	// G=0x32e60cc5; 
@property(assign) BOOL shouldAllowCppRuntime;	// G=0x32e605e5; S=0x32e605f5; converted property
@property(assign) BOOL shouldAllowInternalProtocols;	// G=0x32e605c9; S=0x32e605d9; converted property
@property(assign) BOOL shouldAllowLegacyLingoAccessories;	// G=0x32e605b9; S=0x32e629c1; converted property
+ (BOOL)isLoggingEnabled;	// 0x32e62a51
+ (id)sharedAccessoryManager;	// 0x32e62a09
- (id)init;	// 0x32e60d0d
- (void)_applicationDidEnterBackground:(id)_application;	// 0x32e624a5
- (void)_applicationWillEnterForeground:(id)_application;	// 0x32e60ec9
- (void)_cleanUpForTaskSuspend;	// 0x32e62255
- (id)_connectedAccessories;	// 0x32e605a9
- (void)_ephemerisURLAvailable:(id)available;	// 0x32e606a1
- (void)_externalAccessoryAccessibilityAction:(id)action;	// 0x32e61325
- (void)_externalAccessoryAccessibilityContextChanged:(id)changed;	// 0x32e61259
- (void)_externalAccessoryAccessibilityItemPropertyRequest:(id)request;	// 0x32e62875
- (void)_externalAccessoryAccessibilitySystemPropertyChanged:(id)changed;	// 0x32e61185
- (void)_externalAccessoryAccessibilitySystemPropertyRequest:(id)request;	// 0x32e62729
- (void)_externalAccessoryConnected:(id)connected;	// 0x32e61aa5
- (void)_externalAccessoryDisconnected:(id)disconnected;	// 0x32e6251d
- (void)_externalAccessoryIPodOutOptionsChanged:(id)changed;	// 0x32e61079
- (void)_externalAccessoryPortPropertyChanged:(id)changed;	// 0x32e60d3d
- (void)_externalAccessoryUpdated:(id)updated;	// 0x32e613f9
- (void)_gpsTimeRequested:(id)requested;	// 0x32e60611
- (void)_iapServerDied:(id)died;	// 0x32e60779
- (id)_initFromSingletonCreationMethod;	// 0x32e61d2d
- (void)_locationNmeaDataAvailable:(id)available;	// 0x32e60731
- (void)_locationPointDataAvailable:(id)available;	// 0x32e606e9
- (void)_nmeaFilteringSupportChanged:(id)changed;	// 0x32e60659
- (void)_notifyObserversThatAccessoryDisconnectedWithUserInfo:(id)userInfo;	// 0x32e608bd
// converted property getter: - (BOOL)areLocationAccessoriesEnabled;	// 0x32e60601
// declared property getter: - (id)connectedAccessories;	// 0x32e60cc5
- (void)dealloc;	// 0x32e6206d
- (void)registerForLocalNotifications;	// 0x32e60ae9
// converted property setter: - (void)setAreLocationAccessoriesEnabled:(BOOL)enabled;	// 0x32e629e1
// converted property setter: - (void)setShouldAllowCppRuntime:(BOOL)allowCppRuntime;	// 0x32e605f5
// converted property setter: - (void)setShouldAllowInternalProtocols:(BOOL)allowInternalProtocols;	// 0x32e605d9
// converted property setter: - (void)setShouldAllowLegacyLingoAccessories:(BOOL)allowLegacyLingoAccessories;	// 0x32e629c1
// converted property getter: - (BOOL)shouldAllowCppRuntime;	// 0x32e605e5
// converted property getter: - (BOOL)shouldAllowInternalProtocols;	// 0x32e605c9
// converted property getter: - (BOOL)shouldAllowLegacyLingoAccessories;	// 0x32e605b9
- (void)unregisterForLocalNotifications;	// 0x32e60975
@end

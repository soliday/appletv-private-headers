/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SkankKit.framework/SkankKit
 */

#import <NSObject.h> // Unknown library

@class NSString, NSDictionary;

@interface SkankGestalt : NSObject {
	NSDictionary *_versionDict;	// 4 = 0x4
	NSString *_serialNumber;	// 8 = 0x8
	NSString *_batteryID;	// 12 = 0xc
	NSString *_deviceName;	// 16 = 0x10
}
@property(readonly, retain) NSString *batteryID;	// G=0x3282c40d; converted property
@property(readonly, retain) NSString *deviceName;	// G=0x3282c90d; converted property
@property(readonly, retain) NSString *serialNumber;	// G=0x3282c2c1; converted property
@property(readonly, retain) NSDictionary *versionDict;	// G=0x3282cba5; converted property
+ (void)addBootArg:(id)arg;	// 0x3282caa1
+ (id)batteryID;	// 0x3282c50d
+ (id)copyBootArgs;	// 0x3282c991
+ (int)deviceType;	// 0x3282c541
+ (BOOL)factoryMMIMode;	// 0x3282cced
+ (BOOL)geniusMode;	// 0x3282cd19
+ (BOOL)hasAccelerometer;	// 0x3282b971
+ (BOOL)hasAudio;	// 0x3282bb01
+ (BOOL)hasBackCamera;	// 0x3282b41d
+ (BOOL)hasBluetooth;	// 0x3282bd45
+ (BOOL)hasBootArg:(id)arg;	// 0x3282c9e9
+ (BOOL)hasCamera;	// 0x3282b2ed
+ (BOOL)hasCameraShutter;	// 0x3282b6f5
+ (BOOL)hasCompass;	// 0x3282b9bd
+ (BOOL)hasFrontCamera;	// 0x3282b5a5
+ (BOOL)hasGyro;	// 0x3282bec5
+ (BOOL)hasH2Camera;	// 0x3282b339
+ (BOOL)hasH3Camera;	// 0x3282b3d1
+ (BOOL)hasH4Camera;	// 0x3282b385
+ (BOOL)hasMicrophone;	// 0x3282ba7d
+ (BOOL)hasProximity;	// 0x3282bb05
+ (BOOL)hasProximity3G;	// 0x3282b6f9
+ (BOOL)hasReceiver;	// 0x3282bc01
+ (BOOL)hasRingerSwitch;	// 0x3282bbc1
+ (BOOL)hasSMSMessaging;	// 0x3282b2c9
+ (BOOL)hasStrobe;	// 0x3282bdc1
+ (BOOL)hasTelephony;	// 0x3282b27d
+ (BOOL)hasTouchProximity;	// 0x3282b89d
+ (BOOL)hasVolumeButtons;	// 0x3282bb45
+ (BOOL)hasWiFi;	// 0x3282bc29
+ (BOOL)invertedDisplay;	// 0x3282c1a9
+ (id)productBuildVersion;	// 0x3282cc9d
+ (id)productName;	// 0x3282cbfd
+ (id)productVersion;	// 0x3282cc4d
+ (void)removeBootArg:(id)arg;	// 0x3282cb61
+ (id)serialNumber;	// 0x3282c3d9
+ (void)setBootArgs:(id)args;	// 0x3282ca4d
+ (id)sharedInstance;	// 0x3282b121
+ (BOOL)supportsMikeyHeadset;	// 0x3282bff9
+ (BOOL)supportsNikePlus;	// 0x3282c0a5
// converted property getter: - (id)batteryID;	// 0x3282c40d
- (void)dealloc;	// 0x3282b1f1
// converted property getter: - (id)deviceName;	// 0x3282c90d
- (id)modelName;	// 0x3282c87d
// converted property getter: - (id)serialNumber;	// 0x3282c2c1
// converted property getter: - (id)versionDict;	// 0x3282cba5
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVCaptureDevice.h"
#import "AVFoundation-Structs.h"

@class NSDictionary, NSString;

@interface AVCaptureFigAudioDevice : AVCaptureDevice {
	NSDictionary *_deviceProperties;	// 8 = 0x8
	BOOL _levelMeteringEnabled;	// 12 = 0xc
	BOOL _isConnected;	// 13 = 0xd
	NSString *_localizedName;	// 16 = 0x10
}
@property(readonly, assign) BOOL isConnected;	// G=0x35e4f201; converted property
@property(readonly, retain) NSString *localizedName;	// G=0x35e4f1b9; converted property
+ (id)_devices;	// 0x35e4ed25
- (id)init;	// 0x35e4ee9d
- (id)initWithProperties:(id)properties;	// 0x35e4eef1
- (void)audioInputDeviceLocalizedNameDidChangeHandler:(id)audioInputDeviceLocalizedName;	// 0x35e4f321
- (void)audioInputDevicesDidChangeHandler:(id)audioInputDevices;	// 0x35e4f281
- (void)dealloc;	// 0x35e4f0d9
- (id)devicePropertiesDictionary;	// 0x35e4f219
- (BOOL)hasMediaType:(id)type;	// 0x35e4f1c9
// converted property getter: - (BOOL)isConnected;	// 0x35e4f201
- (BOOL)isInUseByAnotherApplication;	// 0x35e4f1fd
// converted property getter: - (id)localizedName;	// 0x35e4f1b9
- (id)modelID;	// 0x35e4f191
- (BOOL)startUsingDevice:(id *)device;	// 0x35e4f211
- (void)stopUsingDevice;	// 0x35e4f215
- (BOOL)supportsAVCaptureSessionPreset:(id)preset;	// 0x35e4f251
- (id)uniqueID;	// 0x35e4f169
@end


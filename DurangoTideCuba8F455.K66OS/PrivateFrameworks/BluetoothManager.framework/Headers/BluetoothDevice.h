/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BluetoothManager.framework/BluetoothManager
 */

#import "BluetoothManager-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface BluetoothDevice : NSObject {
	NSString *_name;	// 4 = 0x4
	NSString *_address;	// 8 = 0x8
	BTDeviceImplRef _device;	// 12 = 0xc
}
@property(readonly, retain) NSString *address;	// G=0x339e8b41; converted property
@property(assign) BTDeviceImplRef device;	// G=0x339e8635; S=0x339e8645; converted property
@property(readonly, retain) NSString *name;	// G=0x339e8a8d; converted property
@property(assign) XXStruct_La4IvC syncSettings;	// G=0x339e8e05; S=0x339e8e49; converted property
- (id)initWithDevice:(BTDeviceImplRef)device address:(id)address;	// 0x339e8a2d
- (void)_clearName;	// 0x339e88dd
- (BOOL)_isNameCached;	// 0x339e8659
- (void)acceptSSP:(int)ssp;	// 0x339e86fd
// converted property getter: - (id)address;	// 0x339e8b41
- (int)batteryLevel;	// 0x339e8ccd
- (int)compare:(id)compare;	// 0x339e8905
- (void)connect;	// 0x339e8799
- (void)connectWithServices:(unsigned)services;	// 0x339e8765
- (BOOL)connected;	// 0x339e8c99
- (unsigned)connectedServices;	// 0x339e8c71
- (unsigned)connectedServicesCount;	// 0x339e8c35
- (id)copyWithZone:(NSZone *)zone;	// 0x339e8945
- (void)dealloc;	// 0x339e89d1
- (id)description;	// 0x339e8865
// converted property getter: - (BTDeviceImplRef)device;	// 0x339e8635
- (void)disconnect;	// 0x339e8dc9
- (void)endVoiceCommand;	// 0x339e866d
- (BOOL)isAccessory;	// 0x339e8d31
- (BOOL)isServiceSupported:(unsigned)supported;	// 0x339e8d91
- (unsigned)majorClass;	// 0x339e8bd9
- (unsigned)minorClass;	// 0x339e8bad
// converted property getter: - (id)name;	// 0x339e8a8d
- (BOOL)paired;	// 0x339e8c05
- (id)scoUID;	// 0x339e8815
- (void)setAuthorizedServices:(unsigned)services;	// 0x339e87c9
// converted property setter: - (void)setDevice:(BTDeviceImplRef)device;	// 0x339e8645
- (void)setPIN:(id)pin;	// 0x339e8731
- (void)setSyncGroup:(int)group enabled:(BOOL)enabled;	// 0x339e8f69
// converted property setter: - (void)setSyncSettings:(XXStruct_La4IvC)settings;	// 0x339e8e49
- (void)startVoiceCommand;	// 0x339e869d
- (BOOL)supportsBatteryLevel;	// 0x339e87fd
- (id)syncGroups;	// 0x339e8e95
// converted property getter: - (XXStruct_La4IvC)syncSettings;	// 0x339e8e05
- (int)type;	// 0x339e8b85
- (void)unpair;	// 0x339e86cd
@end

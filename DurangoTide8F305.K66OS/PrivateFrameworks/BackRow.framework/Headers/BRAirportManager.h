/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import <NSObject.h> // Unknown library


@interface BRAirportManager : NSObject {
}
+ (BOOL)associateWithNetwork:(id)network password:(id)password error:(id *)error;	// 0x329f70dd
+ (void)checkAirportPower;	// 0x329f6b89
+ (void)collectWirelessNetworks;	// 0x329f6b69
+ (void)collectWirelessNetworksWithSSID:(id)ssid;	// 0x329f6cbd
+ (id)currentWirelessBSSID;	// 0x329f7039
+ (int)currentWirelessChannel;	// 0x329f6fb9
+ (void)forgetCurrentNetworkWithError:(id *)error;	// 0x329f6e7d
+ (void)forgetNetwork:(id)network error:(id *)error;	// 0x329f6b11
+ (void)forgetWiFiNetwork:(WiFiNetwork *)network error:(id *)error;	// 0x329f74c1
+ (float)getCurrentRawWirelessSignalStrength;	// 0x329f6efd
+ (int)getCurrentWirelessSignalStrength;	// 0x329f6b49
+ (int)getCurrentWirelessSignalStrengthForMaxBars:(unsigned char)maxBars;	// 0x329f6f71
+ (void)initialize;	// 0x329f6871
@end

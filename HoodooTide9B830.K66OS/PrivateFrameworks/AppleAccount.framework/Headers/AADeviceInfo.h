/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import "AppleAccount-Structs.h"
#import <NSObject.h> // Unknown library

@class APSConnection, NSData;

@interface AADeviceInfo : NSObject {
	lockdown_connection *connection;	// 4 = 0x4
	APSConnection *_apsConnection;	// 8 = 0x8
	BOOL _tokenDone;	// 12 = 0xc
	NSData *_token;	// 16 = 0x10
	dispatch_semaphore_s *_tokenSema;	// 20 = 0x14
}
+ (id)apnsToken;	// 0x349b0da9
+ (id)clientInfoHeader;	// 0x349b0df9
+ (id)infoDictionary;	// 0x349b0c65
+ (id)osVersion;	// 0x349b0d09
+ (id)productVersion;	// 0x349b0ff5
+ (id)serialNumber;	// 0x349b0d59
+ (id)signatureWithDictionary:(id)dictionary;	// 0x349b0cb5
+ (id)udid;	// 0x349b0cb9
- (id)init;	// 0x349b0be1
- (id)apnsToken;	// 0x349b13b5
- (id)buildVersion;	// 0x349b12b9
- (void)dealloc;	// 0x349b0c25
- (id)deviceInfoDictionary;	// 0x349b1045
- (id)lockDownValueForKey:(CFStringRef)key;	// 0x349b1145
- (id)mobileMeSetupToken;	// 0x349b1321
- (id)osName;	// 0x349b1255
- (id)osVersion;	// 0x349b117d
- (id)productType;	// 0x349b1235
- (id)productVersion;	// 0x349b1215
- (id)regionCode;	// 0x349b131d
- (id)serialNumber;	// 0x349b11d5
- (id)udid;	// 0x349b11b5
- (id)wifiMacAddress;	// 0x349b11f5
@end

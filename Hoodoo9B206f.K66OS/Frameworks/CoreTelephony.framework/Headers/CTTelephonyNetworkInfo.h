/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import "CoreTelephony-Structs.h"
#import <NSObject.h> // Unknown library

@class CTCarrier;

@interface CTTelephonyNetworkInfo : NSObject {
@private
	void *_internal;	// 4 = 0x4
	CTCarrier *_subscriberCellularProvider;	// 8 = 0x8
	id _subscriberCellularProviderDidUpdateNotifier;	// 12 = 0xc
}
@property(retain) CTCarrier *subscriberCellularProvider;	// G=0x3218ac91; S=0x3218aca5; @synthesize=_subscriberCellularProvider
@property(copy, nonatomic) id subscriberCellularProviderDidUpdateNotifier;	// G=0x3218a305; S=0x3218a315; 
- (id)init;	// 0x3218a151
- (void)cleanUpServerConnection;	// 0x3218a101
- (void)cleanUpServerConnectionNoLock;	// 0x3218a0c1
- (void)dealloc;	// 0x3218a259
- (BOOL)getAllowsVOIP:(BOOL *)voip withCTError:(XXStruct_K5nmsA *)cterror;	// 0x3218a591
- (BOOL)getCarrierName:(id)name withCTError:(XXStruct_K5nmsA *)cterror;	// 0x3218a3c9
- (BOOL)getMobileCountryCode:(id)code andIsoCountryCode:(id)code2 withCTError:(XXStruct_K5nmsA *)cterror;	// 0x3218a451
- (BOOL)getMobileNetworkCode:(id)code withCTError:(XXStruct_K5nmsA *)cterror;	// 0x3218a509
- (void)handleNotificationFromConnection:(void *)connection ofType:(id)type withInfo:(id)info;	// 0x3218a969
- (void)postUpdatesIfNecessary;	// 0x3218aba9
- (void)reestablishServerConnectionIfNeeded;	// 0x32189f81
// declared property setter: - (void)setSubscriberCellularProvider:(id)provider;	// 0x3218aca5
// declared property setter: - (void)setSubscriberCellularProviderDidUpdateNotifier:(id)updateNotifier;	// 0x3218a315
- (BOOL)setUpServerConnection;	// 0x32189d6d
// declared property getter: - (id)subscriberCellularProvider;	// 0x3218ac91
// declared property getter: - (id)subscriberCellularProviderDidUpdateNotifier;	// 0x3218a305
- (BOOL)updateNetworkInfoAndShouldNotifyClient:(BOOL *)updateNetworkInfoAnd;	// 0x3218a605
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "NetflixNrdObjectProtocol.h"
#import "NetflixNrdObject.h"

@class NSArray, NetflixNrdObjectCallback, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface NetflixRegistration : NetflixNrdObject <NetflixNrdObjectProtocol> {
@private
	NetflixNrdObjectCallback *createDeviceAccountCallback_;	// 12 = 0xc
	NetflixNrdObjectCallback *selectDeviceAccountCallback_;	// 16 = 0x10
	NetflixNrdObjectCallback *unselectDeviceAccountCallback_;	// 20 = 0x14
	NetflixNrdObjectCallback *deactivateCallback_;	// 24 = 0x18
	NetflixNrdObjectCallback *deactivateAllCallback_;	// 28 = 0x1c
}
@property(copy) NSDictionary *activationTokens;	// G=0x368fd705; S=0x368fd94d; 
@property(retain) NetflixNrdObjectCallback *createDeviceAccountCallback;	// G=0x368feebd; S=0x368feed1; @synthesize=createDeviceAccountCallback_
@property(readonly, assign) NSString *currentDeviceAccount;	// G=0x368fd625; 
@property(retain) NetflixNrdObjectCallback *deactivateAllCallback;	// G=0x368fef9d; S=0x368fefb1; @synthesize=deactivateAllCallback_
@property(retain) NetflixNrdObjectCallback *deactivateCallback;	// G=0x368fef65; S=0x368fef79; @synthesize=deactivateCallback_
@property(readonly, assign) NSArray *deviceAccounts;	// G=0x368fd5ad; 
@property(readonly, assign) BOOL registered;	// G=0x368fd69d; 
@property(retain) NetflixNrdObjectCallback *selectDeviceAccountCallback;	// G=0x368feef5; S=0x368fef09; @synthesize=selectDeviceAccountCallback_
@property(retain) NetflixNrdObjectCallback *unselectDeviceAccountCallback;	// G=0x368fef2d; S=0x368fef41; @synthesize=unselectDeviceAccountCallback_
+ (id)sharedInstance;	// 0x368fd405
- (void)activate:(id)activate params:(id)params;	// 0x368fe041
// declared property getter: - (id)activationTokens;	// 0x368fd705
- (void)addEventListener:(id)listener name:(id)name;	// 0x368fee2d
- (void)cancelRendezvous;	// 0x368fdc7d
- (void)createDeviceAccount:(id)account;	// 0x368fdcb1
// declared property getter: - (id)createDeviceAccountCallback;	// 0x368feebd
// declared property getter: - (id)currentDeviceAccount;	// 0x368fd625
- (void)deactivate:(id)deactivate callback:(id)callback;	// 0x368fdf01
- (void)deactivateAll:(id)all;	// 0x368fdfc9
// declared property getter: - (id)deactivateAllCallback;	// 0x368fef9d
// declared property getter: - (id)deactivateCallback;	// 0x368fef65
- (void)dealloc;	// 0x368fd4e5
// declared property getter: - (id)deviceAccounts;	// 0x368fd5ad
- (void)emailActivate:(id)activate password:(id)password;	// 0x368fde41
- (void)getDeviceTokens;	// 0x368fddf1
- (BOOL)handleEvent:(id)event;	// 0x368fe1a5
- (void)massDeactivationCheck;	// 0x368fdecd
// declared property getter: - (BOOL)registered;	// 0x368fd69d
- (void)removeEventListener:(id)listener name:(id)name;	// 0x368fee75
- (void)selectDeviceAccount:(id)account callback:(id)callback;	// 0x368fdcf9
// declared property getter: - (id)selectDeviceAccountCallback;	// 0x368feef5
// declared property setter: - (void)setActivationTokens:(id)tokens;	// 0x368fd94d
// declared property setter: - (void)setCreateDeviceAccountCallback:(id)callback;	// 0x368feed1
// declared property setter: - (void)setDeactivateAllCallback:(id)callback;	// 0x368fefb1
// declared property setter: - (void)setDeactivateCallback:(id)callback;	// 0x368fef79
// declared property setter: - (void)setSelectDeviceAccountCallback:(id)callback;	// 0x368fef09
// declared property setter: - (void)setUnselectDeviceAccountCallback:(id)callback;	// 0x368fef41
- (void)startRendezvous;	// 0x368fdc19
- (void)tokenActivate:(id)activate;	// 0x368fde25
- (void)unselectDeviceAccount:(id)account;	// 0x368fdda9
// declared property getter: - (id)unselectDeviceAccountCallback;	// 0x368fef2d
- (BOOL)validateDak:(id)dak;	// 0x368fe0c5
@end


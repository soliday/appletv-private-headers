/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import "ASDynamicAccountClassLoader.h"
#import <BasicAccount.h> // Unknown library

@class NSOperationQueue, NSString, NSDictionary, NSLock, NSArray;

@interface AAAccount : BasicAccount <ASDynamicAccountClassLoader> {
	NSString *_cachedPassword;	// 24 = 0x18
	NSString *_cachedToken;	// 28 = 0x1c
	NSString *_unsavedToken;	// 32 = 0x20
	NSString *_cachedCommerceToken;	// 36 = 0x24
	NSOperationQueue *_requesterQueue;	// 40 = 0x28
	NSLock *_tokenLock;	// 44 = 0x2c
	NSLock *_passwordLock;	// 48 = 0x30
}
@property(readonly, assign, nonatomic) int accountServiceType;	// G=0x3593b76d; 
@property(readonly, assign, nonatomic) NSArray *appleIDAliases;	// G=0x3593b65d; 
@property(readonly, assign, nonatomic) NSString *authToken;	// G=0x3593b495; 
@property(readonly, assign, nonatomic) NSDictionary *dataclassProperties;	// G=0x3593b611; 
@property(readonly, assign, nonatomic) NSString *firstName;	// G=0x3593b5d9; 
@property(readonly, assign, nonatomic) NSString *lastName;	// G=0x3593b5f5; 
@property(readonly, assign, nonatomic) int mobileMeAccountStatus;	// G=0x3593b7a1; 
@property(readonly, assign, nonatomic) BOOL needsRegistration;	// G=0x3593b72d; 
@property(copy, nonatomic) NSString *password;	// G=0x3593b399; S=0x3593f2a1; @synthesize=_cachedPassword
@property(readonly, assign, nonatomic) NSString *personID;	// G=0x3593b5bd; 
@property(assign, nonatomic) BOOL primaryAccount;	// G=0x3593b62d; S=0x3593b679; 
@property(readonly, assign, nonatomic) NSString *primaryEmail;	// G=0x3593b6d9; 
@property(readonly, assign, nonatomic) BOOL primaryEmailVerified;	// G=0x3593b6f5; 
@property(readonly, assign, nonatomic) NSArray *provisionedDataclasses;	// G=0x3593b809; 
@property(readonly, assign, nonatomic) BOOL serviceUnavailable;	// G=0x3593b8f1; 
@property(readonly, assign, nonatomic) NSDictionary *serviceUnavailableInfo;	// G=0x3593b949; 
@property(copy, nonatomic) NSString *username;	// G=0x3593b30d; S=0x3593b32d; 
+ (id)accountTypeString;	// 0x3593b0f9
+ (id)accountWithBasicAccount:(id)basicAccount;	// 0x3593ae11
+ (id)basicAccountProperties;	// 0x3593b111
+ (id)classicAccountTypeString;	// 0x3593b105
+ (id)configuredSyncAccountName;	// 0x3593db99
+ (id)dataclassesBoundToPrimaryAccount;	// 0x3593dd11
+ (id)dataclassesBoundToSingleAccount;	// 0x3593ddc9
+ (id)dataclassesBoundToSyncAccount;	// 0x3593dd6d
+ (BOOL)doesConfiguredSyncAccountExist;	// 0x3593dac9
+ (BOOL)isAOSEnabled;	// 0x3593de59
+ (BOOL)loadBundleForAccountWithProperties:(id)properties;	// 0x3593f255
+ (id)propertiesWhichRequireValidation;	// 0x3593f209
+ (void)setAOSEnabled:(BOOL)enabled;	// 0x3593de7d
+ (id)supportedDataclasses;	// 0x3593b13d
- (id)initWithProperties:(id)properties;	// 0x3593ae99
- (id)_deviceSpecificLocalizedString:(id)string;	// 0x3593df65
- (id)_errorWithDescriptionForResponseError:(id)responseError;	// 0x3593e259
- (id)_mailChildAccountProperties;	// 0x3593e0fd
- (void)_migrateMobileMeMailChildAccount;	// 0x3593e669
- (void)_performiCloudMigration;	// 0x3593e88d
- (BOOL)_removeChildAccountsOfType:(id)type;	// 0x3593ee6d
- (BOOL)_removeChildAccountsOfTypes:(id)types;	// 0x3593eea5
- (void)_setToken:(id)token;	// 0x3593e061
- (id)accountFirstDisplayAlert;	// 0x3593d0f1
- (id)accountFooterButton;	// 0x3593d0a9
- (id)accountFooterText;	// 0x3593d061
// declared property getter: - (int)accountServiceType;	// 0x3593b76d
- (void)addChildAccount:(id)account;	// 0x3593eff5
// declared property getter: - (id)appleIDAliases;	// 0x3593b65d
// declared property getter: - (id)authToken;	// 0x3593b495
- (void)authenticateWithHandler:(id)handler;	// 0x3593be51
- (BOOL)becomeConfiguredSyncAccount;	// 0x3593dc39
- (void)cancelNetworkActivity;	// 0x3593c1a5
- (void)configureAppleIDCerts;	// 0x3593e509
// declared property getter: - (id)dataclassProperties;	// 0x3593b611
- (void)dealloc;	// 0x3593b15d
- (id)description;	// 0x3593b239
- (id)displayName;	// 0x3593b2b1
// declared property getter: - (id)firstName;	// 0x3593b5d9
- (BOOL)fixPartialiCloudMigration;	// 0x3593e6bd
- (void)flushCachedPassword;	// 0x3593d001
- (void)flushCachedTokens;	// 0x3593cfa1
- (BOOL)isConfiguredSyncAccount;	// 0x3593def1
- (BOOL)isProvisionedForDataclass:(id)dataclass;	// 0x3593b7dd
// declared property getter: - (id)lastName;	// 0x3593b5f5
// declared property getter: - (int)mobileMeAccountStatus;	// 0x3593b7a1
- (BOOL)needsEmailConfiguration;	// 0x3593d3a9
// declared property getter: - (BOOL)needsRegistration;	// 0x3593b72d
- (void)notifyUserOfQuotaDepletion;	// 0x3593c1dd
// declared property getter: - (id)password;	// 0x3593b399
// declared property getter: - (id)personID;	// 0x3593b5bd
- (void)presentQuotaDepletionAlertForDataclass:(id)dataclass;	// 0x3593c991
- (void)presentQuotaDepletionAlertForDataclass:(id)dataclass withHandler:(id)handler;	// 0x3593c63d
- (BOOL)presentQuotaDepletionAlertForDataclassIfNecessary:(id)dataclassIfNecessary;	// 0x3593c625
- (BOOL)presentQuotaDepletionAlertForDataclassIfNecessary:(id)dataclassIfNecessary withHandler:(id)handler;	// 0x3593c249
// declared property getter: - (BOOL)primaryAccount;	// 0x3593b62d
// declared property getter: - (id)primaryEmail;	// 0x3593b6d9
// declared property getter: - (BOOL)primaryEmailVerified;	// 0x3593b6f5
- (id)propertiesForDataclass:(id)dataclass;	// 0x3593b7b1
// declared property getter: - (id)provisionedDataclasses;	// 0x3593b809
- (void)registerWithHandler:(id)handler;	// 0x3593bc9d
- (void)removeAppleIDCerts;	// 0x3593e609
- (void)removeChildAccountWithIdentifier:(id)identifier;	// 0x3593f0b5
- (void)removePasswordFromKeychain;	// 0x3593ce51
- (void)removeTokensFromKeychain;	// 0x3593cb21
- (void)resendVerificationEmail:(id)email;	// 0x3593c07d
- (void)savePasswordInKeychain;	// 0x3593ccc1
- (void)saveTokensInKeychain;	// 0x3593c9a5
// declared property getter: - (BOOL)serviceUnavailable;	// 0x3593b8f1
// declared property getter: - (id)serviceUnavailableInfo;	// 0x3593b949
- (void)setEnabled:(BOOL)enabled forDataclass:(id)dataclass;	// 0x3593b835
- (void)setLocationAuthorizationForDeviceLocator:(BOOL)deviceLocator;	// 0x3593d9cd
// declared property setter: - (void)setPassword:(id)password;	// 0x3593f2a1
// declared property setter: - (void)setPrimaryAccount:(BOOL)account;	// 0x3593b679
- (void)setUseCellular:(BOOL)cellular forDataclass:(id)dataclass;	// 0x3593b9d1
// declared property setter: - (void)setUsername:(id)username;	// 0x3593b32d
- (void)setupChildMailAccountAndEnable:(BOOL)enable withEmail:(id)email;	// 0x3593d441
- (void)signInWithHandler:(id)handler;	// 0x3593ba9d
- (id)syncStoreIdentifier;	// 0x3593dbd9
- (void)updateAccountPropertiesWithHandler:(id)handler;	// 0x3593bcad
- (void)updateAccountWithProvisioningResponse:(id)provisioningResponse;	// 0x3593d139
- (BOOL)useCellularForDataclass:(id)dataclass;	// 0x3593b991
// declared property getter: - (id)username;	// 0x3593b30d
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library
#import "SSAccountStore.h"
#import "NSObject.h"

@class SSAccount, NSLock, NSArray, SSDistributedNotificationCenter;

@protocol SSAccountStore <NSObject>
@property(readonly, assign) NSArray *accounts;
@property(readonly, assign) SSAccount *activeAccount;
@property(readonly, assign) SSAccount *activeLockerAccount;
@property(readonly, assign, getter=isExpired) BOOL expired;
- (id)accountWithUniqueIdentifier:(id)uniqueIdentifier;
- (id)accountWithUniqueIdentifier:(id)uniqueIdentifier reloadIfNecessary:(BOOL)necessary;
// declared property getter: - (id)accounts;
// declared property getter: - (id)activeAccount;
// declared property getter: - (id)activeLockerAccount;
- (id)addAccount:(id)account;
// declared property getter: - (BOOL)isExpired;
- (BOOL)isExpiredForTokenType:(int)tokenType;
- (void)resetExpiration;
- (void)resetExpirationForTokenType:(int)tokenType;
- (void)setAccountCredits:(id)credits forAccountWithUniqueIdentifier:(id)uniqueIdentifier;
- (id)setActiveAccount:(id)account;
- (id)setActiveLockerAccount:(id)account;
- (void)signOutAccount:(id)account;
- (void)signOutAllAccounts;
@end

@interface SSAccountStore : NSObject <SSAccountStore> {
@private
	NSArray *_accounts;	// 4 = 0x4
	BOOL _accountsValid;	// 8 = 0x8
	NSLock *_lock;	// 12 = 0xc
	SSDistributedNotificationCenter *_notificationCenter;	// 16 = 0x10
	id _observer;	// 20 = 0x14
}
@property(readonly, assign) NSArray *accounts;	// G=0x327ceee9; 
@property(readonly, assign) SSAccount *activeAccount;	// G=0x327ceff1; 
@property(readonly, assign) SSAccount *activeLockerAccount;	// G=0x327cf11d; 
@property(retain) id distributedNotificationCenter;	// G=0x327cf3a5; S=0x327cf78d; converted property
@property(readonly, assign, getter=isExpired) BOOL expired;	// G=0x327cf249; 
+ (id)defaultStore;	// 0x327cee59
+ (id)existingDefaultStore;	// 0x327cf26d
+ (BOOL)isExpired;	// 0x327cf9f5
+ (BOOL)isExpiredForTokenType:(int)tokenType;	// 0x327cfa0d
+ (void)resetExpiration;	// 0x327cfb2d
+ (void)resetExpirationForTokenType:(int)tokenType;	// 0x327cfb41
+ (void)setDefaultStore:(id)store;	// 0x327cfbc1
+ (double)tokenExpirationInterval;	// 0x327ceed5
- (id)init;	// 0x327cecb9
- (id)_accountWithUniqueIdentifier:(id)uniqueIdentifier;	// 0x327cfc15
- (id)_addAccount:(id)account withMessageParameters:(id)messageParameters;	// 0x327cfcd9
- (void)_invalidateAccounts;	// 0x327cfed5
- (void)_postAccountStoreChanged;	// 0x327d000d
- (BOOL)_reloadAccountsIfNeeded;	// 0x327cff11
- (void)_setAccounts:(id)accounts;	// 0x327d0051
- (void)_signOutWithUserInfo:(id)userInfo;	// 0x327d0095
- (id)accountWithUniqueIdentifier:(id)uniqueIdentifier;	// 0x327cef69
- (id)accountWithUniqueIdentifier:(id)uniqueIdentifier reloadIfNecessary:(BOOL)necessary;	// 0x327cf2b1
// declared property getter: - (id)accounts;	// 0x327ceee9
// declared property getter: - (id)activeAccount;	// 0x327ceff1
// declared property getter: - (id)activeLockerAccount;	// 0x327cf11d
- (id)addAccount:(id)account;	// 0x327cf391
- (void)dealloc;	// 0x327ced91
// converted property getter: - (id)distributedNotificationCenter;	// 0x327cf3a5
// declared property getter: - (BOOL)isExpired;	// 0x327cf249
- (BOOL)isExpiredForTokenType:(int)tokenType;	// 0x327cf411
- (void)reloadAccounts;	// 0x327cf435
- (void)resetExpiration;	// 0x327cf485
- (void)resetExpirationForTokenType:(int)tokenType;	// 0x327cf4a1
- (void)setAccountCredits:(id)credits forAccountWithUniqueIdentifier:(id)uniqueIdentifier;	// 0x327cf4bd
- (id)setActiveAccount:(id)account;	// 0x327cf64d
- (id)setActiveLockerAccount:(id)account;	// 0x327cf6ed
// converted property setter: - (void)setDistributedNotificationCenter:(id)center;	// 0x327cf78d
- (void)signOutAccount:(id)account;	// 0x327cf90d
- (void)signOutAllAccounts;	// 0x327cf9e1
@end

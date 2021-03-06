/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccountSettings.framework/AccountSettings
 */

#import "AccountFullAccountProtocol.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary;
@protocol AccountRefreshProtocol;

@interface BasicAccount : NSObject <AccountFullAccountProtocol> {
	NSMutableDictionary *_properties;	// 4 = 0x4
	id<AccountFullAccountProtocol> _fullAccount;	// 8 = 0x8
	id<AccountRefreshProtocol> _syncAccount;	// 12 = 0xc
	BasicAccount *_parentAccount;	// 16 = 0x10
}
@property(retain) id accountClass;	// G=0x322d7261; S=0x322d7211; converted property
@property(retain) id displayName;	// G=0x322d71f1; S=0x322d68c1; converted property
@property(retain) BasicAccount *parentAccount;	// G=0x322d67cd; S=0x322d72a1; converted property
@property(readonly, retain) NSMutableDictionary *properties;	// G=0x322d67bd; converted property
+ (id)_accountCreationMap;	// 0x322d67ed
+ (id)_creatorsInfo;	// 0x322d6b11
+ (id)_dataclassesProperties;	// 0x322d6a55
+ (BOOL)_isValidAccountType:(id)type;	// 0x322d6d85
+ (id)accountWithProperties:(id)properties;	// 0x322d7779
+ (id)accountWithType:(id)type class:(id)aClass;	// 0x322d77bd
+ (id)allSupportedDataclasses;	// 0x322d768d
+ (id)createNewAccountUID;	// 0x322d89cd
+ (id)deleteAccountActionsForAccountType:(id)accountType;	// 0x322d74c1
+ (BOOL)displayToggleForDataclass:(id)dataclass;	// 0x322d8575
+ (void)initialize;	// 0x322d7f71
+ (BOOL)isMultitaskingEnabled;	// 0x322d7f31
+ (BOOL)multipleStoresSupportedByDataclass:(id)dataclass;	// 0x322d85d1
+ (id)removeActionsIncompatibleWithSingleStoreDataclass:(id)singleStoreDataclass;	// 0x322d75c5
+ (id)supportedDataclassesForAccountType:(id)accountType;	// 0x322d7659
+ (id)userActionsToDisableDataclass:(id)disableDataclass forAccountType:(id)accountType;	// 0x322d74f5
+ (id)userActionsToEnableDataclass:(id)enableDataclass forAccountType:(id)accountType;	// 0x322d755d
+ (BOOL)userConfirmationIsRequiredByDataclass:(id)dataclass;	// 0x322d8519
- (id)init;	// 0x322d7445
- (id)initWithProperties:(id)properties;	// 0x322d7875
- (id)_cachedSyncAccount;	// 0x322d7c51
- (id)_creatorClassNameForAccountType:(id)accountType creatorType:(id)type loader:(id)loader;	// 0x322d862d
- (void)_forcedSetAccountProperty:(id)property forKey:(id)key;	// 0x322d6a35
- (void)_forcedSetEnabled:(BOOL)enabled forDataclass:(id)dataclass;	// 0x322d692d
- (id)_initWithType:(id)type class:(id)aClass;	// 0x322d6b95
- (id)_orderedDataclasses:(id)dataclasses;	// 0x322d7a1d
// converted property getter: - (id)accountClass;	// 0x322d7261
- (id)accountPropertyForKey:(id)key;	// 0x322d7351
- (void)dealloc;	// 0x322d77f5
- (id)defaultContainerIdentifierForDataclass:(id)dataclass;	// 0x322d6e3d
// converted property getter: - (id)displayName;	// 0x322d71f1
- (id)enabledDataclasses;	// 0x322d6fb9
- (id)fullAccountCreatorClassNameForAccountType:(id)accountType loader:(id)loader;	// 0x322d685d
- (id)fullAccountUsingLoader:(id)loader;	// 0x322d7d05
- (id)identifier;	// 0x322d72fd
- (BOOL)isEnabledForDataclass:(id)dataclass;	// 0x322d6f91
// converted property getter: - (id)parentAccount;	// 0x322d67cd
- (id)parentAccountIdentifier;	// 0x322d72d9
// converted property getter: - (id)properties;	// 0x322d67bd
- (id)propertiesToSave;	// 0x322d733d
- (id)provisionedDataclasses;	// 0x322d7095
- (BOOL)refreshContainerListForDataclass:(id)dataclass;	// 0x322d6de9
- (BOOL)refreshContainerWithIdentifier:(id)identifier forDataclass:(id)dataclass;	// 0x322d6e11
- (BOOL)refreshContainersForDataclass:(id)dataclass;	// 0x322d6dc1
- (void)removeAccountPropertyForKey:(id)key;	// 0x322d73b5
- (void)renewAccountCredentialsWithHandler:(id)handler;	// 0x322d67dd
// converted property setter: - (void)setAccountClass:(id)aClass;	// 0x322d7211
- (void)setAccountProperty:(id)property forKey:(id)key;	// 0x322d73d5
// converted property setter: - (void)setDisplayName:(id)name;	// 0x322d68c1
- (void)setEnabled:(BOOL)enabled forDataclass:(id)dataclass;	// 0x322d6e65
- (void)setEnabledForDataclasses:(id)dataclasses;	// 0x322d7b91
- (void)setFullAccount:(id)account;	// 0x322d6885
// converted property setter: - (void)setParentAccount:(id)account;	// 0x322d72a1
- (id)shortTypeString;	// 0x322d71b1
- (id)supportedDataclasses;	// 0x322d7149
- (id)syncAccountCreatorClassNameForAccountType:(id)accountType;	// 0x322d6831
- (id)syncStoreIdentifier;	// 0x322d7281
- (id)type;	// 0x322d731d
- (id)typeString;	// 0x322d71d1
@end


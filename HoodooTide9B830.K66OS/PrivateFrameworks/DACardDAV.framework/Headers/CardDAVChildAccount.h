/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACardDAV.framework/DACardDAV
 */

#import "CardDAVAccount.h"

@class BasicAccount;

@interface CardDAVChildAccount : CardDAVAccount {
	BasicAccount *_parent;	// 76 = 0x4c
}
+ (Class)accountClass;	// 0x3643f261
+ (Class)clientClass;	// 0x3643f271
+ (id)supportedDataclasses;	// 0x3643f28d
- (id)initWithParent:(id)parent childProperties:(id)properties;	// 0x3643eccd
- (id)accountPropertyForKey:(id)key;	// 0x3643f1a5
- (BOOL)childKeyIsSharedForReading:(id)reading;	// 0x3643edf5
- (void)dealloc;	// 0x3643f215
- (BOOL)enabledForDADataclass:(int)dadataclass;	// 0x3643f2cd
- (BOOL)handlePasswordPromptDirectly;	// 0x3643ed81
- (BOOL)isChildAccount;	// 0x3643ed25
- (BOOL)isDisabled;	// 0x3643f2c9
- (id)password;	// 0x3643ed61
- (id)persistentUUID;	// 0x3643f2dd
- (void)removeAccountPropertyForKey:(id)key;	// 0x3643f159
- (void)renewAccountCredentialsWithHandler:(id)handler;	// 0x3643ed85
- (void)saveAccountProperties;	// 0x3643efd5
- (void)saveChildAccountSettingsWithAccountsManager:(id)accountsManager;	// 0x3643eed5
- (id)scheduleIdentifier;	// 0x3643f2ed
- (void)setAccountProperty:(id)property forKey:(id)key;	// 0x3643f045
- (void)setPassword:(id)password withAccessibility:(int)accessibility;	// 0x3643edf1
- (BOOL)supportsDADataclass:(int)dataclass;	// 0x3643f2b9
- (id)username;	// 0x3643ed29
@end


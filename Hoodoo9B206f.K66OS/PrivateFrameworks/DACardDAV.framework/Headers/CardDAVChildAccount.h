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
+ (Class)accountClass;	// 0x35250261
+ (Class)clientClass;	// 0x35250271
+ (id)supportedDataclasses;	// 0x3525028d
- (id)initWithParent:(id)parent childProperties:(id)properties;	// 0x3524fccd
- (id)accountPropertyForKey:(id)key;	// 0x352501a5
- (BOOL)childKeyIsSharedForReading:(id)reading;	// 0x3524fdf5
- (void)dealloc;	// 0x35250215
- (BOOL)enabledForDADataclass:(int)dadataclass;	// 0x352502cd
- (BOOL)handlePasswordPromptDirectly;	// 0x3524fd81
- (BOOL)isChildAccount;	// 0x3524fd25
- (BOOL)isDisabled;	// 0x352502c9
- (id)password;	// 0x3524fd61
- (id)persistentUUID;	// 0x352502dd
- (void)removeAccountPropertyForKey:(id)key;	// 0x35250159
- (void)renewAccountCredentialsWithHandler:(id)handler;	// 0x3524fd85
- (void)saveAccountProperties;	// 0x3524ffd5
- (void)saveChildAccountSettingsWithAccountsManager:(id)accountsManager;	// 0x3524fed5
- (id)scheduleIdentifier;	// 0x352502ed
- (void)setAccountProperty:(id)property forKey:(id)key;	// 0x35250045
- (void)setPassword:(id)password withAccessibility:(int)accessibility;	// 0x3524fdf1
- (BOOL)supportsDADataclass:(int)dataclass;	// 0x352502b9
- (id)username;	// 0x3524fd29
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface YTAccountManager : XXUnknownSuperclass {
}
+ (void)_resetInappropriateFlag:(id)flag;	// 0x89479
+ (id)allAccounts;	// 0x8930d
+ (id)currentAccessToken;	// 0x88fdd
+ (id)currentAccount;	// 0x88ed5
+ (BOOL)currentAccountAllowsInappropriate;	// 0x88fa1
+ (id)currentAccountName;	// 0x88f55
+ (BOOL)inappropriateAllowed;	// 0x8944d
+ (void)logIn;	// 0x89041
+ (void)logOut;	// 0x890d5
+ (BOOL)loggedIn;	// 0x88e99
+ (void)removeAccountWithName:(id)name;	// 0x891d1
+ (void)resetCurrentAccountOptions;	// 0x89149
+ (void)resetCurrentSession;	// 0x89195
+ (void)setInappropriateAllowed:(BOOL)allowed;	// 0x8938d
@end

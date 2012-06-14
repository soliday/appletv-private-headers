/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRUserPasswordAccount.h"

@class AAAccount, NSDictionary;

@interface ATVCupidAccount : BRUserPasswordAccount {
@private
	AAAccount *_appleAccount;	// 40 = 0x28
	NSDictionary *_manifest;	// 44 = 0x2c
	BOOL _forceAuthentication;	// 48 = 0x30
}
@property(retain) AAAccount *appleAccount;	// G=0x3661b0a1; S=0x3661b0b5; @synthesize=_appleAccount
@property(assign, nonatomic) BOOL forceAuthentication;	// G=0x3661b0e9; S=0x3661b0f9; @synthesize=_forceAuthentication
@property(retain, nonatomic) NSDictionary *manifest;	// G=0x3661b0d9; S=0x3661ad59; @synthesize=_manifest
- (id)initWithCoder:(id)coder;	// 0x3661ab8d
- (void)_readProtectedInfo:(id)info;	// 0x3661af9d
- (void)_resetSession;	// 0x3661b05d
- (void)_writeProtectedInfo:(id)info;	// 0x3661aed1
// declared property getter: - (id)appleAccount;	// 0x3661b0a1
- (void)dealloc;	// 0x3661ac61
- (void)encodeWithCoder:(id)coder;	// 0x3661abf5
// declared property getter: - (BOOL)forceAuthentication;	// 0x3661b0e9
- (BOOL)isAuthenticated;	// 0x3661adad
// declared property getter: - (id)manifest;	// 0x3661b0d9
// declared property setter: - (void)setAppleAccount:(id)account;	// 0x3661b0b5
// declared property setter: - (void)setForceAuthentication:(BOOL)authentication;	// 0x3661b0f9
// declared property setter: - (void)setManifest:(id)manifest;	// 0x3661ad59
- (void)setPassword:(id)password;	// 0x3661ad0d
- (id)type;	// 0x3661acf1
- (void)willBeDeleted;	// 0x3661adf5
@end


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
@property(retain) AAAccount *appleAccount;	// G=0x3295eeb9; S=0x3295eecd; @synthesize=_appleAccount
@property(assign, nonatomic) BOOL forceAuthentication;	// G=0x3295ef01; S=0x3295ef11; @synthesize=_forceAuthentication
@property(retain, nonatomic) NSDictionary *manifest;	// G=0x3295eef1; S=0x3295eb71; @synthesize=_manifest
- (id)initWithCoder:(id)coder;	// 0x3295e9a5
- (void)_readProtectedInfo:(id)info;	// 0x3295edb5
- (void)_resetSession;	// 0x3295ee75
- (void)_writeProtectedInfo:(id)info;	// 0x3295ece9
// declared property getter: - (id)appleAccount;	// 0x3295eeb9
- (void)dealloc;	// 0x3295ea79
- (void)encodeWithCoder:(id)coder;	// 0x3295ea0d
// declared property getter: - (BOOL)forceAuthentication;	// 0x3295ef01
- (BOOL)isAuthenticated;	// 0x3295ebc5
// declared property getter: - (id)manifest;	// 0x3295eef1
// declared property setter: - (void)setAppleAccount:(id)account;	// 0x3295eecd
// declared property setter: - (void)setForceAuthentication:(BOOL)authentication;	// 0x3295ef11
// declared property setter: - (void)setManifest:(id)manifest;	// 0x3295eb71
- (void)setPassword:(id)password;	// 0x3295eb25
- (id)type;	// 0x3295eb09
- (void)willBeDeleted;	// 0x3295ec0d
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRMercantile.h"
#import "BRSingleton.h"

@class BRMerchant;

__attribute__((visibility("hidden")))
@interface ATVSKAgent : BRSingleton <BRMercantile> {
@private
	BRMerchant *_merchant;	// 4 = 0x4
	BOOL _usingSandbox;	// 8 = 0x8
	BOOL needsTransaction;	// 9 = 0x9
}
@property(retain, nonatomic) BRMerchant *merchant;	// G=0x367f465d; S=0x367f405d; @synthesize=_merchant
@property(assign) BOOL needsTransaction;	// G=0x367f467d; S=0x367f468d; @synthesize
@property(assign, nonatomic, setter=useSandbox:) BOOL usingSandbox;	// G=0x367f466d; S=0x367f4129; @synthesize=_usingSandbox
+ (id)secureToken;	// 0x367f42ad
+ (void)setSecureToken:(id)token;	// 0x367f4375
+ (void)setSingleton:(id)singleton;	// 0x367f3df5
+ (id)singleton;	// 0x367f3e05
+ (id)userDSID;	// 0x367f4199
- (id)init;	// 0x367f3e15
- (void)_refreshSandboxMode;	// 0x367f44b9
- (BOOL)_sandboxModeFromVendorBag;	// 0x367f4449
- (id)account;	// 0x367f412d
- (void)dealloc;	// 0x367f3fed
// declared property getter: - (id)merchant;	// 0x367f465d
// declared property getter: - (BOOL)needsTransaction;	// 0x367f467d
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x367f405d
// declared property setter: - (void)setNeedsTransaction:(BOOL)transaction;	// 0x367f468d
// declared property setter: - (void)useSandbox:(BOOL)sandbox;	// 0x367f4129
// declared property getter: - (BOOL)usingSandbox;	// 0x367f466d
@end


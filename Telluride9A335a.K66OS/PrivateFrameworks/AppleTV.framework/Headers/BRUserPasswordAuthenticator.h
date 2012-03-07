/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRAuthenticator.h"

@class NSString;

@interface BRUserPasswordAuthenticator : BRAuthenticator {
@private
	NSString *_user;	// 36 = 0x24
	NSString *_password;	// 40 = 0x28
}
@property(retain) NSString *password;	// G=0x34283065; S=0x34283079; @synthesize=_password
@property(retain) NSString *user;	// G=0x3428302d; S=0x34283041; @synthesize=_user
- (id)initWithAccount:(id)account scope:(unsigned)scope;	// 0x34282d2d
- (void)_handleAuthenticationSucceeded;	// 0x3428309d
- (void)dealloc;	// 0x34282e01
- (id)makeAuthenticationController;	// 0x34282e61
// declared property getter: - (id)password;	// 0x34283065
- (BOOL)requiresPassword:(id *)password;	// 0x34282fa5
- (BOOL)requiresUser:(id *)user;	// 0x34282ed9
// declared property setter: - (void)setPassword:(id)password;	// 0x34283079
// declared property setter: - (void)setUser:(id)user;	// 0x34283041
// declared property getter: - (id)user;	// 0x3428302d
@end

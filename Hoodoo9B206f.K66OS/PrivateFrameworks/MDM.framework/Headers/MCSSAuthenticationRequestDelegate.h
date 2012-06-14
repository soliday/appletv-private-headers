/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/MDM.framework/MDM
 */

#import "SSAuthenticateRequestDelegate.h"
#import "MCSSRequestDelegate.h"

@class SSAccount, SSAuthenticateRequest;

@interface MCSSAuthenticationRequestDelegate : MCSSRequestDelegate <SSAuthenticateRequestDelegate> {
	SSAccount *_authenticatedAccount;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) SSAuthenticateRequest *request;	// @dynamic
+ (id)instanceWithAuthenticationContext:(id)authenticationContext;	// 0x339577c1
- (void)authenticateRequest:(id)request didReceiveResponse:(id)response;	// 0x33957845
- (void)dealloc;	// 0x339579bd
- (void)startWithCompletionBlock:(id)completionBlock;	// 0x33957909
@end


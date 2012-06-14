/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Accounts.framework/Accounts
 */

#import <NSObject.h> // Unknown library
#import "XPCProxyTarget.h"
#import "Accounts-Structs.h"

@class ACAccount;

@interface ACOAuthSigner : NSObject <XPCProxyTarget> {
	id oauthSignerProxy;	// 4 = 0x4
	dispatch_queue_s *connectionQueue;	// 8 = 0x8
	xpc_connection_s *connection;	// 12 = 0xc
	ACAccount *_account;	// 16 = 0x10
}
- (id)initWithAccount:(id)account;	// 0x36e66bc1
- (void)dealloc;	// 0x36e66db5
- (id)proxy:(id)proxy detailedSignatureForSelector:(SEL)selector;	// 0x36e67069
- (id)signedURLRequestWithURLRequest:(id)urlrequest;	// 0x36e67055
- (id)signedURLRequestWithURLRequest:(id)urlrequest callingPID:(id)pid;	// 0x36e66e55
@end


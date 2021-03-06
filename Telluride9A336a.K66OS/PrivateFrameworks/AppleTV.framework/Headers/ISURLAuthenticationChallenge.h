/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ISAuthenticationChallenge.h"

@class NSURLAuthenticationChallenge;

__attribute__((visibility("hidden")))
@interface ISURLAuthenticationChallenge : ISAuthenticationChallenge {
@private
	NSURLAuthenticationChallenge *_challenge;	// 12 = 0xc
}
- (id)initWithAuthenticationChallenge:(id)authenticationChallenge;	// 0x33bd00f9
- (void)cancelAuthentication;	// 0x33bd02d1
- (void)dealloc;	// 0x33bd027d
- (int)failureCount;	// 0x33bd030d
- (BOOL)hasPassword;	// 0x33bd032d
- (id)password;	// 0x33bd0361
- (id)sender;	// 0x33bd0399
- (void)useCredential:(id)credential;	// 0x33bd03f1
- (id)user;	// 0x33bd03b9
@end


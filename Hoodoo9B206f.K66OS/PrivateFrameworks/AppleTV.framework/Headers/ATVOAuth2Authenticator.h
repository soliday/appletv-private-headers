/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRAuthenticator.h"

@class NSString, NSDate;

@interface ATVOAuth2Authenticator : BRAuthenticator {
@private
	NSDate *_codeCreationDate;	// 36 = 0x24
	double _codeExpiresIn;	// 40 = 0x28
	NSString *_code;	// 48 = 0x30
}
@property(readonly, assign) NSString *clientID;	// G=0x367a9221; @dynamic
@property(readonly, assign) NSString *clientSecret;	// G=0x367a923d; @dynamic
@property(readonly, assign) NSString *code;	// G=0x367a9625; @synthesize=_code
@property(readonly, assign) NSString *tokenEndpoint;	// G=0x367a9259; @dynamic
- (id)initWithAccount:(id)account scope:(unsigned)scope;	// 0x367a9161
- (void)_handleAuthenticationFailedWithError:(id)error;	// 0x367a9599
- (void)_handleAuthenticationSucceeded;	// 0x367a952d
- (void)_handlePostTokenGenerationWithCompletionHandler:(id)completionHandler;	// 0x367a9525
- (id)_makeTokenRequestFromCode:(id)code;	// 0x367a9881
- (id)_makeTokenRequestFromRefreshToken:(id)refreshToken;	// 0x367a99dd
- (void)_resetCode;	// 0x367a981d
- (void)_sendAuthenticationRequest;	// 0x367a9389
- (void)_tokenRequestDocumentReady:(id)ready;	// 0x367a9635
// declared property getter: - (id)clientID;	// 0x367a9221
// declared property getter: - (id)clientSecret;	// 0x367a923d
// declared property getter: - (id)code;	// 0x367a9625
- (void)dealloc;	// 0x367a9191
- (BOOL)requiresCode;	// 0x367a9275
- (void)setCode:(id)code withExpiryTime:(double)expiryTime;	// 0x367a92c1
// declared property getter: - (id)tokenEndpoint;	// 0x367a9259
@end


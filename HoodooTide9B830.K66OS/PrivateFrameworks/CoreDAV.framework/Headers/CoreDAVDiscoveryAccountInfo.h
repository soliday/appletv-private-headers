/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAV-Structs.h"
#import <NSObject.h> // Unknown library
#import "CoreDAVAccountInfoProvider.h"

@class NSData, NSString, NSError, NSSet, NSURL, NSDictionary;

@interface CoreDAVDiscoveryAccountInfo : NSObject <CoreDAVAccountInfoProvider> {
	NSString *_scheme;	// 4 = 0x4
	NSString *_host;	// 8 = 0x8
	NSString *_serverRoot;	// 12 = 0xc
	int _port;	// 16 = 0x10
	NSString *_user;	// 20 = 0x14
	NSString *_password;	// 24 = 0x18
	NSData *_identityPersist;	// 28 = 0x1c
	NSURL *_principalURL;	// 32 = 0x20
	NSString *_accountID;	// 36 = 0x24
	NSDictionary *_serverHeaders;	// 40 = 0x28
	NSSet *_serverComplianceClasses;	// 44 = 0x2c
	NSString *_userAgentHeader;	// 48 = 0x30
	BOOL _shouldFailAllTasks;	// 52 = 0x34
	BOOL _started;	// 53 = 0x35
	BOOL _success;	// 54 = 0x36
	NSError *_error;	// 56 = 0x38
	id<CoreDAVAccountInfoProvider> _backingAccountInfoProvider;	// 60 = 0x3c
}
@property(retain) NSString *accountID;	// G=0x35dbc2d1; S=0x35dbc2e5; @synthesize=_accountID
@property(retain) id<CoreDAVAccountInfoProvider> backingAccountInfoProvider;	// G=0x35dbc329; S=0x35dbc33d; @synthesize=_backingAccountInfoProvider
@property(retain) NSError *error;	// G=0x35dbc3a1; S=0x35dbc3b5; @synthesize=_error
@property(retain) NSString *host;	// G=0x35dbc161; S=0x35dbc175; @synthesize=_host
@property(retain) NSData *identityPersist;	// G=0x35dbc261; S=0x35dbc275; @synthesize=_identityPersist
@property(retain) NSString *password;	// G=0x35dbc229; S=0x35dbc23d; @synthesize=_password
@property(assign) int port;	// G=0x35dbc199; S=0x35dbc1a9; @synthesize=_port
@property(retain) NSURL *principalURL;	// G=0x35dbc299; S=0x35dbc2ad; @synthesize=_principalURL
@property(retain) NSString *scheme;	// G=0x35dbc129; S=0x35dbc13d; @synthesize=_scheme
@property(retain) NSSet *serverComplianceClasses;	// G=0x35dbc411; S=0x35dbc425; @synthesize=_serverComplianceClasses
@property(retain) NSDictionary *serverHeaders;	// G=0x35dbc3d9; S=0x35dbc3ed; @synthesize=_serverHeaders
@property(retain) NSString *serverRoot;	// G=0x35dbc1b9; S=0x35dbc1cd; @synthesize=_serverRoot
@property(assign) BOOL shouldFailAllTasks;	// G=0x35dbc309; S=0x35dbc319; @synthesize=_shouldFailAllTasks
@property(assign) BOOL started;	// G=0x35dbc361; S=0x35dbc371; @synthesize=_started
@property(assign) BOOL success;	// G=0x35dbc381; S=0x35dbc391; @synthesize=_success
@property(retain) NSString *user;	// G=0x35dbc1f1; S=0x35dbc205; @synthesize=_user
@property(retain) NSString *userAgentHeader;	// G=0x35dbc449; S=0x35dbc45d; @synthesize=_userAgentHeader
- (id)initWithAccountInfoProvider:(id)accountInfoProvider;	// 0x35dbb67d
// declared property getter: - (id)accountID;	// 0x35dbc2d1
- (id)additionalHeaderValues;	// 0x35dbbc35
// declared property getter: - (id)backingAccountInfoProvider;	// 0x35dbc329
- (CFURLStorageSessionRef)copyStorageSession;	// 0x35dbc099
- (void)dealloc;	// 0x35dbb7f9
- (id)description;	// 0x35dbb935
// declared property getter: - (id)error;	// 0x35dbc3a1
- (BOOL)handleAuthenticateAgainstProtectionSpace:(id)space;	// 0x35dbbdc5
- (BOOL)handleAuthenticateAgainstProtectionSpace:(id)space withConnection:(id)connection;	// 0x35dbbee9
- (BOOL)handleCertificateError:(id)error;	// 0x35dbbd45
- (BOOL)handleShouldUseCredentialStorage;	// 0x35dbbfa1
- (BOOL)handleTrustChallenge:(id)challenge;	// 0x35dbbc7d
- (BOOL)handleTrustChallenge:(id)challenge withConnection:(id)connection;	// 0x35dbbcd5
// declared property getter: - (id)host;	// 0x35dbc161
// declared property getter: - (id)identityPersist;	// 0x35dbc261
// declared property getter: - (id)password;	// 0x35dbc229
// declared property getter: - (int)port;	// 0x35dbc199
// declared property getter: - (id)principalURL;	// 0x35dbc299
- (void)promptUserForNewCoreDAVPasswordWithCompletionBlock:(id)completionBlock;	// 0x35dbbc0d
// declared property getter: - (id)scheme;	// 0x35dbc129
// declared property getter: - (id)serverComplianceClasses;	// 0x35dbc411
// declared property getter: - (id)serverHeaders;	// 0x35dbc3d9
// declared property getter: - (id)serverRoot;	// 0x35dbc1b9
// declared property setter: - (void)setAccountID:(id)anId;	// 0x35dbc2e5
// declared property setter: - (void)setBackingAccountInfoProvider:(id)provider;	// 0x35dbc33d
// declared property setter: - (void)setError:(id)error;	// 0x35dbc3b5
// declared property setter: - (void)setHost:(id)host;	// 0x35dbc175
// declared property setter: - (void)setIdentityPersist:(id)persist;	// 0x35dbc275
// declared property setter: - (void)setPassword:(id)password;	// 0x35dbc23d
// declared property setter: - (void)setPort:(int)port;	// 0x35dbc1a9
// declared property setter: - (void)setPrincipalURL:(id)url;	// 0x35dbc2ad
// declared property setter: - (void)setScheme:(id)scheme;	// 0x35dbc13d
// declared property setter: - (void)setServerComplianceClasses:(id)classes;	// 0x35dbc425
// declared property setter: - (void)setServerHeaders:(id)headers;	// 0x35dbc3ed
// declared property setter: - (void)setServerRoot:(id)root;	// 0x35dbc1cd
// declared property setter: - (void)setShouldFailAllTasks:(BOOL)failAllTasks;	// 0x35dbc319
// declared property setter: - (void)setStarted:(BOOL)started;	// 0x35dbc371
// declared property setter: - (void)setSuccess:(BOOL)success;	// 0x35dbc391
// declared property setter: - (void)setUser:(id)user;	// 0x35dbc205
// declared property setter: - (void)setUserAgentHeader:(id)header;	// 0x35dbc45d
// declared property getter: - (BOOL)shouldFailAllTasks;	// 0x35dbc309
- (BOOL)shouldHandleHTTPCookiesForURL:(id)url;	// 0x35dbbfe9
- (BOOL)shouldRetryUnauthorizedConnection:(id)connection;	// 0x35dbbd6d
- (BOOL)shouldSendClientInfoHeaderForURL:(id)url;	// 0x35dbc041
- (BOOL)shouldTurnModalOnBadPassword;	// 0x35dbbd69
- (BOOL)shouldUseOpportunisticSockets;	// 0x35dbc0e1
// declared property getter: - (BOOL)started;	// 0x35dbc361
// declared property getter: - (BOOL)success;	// 0x35dbc381
- (id)url;	// 0x35dbbb3d
// declared property getter: - (id)user;	// 0x35dbc1f1
// declared property getter: - (id)userAgentHeader;	// 0x35dbc449
@end


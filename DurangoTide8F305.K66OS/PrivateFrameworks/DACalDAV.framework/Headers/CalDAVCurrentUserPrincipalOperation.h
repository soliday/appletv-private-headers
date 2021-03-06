/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <AYOperation.h> // Unknown library

@class DAVSession, NSString, MobileCalDAVAccount, NSURL;

@interface CalDAVCurrentUserPrincipalOperation : AYOperation {
	id _delegate;	// 64 = 0x40
	MobileCalDAVAccount *_account;	// 68 = 0x44
	DAVSession *_session;	// 72 = 0x48
	int _redirectCount;	// 76 = 0x4c
	BOOL _thisIsAGuess;	// 80 = 0x50
	NSString *_currentUserPrincipal;	// 84 = 0x54
}
@property(assign) MobileCalDAVAccount *account;	// G=0x340bf8c1; S=0x340bf8d1; @synthesize=_account
@property(retain) NSString *currentUserPrincipal;	// G=0x340c0921; S=0x340c0965; @synthesize=_currentUserPrincipal
@property(assign) id delegate;	// G=0x340bf8a1; S=0x340bf8b1; @synthesize=_delegate
@property(readonly, assign) NSString *password;	// G=0x340bfa05; 
@property(retain) DAVSession *session;	// G=0x340c0909; S=0x340c0939; @synthesize=_session
@property(readonly, assign) NSURL *url;	// G=0x340bfa45; 
@property(readonly, assign) NSString *username;	// G=0x340bfa25; 
- (id)initWithAccount:(id)account delegate:(id)delegate;	// 0x340bfad9
- (id)_sessionWithURL:(id)url;	// 0x340bf8e1
// declared property getter: - (id)account;	// 0x340bf8c1
// declared property getter: - (id)currentUserPrincipal;	// 0x340c0921
- (void)dealloc;	// 0x340bfa65
// declared property getter: - (id)delegate;	// 0x340bf8a1
- (void)finish;	// 0x340bf9a5
- (void)getCurrentUserPrincipal;	// 0x340bfb55
// declared property getter: - (id)password;	// 0x340bfa05
- (void)performComplete2:(id)a2;	// 0x340bfd71
- (void)performComplete:(id)complete;	// 0x340c0235
// declared property getter: - (id)session;	// 0x340c0909
// declared property setter: - (void)setAccount:(id)account;	// 0x340bf8d1
// declared property setter: - (void)setCurrentUserPrincipal:(id)principal;	// 0x340c0965
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x340bf8b1
// declared property setter: - (void)setSession:(id)session;	// 0x340c0939
// declared property getter: - (id)url;	// 0x340bfa45
// declared property getter: - (id)username;	// 0x340bfa25
@end


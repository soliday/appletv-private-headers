/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "ISAuthenticationChallenge.h"

@class NSString;
@protocol NSURLAuthenticationChallengeSender;

@interface ISStoreAuthenticationChallenge : ISAuthenticationChallenge {
	int _failureCount;	// 12 = 0xc
	BOOL _hasPassword;	// 16 = 0x10
	NSString *_password;	// 20 = 0x14
	id<NSURLAuthenticationChallengeSender> _sender;	// 24 = 0x18
	NSString *_user;	// 28 = 0x1c
	BOOL _userNameIsEditable;	// 32 = 0x20
}
@property(assign) int failureCount;	// G=0x355451a9; S=0x355451b9; @synthesize=_failureCount
@property(assign) BOOL hasPassword;	// G=0x355451c9; S=0x355451d9; @synthesize=_hasPassword
@property(retain) NSString *password;	// G=0x355451e9; S=0x355451fd; @synthesize=_password
@property(assign) id<NSURLAuthenticationChallengeSender> sender;	// G=0x35545221; S=0x35545231; @synthesize=_sender
@property(retain) NSString *user;	// G=0x35545241; S=0x35545255; @synthesize=_user
@property(assign) BOOL userNameIsEditable;	// G=0x35545279; S=0x35545289; @synthesize=_userNameIsEditable
- (id)init;	// 0x35545095
- (void)dealloc;	// 0x3554514d
// declared property getter: - (int)failureCount;	// 0x355451a9
// declared property getter: - (BOOL)hasPassword;	// 0x355451c9
// declared property getter: - (id)password;	// 0x355451e9
// declared property getter: - (id)sender;	// 0x35545221
// declared property setter: - (void)setFailureCount:(int)count;	// 0x355451b9
// declared property setter: - (void)setHasPassword:(BOOL)password;	// 0x355451d9
// declared property setter: - (void)setPassword:(id)password;	// 0x355451fd
// declared property setter: - (void)setSender:(id)sender;	// 0x35545231
// declared property setter: - (void)setUser:(id)user;	// 0x35545255
// declared property setter: - (void)setUserNameIsEditable:(BOOL)editable;	// 0x35545289
// declared property getter: - (id)user;	// 0x35545241
// declared property getter: - (BOOL)userNameIsEditable;	// 0x35545279
- (BOOL)userNameIsEmail;	// 0x355451a5
@end


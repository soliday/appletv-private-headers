/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ISAuthenticationChallenge.h"

@class NSString;
@protocol NSURLAuthenticationChallengeSender;

__attribute__((visibility("hidden")))
@interface ISStoreAuthenticationChallenge : ISAuthenticationChallenge {
@private
	int _failureCount;	// 12 = 0xc
	BOOL _hasPassword;	// 16 = 0x10
	NSString *_password;	// 20 = 0x14
	id<NSURLAuthenticationChallengeSender> _sender;	// 24 = 0x18
	NSString *_user;	// 28 = 0x1c
	BOOL _userNameIsEditable;	// 32 = 0x20
}
@property(assign) int failureCount;	// G=0x36812cbd; S=0x36812ccd; @synthesize=_failureCount
@property(assign) BOOL hasPassword;	// G=0x36812cdd; S=0x36812ced; @synthesize=_hasPassword
@property(retain) NSString *password;	// G=0x36812cfd; S=0x36812d11; @synthesize=_password
@property(assign) id<NSURLAuthenticationChallengeSender> sender;	// G=0x36812d35; S=0x36812d45; @synthesize=_sender
@property(retain) NSString *user;	// G=0x36812d55; S=0x36812d69; @synthesize=_user
@property(assign) BOOL userNameIsEditable;	// G=0x36812d8d; S=0x36812d9d; @synthesize=_userNameIsEditable
- (id)init;	// 0x36812ba9
- (void)dealloc;	// 0x36812c61
// declared property getter: - (int)failureCount;	// 0x36812cbd
// declared property getter: - (BOOL)hasPassword;	// 0x36812cdd
// declared property getter: - (id)password;	// 0x36812cfd
// declared property getter: - (id)sender;	// 0x36812d35
// declared property setter: - (void)setFailureCount:(int)count;	// 0x36812ccd
// declared property setter: - (void)setHasPassword:(BOOL)password;	// 0x36812ced
// declared property setter: - (void)setPassword:(id)password;	// 0x36812d11
// declared property setter: - (void)setSender:(id)sender;	// 0x36812d45
// declared property setter: - (void)setUser:(id)user;	// 0x36812d69
// declared property setter: - (void)setUserNameIsEditable:(BOOL)editable;	// 0x36812d9d
// declared property getter: - (id)user;	// 0x36812d55
// declared property getter: - (BOOL)userNameIsEditable;	// 0x36812d8d
- (BOOL)userNameIsEmail;	// 0x36812cb9
@end


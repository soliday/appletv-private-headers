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
@property(assign) int failureCount;	// G=0x33bd0009; S=0x33bd0019; @synthesize=_failureCount
@property(assign) BOOL hasPassword;	// G=0x33bd0029; S=0x33bd0039; @synthesize=_hasPassword
@property(retain) NSString *password;	// G=0x33bd0049; S=0x33bd005d; @synthesize=_password
@property(assign) id<NSURLAuthenticationChallengeSender> sender;	// G=0x33bd0081; S=0x33bd0091; @synthesize=_sender
@property(retain) NSString *user;	// G=0x33bd00a1; S=0x33bd00b5; @synthesize=_user
@property(assign) BOOL userNameIsEditable;	// G=0x33bd00d9; S=0x33bd00e9; @synthesize=_userNameIsEditable
- (id)init;	// 0x33bcfef5
- (void)dealloc;	// 0x33bcffad
// declared property getter: - (int)failureCount;	// 0x33bd0009
// declared property getter: - (BOOL)hasPassword;	// 0x33bd0029
// declared property getter: - (id)password;	// 0x33bd0049
// declared property getter: - (id)sender;	// 0x33bd0081
// declared property setter: - (void)setFailureCount:(int)count;	// 0x33bd0019
// declared property setter: - (void)setHasPassword:(BOOL)password;	// 0x33bd0039
// declared property setter: - (void)setPassword:(id)password;	// 0x33bd005d
// declared property setter: - (void)setSender:(id)sender;	// 0x33bd0091
// declared property setter: - (void)setUser:(id)user;	// 0x33bd00b5
// declared property setter: - (void)setUserNameIsEditable:(BOOL)editable;	// 0x33bd00e9
// declared property getter: - (id)user;	// 0x33bd00a1
// declared property getter: - (BOOL)userNameIsEditable;	// 0x33bd00d9
- (BOOL)userNameIsEmail;	// 0x33bd0005
@end


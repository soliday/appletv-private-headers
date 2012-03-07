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
@property(assign) int failureCount;	// G=0x30f1558d; S=0x30f1559d; @synthesize=_failureCount
@property(assign) BOOL hasPassword;	// G=0x30f155ad; S=0x30f155bd; @synthesize=_hasPassword
@property(retain) NSString *password;	// G=0x30f155cd; S=0x30f155e1; @synthesize=_password
@property(assign) id<NSURLAuthenticationChallengeSender> sender;	// G=0x30f15605; S=0x30f15615; @synthesize=_sender
@property(retain) NSString *user;	// G=0x30f15625; S=0x30f15639; @synthesize=_user
@property(assign) BOOL userNameIsEditable;	// G=0x30f1565d; S=0x30f1566d; @synthesize=_userNameIsEditable
- (id)init;	// 0x30f15479
- (void)dealloc;	// 0x30f15531
// declared property getter: - (int)failureCount;	// 0x30f1558d
// declared property getter: - (BOOL)hasPassword;	// 0x30f155ad
// declared property getter: - (id)password;	// 0x30f155cd
// declared property getter: - (id)sender;	// 0x30f15605
// declared property setter: - (void)setFailureCount:(int)count;	// 0x30f1559d
// declared property setter: - (void)setHasPassword:(BOOL)password;	// 0x30f155bd
// declared property setter: - (void)setPassword:(id)password;	// 0x30f155e1
// declared property setter: - (void)setSender:(id)sender;	// 0x30f15615
// declared property setter: - (void)setUser:(id)user;	// 0x30f15639
// declared property setter: - (void)setUserNameIsEditable:(BOOL)editable;	// 0x30f1566d
// declared property getter: - (id)user;	// 0x30f15625
// declared property getter: - (BOOL)userNameIsEditable;	// 0x30f1565d
- (BOOL)userNameIsEmail;	// 0x30f15589
@end

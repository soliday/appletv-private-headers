/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSString;
@protocol NSURLAuthenticationChallengeSender;

__attribute__((visibility("hidden")))
@interface ISAuthenticationChallenge : NSObject {
@private
	NSString *_localizedMessage;	// 4 = 0x4
	NSString *_localizedTitle;	// 8 = 0x8
}
@property(readonly, assign) int failureCount;	// G=0x32b56a91; 
@property(readonly, assign) BOOL hasPassword;	// G=0x32b56a95; 
@property(retain) NSString *localizedMessage;	// G=0x32b56add; S=0x32b56af1; @synthesize=_localizedMessage
@property(retain) NSString *localizedTitle;	// G=0x32b56b15; S=0x32b56b29; @synthesize=_localizedTitle
@property(readonly, assign) NSString *password;	// G=0x32b56a99; 
@property(readonly, assign) id<NSURLAuthenticationChallengeSender> sender;	// G=0x32b56a9d; 
@property(readonly, assign) NSString *user;	// G=0x32b56aa1; 
@property(readonly, assign) BOOL userNameIsEditable;	// G=0x32b56ad5; 
@property(readonly, assign) BOOL userNameIsEmail;	// G=0x32b56ad9; 
- (void)cancelAuthentication;	// 0x32b56a65
- (void)dealloc;	// 0x32b56a0d
// declared property getter: - (int)failureCount;	// 0x32b56a91
// declared property getter: - (BOOL)hasPassword;	// 0x32b56a95
// declared property getter: - (id)localizedMessage;	// 0x32b56add
// declared property getter: - (id)localizedTitle;	// 0x32b56b15
// declared property getter: - (id)password;	// 0x32b56a99
// declared property getter: - (id)sender;	// 0x32b56a9d
// declared property setter: - (void)setLocalizedMessage:(id)message;	// 0x32b56af1
// declared property setter: - (void)setLocalizedTitle:(id)title;	// 0x32b56b29
- (void)useCredential:(id)credential;	// 0x32b56aa5
// declared property getter: - (id)user;	// 0x32b56aa1
// declared property getter: - (BOOL)userNameIsEditable;	// 0x32b56ad5
// declared property getter: - (BOOL)userNameIsEmail;	// 0x32b56ad9
@end


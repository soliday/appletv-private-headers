/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <NSObject.h> // Unknown library

@class NSString;
@protocol NSURLAuthenticationChallengeSender;

@interface ISAuthenticationChallenge : NSObject {
	NSString *_localizedMessage;	// 4 = 0x4
	NSString *_localizedTitle;	// 8 = 0x8
}
@property(readonly, assign) int failureCount;	// G=0x35544fd9; 
@property(readonly, assign) BOOL hasPassword;	// G=0x35544fdd; 
@property(retain) NSString *localizedMessage;	// G=0x35545025; S=0x35545039; @synthesize=_localizedMessage
@property(retain) NSString *localizedTitle;	// G=0x3554505d; S=0x35545071; @synthesize=_localizedTitle
@property(readonly, assign) NSString *password;	// G=0x35544fe1; 
@property(readonly, assign) id<NSURLAuthenticationChallengeSender> sender;	// G=0x35544fe5; 
@property(readonly, assign) NSString *user;	// G=0x35544fe9; 
@property(readonly, assign) BOOL userNameIsEditable;	// G=0x3554501d; 
@property(readonly, assign) BOOL userNameIsEmail;	// G=0x35545021; 
- (void)cancelAuthentication;	// 0x35544fad
- (void)dealloc;	// 0x35544f55
// declared property getter: - (int)failureCount;	// 0x35544fd9
// declared property getter: - (BOOL)hasPassword;	// 0x35544fdd
// declared property getter: - (id)localizedMessage;	// 0x35545025
// declared property getter: - (id)localizedTitle;	// 0x3554505d
// declared property getter: - (id)password;	// 0x35544fe1
// declared property getter: - (id)sender;	// 0x35544fe5
// declared property setter: - (void)setLocalizedMessage:(id)message;	// 0x35545039
// declared property setter: - (void)setLocalizedTitle:(id)title;	// 0x35545071
- (void)useCredential:(id)credential;	// 0x35544fed
// declared property getter: - (id)user;	// 0x35544fe9
// declared property getter: - (BOOL)userNameIsEditable;	// 0x3554501d
// declared property getter: - (BOOL)userNameIsEmail;	// 0x35545021
@end


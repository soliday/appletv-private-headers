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
@property(readonly, assign) int failureCount;	// G=0x33bcfe39; 
@property(readonly, assign) BOOL hasPassword;	// G=0x33bcfe3d; 
@property(retain) NSString *localizedMessage;	// G=0x33bcfe85; S=0x33bcfe99; @synthesize=_localizedMessage
@property(retain) NSString *localizedTitle;	// G=0x33bcfebd; S=0x33bcfed1; @synthesize=_localizedTitle
@property(readonly, assign) NSString *password;	// G=0x33bcfe41; 
@property(readonly, assign) id<NSURLAuthenticationChallengeSender> sender;	// G=0x33bcfe45; 
@property(readonly, assign) NSString *user;	// G=0x33bcfe49; 
@property(readonly, assign) BOOL userNameIsEditable;	// G=0x33bcfe7d; 
@property(readonly, assign) BOOL userNameIsEmail;	// G=0x33bcfe81; 
- (void)cancelAuthentication;	// 0x33bcfe0d
- (void)dealloc;	// 0x33bcfdb5
// declared property getter: - (int)failureCount;	// 0x33bcfe39
// declared property getter: - (BOOL)hasPassword;	// 0x33bcfe3d
// declared property getter: - (id)localizedMessage;	// 0x33bcfe85
// declared property getter: - (id)localizedTitle;	// 0x33bcfebd
// declared property getter: - (id)password;	// 0x33bcfe41
// declared property getter: - (id)sender;	// 0x33bcfe45
// declared property setter: - (void)setLocalizedMessage:(id)message;	// 0x33bcfe99
// declared property setter: - (void)setLocalizedTitle:(id)title;	// 0x33bcfed1
- (void)useCredential:(id)credential;	// 0x33bcfe4d
// declared property getter: - (id)user;	// 0x33bcfe49
// declared property getter: - (BOOL)userNameIsEditable;	// 0x33bcfe7d
// declared property getter: - (BOOL)userNameIsEmail;	// 0x33bcfe81
@end


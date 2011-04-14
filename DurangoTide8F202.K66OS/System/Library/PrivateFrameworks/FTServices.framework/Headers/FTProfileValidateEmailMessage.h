/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import "FTProfileMessage.h"

@class NSData, NSString, NSNumber;

@interface FTProfileValidateEmailMessage : FTProfileMessage {
	NSString *_email;	// 36 = 0x24
	NSData *_pushToken;	// 40 = 0x28
	NSNumber *_onlyCheck;	// 44 = 0x2c
}
@property(copy) NSString *emailAddress;	// G=0x3473be79; S=0x3473bec1; @synthesize=_email
@property(copy) NSNumber *onlyCheck;	// G=0x3473bea9; S=0x3473bf11; @synthesize=_onlyCheck
@property(copy) NSData *pushToken;	// G=0x3473be91; S=0x3473bee9; @synthesize=_pushToken
- (id)bagKey;	// 0x3473bc39
- (void)dealloc;	// 0x3473bcad
// declared property getter: - (id)emailAddress;	// 0x3473be79
- (id)messageBody;	// 0x3473bd19
// declared property getter: - (id)onlyCheck;	// 0x3473bea9
// declared property getter: - (id)pushToken;	// 0x3473be91
- (id)requiredKeys;	// 0x3473bc45
// declared property setter: - (void)setEmailAddress:(id)address;	// 0x3473bec1
// declared property setter: - (void)setOnlyCheck:(id)check;	// 0x3473bf11
// declared property setter: - (void)setPushToken:(id)token;	// 0x3473bee9
@end

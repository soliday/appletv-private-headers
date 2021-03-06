/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSCoding.h"
#import <NSObject.h> // Unknown library

@class SSAccount, NSDictionary;

@interface SSAuthenticateResponse : NSObject <SSCoding> {
@private
	SSAccount *_authenticatedAccount;	// 4 = 0x4
	NSDictionary *_responseDictionary;	// 8 = 0x8
	int _responseType;	// 12 = 0xc
}
@property(assign, nonatomic) int authenticateResponseType;	// G=0x341f29bd; S=0x341f29cd; @synthesize=_responseType
@property(retain, nonatomic) SSAccount *authenticatedAccount;	// G=0x341f2989; S=0x341f2999; @synthesize=_authenticatedAccount
@property(copy, nonatomic) NSDictionary *responseDictionary;	// G=0x341f29dd; S=0x341f29ed; @synthesize=_responseDictionary
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x341f284d
- (id)initWithXPCEncoding:(void *)xpcencoding;	// 0x341f294d
// declared property getter: - (int)authenticateResponseType;	// 0x341f29bd
// declared property getter: - (id)authenticatedAccount;	// 0x341f2989
- (id)copyPropertyListEncoding;	// 0x341f2759
- (void *)copyXPCEncoding;	// 0x341f2819
- (void)dealloc;	// 0x341f26f9
// declared property getter: - (id)responseDictionary;	// 0x341f29dd
// declared property setter: - (void)setAuthenticateResponseType:(int)type;	// 0x341f29cd
// declared property setter: - (void)setAuthenticatedAccount:(id)account;	// 0x341f2999
// declared property setter: - (void)setResponseDictionary:(id)dictionary;	// 0x341f29ed
@end


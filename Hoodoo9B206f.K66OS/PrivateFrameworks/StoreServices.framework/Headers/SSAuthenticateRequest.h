/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSRequest.h"
#import "SSCoding.h"

@class SSAuthenticationContext;
@protocol SSAuthenticateRequestDelegate;

@interface SSAuthenticateRequest : SSRequest <SSCoding> {
@private
	SSAuthenticationContext *_authenticationContext;	// 36 = 0x24
}
@property(readonly, assign, nonatomic) SSAuthenticationContext *authenticationContext;	// G=0x327cdb55; @synthesize=_authenticationContext
@property(assign, nonatomic) id<SSAuthenticateRequestDelegate> delegate;	// @dynamic
- (id)initWithAccount:(id)account;	// 0x327cd6f5
- (id)initWithAuthenticationContext:(id)authenticationContext;	// 0x327cd785
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x327cd8d1
- (id)initWithXPCEncoding:(void *)xpcencoding;	// 0x327cd959
- (void)_sendResponseToDelegate:(id)delegate;	// 0x327cdad9
// declared property getter: - (id)authenticationContext;	// 0x327cdb55
- (id)copyPropertyListEncoding;	// 0x327cd825
- (void *)copyXPCEncoding;	// 0x327cd89d
- (void)dealloc;	// 0x327cd7d9
- (id)handleFailureResponse:(id)response;	// 0x327cd995
- (BOOL)handleFinishResponse:(id)response error:(id *)error;	// 0x327cda41
- (BOOL)issueRequestForIdentifier:(id)identifier error:(id *)error;	// 0x327cdab1
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import "AARequest.h"

@class AAAccount;

@interface AAUpdateProvisioningRequest : AARequest {
	AAAccount *_account;	// 12 = 0xc
}
@property(retain, nonatomic) AAAccount *account;	// G=0x359411a9; S=0x359411b9; @synthesize=_account
+ (Class)responseClass;	// 0x35940d51
- (id)initWithAccount:(id)account;	// 0x35940d6d
- (id)initWithURLString:(id)urlstring account:(id)account;	// 0x35940db5
// declared property getter: - (id)account;	// 0x359411a9
- (void)dealloc;	// 0x35940e15
// declared property setter: - (void)setAccount:(id)account;	// 0x359411b9
- (id)urlCredential;	// 0x35940e61
- (id)urlRequest;	// 0x35940f21
- (id)urlString;	// 0x35940ed9
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import "AARequest.h"

@class AAAccount;

@interface AAUpdateAccountRequest : AARequest {
	AAAccount *_account;	// 12 = 0xc
}
@property(retain, nonatomic) AAAccount *account;	// G=0x359402b1; S=0x359402c1; @synthesize=_account
- (id)initWithAccount:(id)account;	// 0x3593fcbd
- (id)initWithURLString:(id)urlstring account:(id)account;	// 0x3593fd05
// declared property getter: - (id)account;	// 0x359402b1
- (void)dealloc;	// 0x3593fd65
// declared property setter: - (void)setAccount:(id)account;	// 0x359402c1
- (id)urlRequest;	// 0x3593fde5
- (id)urlString;	// 0x3593fdb1
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import "HSResponse.h"

@class NSData;

@interface HSGetAuthorizedAccountsTokenResponse : HSResponse {
@private
	NSData *tokenData;	// 24 = 0x18
}
@property(copy, nonatomic) NSData *tokenData;	// G=0x329c6825; S=0x329c6835; @synthesize
- (void)dealloc;	// 0x329c67e1
// declared property setter: - (void)setTokenData:(id)data;	// 0x329c6835
// declared property getter: - (id)tokenData;	// 0x329c6825
@end

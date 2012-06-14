/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import "GMMRequester.h"


@interface GMMCookieRequester : GMMRequester {
	unsigned long long _cookie;	// 108 = 0x6c
}
@property(readonly, assign, nonatomic) unsigned long long cookie;	// G=0x31fbc6a1; @synthesize=_cookie
// declared property getter: - (unsigned long long)cookie;	// 0x31fbc6a1
- (BOOL)readResponsePreamble:(id)preamble;	// 0x31fbc5d5
- (id)requestPreamble;	// 0x31fbc569
@end


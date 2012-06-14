/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import "AAEmailVettingRequest.h"

@class NSString;

@interface AACompleteEmailVettingRequest : AAEmailVettingRequest {
	NSString *_token;	// 16 = 0x10
}
+ (Class)responseClass;	// 0x349af6c1
- (id)initWithAccount:(id)account token:(id)token;	// 0x349af6dd
- (id)initWithURLString:(id)urlstring account:(id)account token:(id)token;	// 0x349af731
- (id)bodyDictionary;	// 0x349af861
- (void)dealloc;	// 0x349af815
- (id)urlString;	// 0x349af785
@end


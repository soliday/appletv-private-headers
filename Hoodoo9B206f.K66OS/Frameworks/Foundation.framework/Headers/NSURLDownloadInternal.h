/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSURLAuthenticationChallenge, NSURLConnectionDelegateProxy;

__attribute__((visibility("hidden")))
@interface NSURLDownloadInternal : NSObject {
@private
	CFURLDownloadRef cfDownload;	// 4 = 0x4
	CFURLAuthChallengeRef currCFChallenge;	// 8 = 0x8
	NSURLAuthenticationChallenge *currNSChallenge;	// 12 = 0xc
	NSURLConnectionDelegateProxy *proxy;	// 16 = 0x10
	id delegate;	// 20 = 0x14
	BOOL downloadActive;	// 24 = 0x18
}
- (void)dealloc;	// 0x31d09a8d
@end


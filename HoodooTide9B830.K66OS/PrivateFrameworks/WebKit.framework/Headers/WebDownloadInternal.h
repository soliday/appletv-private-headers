/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "NSURLDownloadDelegate.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface WebDownloadInternal : NSObject <NSURLDownloadDelegate> {
@private
	id realDelegate;	// 4 = 0x4
}
- (void)dealloc;	// 0x3527a269
- (void)download:(id)download decideDestinationWithSuggestedFilename:(id)suggestedFilename;	// 0x35279ff9
- (void)download:(id)download didBeginChildDownload:(id)download2;	// 0x3527a0cd
- (void)download:(id)download didCancelAuthenticationChallenge:(id)challenge;	// 0x35279edd
- (void)download:(id)download didCreateDestination:(id)destination;	// 0x3527a025
- (void)download:(id)download didFailWithError:(id)error;	// 0x3527a075
- (void)download:(id)download didReceiveAuthenticationChallenge:(id)challenge;	// 0x35279ed9
- (void)download:(id)download didReceiveDataOfLength:(unsigned)length;	// 0x35279fa1
- (void)download:(id)download didReceiveResponse:(id)response;	// 0x35279f75
- (id)download:(id)download shouldBeginChildDownloadOfSource:(id)source delegate:(id *)delegate;	// 0x3527a0a1
- (BOOL)download:(id)download shouldDecodeSourceDataOfMIMEType:(id)mimetype;	// 0x35279fcd
- (id)download:(id)download willSendRequest:(id)request redirectResponse:(id)response;	// 0x35279f49
- (void)downloadDidBegin:(id)download;	// 0x35279f25
- (void)downloadDidFinish:(id)download;	// 0x3527a051
- (BOOL)respondsToSelector:(SEL)selector;	// 0x3527a165
- (void)setRealDelegate:(id)delegate;	// 0x35279ee5
@end


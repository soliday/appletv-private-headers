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
- (void)dealloc;	// 0x339d526d
- (void)download:(id)download decideDestinationWithSuggestedFilename:(id)suggestedFilename;	// 0x339d4ffd
- (void)download:(id)download didBeginChildDownload:(id)download2;	// 0x339d50d1
- (void)download:(id)download didCancelAuthenticationChallenge:(id)challenge;	// 0x339d4ee1
- (void)download:(id)download didCreateDestination:(id)destination;	// 0x339d5029
- (void)download:(id)download didFailWithError:(id)error;	// 0x339d5079
- (void)download:(id)download didReceiveAuthenticationChallenge:(id)challenge;	// 0x339d4edd
- (void)download:(id)download didReceiveDataOfLength:(unsigned)length;	// 0x339d4fa5
- (void)download:(id)download didReceiveResponse:(id)response;	// 0x339d4f79
- (id)download:(id)download shouldBeginChildDownloadOfSource:(id)source delegate:(id *)delegate;	// 0x339d50a5
- (BOOL)download:(id)download shouldDecodeSourceDataOfMIMEType:(id)mimetype;	// 0x339d4fd1
- (id)download:(id)download willSendRequest:(id)request redirectResponse:(id)response;	// 0x339d4f4d
- (void)downloadDidBegin:(id)download;	// 0x339d4f29
- (void)downloadDidFinish:(id)download;	// 0x339d5055
- (BOOL)respondsToSelector:(SEL)selector;	// 0x339d5169
- (void)setRealDelegate:(id)delegate;	// 0x339d4ee9
@end


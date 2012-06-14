/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSThread.h> // Unknown library

@class ContentDownloadData;
@protocol ContentHeaderDownloaderProtocol;

__attribute__((visibility("hidden")))
@interface ContentHeaderDownloader : NSThread {
@private
	ContentDownloadData *contentDownloadData;	// 52 = 0x34
	shared_ptr<netflix::http::HttpStreamReader> headerHttpReader;	// 56 = 0x38
	shared_ptr<netflix::http::HttpStreamReader> transportHttpReader;	// 64 = 0x40
	shared_ptr<netflix::http::HttpStreamReader> iFrameHttpReader;	// 72 = 0x48
	id<ContentHeaderDownloaderProtocol> delegate_;	// 80 = 0x50
}
@property(assign) id<ContentHeaderDownloaderProtocol> delegate;	// G=0x32c906a1; S=0x32c906b1; @synthesize=delegate_
- (id)initWithContentDownloadData:(id)contentDownloadData delegate:(id)delegate;	// 0x32c8eb0d
- (id).cxx_construct;	// 0x32c907e9
- (void).cxx_destruct;	// 0x32c906c1
- (void)dealloc;	// 0x32c8ecf5
// declared property getter: - (id)delegate;	// 0x32c906a1
- (void)downloadContentHeader:(id)header;	// 0x32c904d5
- (BOOL)downloadContentHeaderInternal;	// 0x32c8edd9
- (const char *)mediaTypeToDLType:(int)dltype;	// 0x32c8ed99
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x32c906b1
- (id)urlAsRangeRequest:(id)request startOffset:(long long)offset endOffset:(long long)offset3;	// 0x32c905e9
@end

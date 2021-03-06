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
@property(assign) id<ContentHeaderDownloaderProtocol> delegate;	// G=0x3694c6fd; S=0x3694c70d; @synthesize=delegate_
- (id)initWithContentDownloadData:(id)contentDownloadData delegate:(id)delegate;	// 0x3694ab69
- (id).cxx_construct;	// 0x3694c845
- (void).cxx_destruct;	// 0x3694c71d
- (void)dealloc;	// 0x3694ad51
// declared property getter: - (id)delegate;	// 0x3694c6fd
- (void)downloadContentHeader:(id)header;	// 0x3694c531
- (BOOL)downloadContentHeaderInternal;	// 0x3694ae35
- (const char *)mediaTypeToDLType:(int)dltype;	// 0x3694adf5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3694c70d
- (id)urlAsRangeRequest:(id)request startOffset:(long long)offset endOffset:(long long)offset3;	// 0x3694c645
@end


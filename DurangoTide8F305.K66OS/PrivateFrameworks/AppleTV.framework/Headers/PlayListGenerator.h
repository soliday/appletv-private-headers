/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSThread.h> // Unknown library
#import "AppleTV-Structs.h"

@class ContentDownloadData;

__attribute__((visibility("hidden")))
@interface PlayListGenerator : NSThread {
@private
	ContentDownloadData *contentDownloadData;	// 52 = 0x34
	shared_ptr<netflix::http::HttpStreamReader> headerHttpReader;	// 56 = 0x38
	shared_ptr<netflix::http::HttpStreamReader> transportHttpReader;	// 64 = 0x40
}
- (id)initWithContentDownloadData:(id)contentDownloadData;	// 0x307d73a0
- (id).cxx_construct;	// 0x307d5868
- (void).cxx_destruct;	// 0x307d7598
- (void)dealloc;	// 0x307d7318
- (void)downloadContentHeader:(id)header;	// 0x307d58bc
@end


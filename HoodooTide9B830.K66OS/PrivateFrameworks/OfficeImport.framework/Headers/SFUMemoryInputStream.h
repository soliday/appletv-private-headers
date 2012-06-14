/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "SFUBufferedInputStream.h"
#import <NSObject.h> // Unknown library

@class NSData;

__attribute__((visibility("hidden")))
@interface SFUMemoryInputStream : NSObject <SFUBufferedInputStream> {
@private
	NSData *mData;	// 4 = 0x4
	char *mStart;	// 8 = 0x8
	char *mCurrent;	// 12 = 0xc
	char *mEnd;	// 16 = 0x10
}
- (id)initWithData:(id)data;	// 0x313c4ed5
- (id)initWithData:(id)data offset:(unsigned long)offset length:(unsigned long)length;	// 0x312c1ed5
- (BOOL)canSeek;	// 0x313c4ec5
- (void)close;	// 0x312c2139
- (id)closeLocalStream;	// 0x313c4ed1
- (void)dealloc;	// 0x312c20ed
- (void)disableSystemCaching;	// 0x313c4ec9
- (void)enableSystemCaching;	// 0x313c4ecd
- (long long)offset;	// 0x313c4ea1
- (unsigned long)readToBuffer:(char *)buffer size:(unsigned long)size;	// 0x313c4f79
- (unsigned long)readToOwnBuffer:(const char **)ownBuffer size:(unsigned long)size;	// 0x312c20a9
- (void)seekToOffset:(long long)offset;	// 0x312c2011
- (BOOL)seekWithinBufferToOffset:(long long)offset;	// 0x313c4f11
@end


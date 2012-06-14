/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <NSObject.h> // Unknown library
#import "iWorkImport-Structs.h"
#import "GQZEntryInputStream.h"

@protocol GQZArchiveInputStream;

__attribute__((visibility("hidden")))
@interface GQZEntryInflateInputStream : NSObject <GQZEntryInputStream> {
@private
	z_stream_s mStream;	// 4 = 0x4
	long long mOffset;	// 60 = 0x3c
	long long mEnd;	// 68 = 0x44
	unsigned mCalculatedCrc;	// 76 = 0x4c
	unsigned mCheckCrc;	// 80 = 0x50
	id<GQZArchiveInputStream> mInput;	// 84 = 0x54
	char *mOutBuffer;	// 88 = 0x58
	unsigned mOutBufferSize;	// 92 = 0x5c
}
- (id)initWithOffset:(long long)offset end:(long long)end uncompressedSize:(unsigned long long)size crc:(unsigned long)crc input:(id)input;	// 0x317e7749
- (void)dealloc;	// 0x317e798d
- (unsigned long)readToBuffer:(char *)buffer size:(unsigned long)size;	// 0x317e79fd
- (void)readToOwnBuffer:(const char **)ownBuffer size:(unsigned *)size;	// 0x317e7c21
@end


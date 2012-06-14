/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "SFUDataRepresentation.h"
#import "SFUZipArchiveDataRepresentation.h"

@class NSData;

__attribute__((visibility("hidden")))
@interface SFUZipArchiveMemoryDataRepresentation : SFUDataRepresentation <SFUZipArchiveDataRepresentation> {
@private
	NSData *mData;	// 12 = 0xc
}
- (id)initWithData:(id)data;	// 0x312c1d19
- (id)bufferedInputStream;	// 0x312c1d71
- (id)bufferedInputStreamWithBufferSize:(unsigned long)bufferSize;	// 0x313c778d
- (id)bufferedInputStreamWithOffset:(long long)offset length:(long long)length;	// 0x312c1dd1
- (id)data;	// 0x313c76f9
- (long long)dataLength;	// 0x312c1da9
- (void)dealloc;	// 0x312cbdb1
- (BOOL)hasSameLocationAs:(id)as;	// 0x313c771d
- (id)inputStream;	// 0x313c77c5
- (id)inputStreamWithOffset:(long long)offset length:(long long)length;	// 0x313c770d
- (BOOL)isReadable;	// 0x313c7709
@end


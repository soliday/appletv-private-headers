/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <NSObject.h> // Unknown library
#import "GQZEntryInputStream.h"

@protocol GQZArchiveInputStream;

__attribute__((visibility("hidden")))
@interface GQZEntryUncompressedInputStream : NSObject <GQZEntryInputStream> {
@private
	long long mOffset;	// 4 = 0x4
	long long mEnd;	// 12 = 0xc
	id<GQZArchiveInputStream> mInput;	// 20 = 0x14
}
- (id)initWithOffset:(long long)offset end:(long long)end input:(id)input;	// 0x304c7ccd
- (void)dealloc;	// 0x304c7e61
- (unsigned long)readToBuffer:(char *)buffer size:(unsigned long)size;	// 0x304c7d55
- (void)readToOwnBuffer:(const char **)ownBuffer size:(unsigned *)size;	// 0x304c7ddd
@end


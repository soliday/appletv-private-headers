/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@protocol SFUBufferedInputStream;

__attribute__((visibility("hidden")))
@interface SFUZipRecordInputStream : NSObject {
@private
	id<SFUBufferedInputStream> mInput;	// 4 = 0x4
	char *mBuffer;	// 8 = 0x8
	long long mBufferStart;	// 12 = 0xc
	long long mBufferEnd;	// 20 = 0x14
}
- (id)initWithDataRepresentation:(id)dataRepresentation;	// 0x352a7ddd
- (const char *)dataAtOffset:(long long)offset size:(unsigned long)size end:(long long)end;	// 0x352a87b5
- (void)dealloc;	// 0x352a960d
@end


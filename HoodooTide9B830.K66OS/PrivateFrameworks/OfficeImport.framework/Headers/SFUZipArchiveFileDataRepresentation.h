/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "SFUDataRepresentation.h"
#import "SFUZipArchiveDataRepresentation.h"

@class SFUFileDataRepresentation;

__attribute__((visibility("hidden")))
@interface SFUZipArchiveFileDataRepresentation : SFUDataRepresentation <SFUZipArchiveDataRepresentation> {
@private
	SFUFileDataRepresentation *mFileRepresentation;	// 12 = 0xc
	int mFd;	// 16 = 0x10
}
- (id)initWithPath:(id)path;	// 0x312655ed
- (id)bufferedInputStreamWithOffset:(long long)offset length:(long long)length;	// 0x31268479
- (long long)dataLength;	// 0x31265f75
- (void)dealloc;	// 0x31284869
- (BOOL)hasSameLocationAs:(id)as;	// 0x313c7605
- (id)inputStream;	// 0x312661c5
- (id)inputStreamWithOffset:(long long)offset length:(long long)length;	// 0x312684e1
- (BOOL)isEncrypted;	// 0x313c75e1
- (BOOL)isReadable;	// 0x313c76d5
- (id)path;	// 0x313c75e5
@end


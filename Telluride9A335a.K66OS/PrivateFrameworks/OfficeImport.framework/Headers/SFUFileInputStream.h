/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "SFUInputStream.h"


__attribute__((visibility("hidden")))
@interface SFUFileInputStream : NSObject <SFUInputStream> {
@private
	int mFd;	// 4 = 0x4
	BOOL mIsCachingDisabled;	// 8 = 0x8
	long long mStartOffset;	// 12 = 0xc
	long long mCurrentOffset;	// 20 = 0x14
	long long mEndOffset;	// 28 = 0x1c
}
- (id)initWithFileDescriptor:(int)fileDescriptor offset:(long long)offset length:(long long)length;	// 0x352a8395
- (id)initWithPath:(id)path offset:(long long)offset;	// 0x35404dfd
- (id)initWithPath:(id)path offset:(long long)offset length:(long long)length;	// 0x35404ee1
- (BOOL)canSeek;	// 0x352a8b19
- (void)close;	// 0x352a96f9
- (id)closeLocalStream;	// 0x35404d0d
- (void)dealloc;	// 0x352a96b9
- (void)disableSystemCaching;	// 0x35404d91
- (void)enableSystemCaching;	// 0x35404d25
- (long long)offset;	// 0x352a8631
- (unsigned long)readToBuffer:(char *)buffer size:(unsigned long)size;	// 0x352a9135
- (void)seekToOffset:(long long)offset;	// 0x352a8fcd
@end

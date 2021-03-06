/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "SFUOutputStream.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface SFUMoveableFileOutputStream : NSObject <SFUOutputStream> {
@private
	int mFd;	// 4 = 0x4
	NSString *mPath;	// 8 = 0x8
}
- (id)initWithPath:(id)path;	// 0x31b73081
- (id)initWithTemporaryFile:(id)temporaryFile;	// 0x31b72efd
- (BOOL)canCreateInputStream;	// 0x31b72e21
- (BOOL)canSeek;	// 0x31b72e1d
- (void)close;	// 0x31b731a1
- (id)closeLocalStream;	// 0x31b72e25
- (void)dealloc;	// 0x31b731c9
- (void)flush;	// 0x31b734bd
- (id)inputStream;	// 0x31b72e3d
- (BOOL)moveToPath:(id)path;	// 0x31b732e9
- (long long)offset;	// 0x31b73291
- (id)path;	// 0x31b72e0d
- (void)seekToOffset:(long long)offset whence:(int)whence;	// 0x31b734fd
- (void)truncateToLength:(unsigned long)length;	// 0x31b733f1
- (void)writeBuffer:(const char *)buffer size:(unsigned long)size;	// 0x31b73229
@end


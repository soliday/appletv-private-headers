/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface StreamData : NSObject {
@private
	long long fileSize;	// 4 = 0x4
	NSString *fileID;	// 12 = 0xc
	long long creationTime;	// 16 = 0x10
	long long preroll;	// 24 = 0x18
	long long duration;	// 32 = 0x20
	long long wrapInterval;	// 40 = 0x28
	int alignmentOffset;	// 48 = 0x30
	long long toolsVersion;	// 52 = 0x34
}
- (id)initWithBuffer:(id)buffer;	// 0x32c3b815
- (void)dealloc;	// 0x32c3baa1
- (int)getAlignmentOffset;	// 0x32c3ba79
- (long long)getCreationTime;	// 0x32c3ba19
- (long long)getDuration;	// 0x32c3ba49
- (id)getFileID;	// 0x32c3ba09
- (int)getFileSize;	// 0x32c3b9f9
- (long long)getPreroll;	// 0x32c3ba31
- (long long)getToolsVersion;	// 0x32c3ba89
- (long long)getWrapInterval;	// 0x32c3ba61
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSData;

__attribute__((visibility("hidden")))
@interface ChunkData : NSObject {
@private
	int reserved;	// 4 = 0x4
	long long pts;	// 8 = 0x8
	long long startOffset;	// 16 = 0x10
	int chunkSize;	// 24 = 0x18
	NSData *iv;	// 28 = 0x1c
}
- (id)initWithBuffer:(id)buffer ivSize:(unsigned)size;	// 0x32c3abfd
- (void)dealloc;	// 0x32c3add9
- (int)getChunkSize;	// 0x32c3adb9
- (id)getIV;	// 0x32c3adc9
- (long long)getPTS;	// 0x32c3ad7d
- (long long)getPTSInNS;	// 0x32c3ad65
- (int)getReserved;	// 0x32c3ad55
- (long long)getStartOffset;	// 0x32c3ada1
@end


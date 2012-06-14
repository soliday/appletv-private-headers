/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface Buffer : NSObject {
@private
	char *buf;	// 4 = 0x4
	int index;	// 8 = 0x8
	int bitMask;	// 12 = 0xc
	int length;	// 16 = 0x10
}
- (id)initWithData:(char *)data length:(unsigned)length;	// 0x368f6679
- (id)initWithData:(char *)data offset:(unsigned)offset length:(unsigned)length;	// 0x368f6699
- (int)getBits:(unsigned)bits success:(BOOL *)success;	// 0x368f676d
- (int)getByte:(BOOL *)byte;	// 0x368f68a1
- (id)getBytes:(unsigned)bytes success:(BOOL *)success;	// 0x368f6ba9
- (int)getIndex;	// 0x368f671d
- (int)getInt:(BOOL *)int;	// 0x368f68fd
- (int)getLength;	// 0x368f670d
- (long long)getLong:(BOOL *)aLong;	// 0x368f69c1
- (id)getNullTerminatedString:(BOOL *)string;	// 0x368f6ad5
- (int)getShort:(BOOL *)aShort;	// 0x368f681d
- (id)getString:(unsigned)string success:(BOOL *)success;	// 0x368f6a1d
- (char *)getUnreadData;	// 0x368f674d
- (int)getUnreadLength;	// 0x368f672d
@end


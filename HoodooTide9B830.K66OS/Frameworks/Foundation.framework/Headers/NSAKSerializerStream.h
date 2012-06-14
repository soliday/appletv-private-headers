/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSSerializerStream.h"


@interface NSAKSerializerStream : NSObject <NSSerializerStream> {
	void *memory;	// 4 = 0x4
	unsigned current;	// 8 = 0x8
	unsigned max;	// 12 = 0xc
	CFDictionaryRef roomForIntLocations;	// 16 = 0x10
}
- (void)copySerializationInto:(void *)into;	// 0x316683cd
- (void)dealloc;	// 0x31667d31
- (void)finalize;	// 0x31667dfd
- (unsigned)writeAlignedDataSize:(unsigned)size;	// 0x31667fc5
- (unsigned)writeData:(const void *)data length:(unsigned)length;	// 0x3166808d
- (void)writeDelayedInt:(unsigned)int for:(int)aFor;	// 0x31668209
- (unsigned)writeInt:(unsigned)int;	// 0x31667e61
- (unsigned)writeRoomForInt:(int *)int;	// 0x3166816d
- (BOOL)writeToPath:(id)path safely:(BOOL)safely;	// 0x316682d5
@end


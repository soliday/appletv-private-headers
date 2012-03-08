/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class Buffer;

__attribute__((visibility("hidden")))
@interface TransportPacket : NSObject {
@private
	Buffer *buffer;	// 4 = 0x4
	int payloadLength;	// 8 = 0x8
	BOOL objectID[17];	// 12 = 0xc
}
- (id)initWithData:(char *)data length:(unsigned)length;	// 0x304f7ac9
- (id)initWithData:(char *)data offset:(unsigned)offset length:(unsigned)length;	// 0x304f7ae9
- (void)dealloc;	// 0x304f7d8d
- (id)getError;	// 0x304f7d89
- (char *)getHeaderObjectID;	// 0x304f7d79
- (char *)getPayload;	// 0x304f7d59
- (int)getPayloadLength;	// 0x304f7d49
@end

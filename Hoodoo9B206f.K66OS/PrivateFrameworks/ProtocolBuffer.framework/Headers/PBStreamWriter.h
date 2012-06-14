/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

#import "PBDataWriter.h"

@class NSOutputStream;

@interface PBStreamWriter : PBDataWriter {
	NSOutputStream *_stream;	// 8 = 0x8
}
@property(retain) NSOutputStream *stream;	// G=0x300cfa99; S=0x300cfaad; @synthesize=_stream
+ (id)writeProtoBuffers:(id)buffers toFile:(id)file;	// 0x300cf7e5
- (id)initWithOutputStream:(id)outputStream;	// 0x300cf729
- (void)dealloc;	// 0x300cf771
// declared property setter: - (void)setStream:(id)stream;	// 0x300cfaad
// declared property getter: - (id)stream;	// 0x300cfa99
- (int)write:(const char *)write maxLength:(unsigned)length;	// 0x300cf7b5
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

#import "PBDataReader.h"

@class NSInputStream;

@interface PBStreamReader : PBDataReader {
	NSInputStream *_stream;	// 20 = 0x14
}
@property(retain) NSInputStream *stream;	// G=0x305c3529; S=0x305c353d; @synthesize=_stream
+ (id)readProtoBuffersOfClass:(Class)aClass fromFile:(id)file error:(id *)error;	// 0x305c32e1
- (id)initWithStream:(id)stream;	// 0x305c30ad
- (void)dealloc;	// 0x305c310d
- (int)read:(const char *)read maxLength:(unsigned)length;	// 0x305c31a1
- (id)readBytes:(unsigned)bytes;	// 0x305c3231
- (id)readProtoBuffer;	// 0x305c3151
- (BOOL)seekToOffset:(unsigned)offset;	// 0x305c32c5
// declared property setter: - (void)setStream:(id)stream;	// 0x305c353d
// declared property getter: - (id)stream;	// 0x305c3529
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

#import <NSObject.h> // Unknown library

@class PBDataWriter, PBStreamWriter;

@interface PBMessageStreamWriter : NSObject {
	PBStreamWriter *_writer;	// 4 = 0x4
	PBDataWriter *_messageWriter;	// 8 = 0x8
}
@property(retain) PBDataWriter *messageWriter;	// G=0x31f34d45; S=0x31f34db9; @synthesize=_messageWriter
@property(retain) PBStreamWriter *writer;	// G=0x31f34d2d; S=0x31f34d8d; @synthesize=_writer
- (id)initWithOutputStream:(id)outputStream;	// 0x31f34aa5
- (void)dealloc;	// 0x31f34a55
// declared property getter: - (id)messageWriter;	// 0x31f34d45
// declared property setter: - (void)setMessageWriter:(id)writer;	// 0x31f34db9
// declared property setter: - (void)setWriter:(id)writer;	// 0x31f34d8d
- (BOOL)writeMessage:(id)message;	// 0x31f3499d
// declared property getter: - (id)writer;	// 0x31f34d2d
@end

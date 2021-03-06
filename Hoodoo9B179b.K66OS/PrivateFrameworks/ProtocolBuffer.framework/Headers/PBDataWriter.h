/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

#import <NSObject.h> // Unknown library

@class NSMutableData;

@interface PBDataWriter : NSObject {
	NSMutableData *_data;	// 4 = 0x4
}
@property(readonly, retain) NSMutableData *data;	// G=0x33bed4a9; converted property
- (id)init;	// 0x33bed3f9
// converted property getter: - (id)data;	// 0x33bed4a9
- (void)dealloc;	// 0x33bed45d
- (int)write:(const char *)write maxLength:(unsigned)length;	// 0x33bedabd
- (void)writeBOOL:(BOOL)aBool forTag:(unsigned short)tag;	// 0x33bed999
- (void)writeBareVarint:(long long)varint;	// 0x33bed621
- (void)writeBigEndianFixed16:(unsigned short)a16;	// 0x33bed4b9
- (void)writeBigEndianFixed32:(unsigned)a32;	// 0x33bed4e1
- (void)writeBigEndianShortThenString:(id)string;	// 0x33bed505
- (BOOL)writeData:(id)data;	// 0x33beda6d
- (void)writeData:(id)data forTag:(unsigned short)tag;	// 0x33beda09
- (void)writeDouble:(double)aDouble forTag:(unsigned short)tag;	// 0x33bed6a5
- (void)writeFixed32:(unsigned)a32 forTag:(unsigned short)tag;	// 0x33bed891
- (void)writeFixed64:(unsigned long long)a64 forTag:(unsigned short)tag;	// 0x33bed8cd
- (void)writeFloat:(float)aFloat forTag:(unsigned short)tag;	// 0x33bed6ed
- (void)writeInt32:(int)a32 forTag:(unsigned short)tag;	// 0x33bed729
- (void)writeInt64:(long long)a64 forTag:(unsigned short)tag;	// 0x33bed761
- (void)writeInt8:(BOOL)a8;	// 0x33bed5fd
- (void)writeProtoBuffer:(id)buffer;	// 0x33bed589
- (void)writeSfixed32:(int)a32 forTag:(unsigned short)tag;	// 0x33bed915
- (void)writeSfixed64:(long long)a64 forTag:(unsigned short)tag;	// 0x33bed951
- (void)writeSint32:(int)a32 forTag:(unsigned short)tag;	// 0x33bed811
- (void)writeSint64:(long long)a64 forTag:(unsigned short)tag;	// 0x33bed84d
- (void)writeString:(id)string forTag:(unsigned short)tag;	// 0x33bed9d1
- (void)writeTag:(unsigned short)tag andType:(unsigned char)type;	// 0x33bed679
- (void)writeUint32:(unsigned)a32 forTag:(unsigned)tag;	// 0x33bed79d
- (void)writeUint64:(unsigned long long)a64 forTag:(unsigned long long)tag;	// 0x33bed7d5
@end


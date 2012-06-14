/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSMutableData.h> // Unknown library


@interface NSMutableData (NSMutableData)
+ (id)allocWithZone:(NSZone *)zone;	// 0x31cf1d5d
+ (id)dataWithCapacity:(unsigned)capacity;	// 0x31d326ed
+ (id)dataWithLength:(unsigned)length;	// 0x31d13ce1
- (id)initWithCapacity:(unsigned)capacity;	// 0x31d500c5
- (id)initWithLength:(unsigned)length;	// 0x31d500e9
- (void)appendBytes:(const void *)bytes length:(unsigned)length;	// 0x31d4f925
- (void)appendData:(id)data;	// 0x31d4faad
- (Class)classForCoder;	// 0x31d29e89
- (void)increaseLengthBy:(unsigned)by;	// 0x31d4fc61
- (void *)mutableBytes;	// 0x31d4f659
- (void)replaceBytesInRange:(NSRange)range withBytes:(const void *)bytes;	// 0x31d4fd55
- (void)replaceBytesInRange:(NSRange)range withBytes:(const void *)bytes length:(unsigned)length;	// 0x31d4f6a1
- (void)resetBytesInRange:(NSRange)range;	// 0x31d4ff51
- (void)setData:(id)data;	// 0x31d50061
- (void)setLength:(unsigned)length;	// 0x31d4f67d
@end


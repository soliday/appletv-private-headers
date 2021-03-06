/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSMutableData.h> // Unknown library


@interface NSMutableData (NSMutableData)
+ (id)allocWithZone:(NSZone *)zone;	// 0x30255d6d
+ (id)dataWithCapacity:(unsigned)capacity;	// 0x302966fd
+ (id)dataWithLength:(unsigned)length;	// 0x30277cf1
- (id)initWithCapacity:(unsigned)capacity;	// 0x302b40d5
- (id)initWithLength:(unsigned)length;	// 0x302b40f9
- (void)appendBytes:(const void *)bytes length:(unsigned)length;	// 0x302b3935
- (void)appendData:(id)data;	// 0x302b3abd
- (Class)classForCoder;	// 0x3028de99
- (void)increaseLengthBy:(unsigned)by;	// 0x302b3c71
- (void *)mutableBytes;	// 0x302b3669
- (void)replaceBytesInRange:(NSRange)range withBytes:(const void *)bytes;	// 0x302b3d65
- (void)replaceBytesInRange:(NSRange)range withBytes:(const void *)bytes length:(unsigned)length;	// 0x302b36b1
- (void)resetBytesInRange:(NSRange)range;	// 0x302b3f61
- (void)setData:(id)data;	// 0x302b4071
- (void)setLength:(unsigned)length;	// 0x302b368d
@end


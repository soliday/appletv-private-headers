/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSOutputStream.h> // Unknown library


@interface NSOutputStream (NSCFOutputStreamAdditions)
- (XXStruct_K5nmsA)_cfStreamError;	// 0x31081a19
@end

@interface NSOutputStream (NSOutputStream)
+ (id)allocWithZone:(NSZone *)zone;	// 0x31081929
+ (id)outputStreamToBuffer:(char *)buffer capacity:(unsigned)capacity;	// 0x31081435
+ (id)outputStreamToFileAtPath:(id)path append:(BOOL)append;	// 0x310813f9
+ (id)outputStreamToMemory;	// 0x31081471
+ (id)outputStreamWithURL:(id)url append:(BOOL)append;	// 0x310813bd
- (unsigned long)_cfTypeID;	// 0x310819c9
- (BOOL)hasSpaceAvailable;	// 0x310810ad
- (int)write:(const char *)write maxLength:(unsigned)length;	// 0x310810d1
@end


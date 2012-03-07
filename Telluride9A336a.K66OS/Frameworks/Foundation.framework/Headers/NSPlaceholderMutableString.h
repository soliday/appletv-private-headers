/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSMutableString.h"
#import "Foundation-Structs.h"


@interface NSPlaceholderMutableString : NSMutableString {
}
- (id)init;	// 0x33667b0d
- (id)initWithBytes:(const void *)bytes length:(unsigned)length encoding:(unsigned)encoding;	// 0x3366e491
- (id)initWithBytesNoCopy:(void *)bytesNoCopy length:(unsigned)length encoding:(unsigned)encoding freeWhenDone:(BOOL)done;	// 0x336d5b11
- (id)initWithCString:(const char *)cstring encoding:(unsigned)encoding;	// 0x336d5bf9
- (id)initWithCStringNoCopy:(char *)cstringNoCopy length:(unsigned)length freeWhenDone:(BOOL)done;	// 0x336d5ca5
- (id)initWithCapacity:(unsigned)capacity;	// 0x3366de35
- (id)initWithCharactersNoCopy:(unsigned short *)charactersNoCopy length:(unsigned)length freeWhenDone:(BOOL)done;	// 0x336d5bbd
- (id)initWithFormat:(id)format locale:(id)locale arguments:(void *)arguments;	// 0x33683685
- (id)initWithString:(id)string;	// 0x3366797d
- (BOOL)_isDeallocating;	// 0x336d5b05
- (BOOL)_tryRetain;	// 0x336d5b09
- (id)autorelease;	// 0x336d5af1
- (unsigned short)characterAtIndex:(unsigned)index;	// 0x336d5d2d
- (void)dealloc;	// 0x336d5b0d
- (unsigned)length;	// 0x336d5cfd
- (oneway void)release;	// 0x336d5b01
- (void)replaceCharactersInRange:(NSRange)range withString:(id)string;	// 0x336d5d5d
- (id)retain;	// 0x336d5af5
- (unsigned)retainCount;	// 0x336d5af9
@end

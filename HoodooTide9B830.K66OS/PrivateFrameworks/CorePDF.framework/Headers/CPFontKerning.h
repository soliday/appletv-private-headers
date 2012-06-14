/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import <NSObject.h> // Unknown library
#import "CPDisposable.h"


@interface CPFontKerning : NSObject <CPDisposable> {
	CFDataRef kernTable;	// 4 = 0x4
	char *dataPtr;	// 8 = 0x8
	unsigned offset;	// 12 = 0xc
	unsigned kernTableLength;	// 16 = 0x10
	CFDictionaryRef kernDictionary;	// 20 = 0x14
	BOOL override;	// 24 = 0x18
	BOOL valid;	// 25 = 0x19
}
- (id)initWithCGFont:(CGFontRef)cgfont;	// 0x310a5ed9
- (id)initWithKernData:(CFDataRef)kernData;	// 0x310a5e3d
- (CFDictionaryRef)createKernTable;	// 0x310a5f7d
- (void)dealloc;	// 0x310a60b5
- (void)dispose;	// 0x310a5f15
- (void)doKerningPair;	// 0x310a6015
- (void)doOTSubtable;	// 0x310a5ca1
- (void)doSubtableFormat0;	// 0x310a5b7d
- (void)doSubtableFormat1;	// 0x310a5ae5
- (void)doSubtableFormat2;	// 0x310a5ae9
- (void)doSubtableFormat3;	// 0x310a5aed
- (void)doTTSubtable;	// 0x310a5be5
- (void)doTable;	// 0x310a5d45
- (void)finalize;	// 0x310a5f3d
- (unsigned char)readByte;	// 0x310a5a95
- (short)readShort;	// 0x310a5b19
- (unsigned)readUnsignedLong;	// 0x310a5b31
- (unsigned short)readUnsignedShort;	// 0x310a5af1
@end


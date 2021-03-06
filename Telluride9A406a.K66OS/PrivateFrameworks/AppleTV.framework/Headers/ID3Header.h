/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ID3Header : NSObject {
@private
	int dataOffset;	// 4 = 0x4
	int headerSize;	// 8 = 0x8
}
@property(assign, nonatomic) int dataOffset;	// G=0x332f407c; S=0x332f4090; @synthesize
@property(assign, nonatomic) int headerSize;	// G=0x332f40a4; S=0x332f40b8; @synthesize
- (id)initWithByteData:(char *)byteData withLength:(int)length;	// 0x332f43dc
- (id)initWithData:(id)data;	// 0x332f42f4
- (void)buildWithByteData:(char *)byteData withLength:(int)length;	// 0x332f40cc
// declared property getter: - (int)dataOffset;	// 0x332f407c
- (void)dealloc;	// 0x332f439c
// declared property getter: - (int)headerSize;	// 0x332f40a4
// declared property setter: - (void)setDataOffset:(int)offset;	// 0x332f4090
// declared property setter: - (void)setHeaderSize:(int)size;	// 0x332f40b8
@end


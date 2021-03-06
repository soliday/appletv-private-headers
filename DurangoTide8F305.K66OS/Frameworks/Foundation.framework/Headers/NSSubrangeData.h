/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSData.h> // Unknown library


__attribute__((visibility("hidden")))
@interface NSSubrangeData : NSData {
@private
	unsigned _reserved : 3;	// 4 = 0x4
	unsigned _retainCount : 29;	// 4 = 0x4
	NSRange _range;	// 8 = 0x8
	NSData *_data;	// 16 = 0x10
}
- (id)init;	// 0x32786b81
- (id)initWithData:(id)data range:(NSRange)range;	// 0x327763f9
- (BOOL)_bytesAreVM;	// 0x32786791
- (const void *)bytes;	// 0x32776805
- (id)copyWithZone:(NSZone *)zone;	// 0x327867b5
- (void)dealloc;	// 0x32776835
- (void)getBytes:(void *)bytes;	// 0x32787d15
- (void)getBytes:(void *)bytes length:(unsigned)length;	// 0x32787d95
- (void)getBytes:(void *)bytes range:(NSRange)range;	// 0x32776601
- (unsigned)length;	// 0x327765f1
@end


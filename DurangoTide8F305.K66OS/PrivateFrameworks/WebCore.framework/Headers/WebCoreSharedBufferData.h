/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCore-Structs.h"
#import <NSData.h> // Unknown library


__attribute__((visibility("hidden")))
@interface WebCoreSharedBufferData : NSData {
@private
	RefPtr<WebCore::SharedBuffer> sharedBuffer;	// 4 = 0x4
}
+ (void)initialize;	// 0x314f5799
- (id)initWithSharedBuffer:(SharedBuffer *)sharedBuffer;	// 0x314f57b5
- (id).cxx_construct;	// 0x314f57a5
- (void).cxx_destruct;	// 0x314f59ed
- (const void *)bytes;	// 0x314f58b9
- (void)dealloc;	// 0x314f599d
- (void)finalize;	// 0x31900b71
- (unsigned)length;	// 0x314f5821
@end


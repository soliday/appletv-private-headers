/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <NSData.h> // Unknown library
#import "WebCore-Structs.h"


__attribute__((visibility("hidden")))
@interface WebCoreSharedBufferData : NSData {
@private
	RefPtr<WebCore::SharedBuffer> sharedBuffer;	// 4 = 0x4
}
+ (void)initialize;	// 0x3326ce29
- (id)initWithSharedBuffer:(SharedBuffer *)sharedBuffer;	// 0x3326ce41
- (id).cxx_construct;	// 0x3326ce2d
- (void).cxx_destruct;	// 0x3326d351
- (const void *)bytes;	// 0x3326cf3d
- (void)dealloc;	// 0x3326d2fd
- (void)finalize;	// 0x337ed8c5
- (unsigned)length;	// 0x3326cead
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "Symbolication-Structs.h"
#import "VMUMemoryView_Native.h"


@interface VMUMemoryView_Native64 : VMUMemoryView_Native {
}
+ (id)memoryViewWithAddressRange:(VMURange)addressRange data:(char *)data memory:(id)memory;	// 0x31bc7f05
- (BOOL)isCursorPointerAligned;	// 0x31bc7ee9
- (void)pointerAlignCursor;	// 0x31bc7f6d
@end


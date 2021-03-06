/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMEvent.h"


__attribute__((visibility("hidden")))
@interface DOMProgressEvent : DOMEvent {
}
@property(readonly, assign) BOOL lengthComputable;	// G=0x3169fba1; 
@property(readonly, assign) unsigned loaded;	// G=0x3169fbb5; 
@property(readonly, assign) unsigned total;	// G=0x3169fbc9; 
- (void)initProgressEvent:(id)event canBubbleArg:(BOOL)arg cancelableArg:(BOOL)arg3 lengthComputableArg:(BOOL)arg4 loadedArg:(unsigned)arg5 totalArg:(unsigned)arg6;	// 0x3169fbdd
// declared property getter: - (BOOL)lengthComputable;	// 0x3169fba1
// declared property getter: - (unsigned)loaded;	// 0x3169fbb5
// declared property getter: - (unsigned)total;	// 0x3169fbc9
@end


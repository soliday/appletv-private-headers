/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library


@interface AVRunLoopConditionRunLoopState : NSObject {
@private
	CFRunLoopRef _runLoop;	// 4 = 0x4
	CFRunLoopSourceRef _signalSource;	// 8 = 0x8
	BOOL _signaled;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) CFRunLoopRef runLoop;	// G=0x326ed219; @synthesize=_runLoop
@property(assign, nonatomic) CFRunLoopSourceRef signalSource;	// G=0x326ed229; S=0x326ed239; @synthesize=_signalSource
@property(assign, nonatomic) BOOL signaled;	// G=0x326ed249; S=0x326ed259; @synthesize=_signaled
+ (id)runLoopStateWithRunLoop:(CFRunLoopRef)runLoop;	// 0x326ed0f5
- (id)initWithRunLoop:(CFRunLoopRef)runLoop;	// 0x326ed141
- (void)dealloc;	// 0x326ed1bd
// declared property getter: - (CFRunLoopRef)runLoop;	// 0x326ed219
// declared property setter: - (void)setSignalSource:(CFRunLoopSourceRef)source;	// 0x326ed239
// declared property setter: - (void)setSignaled:(BOOL)signaled;	// 0x326ed259
// declared property getter: - (CFRunLoopSourceRef)signalSource;	// 0x326ed229
// declared property getter: - (BOOL)signaled;	// 0x326ed249
@end


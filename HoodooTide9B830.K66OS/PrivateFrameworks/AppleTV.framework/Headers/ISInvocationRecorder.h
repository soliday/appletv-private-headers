/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ISInvocationRecorder : NSObject {
@private
	id _target;	// 4 = 0x4
}
- (id)initWithTarget:(id)target;	// 0x32b5fcd9
- (id)adjustedTargetForSelector:(SEL)selector;	// 0x32b5fd6d
- (void)dealloc;	// 0x32b5fd19
- (void)forwardInvocation:(id)invocation;	// 0x32b5fd91
- (void)invokeInvocation:(id)invocation;	// 0x32b5fd7d
- (id)methodSignatureForSelector:(SEL)selector;	// 0x32b5fded
@end


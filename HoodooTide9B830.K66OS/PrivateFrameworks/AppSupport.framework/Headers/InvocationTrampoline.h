/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import <NSObject.h> // Unknown library


@interface InvocationTrampoline : NSObject {
	id _target;	// 4 = 0x4
}
@property(retain) id target;	// G=0x3104208d; S=0x31042069; @synthesize=_target
- (void)dealloc;	// 0x31042015
- (void)forwardInvocation:(id)invocation;	// 0x31041921
- (id)methodSignatureForSelector:(SEL)selector;	// 0x31042105
- (void)performInvocation:(id)invocation;	// 0x310418a1
- (BOOL)respondsToSelector:(SEL)selector;	// 0x310420a5
// declared property setter: - (void)setTarget:(id)target;	// 0x31042069
// declared property getter: - (id)target;	// 0x3104208d
@end


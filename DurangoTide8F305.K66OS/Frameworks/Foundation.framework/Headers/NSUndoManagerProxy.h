/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSProxy.h"

@class NSUndoManager;

__attribute__((visibility("hidden")))
@interface NSUndoManagerProxy : NSProxy {
@private
	NSUndoManager *_manager;	// 4 = 0x4
}
- (id)initWithManager:(id)manager;	// 0x327ebc5d
- (void)forwardInvocation:(id)invocation;	// 0x327ec259
- (id)methodSignatureForSelector:(SEL)selector;	// 0x327ec279
- (void)release;	// 0x327ec299
- (id)retain;	// 0x327ec2b9
- (void)superRelease;	// 0x327ec371
@end

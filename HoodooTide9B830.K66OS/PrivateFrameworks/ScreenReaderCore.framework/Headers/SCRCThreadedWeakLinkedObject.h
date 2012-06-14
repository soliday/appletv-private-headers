/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import <NSObject.h> // Unknown library

@class NSLock;

@interface SCRCThreadedWeakLinkedObject : NSObject {
	NSLock *_releaseLock;	// 4 = 0x4
	int _referenceCount;	// 8 = 0x8
	BOOL _calledDealloc;	// 12 = 0xc
}
- (id)init;	// 0x332b8945
- (void)dealloc;	// 0x332b8ded
- (void)invalidateThreadsWithWeakLinks;	// 0x332b8de9
- (oneway void)release;	// 0x332b84d1
- (id)retain;	// 0x332b8335
- (unsigned)retainCount;	// 0x332c6add
@end


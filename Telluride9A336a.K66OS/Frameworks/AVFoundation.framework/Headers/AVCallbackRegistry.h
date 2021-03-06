/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library


@interface AVCallbackRegistry : NSObject {
@private
	CFBagRef _observers;	// 4 = 0x4
	dispatch_queue_s *_readWriteQueue;	// 8 = 0x8
}
+ (void)initialize;	// 0x314b1b89
+ (id)sharedCallbackRegistry;	// 0x314b1b79
- (id)init;	// 0x314b1e01
- (id)callbackObserver:(id)observer;	// 0x314b1be1
- (void)dealloc;	// 0x314b1da5
- (void)finalize;	// 0x314b1d49
- (void)registerCallbackObserver:(id)observer;	// 0x314b1cf1
- (void)unregisterCallbackObserver:(id)observer;	// 0x314b1c95
@end


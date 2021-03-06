/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class ISOperationQueue;

__attribute__((visibility("hidden")))
@interface ISURLOperationPool : NSObject {
@private
	ISOperationQueue *_operationQueue;	// 4 = 0x4
}
@property(retain, nonatomic) ISOperationQueue *operationQueue;	// G=0x32b729a5; S=0x32b729b5; @synthesize=_operationQueue
- (id)init;	// 0x32b725ad
- (id)_poolOperationForOperation:(id)operation flags:(int)flags;	// 0x32b727fd
- (void)addOperation:(id)operation withFlags:(int)flags;	// 0x32b72665
- (void)cancelOperation:(id)operation;	// 0x32b72711
- (void)dealloc;	// 0x32b72619
// declared property getter: - (id)operationQueue;	// 0x32b729a5
// declared property setter: - (void)setOperationQueue:(id)queue;	// 0x32b729b5
@end


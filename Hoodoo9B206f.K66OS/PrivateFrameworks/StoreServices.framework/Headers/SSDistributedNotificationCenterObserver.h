/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library
#import "StoreServices-Structs.h"

@class NSString;

@interface SSDistributedNotificationCenterObserver : NSObject {
	id _block;	// 4 = 0x4
	dispatch_queue_s *_dispatchQueue;	// 8 = 0x8
	NSString *_name;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) id block;	// G=0x327fac11; @synthesize=_block
@property(readonly, assign, nonatomic) dispatch_queue_s *dispatchQueue;	// G=0x327fac21; @synthesize=_dispatchQueue
@property(readonly, assign, nonatomic) NSString *name;	// G=0x327fac31; @synthesize=_name
- (id)initWithName:(id)name queue:(dispatch_queue_s *)queue block:(id)block;	// 0x327fab0d
// declared property getter: - (id)block;	// 0x327fac11
- (void)dealloc;	// 0x327fab9d
// declared property getter: - (dispatch_queue_s *)dispatchQueue;	// 0x327fac21
// declared property getter: - (id)name;	// 0x327fac31
@end


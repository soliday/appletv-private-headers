/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class AVCallbackRegistry, NSMutableDictionary;

@interface AVCMNotificationDispatcher : NSObject {
@private
	opaqueCMNotificationCenter *_cmNotificationCenter;	// 4 = 0x4
	AVCallbackRegistry *_callbackRegistry;	// 8 = 0x8
	NSMutableDictionary *_listenerObjectsPassedToFig;	// 12 = 0xc
	dispatch_queue_s *_listenerObjectsQueue;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) opaqueCMNotificationCenter *CMNotificationCenter;	// G=0x326f8e41; 
@property(readonly, assign, nonatomic, getter=_callbackRegistry) AVCallbackRegistry *callbackRegistry;	// G=0x326f8e31; 
+ (void)initialize;	// 0x326f8935
+ (id)notificationDispatcherForCMNotificationCenter:(opaqueCMNotificationCenter *)cmnotificationCenter;	// 0x326f89e5
- (id)initWithCMNotificationCenter:(opaqueCMNotificationCenter *)cmnotificationCenter;	// 0x326f8c61
// declared property getter: - (opaqueCMNotificationCenter *)CMNotificationCenter;	// 0x326f8e41
- (void)_addListenerAndCallback:(id)callback forWeakReferenceToListener:(id)listener callback:(/*function-pointer*/ void *)callback3 name:(CFStringRef)name object:(const void *)object;	// 0x326f9091
// declared property getter: - (id)_callbackRegistry;	// 0x326f8e31
- (id)_copyAndRemoveListenerAndCallbackForWeakReferenceToListener:(id)listener callback:(/*function-pointer*/ void *)callback name:(CFStringRef)name object:(const void *)object;	// 0x326f922d
- (void)addListenerWithWeakReference:(id)weakReference callback:(/*function-pointer*/ void *)callback name:(CFStringRef)name object:(const void *)object flags:(unsigned long)flags;	// 0x326f8e51
- (void)dealloc;	// 0x326f8d61
- (void)finalize;	// 0x326f8ded
- (void)removeListenerWithWeakReference:(id)weakReference callback:(/*function-pointer*/ void *)callback name:(CFStringRef)name object:(const void *)object;	// 0x326f8ffd
@end


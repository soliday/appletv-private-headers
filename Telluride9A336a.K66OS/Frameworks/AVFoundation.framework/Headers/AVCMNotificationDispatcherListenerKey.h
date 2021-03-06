/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "AVFoundation-Structs.h"

@class AVWeakReference, NSString;

@interface AVCMNotificationDispatcherListenerKey : NSObject <NSCopying> {
@private
	AVWeakReference *_weakReferenceToListener;	// 4 = 0x4
	/*function-pointer*/ void *_callback;	// 8 = 0x8
	NSString *_name;	// 12 = 0xc
	void *_object;	// 16 = 0x10
}
+ (id)listenerKeyWithWeakReferenceToListener:(id)listener callback:(/*function-pointer*/ void *)callback name:(id)name object:(const void *)object;	// 0x314b296d
- (id)initWithWeakReferenceToListener:(id)listener callback:(/*function-pointer*/ void *)callback name:(id)name object:(const void *)object;	// 0x314b2bf5
- (id)copyWithZone:(NSZone *)zone;	// 0x314b2af9
- (void)dealloc;	// 0x314b2b95
- (unsigned)hash;	// 0x314b29c9
- (BOOL)isEqual:(id)equal;	// 0x314b2a29
@end


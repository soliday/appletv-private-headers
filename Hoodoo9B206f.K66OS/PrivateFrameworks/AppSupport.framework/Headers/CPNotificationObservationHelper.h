/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface CPNotificationObservationHelper : NSObject {
@private
	id _observer;	// 4 = 0x4
	id _object;	// 8 = 0x8
	id _block;	// 12 = 0xc
	NSString *_name;	// 16 = 0x10
}
- (id)initWithObserver:(id)observer name:(id)name object:(id)object block:(id)block;	// 0x30cbe37d
- (void)_notification:(id)notification;	// 0x30cbe355
- (void)dealloc;	// 0x30cbe459
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import <NSNotificationCenter.h> // Unknown library


@interface NSNotificationCenter (BRProviderHelpers)
- (void)postProviderItemsModifiedNotificationForRange:(NSRange)range object:(id)object;	// 0x3293a44d
- (void)postProviderItemsModifiedNotificationForRanges:(id)ranges object:(id)object;	// 0x3293a3f5
- (void)postProviderTitleChangedNotificationFrom:(id)from;	// 0x3293a3d5
@end

@interface NSNotificationCenter (ThreadSpecificNotifications)
- (void)_postNotification:(id)notification;	// 0x32966da5
- (void)postNotification:(id)notification onThread:(id)thread;	// 0x328ab701
- (void)postNotificationName:(id)name object:(id)object onThread:(id)thread;	// 0x32966dd5
- (void)postNotificationName:(id)name object:(id)object userInfo:(id)info onThread:(id)thread;	// 0x328ab6bd
- (void)postNotificationOnMainThread:(id)thread;	// 0x32966e99
- (void)postNotificationOnMainThreadNamed:(id)named;	// 0x32966e51
- (void)postNotificationOnMainThreadNamed:(id)named object:(id)object;	// 0x32966e09
@end

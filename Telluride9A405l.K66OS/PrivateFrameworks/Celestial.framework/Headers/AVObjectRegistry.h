/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h> // Unknown library

@class NSMutableSet, NSRecursiveLock;

@interface AVObjectRegistry : NSObject {
	NSMutableSet *_registeredObjects;	// 4 = 0x4
	NSRecursiveLock *_lock;	// 8 = 0x8
}
+ (id)defaultObjectRegistry;	// 0x338fe765
- (id)init;	// 0x338fe7ad
- (void)dealloc;	// 0x339131f1
- (void)finishedRelease;	// 0x33913095
- (BOOL)isObjectRegistered:(id)registered;	// 0x339061a5
- (void)registerObject:(id)object;	// 0x338fe849
- (void)registerObjectForSafeRetain:(id)safeRetain;	// 0x33913161
- (void)safeInvokeWithDescription:(id)description;	// 0x33906f81
- (void)safeInvokeWithDescriptionDelayed:(id)descriptionDelayed;	// 0x33908105
- (void)safePerformOnMainThreadTarget:(id)target selector:(SEL)selector object:(id)object;	// 0x339046f9
- (void)safePerformOnMainThreadTarget:(id)target selector:(SEL)selector object:(id)object delay:(double)delay;	// 0x33912e8d
- (void)safePerformOnThread:(id)thread target:(id)target selector:(SEL)selector object:(id)object;	// 0x3390a379
- (void)safePerformTarget:(id)target selector:(SEL)selector object:(id)object delay:(double)delay;	// 0x33907ff1
- (void)safePostDelayedNotificationFromMainThreadTarget:(id)mainThreadTarget name:(id)name userInfo:(id)info;	// 0x3390c5ad
- (void)safePostDelayedNotificationFromThread:(id)thread target:(id)target name:(id)name userInfo:(id)info;	// 0x33912d55
- (void)safePostNotificationFromMainThreadTarget:(id)mainThreadTarget name:(id)name userInfo:(id)info;	// 0x33907a71
- (void)safePostNotificationFromThread:(id)thread target:(id)target name:(id)name userInfo:(id)info;	// 0x33912de5
- (BOOL)safeRetainObject:(id)object;	// 0x339130b5
- (BOOL)shouldReleaseObject:(id)object requireThread:(id)thread;	// 0x33912fb5
- (void)unregisterObject:(id)object;	// 0x33909815
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import "AppSupport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSLock, NSString;

@interface CPDistributedNotificationCenter : NSObject {
	NSString *_centerName;	// 4 = 0x4
	NSLock *_lock;	// 8 = 0x8
	CFRunLoopSourceRef _receiveNotificationSource;	// 12 = 0xc
	BOOL _isServer;	// 16 = 0x10
	CFDictionaryRef _sendPorts;	// 20 = 0x14
	unsigned _startCount;	// 24 = 0x18
}
+ (id)centerNamed:(id)named;	// 0x34724419
- (void)_checkIn;	// 0x34725005
- (void)_checkOutAndRemoveSource;	// 0x34724f6d
- (void)_createReceiveSourceForRunLoop:(CFRunLoopRef)runLoop;	// 0x347250d1
- (id)_initWithServerName:(id)serverName;	// 0x34724301
- (void)_notificationServerWasRestarted;	// 0x34723f2d
- (void)_receivedCheckIn:(unsigned)anIn auditToken:(XXStruct_kUSYWB *)token;	// 0x3472459d
- (void)dealloc;	// 0x34724395
- (void)deliverNotification:(id)notification userInfo:(id)info;	// 0x347240b1
- (id)name;	// 0x34723f09
- (void)postNotificationName:(id)name;	// 0x34724105
- (void)postNotificationName:(id)name userInfo:(id)info;	// 0x34724125
- (BOOL)postNotificationName:(id)name userInfo:(id)info toBundleIdentifier:(id)bundleIdentifier;	// 0x347247bd
- (void)runServer;	// 0x34724be5
- (void)runServerOnCurrentThread;	// 0x347240f5
- (void)startDeliveringNotificationsToMainThread;	// 0x34724f49
- (void)startDeliveringNotificationsToRunLoop:(CFRunLoopRef)runLoop;	// 0x34723fbd
- (void)stopDeliveringNotifications;	// 0x34724045
@end

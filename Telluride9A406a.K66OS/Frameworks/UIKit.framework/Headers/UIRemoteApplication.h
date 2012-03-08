/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface UIRemoteApplication : NSObject {
	NSString *_machServiceName;	// 4 = 0x4
	unsigned _port;	// 8 = 0x8
}
- (id)initWithBundleIdentifier:(id)bundleIdentifier;	// 0x3589eea5
- (id)initWithMachServiceName:(id)machServiceName;	// 0x3581e46d
- (void)backgroundContinuationEnabledDidChange:(BOOL)backgroundContinuationEnabled;	// 0x3589f40d
- (void)dealloc;	// 0x3589eee1
- (void)hideTopMostMiniAlert:(int)alert;	// 0x3589ef55
- (void)localNotificationDidSnooze:(id)localNotification;	// 0x3589f361
- (void)localNotificationMessageDelivered:(id)delivered;	// 0x3589f2b5
- (void)remoteNotificationMessageDelivered;	// 0x3589f25d
- (void)remoteNotificationRegistrationFailedWithErrorDomain:(id)errorDomain code:(int)code localizedDescription:(id)description;	// 0x3589f1d1
- (void)remoteNotificationRegistrationSucceededWithDeviceToken:(id)deviceToken;	// 0x3589f141
- (void)sheetWithRemoteViewIdentifierDidDismiss:(id)sheetWithRemoteViewIdentifier;	// 0x3589f0cd
- (void)showTopMostMiniAlert;	// 0x3589efb1
- (void)simpleRemoteActionDidOccur:(int)simpleRemoteAction;	// 0x3589f071
- (void)statusBarWillChangeOrientation:(int)statusBar duration:(float)duration;	// 0x3589f009
- (void)updatePort;	// 0x3581e4c1
- (void)wakeTimerFired;	// 0x3589f469
@end

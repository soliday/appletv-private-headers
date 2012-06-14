/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVDeviceActivationDelegate.h"
#import "BRBackgroundTask.h"

@class ATVDeviceActivationAction;

@interface ATVDeviceActivationTask : BRBackgroundTask <ATVDeviceActivationDelegate> {
@private
	BOOL _processingActivation;	// 44 = 0x2c
	ATVDeviceActivationAction *_action;	// 48 = 0x30
}
+ (void)scheduleOneShotActivationCheck;	// 0x367d1ce5
+ (void)scheduleRepeatingActivationCheck;	// 0x367d1c4d
- (void)activationFailedForAction:(id)action withReason:(int)reason error:(id)error;	// 0x367d1f45
- (void)activationSucceeded:(id)succeeded;	// 0x367d1e99
- (void)dealloc;	// 0x367d1e4d
- (BOOL)perform:(id)perform;	// 0x367d1d19
@end


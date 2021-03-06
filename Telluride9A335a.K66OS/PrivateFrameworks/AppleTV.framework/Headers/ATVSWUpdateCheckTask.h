/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRBackgroundTask.h"


__attribute__((visibility("hidden")))
@interface ATVSWUpdateCheckTask : BRBackgroundTask {
}
+ (BOOL)_shouldPerformCheck;	// 0x34118bad
+ (double)checkAgainDelay;	// 0x34118a69
+ (double)normalCheckInterval;	// 0x341188ad
+ (void)scheduleCheckAgainSoonTask;	// 0x341189ad
+ (void)scheduleNormalCheckTask;	// 0x341187fd
+ (void)setCheckAgainDelay:(double)delay;	// 0x34118ac9
+ (void)setNormalCheckInterval:(double)interval;	// 0x3411890d
- (BOOL)perform:(id)perform;	// 0x34118b69
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSingleton.h"

@class NSTimer;

@interface BRBackgroundTaskManager : BRSingleton {
@private
	int _numberOfCurrentBackgroundProcesses;	// 4 = 0x4
	double _lastUserActivity;	// 8 = 0x8
	NSTimer *_backgroundProcessSuppressionTimer;	// 16 = 0x10
	NSTimer *_heavyBackgroundProcessSuppresionTimer;	// 20 = 0x14
}
+ (BOOL)backgroundTasksRunning;	// 0x32a69d05
+ (void)finishedBackgroundProcessing;	// 0x32a69b85
+ (void)finishedFileCopy:(id)copy;	// 0x32a69cb9
+ (void)finishedMediaSyncing;	// 0x32a69c01
+ (void)holdOffBackgroundTasks;	// 0x32a69b0d
+ (BOOL)mediaSyncInProgress;	// 0x32a69c55
+ (BOOL)okToDoBackgroundProcessing;	// 0x32a69b35
+ (void)setSingleton:(id)singleton;	// 0x32a69d65
+ (id)singleton;	// 0x32a69d55
+ (void)startedFileCopy:(id)copy;	// 0x32a69c6d
+ (void)startingBackgroundProcessing;	// 0x32a69b5d
+ (void)startingMediaSyncing;	// 0x32a69bad
+ (double)timeSinceLastUserAction;	// 0x32a69d2d
- (id)init;	// 0x32a69d75
- (BOOL)_backgroundTasksRunning;	// 0x32a6a241
- (void)_finishedBackgroundProcessing;	// 0x32a6a22d
- (void)_holdOffBackgroundTasks;	// 0x32a69e85
- (void)_holdOffHeavyBackgroundTasks;	// 0x32a69f61
- (BOOL)_okToDoBackgroundProcessing;	// 0x32a6a0e1
- (void)_sendResumeBackgroundProcessingNotification;	// 0x32a6a141
- (void)_sendResumeHeavyBackgroundProcessingNotification;	// 0x32a6a1d1
- (void)_sendStopBackgroundProcessingNotification;	// 0x32a6a0f9
- (void)_sendStopHeavyBackgroundProcessingNotification;	// 0x32a6a189
- (void)_setOKToDoBackgroundProcessing:(id)doBackgroundProcessing;	// 0x32a6a031
- (void)_setOKToDoHeavyBackgroundProcessing:(id)doHeavyBackgroundProcessing;	// 0x32a6a06d
- (void)_startingBackgroundProcessing;	// 0x32a6a219
- (double)_timeSinceLastUserAction;	// 0x32a6a259
- (void)_updateActivity:(id)activity;	// 0x32a6a29d
- (void)dealloc;	// 0x32a69e29
@end


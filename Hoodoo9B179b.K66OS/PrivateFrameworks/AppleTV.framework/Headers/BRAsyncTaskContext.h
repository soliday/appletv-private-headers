/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSString;

@interface BRAsyncTaskContext : NSObject {
@private
	int _maxRunningTasks;	// 4 = 0x4
	int _numRunningTasks;	// 8 = 0x8
	NSMutableArray *_taskQueue;	// 12 = 0xc
	NSMutableArray *_allTasks;	// 16 = 0x10
	NSString *_name;	// 20 = 0x14
}
+ (id)defaultContext;	// 0x303568c5
+ (void)initialize;	// 0x3035661d
- (id)initWithMaxTasks:(int)maxTasks;	// 0x30356681
- (id)initWithMaxTasks:(int)maxTasks name:(id)name;	// 0x30356695
- (void)_addManagerObserverForTask:(id)task;	// 0x30356d19
- (void)_cancelAllTasks;	// 0x30357251
- (void)_removeManagerObserverForTask:(id)task;	// 0x30356d71
- (void)_scheduleNextTask:(id)task;	// 0x30356ef1
- (void)_taskComplete:(id)complete;	// 0x30356dbd
- (void)_threadDeath:(id)death;	// 0x303570f1
- (void)cancelTask:(id)task;	// 0x30356b75
- (void)cancelTaskWithIdentifier:(id)identifier;	// 0x303568d5
- (void)dealloc;	// 0x303567bd
- (id)description;	// 0x3035685d
- (void)scheduleTask:(id)task;	// 0x30356a0d
@end


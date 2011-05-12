/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <NSOperation.h> // Unknown library
#import "EventKit-Structs.h"

@class NSThread, NSLock, PCPersistentTimer, NSMutableSet, EKAlarmEngine;

__attribute__((visibility("hidden")))
@interface EKAlarmEngineOperation : NSOperation {
@private
	CalDatabase *_database;	// 12 = 0xc
	EKAlarmEngine *_engine;	// 16 = 0x10
	NSThread *_thread;	// 20 = 0x14
	NSLock *_lock;	// 24 = 0x18
	PCPersistentTimer *_timer;	// 28 = 0x1c
	NSMutableSet *_notifiedSet;	// 32 = 0x20
	double _nextFireDate;	// 36 = 0x24
	double _lastCheckpoint;	// 44 = 0x2c
}
- (id)initWithDatabase:(CalDatabase *)database engine:(id)engine;	// 0x334b0179
- (void)_handleChangeNotification;	// 0x334b0ead
- (void)_notifyAlarmsFired:(id)fired;	// 0x334b1391
- (void)_rescheduleOrFire;	// 0x334b100d
- (void)_rescheduleTimer;	// 0x334b18c5
- (void)_saveCheckpoint;	// 0x334b134d
- (void)_startCountdown;	// 0x334b084d
- (void)_stopRunLoop;	// 0x334b0e95
- (void)_timerFired:(id)fired;	// 0x334b110d
- (void)cancel;	// 0x334b00e9
- (void)dealloc;	// 0x334b0535
- (void)handleChangeNotification;	// 0x334b0079
- (void)main;	// 0x334b0d15
- (void)rescheduleOrFire;	// 0x334b0009
@end

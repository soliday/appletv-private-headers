/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

#import "PersistentConnection-Structs.h"
#import "PCLoggingDelegate.h"
#import <NSObject.h> // Unknown library

@class NSTimer, NSDate, NSString;

@interface PCPersistentTimer : NSObject <PCLoggingDelegate> {
	double _fireTime;	// 4 = 0x4
	double _startTime;	// 12 = 0xc
	double _lastUpdateTime;	// 20 = 0x14
	double _minimumEarlyFireProportion;	// 28 = 0x1c
	BOOL _triggerOnGMTChange;	// 36 = 0x24
	BOOL _disableSystemWaking;	// 37 = 0x25
	NSDate *_scheduledWakeDate;	// 40 = 0x28
	NSString *_serviceIdentifier;	// 44 = 0x2c
	id _target;	// 48 = 0x30
	SEL _selector;	// 52 = 0x34
	id _userInfo;	// 56 = 0x38
	NSTimer *_preventSleepRunLoopTimer;	// 60 = 0x3c
	NSTimer *_fireRunLoopTimer;	// 64 = 0x40
	unsigned _pmRootDomainConnect;	// 68 = 0x44
	unsigned _pmNotifier;	// 72 = 0x48
	IONotificationPortRef _pmNotificationPort;	// 76 = 0x4c
	CFRunLoopSourceRef _pmRunLoopSource;	// 80 = 0x50
	BOOL _sleepIsImminent;	// 84 = 0x54
	unsigned _powerAssertionID;	// 88 = 0x58
	id _timeChangeSource;	// 92 = 0x5c
}
@property(assign, nonatomic) BOOL disableSystemWaking;	// G=0x3313208d; S=0x33132169; @synthesize=_disableSystemWaking
@property(readonly, assign, nonatomic) NSString *loggingIdentifier;	// G=0x3313207d; @synthesize=_serviceIdentifier
@property(assign, nonatomic) double minimumEarlyFireProportion;	// G=0x3313209d; S=0x33132109; @synthesize=_minimumEarlyFireProportion
@property(readonly, retain) id userInfo;	// G=0x3313206d; converted property
+ (double)currentMachTimeInterval;	// 0x33132609
+ (id)lastSystemWakeDate;	// 0x33132659
- (id)initWithFireDate:(id)fireDate serviceIdentifier:(id)identifier target:(id)target selector:(SEL)selector userInfo:(id)info;	// 0x331320b5
- (id)initWithTimeInterval:(double)timeInterval serviceIdentifier:(id)identifier target:(id)target selector:(SEL)selector userInfo:(id)info;	// 0x33132421
- (id)_earlyFireDate;	// 0x33133315
- (void)_fireTimerFired;	// 0x331321ad
- (id)_initWithAbsoluteTime:(double)absoluteTime serviceIdentifier:(id)identifier target:(id)target selector:(SEL)selector userInfo:(id)info triggerOnGMTChange:(BOOL)change;	// 0x33132479
- (double)_nextForcedAlignmentAbsoluteTime;	// 0x3313281d
- (void)_powerChangedMessageType:(unsigned)type notificationID:(void *)anId;	// 0x3313289d
- (void)_preventSleepFired;	// 0x33132cf9
- (void)_setPowerMonitoringEnabledForRunLoop:(id)runLoop mode:(id)mode;	// 0x33132aa9
- (void)_setSignificantTimeChangeMonitoringEnabledForRunLoop:(id)runLoop mode:(id)mode;	// 0x33132309
- (void)_updateTimers;	// 0x33132e85
- (void)dealloc;	// 0x33133e2d
- (id)debugDescription;	// 0x33132705
// declared property getter: - (BOOL)disableSystemWaking;	// 0x3313208d
- (void)interfaceManagerInternetReachabilityChanged:(id)changed;	// 0x331322f9
- (void)interfaceManagerWWANInterfaceChangedPowerState:(id)state;	// 0x331322e9
- (void)interfaceManagerWWANInterfaceStatusChanged:(id)changed;	// 0x331322d9
- (void)invalidate;	// 0x33133775
- (BOOL)isValid;	// 0x33132055
// declared property getter: - (id)loggingIdentifier;	// 0x3313207d
// declared property getter: - (double)minimumEarlyFireProportion;	// 0x3313209d
- (void)scheduleInRunLoop:(id)runLoop;	// 0x33132189
- (void)scheduleInRunLoop:(id)runLoop inMode:(id)mode;	// 0x33133a39
// declared property setter: - (void)setDisableSystemWaking:(BOOL)waking;	// 0x33132169
// declared property setter: - (void)setMinimumEarlyFireProportion:(double)proportion;	// 0x33132109
// converted property getter: - (id)userInfo;	// 0x3313206d
@end


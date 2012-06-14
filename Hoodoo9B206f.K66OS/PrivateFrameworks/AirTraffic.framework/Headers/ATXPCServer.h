/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

#import "AirTraffic-Structs.h"
#import <NSObject.h> // Unknown library

@class NSSet, NSMutableDictionary, NSMutableSet;

@interface ATXPCServer : NSObject {
@private
	xpc_connection_s *_conn;	// 4 = 0x4
	NSMutableSet *_connections;	// 8 = 0x8
	NSMutableDictionary *_handlerMap;	// 12 = 0xc
	id _lockdownHandler;	// 16 = 0x10
	id _disconnectHandler;	// 20 = 0x14
	id _shutdownHandler;	// 24 = 0x18
	id _defaultMessageHandler;	// 28 = 0x1c
	dispatch_queue_s *_timerQueue;	// 32 = 0x20
	dispatch_source_s *_idleTimerSource;	// 36 = 0x24
	BOOL _timerHasFiredSinceLastMessage;	// 40 = 0x28
}
@property(readonly, assign, nonatomic) NSSet *connections;	// G=0x3485593d; @synthesize=_connections
@property(copy, nonatomic) id defaultMessageHandler;	// G=0x34855981; S=0x34855991; @synthesize=_defaultMessageHandler
@property(copy, nonatomic) id disconnectHandler;	// G=0x348559b5; S=0x348559c5; @synthesize=_disconnectHandler
@property(copy, nonatomic) id lockdownHandler;	// G=0x3485594d; S=0x3485595d; @synthesize=_lockdownHandler
@property(copy, nonatomic) id shutdownHandler;	// G=0x348559e9; S=0x348559f9; @synthesize=_shutdownHandler
- (id)initListenerWithServiceName:(id)serviceName;	// 0x34855225
- (id)_connections;	// 0x34854d41
- (BOOL)_doingWork;	// 0x3485569d
- (void)_handleNewConnection:(xpc_connection_s *)connection;	// 0x34854ddd
- (id)_handlerForMessageName:(id)messageName;	// 0x34854da1
- (dispatch_queue_s *)_highAvailabilityQueue;	// 0x34854d91
- (void)_rescheduleIdleTimerSourceWithInterval:(double)interval;	// 0x3485574d
- (void)_resetMessageFlag;	// 0x3485561d
- (void)_runShutdownHandler;	// 0x34855601
// declared property getter: - (id)connections;	// 0x3485593d
- (void)dealloc;	// 0x34855471
// declared property getter: - (id)defaultMessageHandler;	// 0x34855981
// declared property getter: - (id)disconnectHandler;	// 0x348559b5
// declared property getter: - (id)lockdownHandler;	// 0x3485594d
// declared property setter: - (void)setDefaultMessageHandler:(id)handler;	// 0x34855991
// declared property setter: - (void)setDisconnectHandler:(id)handler;	// 0x348559c5
- (void)setHandlerForMessageName:(id)messageName handler:(id)handler;	// 0x3485554d
- (void)setIdleTimerInterval:(double)interval;	// 0x348558a5
// declared property setter: - (void)setLockdownHandler:(id)handler;	// 0x3485595d
// declared property setter: - (void)setShutdownHandler:(id)handler;	// 0x348559f9
// declared property getter: - (id)shutdownHandler;	// 0x348559e9
@end


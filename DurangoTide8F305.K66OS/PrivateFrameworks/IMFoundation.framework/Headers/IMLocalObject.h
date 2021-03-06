/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

#import "IMFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, NSProtocolChecker, NSMachPort, NSRecursiveLock, NSMutableArray;

@interface IMLocalObject : NSObject {
	NSRecursiveLock *_lock;	// 4 = 0x4
	id _target;	// 8 = 0x8
	unsigned _port;	// 12 = 0xc
	dispatch_source_s *_source;	// 16 = 0x10
	dispatch_queue_s *_queue;	// 20 = 0x14
	dispatch_semaphore_s *_deathLock;	// 24 = 0x18
	NSString *_portName;	// 28 = 0x1c
	NSMutableArray *_incomingQueue;	// 32 = 0x20
	NSProtocolChecker *_protocolChecker;	// 36 = 0x24
	int _pid;	// 40 = 0x28
	BOOL _busyForwarding;	// 44 = 0x2c
}
@property(readonly, assign, nonatomic) BOOL isValid;	// G=0x31ae8579; 
@property(assign, nonatomic) int pid;	// G=0x31ae7505; S=0x31ae7515; @synthesize=_pid
@property(readonly, assign, nonatomic) NSMachPort *port;	// G=0x31ae7929; 
@property(readonly, assign, nonatomic) NSString *portName;	// G=0x31ae74f5; @synthesize=_portName
@property(assign, nonatomic) id target;	// G=0x31ae7525; S=0x31ae7535; @synthesize=_target
+ (void)_registerIMLocalObject:(id)object;	// 0x31ae7a95
+ (id)_registeredIMLocalObjectForPort:(unsigned)port;	// 0x31ae8a61
+ (void)_unregisterIMLocalObject:(id)object;	// 0x31ae7a49
+ (void)initialize;	// 0x31ae7959
- (id)initWithTarget:(id)target portName:(id)name protocol:(id)protocol;	// 0x31ae8251
- (void)_cancelHandlerCompleted;	// 0x31ae87e5
- (void)_clearPort:(BOOL)port;	// 0x31ae867d
- (void)_dequeueInvocationIfNecessary;	// 0x31ae98f5
- (void)_enqueueInvocation:(id)invocation;	// 0x31ae78f1
- (void)_handleComponents:(id)components;	// 0x31ae9739
- (BOOL)_handleInvocation:(id)invocation;	// 0x31ae99dd
- (unsigned)_port;	// 0x31ae74e5
- (void)_portDidBecomeInvalid;	// 0x31ae7ebd
- (void)_systemShutdown:(id)shutdown;	// 0x31ae7ddd
- (void)dealloc;	// 0x31ae9c01
- (id)description;	// 0x31ae89f5
- (void)handleHeaderData:(unsigned long long *)data headerLength:(unsigned)length data:(char *)data3 dataLength:(unsigned)length4 fromPid:(int)pid;	// 0x31ae96d9
- (void)handleInvocation:(id)invocation;	// 0x31ae7895
- (void)invalidate;	// 0x31ae7cad
// declared property getter: - (BOOL)isValid;	// 0x31ae8579
- (BOOL)isValidSelector:(SEL)selector;	// 0x31ae7855
// declared property getter: - (int)pid;	// 0x31ae7505
// declared property getter: - (id)port;	// 0x31ae7929
// declared property getter: - (id)portName;	// 0x31ae74f5
// declared property setter: - (void)setPid:(int)pid;	// 0x31ae7515
// declared property setter: - (void)setTarget:(id)target;	// 0x31ae7535
// declared property getter: - (id)target;	// 0x31ae7525
- (void)terminated;	// 0x31ae7e4d
@end


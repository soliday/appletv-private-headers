/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSProtocolChecker, Protocol;

@interface IMInvocationQueue : NSObject {
	id _delegate;	// 4 = 0x4
	id _target;	// 8 = 0x8
	double _dequeueRate;	// 12 = 0xc
	NSMutableArray *_queue;	// 20 = 0x14
	NSMutableArray *_options;	// 24 = 0x18
	NSProtocolChecker *_protocolChecker;	// 28 = 0x1c
	BOOL _holdQueue;	// 32 = 0x20
}
@property(readonly, assign, nonatomic) unsigned count;	// G=0x34a7cc4d; 
@property(assign) id delegate;	// G=0x34a7cce1; S=0x34a7ccf5; @synthesize=_delegate
@property(assign, nonatomic) double dequeueRate;	// G=0x34a7cd39; S=0x34a7bc15; @synthesize=_dequeueRate
@property(readonly, assign, nonatomic) BOOL holdQueue;	// G=0x34a7cd81; @synthesize=_holdQueue
@property(readonly, assign, nonatomic) BOOL isEmpty;	// G=0x34a7cc6d; 
@property(readonly, assign, nonatomic) NSMutableArray *options;	// G=0x34a7cd61; @synthesize=_options
@property(retain, nonatomic) Protocol *protocol;	// G=0x34a7bbf5; S=0x34a7bb91; 
@property(readonly, assign, nonatomic) NSProtocolChecker *protocolChecker;	// G=0x34a7cd71; @synthesize=_protocolChecker
@property(readonly, assign, nonatomic) NSMutableArray *queue;	// G=0x34a7cd51; @synthesize=_queue
@property(assign) id target;	// G=0x34a7cd0d; S=0x34a7cd21; @synthesize=_target
- (id)init;	// 0x34a7b96d
- (BOOL)_acceptsOptions:(unsigned)options;	// 0x34a7c2ed
- (void)_checkQueue;	// 0x34a7bee5
- (id)_dequeueInvocation;	// 0x34a7c8d1
- (int)_enqueueInvocation:(id)invocation options:(unsigned)options;	// 0x34a7c715
- (void)_holdQueueNotification:(id)notification;	// 0x34a7bc85
- (BOOL)_insertInvocation:(id)invocation options:(unsigned)options;	// 0x34a7c511
- (BOOL)_invokeInvocation:(id)invocation;	// 0x34a7be0d
- (int)_maxQueueLimitSize;	// 0x34a7c28d
- (int)_numberOfLimitedMessagesInQueue;	// 0x34a7c155
- (unsigned)_optionsForInvocation:(id)invocation;	// 0x34a7c0ed
- (void)_releaseQueueNotification:(id)notification;	// 0x34a7bcfd
- (BOOL)_replaceSimilarInvocation:(id)invocation;	// 0x34a7c35d
- (void)_setQueueTimer;	// 0x34a7bd59
- (void)_stepQueueNotification:(id)notification;	// 0x34a7bc39
// declared property getter: - (unsigned)count;	// 0x34a7cc4d
- (void)dealloc;	// 0x34a7ba0d
// declared property getter: - (id)delegate;	// 0x34a7cce1
// declared property getter: - (double)dequeueRate;	// 0x34a7cd39
- (void)forwardInvocation:(id)invocation;	// 0x34a7ba85
// declared property getter: - (BOOL)holdQueue;	// 0x34a7cd81
- (void)invokeAll;	// 0x34a7cbe5
// declared property getter: - (BOOL)isEmpty;	// 0x34a7cc6d
- (id)methodSignatureForSelector:(SEL)selector;	// 0x34a7bb45
// declared property getter: - (id)options;	// 0x34a7cd61
- (id)peek;	// 0x34a7cc9d
// declared property getter: - (id)protocol;	// 0x34a7bbf5
// declared property getter: - (id)protocolChecker;	// 0x34a7cd71
// declared property getter: - (id)queue;	// 0x34a7cd51
- (void)removeAllInvocations;	// 0x34a7ca79
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x34a7ccf5
// declared property setter: - (void)setDequeueRate:(double)rate;	// 0x34a7bc15
// declared property setter: - (void)setProtocol:(id)protocol;	// 0x34a7bb91
// declared property setter: - (void)setTarget:(id)target;	// 0x34a7cd21
// declared property getter: - (id)target;	// 0x34a7cd0d
@end


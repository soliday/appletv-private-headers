/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <NSObject.h> // Unknown library
#import "ManagedConfiguration-Structs.h"

@protocol MCJobQueueObserver;

@interface MCJobQueue : NSObject {
	dispatch_queue_s *_executionQueue;	// 4 = 0x4
	dispatch_queue_s *_jobQueue;	// 8 = 0x8
	dispatch_group_s *_jobGroup;	// 12 = 0xc
	id _abortCompletionBlock;	// 16 = 0x10
	id<MCJobQueueObserver> _observer;	// 20 = 0x14
}
@property(assign, nonatomic) dispatch_queue_s *executionQueue;	// G=0x31914f65; S=0x31914f75; @synthesize=_executionQueue
@property(assign, nonatomic) id<MCJobQueueObserver> observer;	// G=0x31914f45; S=0x31914f55; @synthesize=_observer
- (id)init;	// 0x31914f85
- (void)abortEnqueuedJobsCompletionBlock:(id)block;	// 0x31915005
- (void)dealloc;	// 0x319151e5
- (void)enqueueJob:(id)job;	// 0x31915161
// declared property getter: - (dispatch_queue_s *)executionQueue;	// 0x31914f65
- (BOOL)hasJobsEnqueued;	// 0x31915139
- (void)jobDidFinish;	// 0x319150fd
// declared property getter: - (id)observer;	// 0x31914f45
// declared property setter: - (void)setExecutionQueue:(dispatch_queue_s *)queue;	// 0x31914f75
// declared property setter: - (void)setObserver:(id)observer;	// 0x31914f55
- (void)waitForEnqueuedJobsToCompleteCompletionBlock:(id)completeCompletionBlock;	// 0x319150a1
@end


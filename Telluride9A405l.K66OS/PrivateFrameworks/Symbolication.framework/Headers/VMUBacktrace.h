/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library
#import "Symbolication-Structs.h"
#import "NSCopying.h"


@interface VMUBacktrace : NSObject <NSCopying> {
	int _flavor;	// 4 = 0x4
	struct {
		struct {
			double t_begin;
			double t_end;
			int pid;
			unsigned thread;
			int run_state;
			unsigned long long dispatch_queue_serial_num;
		} context;
		unsigned long long *frames;
		char *frame_types;
		unsigned length;
	} _callstack;	// 8 = 0x8
}
@property(assign) int threadState;	// G=0x34f75a59; S=0x34f75a45; converted property
- (id)initWithSamplingContext:(sampling_context_t *)samplingContext thread:(unsigned)thread;	// 0x34f75b49
- (id)initWithTask:(unsigned)task thread:(unsigned)thread is64Bit:(BOOL)bit;	// 0x34f762dd
- (id)initWithTask:(unsigned)task thread:(unsigned)thread is64Bit:(BOOL)bit taskMemoryCache:(id)cache;	// 0x34f760c9
- (CSTypeRef)_symbolicator;	// 0x34f75a81
- (unsigned long long *)backtrace;	// 0x34f75a09
- (unsigned)backtraceLength;	// 0x34f75a1d
- (id)copyWithZone:(NSZone *)zone;	// 0x34f75fcd
- (void)dealloc;	// 0x34f75f71
- (id)description;	// 0x34f75ce9
- (unsigned long long)dispatchQueueSerialNumber;	// 0x34f75a6d
- (void)fixupStackWithSamplingContext:(sampling_context_t *)samplingContext symbolicator:(CSTypeRef)symbolicator;	// 0x34f75c49
- (void)fixupStackWithTask:(unsigned)task symbolicator:(CSTypeRef)symbolicator taskMemoryCache:(id)cache;	// 0x34f75c9d
- (BOOL)hasSameCallstack:(id)callstack;	// 0x34f75921
- (void)removeTopmostFrame;	// 0x34f75c15
- (void)setEndTime:(double)time;	// 0x34f759d1
- (void)setLengthTime:(double)time;	// 0x34f759e9
- (void)setStartTime:(double)time;	// 0x34f759bd
// converted property setter: - (void)setThreadState:(int)state;	// 0x34f75a45
- (unsigned)thread;	// 0x34f75a31
// converted property getter: - (int)threadState;	// 0x34f75a59
- (unsigned long long)topmostFrame;	// 0x34f759a5
@end

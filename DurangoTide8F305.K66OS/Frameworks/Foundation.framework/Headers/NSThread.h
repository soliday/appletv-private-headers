/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library


@interface NSThread : NSObject {
@private
	id _private;	// 4 = 0x4
	unsigned char _bytes[44];	// 8 = 0x8
}
@property(retain) id name;	// G=0x327c3a75; S=0x3276bf3d; converted property
@property(assign) unsigned stackSize;	// G=0x327c3f35; S=0x327c3f05; converted property
@property(assign) double threadPriority;	// G=0x327c3f61; S=0x327c4019; converted property
+ (id)callStackReturnAddresses;	// 0x32774c75
+ (id)callStackSymbols;	// 0x327c50d1
+ (id)currentThread;	// 0x32741c35
+ (void)detachNewThreadSelector:(SEL)selector toTarget:(id)target withObject:(id)object;	// 0x32752099
+ (void)exit;	// 0x32746065
+ (BOOL)isDying;	// 0x327c3bdd
+ (BOOL)isMainThread;	// 0x3274323d
+ (BOOL)isMultiThreaded;	// 0x327c3a45
+ (id)mainThread;	// 0x32741325
+ (BOOL)setThreadPriority:(double)priority;	// 0x3275b845
+ (void)sleepForTimeInterval:(double)timeInterval;	// 0x327c4fc9
+ (void)sleepUntilDate:(id)date;	// 0x327c5045
+ (double)threadPriority;	// 0x327c4199
- (id)init;	// 0x3274e7f1
- (id)initWithTarget:(id)target selector:(SEL)selector object:(id)object;	// 0x327520f5
- (void)_nq:(id)nq;	// 0x32741931
- (void)cancel;	// 0x327c3b9d
- (void)dealloc;	// 0x32746075
- (id)description;	// 0x327c4129
- (BOOL)isCancelled;	// 0x327c3ad9
- (BOOL)isDying;	// 0x327c3a55
- (BOOL)isExecuting;	// 0x327c3a91
- (BOOL)isFinished;	// 0x327c3ab5
- (BOOL)isMainThread;	// 0x327688b5
- (void)main;	// 0x3275235d
// converted property getter: - (id)name;	// 0x327c3a75
- (id)runLoop;	// 0x327c3ebd
// converted property setter: - (void)setName:(id)name;	// 0x3276bf3d
// converted property setter: - (void)setStackSize:(unsigned)size;	// 0x327c3f05
// converted property setter: - (void)setThreadPriority:(double)priority;	// 0x327c4019
// converted property getter: - (unsigned)stackSize;	// 0x327c3f35
- (void)start;	// 0x327521ed
- (id)threadDictionary;	// 0x32744729
// converted property getter: - (double)threadPriority;	// 0x327c3f61
@end


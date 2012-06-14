/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface _PFTask : NSObject {
@private
	int _cd_rc;	// 4 = 0x4
	void *_task;	// 8 = 0x8
	void *arguments;	// 12 = 0xc
	opaque_pthread_mutex_t lock;	// 16 = 0x10
	opaque_pthread_cond_t condition;	// 60 = 0x3c
	int isFinishedFlag;	// 88 = 0x58
}
+ (int)getNumActiveProcessors;	// 0x32284d7d
+ (unsigned long long)getPhysicalMemory;	// 0x3228453d
+ (double)getProcessorSpeed;	// 0x3229ad69
- (id)initWithFunction:(/*function-pointer*/ void *)function withArgument:(void *)argument andPriority:(int)priority;	// 0x3229a24d
- (BOOL)_isDeallocating;	// 0x3229a1c5
- (BOOL)_tryRetain;	// 0x3229a1c1
- (void)dealloc;	// 0x3229aced
- (void)finalize;	// 0x3229ae55
- (void)release;	// 0x3229adf1
- (id)retain;	// 0x3229ae35
- (unsigned)retainCount;	// 0x3229a1ad
@end


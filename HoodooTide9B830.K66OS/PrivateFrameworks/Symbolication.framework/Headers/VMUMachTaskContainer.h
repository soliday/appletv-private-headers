/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library


@interface VMUMachTaskContainer : NSObject {
	int _pid;	// 4 = 0x4
	unsigned _task;	// 8 = 0x8
}
@property(readonly, assign) int pid;	// G=0x31bc2de9; converted property
@property(readonly, assign) unsigned task;	// G=0x31bc2dd9; converted property
+ (id)machTaskContainer;	// 0x31bc2f79
+ (id)machTaskContainerWithPid:(int)pid;	// 0x31bc2ea9
+ (id)machTaskContainerWithPid:(int)pid task:(unsigned)task;	// 0x31bc2e69
+ (id)machTaskContainerWithTask:(unsigned)task;	// 0x31bc2f25
- (id)initWithPid:(int)pid task:(unsigned)task;	// 0x31bc2df9
- (void)dealloc;	// 0x31bc3011
- (id)description;	// 0x31bc3069
- (void)finalize;	// 0x31bc2fb9
// converted property getter: - (int)pid;	// 0x31bc2de9
// converted property getter: - (unsigned)task;	// 0x31bc2dd9
@end


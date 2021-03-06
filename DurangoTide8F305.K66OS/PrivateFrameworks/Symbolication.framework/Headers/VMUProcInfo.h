/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library
#import "Symbolication-Structs.h"
#import "SafeVMUProcInfoProtocol.h"

@class NSString, NSArray;

@interface VMUProcInfo : NSObject <SafeVMUProcInfoProtocol> {
	unsigned _task;	// 4 = 0x4
	BOOL _needTaskPortDealloc;	// 8 = 0x8
	NSString *_name;	// 12 = 0xc
	int _cpuType;	// 16 = 0x10
	NSArray *_arguments;	// 20 = 0x14
	NSArray *_envVars;	// 24 = 0x18
	NSString *_procTableName;	// 28 = 0x1c
	NSString *_realAppName;	// 32 = 0x20
	NSString *_requestedAppName;	// 36 = 0x24
	NSString *_firstArg;	// 40 = 0x28
	int _pid;	// 44 = 0x2c
	int _ppid;	// 48 = 0x30
	timeval _startTime;	// 52 = 0x34
}
@property(readonly, retain) NSArray *arguments;	// G=0x311a04d5; converted property
@property(readonly, assign) int cpuType;	// G=0x311a0f9d; converted property
@property(readonly, retain) NSArray *envVars;	// G=0x311a0491; converted property
@property(readonly, retain) NSString *name;	// G=0x311a03d9; converted property
@property(readonly, assign) int pid;	// G=0x311a001d; converted property
@property(readonly, assign) int ppid;	// G=0x311a002d; converted property
@property(readonly, retain) NSString *procTableName;	// G=0x311a0895; converted property
@property(readonly, retain) NSString *realAppName;	// G=0x311a05ed; converted property
@property(readonly, retain) NSString *requestedAppName;	// G=0x311a056d; converted property
@property(readonly, assign) timeval startTime;	// G=0x311a0999; converted property
@property(readonly, assign) unsigned task;	// G=0x311a0ef9; converted property
+ (id)getProcessIds;	// 0x311a0a95
+ (BOOL)isProcessRunning:(int)running;	// 0x311a0855
+ (int)processParentId:(int)anId;	// 0x311a0811
- (id)init;	// 0x311a006d
- (id)initWithPid:(int)pid;	// 0x311a066d
- (id)initWithTask:(unsigned)task;	// 0x311a0691
- (id)_infoFromCommandLine:(int)commandLine;	// 0x311a0b75
// converted property getter: - (id)arguments;	// 0x311a04d5
- (int)compare:(id)compare;	// 0x311a0175
- (int)compareByName:(id)name;	// 0x311a0135
- (int)compareByUserAppName:(id)name;	// 0x311a00f5
// converted property getter: - (int)cpuType;	// 0x311a0f9d
- (void)dealloc;	// 0x311a0731
- (id)description;	// 0x311a0389
// converted property getter: - (id)envVars;	// 0x311a0491
- (void)finalize;	// 0x311a06d9
- (id)firstArgument;	// 0x311a0519
- (unsigned)hash;	// 0x311a0041
- (BOOL)isApp;	// 0x311a003d
- (BOOL)isCFM;	// 0x311a0e09
- (BOOL)isEqual:(id)equal;	// 0x311a01c9
- (BOOL)isMachO;	// 0x311a0259
- (BOOL)isNative;	// 0x311a0f79
- (BOOL)isRunning;	// 0x311a0229
// converted property getter: - (id)name;	// 0x311a03d9
// converted property getter: - (int)pid;	// 0x311a001d
// converted property getter: - (int)ppid;	// 0x311a002d
// converted property getter: - (id)procTableName;	// 0x311a0895
// converted property getter: - (id)realAppName;	// 0x311a05ed
// converted property getter: - (id)requestedAppName;	// 0x311a056d
- (BOOL)signal:(int)signal;	// 0x311a0ea1
// converted property getter: - (timeval)startTime;	// 0x311a0999
// converted property getter: - (unsigned)task;	// 0x311a0ef9
- (BOOL)terminate;	// 0x311a0ec1
- (void)update;	// 0x311a0279
- (id)userAppName;	// 0x311a0e4d
@end


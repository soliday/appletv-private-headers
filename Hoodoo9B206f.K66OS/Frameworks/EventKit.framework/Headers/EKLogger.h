/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EventKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, NSDate, NSFileHandle;

__attribute__((visibility("hidden")))
@interface EKLogger : NSObject {
@private
	NSString *_logPath;	// 4 = 0x4
	NSString *_logName;	// 8 = 0x8
	NSString *_logDefaultName;	// 12 = 0xc
	NSString *_outputDefaultName;	// 16 = 0x10
	int _logLevel;	// 20 = 0x14
	int _outputLevel;	// 24 = 0x18
	BOOL _haveCheckedLogLevel;	// 28 = 0x1c
	BOOL _haveCheckedOutputLevel;	// 29 = 0x1d
	int _maxLogFiles;	// 32 = 0x20
	dispatch_queue_s *_logQueue;	// 36 = 0x24
	dispatch_source_s *_fdWatcher;	// 40 = 0x28
	NSFileHandle *_logFH;	// 44 = 0x2c
	NSDate *_lastStatDate;	// 48 = 0x30
}
@property(retain, nonatomic) NSFileHandle *fh;	// G=0x31f3a6a9; S=0x31f3a6b9; @synthesize=_logFH
@property(retain, nonatomic) NSDate *lastStatDate;	// G=0x31f3a6dd; S=0x31f3a6ed; @synthesize=_lastStatDate
@property(assign, nonatomic) int logLevel;	// G=0x31ee1715; S=0x31f39fd1; 
@property(assign, nonatomic) int maxLogFiles;	// G=0x31f39ff9; S=0x31f3a009; 
@property(assign, nonatomic) int outputLevel;	// G=0x31ee17b5; S=0x31f39fe5; 
- (id)initWithPrefix:(id)prefix logPath:(id)path logName:(id)name;	// 0x31f39db9
- (void)_closeLogFile;	// 0x31f3a385
- (id)_logFilePathWithNumber:(int)number;	// 0x31f3a021
- (void)_openLogFile;	// 0x31f3a099
- (void)_rollLogs;	// 0x31f3a3d9
- (void)_statFileIfNecessaryForRollingCheck;	// 0x31f3a4c5
- (void)dealloc;	// 0x31f39f21
// declared property getter: - (id)fh;	// 0x31f3a6a9
// declared property getter: - (id)lastStatDate;	// 0x31f3a6dd
// declared property getter: - (int)logLevel;	// 0x31ee1715
- (void)logWithFileName:(const char *)fileName functionName:(const char *)name lineNumber:(int)number level:(int)level format:(id)format arguments:(void *)arguments;	// 0x31ee1439
// declared property getter: - (int)maxLogFiles;	// 0x31f39ff9
// declared property getter: - (int)outputLevel;	// 0x31ee17b5
// declared property setter: - (void)setFh:(id)fh;	// 0x31f3a6b9
// declared property setter: - (void)setLastStatDate:(id)date;	// 0x31f3a6ed
// declared property setter: - (void)setLogLevel:(int)level;	// 0x31f39fd1
// declared property setter: - (void)setMaxLogFiles:(int)files;	// 0x31f3a009
// declared property setter: - (void)setOutputLevel:(int)level;	// 0x31f39fe5
@end


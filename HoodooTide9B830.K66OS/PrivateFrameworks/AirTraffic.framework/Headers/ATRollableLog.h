/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

#import "AirTraffic-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, NSFileHandle, NSDate;

@interface ATRollableLog : NSObject {
	NSDate *_lastStatDate;	// 4 = 0x4
	NSString *_directory;	// 8 = 0x8
	NSString *_baseFilename;	// 12 = 0xc
	NSString *_generationalFilenameFormat;	// 16 = 0x10
	NSFileHandle *_fh;	// 20 = 0x14
	dispatch_source_s *_fdWatcher;	// 24 = 0x18
	dispatch_queue_s *_logQueue;	// 28 = 0x1c
	dispatch_queue_s *_logRequestQueue;	// 32 = 0x20
}
@property(retain) NSFileHandle *fh;	// G=0x36098c19; S=0x36098c2d; @synthesize=_fh
@property(retain) NSDate *lastStatDate;	// G=0x36098c51; S=0x36098c65; @synthesize=_lastStatDate
+ (id)_filenameWithBase:(id)base generationalFormat:(id)format generation:(int)generation;	// 0x36097829
+ (id)_generationalFormatFromBase:(id)base;	// 0x36097745
+ (id)allLogFilesForFilename:(id)filename;	// 0x36097919
+ (void)enableLogRolling;	// 0x36097741
+ (id)loggerWithFilename:(id)filename;	// 0x36098891
- (id)initWithFilename:(id)filename;	// 0x360980bd
- (id)_filenameWithGenerationNumber:(int)generationNumber;	// 0x3609785d
- (id)_fullCompressedFilePathWithGenerationNumber:(int)generationNumber;	// 0x360978e5
- (id)_fullFilePathWithGenerationNumber:(int)generationNumber;	// 0x360978ad
- (void)_loadUpHandle;	// 0x360979f5
- (void)_rollLogs;	// 0x36097cf1
- (void)_statFileIfNecessaryForRollingCheck;	// 0x36097f61
- (id)compressFile:(id)file;	// 0x36098979
// declared property getter: - (id)fh;	// 0x36098c19
// declared property getter: - (id)lastStatDate;	// 0x36098c51
- (void)logData:(id)data;	// 0x360981e9
- (void)logString:(id)string;	// 0x36098411
// declared property setter: - (void)setFh:(id)fh;	// 0x36098c2d
// declared property setter: - (void)setLastStatDate:(id)date;	// 0x36098c65
- (void)slurpDataFromFile:(id)file;	// 0x36098445
@end
